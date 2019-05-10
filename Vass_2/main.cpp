#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>


int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(resources);
    QApplication a(argc, argv);
    MainWindow w;
    QDesktopWidget dw;


    w.setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);  //сделать без рамки и всегда наверху других окон
    w.setAttribute(Qt::WA_TranslucentBackground); // сделать прозрачным  => profit!
    w.setFixedSize(dw.width(),dw.height()); // сделать на весь екран
    w.show();

    return a.exec();
}
