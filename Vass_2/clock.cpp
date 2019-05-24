#include "clock.h"
#include "ui_clock.h"
#include <QTime>
#include <iostream>
#include <QPalette>
#include <QColorDialog>

Clock_W::Clock_W(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clock)
{

    _cx = -1;
    _cy = -1;
    QPalette qpal= this->palette();
    ui->setupUi(this);
}
Clock_W::~Clock_W()
{

    delete ui;

//    delete this;
}

void Clock_W::mouseMoveEvent(QMouseEvent *event)
{
    if (isMouseDown)
    {
        mousePosition=event->globalPos();
        _cx = mousePosition.rx() - this->width()/10;
        _cy =mousePosition.ry() - this->height()/2;
        move(_cx,_cy);

    }
}

void Clock_W::mousePressEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        isMouseDown=true;
    }
}

