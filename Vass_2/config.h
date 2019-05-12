#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include<QMouseEvent>

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
    void on_app_config_clicked();

    void on_mp_config_clicked();

    void on_ic_config_clicked();

private:
    Ui::config *ui;
    bool isMouseDown=true;
    QPoint mousePosition;


};

#endif // CONFIG_H
