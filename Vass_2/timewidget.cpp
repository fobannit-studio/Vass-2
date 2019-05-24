#include "timewidget.h"
#include <QTime>
#include <iostream>
#include <QPalette>
#include <QColorDialog>
TimeWidget::TimeWidget(QWidget *parent) : QLabel(parent)
{
  timer=new QTimer(this);
  connect(timer,&QTimer::timeout,this,&TimeWidget::Update_Time);
//  this->setStyleSheet("QLabel{color: #C0BBFE;font-size:25px}");
  timer->start(update_interval);
  buffer.start();
  QPalette qpal= this->palette();
//  this->hide();



}
TimeWidget::~TimeWidget()
{
    delete this->timer;

//    delete this;


}

//void TimeWidget::mouseMoveEvent(QMouseEvent *event)
//{
//    if (isMouseDown)
//    {
//        mousePosition=event->globalPos();
//        move(mousePosition);
//    }
//}

//void TimeWidget::mousePressEvent(QMouseEvent *event)
//{
//    if (event->button()==Qt::LeftButton)
//    {
//        isMouseDown=true;
//    }
//}

void TimeWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        isMouseDown=false;
    }
    if (event->button()==Qt::RightButton)
    {
        if (mode==0)
        { mode=1;
          buffer.setHMS(0,0,0);
        }
        else if (mode==1)   // перейти в режим секундомера
        {
            mode=0;



        }
    }

}
void TimeWidget::Update_Time()
{

   if (mode==0)  { this->setText(QTime::currentTime().toString("hh:mm:ss")) ;}
   else if (mode==1)
   {   buffer=buffer.addMSecs(update_interval);
//       this->setStyleSheet("QLabel{color: #C0BBFE;font-size:25px}");
       this->setText(buffer.toString("hh:mm:ss"));

   }


}

