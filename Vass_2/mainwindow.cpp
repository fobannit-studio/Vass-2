#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    Icons(), //doesn't need to inherit parent attributes
    Configuration(this)
{
    InitActions();
    createTrayIcons();

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(100,100,100, 127));
    painter.drawRect(0, 0, width(),  height());
    //shortcut for open icons
    openIcons = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_M), this, SLOT(OpenIcons()));
    connect(&Icons,SIGNAL(HideIconBar()),this,SLOT(HideIcons()));
    //systray set up
    QIcon icon = QIcon(":/icons/images/icon2.png");
    Configuration.hide();
    trayIcon->setIcon(icon);
    setWindowIcon(icon);
    trayIcon-> show();
    //
    ui->setupUi(this);



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
   Icons.setAttribute(Qt::WA_TranslucentBackground);
   Icons.show();
//   this ->hide();
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
