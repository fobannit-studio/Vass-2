#ifndef TIMEWIDGET_H
#define TIMEWIDGET_H

#include <QLabel>
#include <QMouseEvent>
#include <QPoint>
#include <QTimer>
#include <QTime>
class TimeWidget : public QLabel
{
    Q_OBJECT
public:
    explicit TimeWidget(QWidget *parent = nullptr);

protected:
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);

    void mouseReleaseEvent(QMouseEvent* event);
    void startTimer();
    void EndTimer();
    void startStopwatch();
    void endStopwatch();
    void Update_Time();
    QPoint mousePosition;
    QTimer* timer;
    QTime buffer;
    short int mode=0;  // 0 обычные часы 1 секундомер 2 таймер
    short int update_interval=300;

private:
    bool isMouseDown=true;

};

#endif // TIMEWIDGET_H
