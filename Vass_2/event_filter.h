#ifndef EVENT_FILTER_H
#define EVENT_FILTER_H
#ifdef linux
#include <QObject>
#include <QAbstractNativeEventFilter>

class event_filter: public QObject , public QAbstractNativeEventFilter
{
    Q_OBJECT
public:
    explicit event_filter(QObject *parent = nullptr);

    bool nativeEventFilter(const QByteArray &eventType , void *message ,long *result);
    void setShortcut();
    void unsetShortcut();

signals:
    void activated();
};
#endif
#endif // EVENT_FILTER_H
