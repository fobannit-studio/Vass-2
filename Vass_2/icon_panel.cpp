#include "icon_panel.h"
#include "ui_icon_panel.h"
#include<QDebug>

icon_panel::icon_panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::icon_panel)
{
    _current_page = 0;
    ui->setupUi(this);
    fill_shortcuts();
}

icon_panel::~icon_panel()
{
    delete ui;
}

void icon_panel::on_addShortCut_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,QString("Choose shortcut"),"/home/bohdan/Pictures","All files (*.*);;Exe files (*.exe);;Pdf files (*pdf)");
    _shortcuts.emplace_back(filename);
    fill_shortcuts();
}

void icon_panel::wheelEvent(QWheelEvent *event)
{
    QPoint degrees = event -> angleDelta();
    qDebug()<<degrees.ry()<<degrees.rx()<<_current_page;
    if(degrees.ry()>0 and _current_page + 9 < _shortcuts.size()){
        _current_page += 1;
        fill_shortcuts();
    }
    else if (_current_page > 0){
        _current_page -=1;
        fill_shortcuts();
    }
}



void icon_panel::fill_shortcuts()
{
    int end = 0;
    if(_current_page+9<_shortcuts.size())end = _current_page +9;
    else end=_shortcuts.size();
    for(int i=_current_page;i<_current_page+9;++i)
    {
        switch (i%9) {
        case 0:
            if (i<end)ui->app_1->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_1->setText("");
            break;
        case 1:
            if (i<end)ui->app_2->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_2->setText("");
            break;
        case 2:
            if (i<end)ui->app_3->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_3->setText("");
            break;
        case 3:
            if (i<end)ui->app_4->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_4->setText("");
            break;
        case 4:
            if (i<end)ui->app_5->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_5->setText("");
            break;
        case 5:
            if (i<end)ui->app_6->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_6->setText("");
            break;
        case 6:
            if (i<end)ui->app_7->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_7->setText("");
            break;
        case 7:
            if (i<end)ui->app_8->setText(_shortcuts[i%_shortcuts.size()]);
            else ui->app_8->setText("");
        default:
            break;
        }
    }
}

void icon_panel::on_app_1_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[0 + _current_page*9] ,QUrl::TolerantMode));
}

void icon_panel::on_app_2_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[1 + _current_page*9] ,QUrl::TolerantMode));
}


void icon_panel::on_app_3_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[2 + _current_page*9] ,QUrl::TolerantMode));
}


void icon_panel::on_app_4_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[3 + _current_page*9] ,QUrl::TolerantMode));
}
void icon_panel::on_app_5_clicked(){QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[4 + _current_page*9] ,QUrl::TolerantMode));}
void icon_panel::on_app_6_clicked(){QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[5 + _current_page*9] ,QUrl::TolerantMode));}

void icon_panel::on_app_7_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[6 + _current_page*9] ,QUrl::TolerantMode));
}

void icon_panel::on_app_8_clicked()
{
    QDesktopServices::openUrl(QUrl("file:///" + _shortcuts[7 + _current_page*9] ,QUrl::TolerantMode));
}


