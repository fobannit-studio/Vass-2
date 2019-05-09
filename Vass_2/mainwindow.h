#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QShortcut>
#include <QMouseEvent>
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

public slots:
    void HideIcons();

private slots:
    void on_pushButton_clicked();
    void OpenIcons();


    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    Media_Player M_Player;
    icon_panel Icons;
    QShortcut * openIcons;

};

#endif // MAINWINDOW_H
