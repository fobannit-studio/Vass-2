#include "config.h"
#include "ui_config.h"
config::config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);
    ui ->Music_Player_settings->hide();
    ui ->MainSettings->hide();
    ui ->Quick_Panel_settings->hide();

}

//void config::show()
//{
//    this -> show();
//    this ->  setAttribute(Qt::WA_TranslucentBackground);
//}
config::~config()
{
    delete ui;
    delete this;
}

void config::on_app_config_clicked()
{
    ui ->Music_Player_settings->hide();
    ui ->Quick_Panel_settings->hide();
    ui->MainSettings->show();

}

void config::on_mp_config_clicked()
{
    ui ->Music_Player_settings->show();
    ui ->MainSettings->hide();
    ui ->Quick_Panel_settings->hide();
}

void config::on_ic_config_clicked()
{
    ui ->Music_Player_settings->hide();
    ui ->MainSettings->hide();
    ui ->Quick_Panel_settings->show();
}



void config::mouseMoveEvent(QMouseEvent *event)
{
    if (isMouseDown)
    {
        mousePosition=event->globalPos();
        move(mousePosition.rx() - this->width()/5,mousePosition.ry() - this->height()/5);
    }
}

void config::mousePressEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        isMouseDown=true;
    }
}



