#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <QPushButton>
#include<QMouseEvent>
#include <regex>
#include<vector>
//#include"shortcut.h"
#include"shortcut_v.h"

namespace Ui {
class config;
}

class config : public QWidget
{
    Q_OBJECT
public:
    explicit config(QWidget *parent = nullptr);
    ~config();

protected:
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);



private slots:

    void on_b_up_clicked();

    void on_b_down_clicked();

    void on_app_1_clicked();

    void on_app_2_clicked();

    void on_app_3_clicked();

    void on_app_4_clicked();

    void on_app_5_clicked();

    void on_app_6_clicked();

    void on_app_7_clicked();

    void on_app_8_clicked();

private:
    Ui::config *ui;

    bool isMouseDown=true;
    int _active_element;
    int _current_page;
    shortcut_v * shortcuts;
    std::vector<QPushButton *> _app_buttons;


    QPoint mousePosition;

    void initShortcut(QPushButton * app , int current_position);
    void setIcon(QPushButton * button,int current_icon);
    void setStyle();
public:
    void fill_shortcuts();



};

#endif // CONFIG_H
