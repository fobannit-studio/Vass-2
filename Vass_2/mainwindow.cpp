
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QPainter>
#include <QColor>
#include<QCursor>
#include <QTime>
#include <QDebug>
#include <iostream>

MainWindow::MainWindow(std::pair<int,int> dim ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    M_Player(),
    Icons(),
    Configuration()
{
    QIcon icon = QIcon(":/icons/images/icon2.png");
    setWindowIcon(icon);
    InitActions();
    createTrayIcons();

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(100,100,100, 127));
    painter.drawRect(0, 0, width(),  height());
    //shortcut for open icons
#ifdef linux
    nativeEventFilter = new event_filter(XK_M,XK_Q,XK_P,XK_T,this);
    qApp->installNativeEventFilter(nativeEventFilter);
    connect(nativeEventFilter,&event_filter::icon_called,this,&MainWindow::setVisibleIcons);
    connect(nativeEventFilter,&event_filter::clock_called,this,&MainWindow::setVisibleTime);
    connect(nativeEventFilter,&event_filter::config_called,this,&MainWindow::setVisibleConfig);
    connect(nativeEventFilter,&event_filter::player_called,this,&MainWindow::setVisibleMusic);
    nativeEventFilter -> setShortcut(Apps::Clock);
    nativeEventFilter -> setShortcut(Apps::Player);
    nativeEventFilter -> setShortcut(Apps::Config);
    nativeEventFilter -> setShortcut(Apps::Icons);
#endif

    Configuration.setWindowFlags(Qt::FramelessWindowHint);
    Configuration.setAttribute(Qt::WA_TranslucentBackground);

    _D_dims = dim;

    //systray set up
    trayIcon->setIcon(icon);
    trayIcon-> show();
    //
    ui->setupUi(this);
//    ui ->icons -> hide();
//    ui ->configuration -> hide();
    M_Player.add_files(saver.load_music());
    openIcons = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_M), this, SLOT(setVisibleIcons()));
    connect(ui->icons,SIGNAL(HideIconBar()),this,SLOT(HideIcons()));

    // считать настройки из файла


}

MainWindow::~MainWindow()
{
    qWarning("saving");
    if (M_Player.playlist.mediaCount()>0)
        saver.save_music(M_Player.playlist);
    delete ui;


}



void MainWindow::setVisibleIcons()
{
//    if(!ui->icons->isVisible())
    if(!Icons.isVisible()){
        qDebug()<<"called";
        QPoint position = QCursor::pos();
        Icons.move(position.rx() - Icons.geometry().width()/2,position.ry() - Icons.geometry().height()/2);
//        ui-> icons -> move(position.rx() - ui->icons->geometry().width()/2,position.ry() - ui->icons->geometry().height()/2);
        Icons.setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
        Icons.setAttribute(Qt::WA_TranslucentBackground);
        Icons.setFocus();
        Icons.show();
//        ui ->icons -> show();


    }else {
        Icons.hide();
//        ui ->icons -> hide();

}
}

void MainWindow::setVisibleConfig()
{

    if(!Configuration.isVisible()){
        Configuration.move(_D_dims.first/2- Configuration.geometry().width()/2,_D_dims.second/2- Configuration.geometry().height()/2);
        openConfig->setText("Hide configuration window");
        Configuration.show();

    }else {
        Configuration.hide();

        openConfig->setText("Show configuration window");
}

}
void MainWindow::closeEvent(QCloseEvent *event)
{
    qWarning("saving");
    saver.save_music(M_Player.playlist);

    event->accept(); // event->ignore() игнорировать закрытие окна
}
void MainWindow::InitActions()
{
   openConfig = new QAction(tr("Show configuration window"),this);
   connect(openConfig, &QAction::triggered, this,&MainWindow::setVisibleConfig);
   openTime= new QAction(tr("Show Time"),this);
   connect(openTime, &QAction::triggered, this,&MainWindow::setVisibleTime);
   openPlayer = new QAction(tr("Show Player"),this);
   connect(openPlayer,&QAction::triggered,this,&MainWindow::setVisibleMusic);
   exit = new QAction(tr("Quit"),this);
   connect(exit,&QAction::triggered,qApp,&QApplication::quit);
}

void MainWindow::setVisibleTime()
{
  if (this->ui->TimeLabel->isHidden())
  {
      openTime->setText("Hide Time");
      ui->TimeLabel->show();
  }
  else {
      {
           openTime->setText("Show Time");
           ui->TimeLabel->hide();
      }
  }
}

void MainWindow::setVisibleMusic()
{
    if (!M_Player.isVisible())
    {
        openPlayer->setText("Hide Player");
        M_Player.show();
    }
    else
        {
        openPlayer->setText("Show Player");
        M_Player.hide();
        }
}


void MainWindow::createTrayIcons()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu-> addAction(openConfig);
    trayIconMenu->addAction(openPlayer);
    trayIconMenu->addAction(openTime);
    trayIconMenu->addAction(exit);
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
}


void MainWindow::slotGlobalHotkey()
{
    setVisibleIcons();
}
