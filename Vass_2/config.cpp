#include "config.h"
#include "ui_config.h"

config::config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);
}

//void config::show()
//{
//    this -> show();
//    this ->  setAttribute(Qt::WA_TranslucentBackground);
//}
config::~config()
{
    delete ui;
}
