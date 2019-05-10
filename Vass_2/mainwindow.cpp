#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Icons(this),
    Configuration(this)
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

    openIcons = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_M), this, SLOT(setVisibleIcons()));
    connect(&Icons,SIGNAL(HideIconBar()),this,SLOT(HideIcons()));

    _is_panel_active = false;
    Configuration.hide();
    Icons.hide();
    //systray set up
    trayIcon->setIcon(icon);
    trayIcon-> show();
    //
    ui->setupUi(this);
    ui ->icons -> hide();



}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_pushButton_clicked()
//{
//  qDebug()<<"called";
//  M_Player.show();
//}


void MainWindow::setVisibleIcons()
{
    if(not _is_panel_active){
        QPoint position = QCursor::pos();
        ui-> icons -> move(position.rx() - Icons.geometry().width()/2,position.ry() - Icons.geometry().height()/2);
//        Icons.setWindowFlags(Qt::FramelessWindowHint);
//        Icons.setAttribute(Qt::WA_TranslucentBackground);
//        Icons.setFocus();
        ui ->icons -> show();
        _is_panel_active =true;
    }else {
        ui ->icons -> hide();
        _is_panel_active=false;
}
}


void MainWindow::InitActions()
{
   openConfig = new QAction(tr("Show configuration window"),this);
   connect(openConfig, &QAction::triggered, &Configuration, &QWidget::show);
   minimize = new QAction(tr("Hide configuration"),this);
   connect(openConfig, &QAction::triggered, &Configuration, &QWidget::show);
   openPlayer = new QAction(tr("Open Player"),this);
   connect(openPlayer,&QAction::triggered,&M_Player,&QWidget::show);
   exit = new QAction(tr("Quit"),this);
   connect(exit,&QAction::triggered,qApp,&QApplication::quit);

}
void MainWindow::createTrayIcons()
{
    trayIconMenu = new QMenu(this);
    trayIconMenu-> addAction(openConfig);
    trayIconMenu->addAction(minimize);
    trayIconMenu->addAction(openPlayer);
    trayIconMenu->addAction(exit);
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
}
