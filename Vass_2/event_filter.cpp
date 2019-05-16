#ifdef linux
#include "event_filter.h"

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

event_filter::event_filter(KeySym icons , KeySym config , KeySym media , KeySym clock , QObject *parent):QObject (parent)
{
    m_display = QX11Info::display();
    m_win = DefaultRootWindow(m_display);
    _icon_keycode = XKeysymToKeycode(m_display,icons);
    _config_keycode=XKeysymToKeycode(m_display,config);
    _media_keycode = XKeysymToKeycode(m_display,media);
    _clock_keycode = XKeysymToKeycode(m_display,clock);

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
                if((keyEvent->state==(modifier | maskMods)) && keyEvent ->detail == _icon_keycode)
                {
                    emit icon_called();
                    return true;
                }
                else if((keyEvent->state==(modifier | maskMods)) && keyEvent ->detail == _config_keycode)
                {
                    emit config_called();
                    return true;
                }
                else if((keyEvent->state==(modifier | maskMods)) && keyEvent ->detail == _media_keycode)
                {
                    emit player_called();
                    return true;
                }
                else if((keyEvent->state==(modifier | maskMods)) && keyEvent ->detail == _clock_keycode)
                {
                    emit clock_called();
                    return true;
                }
            }
        }
    }
    return false;
}


void event_filter::setShortcut( Apps application)
{
    int key_code;
    switch (application) {
    case Apps::Icons:
        key_code = _icon_keycode;
        break;
    case Apps::Config:
        key_code = _config_keycode;
        break;
    case Apps::Player:
        key_code = _media_keycode;
        break;
    case Apps::Clock:
        key_code = _clock_keycode;
        break;
    default:
        return;
    }
    unsetShortcut(key_code);
    //modify here
//    keycode = XKeysymToKeycode(m_display,key);

    modifier = ControlMask;
    //
    foreach(quint32 maskMods , maskModifiers())
    {
        XGrabKey(m_display,         // указываем соединение с X11
                 key_code ,          // код клавиши
                 modifier | maskMods,   // модификатор со всеми возможными масками
                 m_win,             // Захватываемое окно
                 True,              // Является ли приложение владельцем события. в данном примере не принципиально.
                 GrabModeAsync,     // Ассинхронный режим обработки
                 GrabModeAsync);
    }
}

void event_filter::unsetShortcut(int key){
    foreach(quint32 maskMods,maskModifiers())
    {
        XUngrabKey(m_display,
                   key,
                   modifier | maskMods,
                   m_win);
    }
}

#endif
