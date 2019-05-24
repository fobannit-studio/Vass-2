#ifndef CLOCK_H
#define CLOCK_H

#include <QDialog>
#include <QLabel>
#include <QMouseEvent>
#include <QPoint>
#include <QTimer>
#include <QTime>

namespace Ui {
class clock;
}

class Clock_W : public QDialog
{
    Q_OBJECT
public:
    int _cx;
    int _cy;
public:
    explicit Clock_W(QWidget *parent = nullptr);
    ~Clock_W();

protected:
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);



    QPoint mousePosition;

private:

    bool isMouseDown=true;
    Ui::clock *ui;
};

#endif // CLOCK_H
