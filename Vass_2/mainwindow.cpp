#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QPainter>
#include <QColor>
#include<QCursor>
#include <QTime>
#include <QDebug>
#include <iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Icons()
{

    QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setPen(Qt::NoPen);
        painter.setBrush(QColor(100,100,100, 127));
        painter.drawRect(0, 0, width(),  height());
        openIcons = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_M), this, SLOT(OpenIcons()));
        connect(&Icons,SIGNAL(HideIconBar()),this,SLOT(HideIcons()));

    ui->setupUi(this);


    // считать настройки из файла


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
  M_Player.show();
}
void MainWindow::HideIcons()
{

    qDebug()<<"called";
    this -> show();
}

void MainWindow::OpenIcons()
{
   QPoint position = QCursor::pos();
   Icons.move(position.rx() - Icons.geometry().width()/2,position.ry() - Icons.geometry().height()/2);
   Icons.setWindowFlags(Qt::FramelessWindowHint);
//   Icons.setAttribute(Qt::WA_TranslucentBackground);
   Icons.show();
   this ->hide();
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    // функия что записывает настройки
    event->accept(); // event->ignore() игнорировать закрытие окна

}




void MainWindow::on_pushButton_2_clicked()
{
  if (this->ui->pushButton_2->text()=="Show")
  {
      ui->pushButton_2->setText("Hide");
      ui->TimeLabel->show();
  }
  else {
      {
           ui->pushButton_2->setText("Show");
           ui->TimeLabel->hide();
      }
  }
}
