#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QTimer>
#include <QPainter>
#include <QColor>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //QTimer::singleShot(0, this, SLOT(showFullScreen()));
   // QColor backgroundColor = palette().light().color();
   // backgroundColor.setAlpha(200);
   // QPainter customPainter(this);
//    customPainter.fillRect(rect(),backgroundColor);
    QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setPen(Qt::NoPen);
        painter.setBrush(QColor(100,100,100, 127));

        painter.drawRect(0, 0, width(),  height());
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    std::cout<<"hello"<<std::endl;
}
