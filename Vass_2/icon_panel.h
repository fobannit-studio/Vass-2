#ifndef ICON_PANEL_H
#define ICON_PANEL_H

#include <QWidget>
#include <QDesktopServices>
#include <QFile>
#include<QFileDialog>
#include<QUrl>
#include<QWheelEvent>
#include <vector>

namespace Ui {
class icon_panel;
}

class icon_panel : public QWidget
{
    Q_OBJECT


public:
    explicit icon_panel(QWidget *parent = nullptr);

    ~icon_panel();

protected:
    void wheelEvent(QWheelEvent *event);

private slots:
    void on_addShortCut_clicked();
    void fill_shortcuts();
    void on_app_1_clicked();
    void on_app_2_clicked();
    void on_app_3_clicked();
    void on_app_4_clicked();
    void on_app_5_clicked();
    void on_app_6_clicked();
    void on_app_7_clicked();
    void on_app_8_clicked();
private:

    Ui::icon_panel *ui;
    int _current_page ;
    std::vector<QString> _shortcuts;


};

#endif // ICON_PANEL_H
