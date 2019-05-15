#ifndef EVENT_FILTER_H
#define EVENT_FILTER_H
#ifdef linux
#include <QObject>
#include <QAbstractNativeEventFilter>
#include <QVector>
#include <QX11Info>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <xcb/xcb.h>
enum class Apps{Player,Config,Icons,Clock};

class event_filter: public QObject , public QAbstractNativeEventFilter
{
    Q_OBJECT
public:
    explicit event_filter(KeySym icons , KeySym config , KeySym param , KeySym clock , QObject *parent = nullptr);

    bool nativeEventFilter(const QByteArray &eventType , void *message ,long *result);
//    void setShortcut(KeySym);
    void setShortcut(Apps);
    void unsetShortcut(int);

signals:
    void icon_called();
    void config_called();
    void player_called();
    void clock_called();
private:
    int _icon_keycode;
    int _config_keycode;
    int _media_keycode;
    int _clock_keycode;
};
#endif
#endif // EVENT_FILTER_H
