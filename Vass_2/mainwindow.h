#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QShortcut>
#include<QKeySequence>
#include "media_player.h"
#include "submit_removal.h"
#include"icon_panel.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void OpenIcons();

private:
    Ui::MainWindow *ui;
    Media_Player M_Player;
    icon_panel Icons;
    QShortcut * openIcons;
};

#endif // MAINWINDOW_H
