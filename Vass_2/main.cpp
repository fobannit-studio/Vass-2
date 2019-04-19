#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    w.setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);  //сделать без рамки и всегда наверху других окон
    w.setAttribute(Qt::WA_TranslucentBackground); // сделать прозрачным  => profit!

    w.showFullScreen();

    return a.exec();
}
