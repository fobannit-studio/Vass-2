#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QTimer>
#include <QPainter>
#include <QColor>
#include<QCursor>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   
    QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setPen(Qt::NoPen);
        painter.setBrush(QColor(100,100,100, 127));
        painter.drawRect(0, 0, width(),  height());
        openIcons = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_M), this, SLOT(OpenIcons()));
        /*openIcons= new QShortcut(QKeySequence(Qt::CTRL+Qt::Key_M), parent);
        QObject::connect(openIcons, SIGNAL(activated()), this, SLOT(OpenIcons()));*/
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  M_Player.show();


}

void MainWindow::OpenIcons()
{
   QPoint position = QCursor::pos();
   Icons.move(position.rx() - Icons.geometry().width()/2,position.ry() - Icons.geometry().height()/2);
   Icons.setWindowFlags(Qt::FramelessWindowHint);
   Icons.setAttribute(Qt::WA_TranslucentBackground);
   Icons.show();
   this ->hide();
}
