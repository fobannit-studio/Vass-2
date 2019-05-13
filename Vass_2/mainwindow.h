#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QAction>
#include <QPainter>
#include <QColor>
#include <QDebug>
#include <QSystemTrayIcon>
#include "media_player.h"
#include "submit_removal.h"
#include"icon_panel.h"
#include"config.h"
#include "saver.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(std::pair<int,int> dim,QWidget *parent = nullptr);
    ~MainWindow() override;
    Saver saver;


private slots:
//    void on_pushButton_clicked();
    void setVisibleIcons();
    void setVisibleConfig();
    void setVisibleTime();
    void setVisibleMusic();
    void createTrayIcons();
    void InitActions();
private:
    Ui::MainWindow *ui;
    void closeEvent(QCloseEvent* event) override;
    bool _is_panel_active;

    std::pair<int,int> _D_dims;

    Media_Player M_Player;
    icon_panel Icons;
    config Configuration;

    QShortcut * openIcons;
    QSystemTrayIcon *trayIcon;
    QMenu * trayIconMenu;
    QAction * openConfig;
    QAction * openPlayer;
    QAction * exit;
    QAction *openTime;



};

#endif // MAINWINDOW_H
