#ifndef ICON_PANEL_H
#define ICON_PANEL_H

#include <QWidget>
#include <QDesktopServices>
#include <QMessageBox>
#include <QFile>
#include<QFileDialog>
#include<QUrl>
#include<QWheelEvent>
#include<QDebug>
#include<QIODevice>
#include <QLabel>
#include<QDataStream>
#include<QShortcut>
#include "submit_removal.h"
#include <regex>
#include<algorithm>
#include <vector>

enum class State{Ranged,Single};
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

signals:
    void HideIconBar();

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
    void removeSequence();
    void on_removeShortCut_clicked();



private:
    Ui::icon_panel *ui;

    bool _removal;
    int _current_page;
    std::vector<int> _to_remove;
    std::vector <std::pair<std::string,QString>> _apps;

    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::vector<std::string> _image_ext{".png",".jpg",".bmp",".svg"};
    std::vector<std::string> _doc_ext{".pdf",".doc",".lib",".csv"};
    std::vector<QPushButton * > _app_buttons; // buttons on ui , connected to shortcuts

    submit_removal submit_window;
    QString _shortcuts_file;
    QStringList _shortcuts;
    QShortcut * sumbmit;

    void initShortcut(QPushButton * app , QLabel * label , int current_position);
    void parse_names(QString);
    void setIcon(QLabel *,int);
    void writeToFile();
    void readFromFile();
    void mark_for_removal(QPushButton * ,int , State );
    void return_default_style();

};

#endif // ICON_PANEL_H
