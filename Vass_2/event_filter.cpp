#include "event_filter.h"
#include <QVector>
#include <QX11Info>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <xcb/xcb.h>
namespace
{
    Display * m_display;
    Window m_win;
    int keycode;
    unsigned int modifier;

    QVector<quint32> maskModifiers(){
        return QVector<quint32>() << 0 << Mod2Mask << LockMask << (Mod2Mask | LockMask);
    }
}

event_filter::event_filter(QObject *parent):QObject (parent)
{
    m_display = QX11Info::display();
    m_win = DefaultRootWindow(m_display);
}

bool event_filter::nativeEventFilter(const QByteArray &eventType, void *message, long *result)
{
    Q_UNUSED(eventType);
    Q_UNUSED(result);

    xcb_key_press_event_t *keyEvent = nullptr;
    if(eventType == "xcb_generic_event_t")
    {
        xcb_generic_event_t *event = static_cast<xcb_generic_event_t *>(message);
        if((event -> response_type & 127) == XCB_KEY_PRESS)
        {
            keyEvent = static_cast<xcb_key_press_event_t *>(message);
            foreach(quint32 maskMods , maskModifiers())
            {
                if((keyEvent->state==(modifier | maskMods)) && keyEvent ->detail == keycode)
                {
                    emit activated();
                    return true;
                }
            }
        }
    }
    return false;
}


void event_filter::setShortcut()
{
    unsetShortcut();
    //modify here
    keycode = XKeysymToKeycode(m_display,XK_M);
    modifier = ControlMask;
    //
    foreach(quint32 maskMods , maskModifiers())
    {
        XGrabKey(m_display,         // указываем соединение с X11
                 keycode ,          // код клавиши
                 modifier | maskMods,   // модификатор со всеми возможными масками
                 m_win,             // Захватываемое окно
                 True,              // Является ли приложение владельцем события. в данном примере не принципиально.
                 GrabModeAsync,     // Ассинхронный режим обработки
                 GrabModeAsync);
    }
}

void event_filter::unsetShortcut(){
    foreach(quint32 maskMods,maskModifiers())
    {
        XUngrabKey(m_display,
                   keycode,
                   modifier | maskMods,
                   m_win);
    }
}
