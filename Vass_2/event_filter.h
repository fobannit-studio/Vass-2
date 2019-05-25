#ifndef EVENT_FILTER_H
#define EVENT_FILTER_H
#include <QObject>
#ifdef linux
#include <QAbstractNativeEventFilter>
#include <QVector>
#include <QX11Info>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <xcb/xcb.h>
#endif

enum class Apps{Player,Config,Icons,Clock};

class event_filter : public QObject, public QAbstractNativeEventFilter
{
    Q_OBJECT

public:
    explicit event_filter(KeySym icons , KeySym config , KeySym media , KeySym clock , QObject *parent = nullptr ,  unsigned int i_m = ControlMask,unsigned int conf_m = ControlMask,unsigned int p_m = ControlMask,unsigned int t_m = ControlMask);

    bool nativeEventFilter(const QByteArray &eventType , void *message ,long *result);
//    void setShortcut(KeySym);
    void setShortcut(Apps);
    void unsetShortcut(int);
    void upadteHotKeys(KeyCode,Apps,unsigned int modifier = ControlMask);

signals:
    void icon_called();
    void config_called();
    void player_called();
    void clock_called();



private:
//    shortcut_v * shortcuts;
    int _icon_keycode;
    unsigned int _icon_modifier;
    int _config_keycode;
    unsigned int _config_modifier;
    int _media_keycode;
    unsigned int _media_modifier;
    int _clock_keycode;
    unsigned int _clock_modifier;
};


//#endif
#endif // EVENT_FILTER_H
