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
    Configuration(),
    Clock()
{
    QIcon icon = QIcon(":/icons/images/icon2.png");
    setWindowIcon(icon);
    InitActions();
    createTrayIcons();
    shortcuts = shortcut_v::Initialialize();
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(100,100,100, 127));
    painter.drawRect(0, 0, width(),  height());
    //shortcut for open icons
#ifdef linux
    qDebug()<<"Is equal"<<(XK_M == Qt::Key_M);
    nativeEventFilter = new event_filter(XK_M,XK_Q,XK_P,XK_T,this); // m - icons , t - clock
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
    connect(&Configuration,&config::changeHotKey,this,&MainWindow::setNewShortcut);
    Configuration.setWindowFlags(Qt::FramelessWindowHint|Qt::Tool);

    Configuration.setAttribute(Qt::WA_TranslucentBackground);
    Icons.setWindowFlags(Qt::WindowStaysOnTopHint|Qt::Tool|Qt::FramelessWindowHint);
    Icons.setAttribute(Qt::WA_TranslucentBackground);
    M_Player.setWindowFlags(Qt::FramelessWindowHint|Qt::Tool);
    Clock.setWindowFlags(Qt::FramelessWindowHint|Qt::Tool|Qt::WindowStaysOnTopHint);
    Clock.setAttribute(Qt::WA_TranslucentBackground);
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
    connect(&Icons,SIGNAL(HideIconBar()),this,SLOT(HideIcons()));
//    setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint|Qt::Tool);
    // считать настройки из файла


}

MainWindow::~MainWindow()
{
    qWarning("saving");
    if (M_Player.playlist.mediaCount()>0)
        saver.save_music(M_Player.playlist);
    delete ui;


}

void MainWindow::setNewShortcut()
{
    qDebug()<<"In set new shortcut  " << shortcuts->_icons;
    nativeEventFilter ->upadteHotKeys(shortcuts->_icons,Apps::Icons);
    nativeEventFilter ->upadteHotKeys(shortcuts->_player,Apps::Player);
    nativeEventFilter ->upadteHotKeys(shortcuts->_time,Apps::Clock);
    nativeEventFilter ->upadteHotKeys(shortcuts->_config,Apps::Config);
}
void MainWindow::setVisibleIcons()
{
//    if(!ui->icons->isVisible())
    if(!Icons.isVisible()){
        qDebug()<<"called";
        QPoint position = QCursor::pos();
        Icons.move(position.rx() - Icons.geometry().width()/2,position.ry() - Icons.geometry().height()/2);
//        ui-> icons -> move(position.rx() - ui->icons->geometry().width()/2,position.ry() - ui->icons->geometry().height()/2);

        Icons.setFocus();
        Icons.fill_shortcuts();
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
        Configuration.fill_shortcuts();
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
//      this -> show();
      QPoint position = QCursor::pos();
      if(Clock._cx == -1){Clock._cx = position.rx() - Clock.geometry().width()/2;Clock._cy = position.ry() - Clock.geometry().height()/2;}
      Clock.move(Clock._cx,Clock._cy);
      Clock.show();
      openTime->setText("Hide Time");

      this->ui->TimeLabel->show();
  }
  else {
      {
          Clock.hide();
           this -> hide();
           openTime->setText("Show Time");
           this->ui->TimeLabel->hide();
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
