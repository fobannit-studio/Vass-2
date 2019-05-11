#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QAction>
#include<QShortcut>
#include <QSystemTrayIcon>
#include <QMouseEvent>
#include <fstream>
#include <QCloseEvent>
#include<QKeySequence>
#include <QTimer>
#include <QPainter>
#include <QColor>
#include<QCursor>
#include <QTime>
#include "media_player.h"
#include "submit_removal.h"
#include"icon_panel.h"
#include"config.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(std::pair<int,int> dim,QWidget *parent = nullptr);
    ~MainWindow() override;



private slots:
//    void on_pushButton_clicked();
    void setVisibleIcons();
    void setVisibleConfig();
    void createTrayIcons();
    void InitActions();
private:
    Ui::MainWindow *ui;

    bool _is_panel_active;
    bool _is_config_active;
    std::pair<int,int> _D_dims;

    Media_Player M_Player;
    icon_panel Icons;
    config Configuration;

    QShortcut * openIcons;
    QSystemTrayIcon *trayIcon;
    QMenu * trayIconMenu;
    QAction * openConfig;
    QAction * openPlayer;
    QAction * maximize;
    QAction * minimize;
    QAction * exit;



};

#endif // MAINWINDOW_H
