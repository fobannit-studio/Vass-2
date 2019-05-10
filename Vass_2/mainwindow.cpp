#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(std::pair<int,int> dim ,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
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

    openIcons = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_M), this, SLOT(setVisibleIcons()));
    connect(&Icons,SIGNAL(HideIconBar()),this,SLOT(HideIcons()));

    _is_panel_active = false;
    _is_config_active = false;
    _D_dims = dim;


    //systray set up
    trayIcon->setIcon(icon);
    trayIcon-> show();
    //
    ui->setupUi(this);
    ui ->icons -> hide();
    ui ->configuration -> hide();



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

void MainWindow::setVisibleConfig()
{
    qDebug()<<"called";
    if(not _is_config_active){
        ui-> configuration -> move(_D_dims.first/2- Configuration.geometry().width()/2,_D_dims.second/2- Configuration.geometry().height()/2);

        ui ->configuration -> show();
        _is_config_active =true;
    }else {
        ui ->configuration -> hide();
        _is_config_active=false;
}

}

void MainWindow::InitActions()
{
   openConfig = new QAction(tr("Show configuration window"),this);
   connect(openConfig, &QAction::triggered, this, &MainWindow::setVisibleConfig);
   minimize = new QAction(tr("Hide configuration"),this);
   connect(minimize, &QAction::triggered, this, &MainWindow::setVisibleConfig);
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
