#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <QPushButton>
#include<QMouseEvent>
#include <regex>
#include<vector>
#include"shortcut.h"

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

private:
    Ui::config *ui;

    bool isMouseDown=true;
    unsigned long active_button;
    unsigned long buttons_before;
    std::vector<Shortcut> _shortcuts_class;
    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::vector<QPushButton * > _app_buttons;
    QString _shortcuts_file;

    QPoint mousePosition;


};

#endif // CONFIG_H
