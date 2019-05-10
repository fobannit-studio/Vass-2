#include "icon_panel.h"
#include "ui_icon_panel.h"

icon_panel::icon_panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::icon_panel),
    submit_window(this)
{
    _removal = false;
    _current_page = 0;
    _shortcuts_file = tr("shortcuts.abk");
    readFromFile();
    ui->setupUi(this);

    fill_shortcuts();
}

icon_panel::~icon_panel()
{
    writeToFile();
    delete ui;
}

void icon_panel::writeToFile()
{
    if(_shortcuts_file.isEmpty())return;
    QFile file(_shortcuts_file);
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this,tr("Unable to open the file"),file.errorString());
        return;
    }
    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_4_5);
    out << _shortcuts;
};

void icon_panel::readFromFile()
{
    if(_shortcuts_file.isEmpty())return;
    QFile file(_shortcuts_file);
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(this,tr("Unable to open window"),file.errorString());
        return;
    }
    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_4_5);
    in >> _shortcuts;
    for(int i = 0;i<_shortcuts.size();++i)
    {
        parse_names(_shortcuts.at(i).toLocal8Bit().constData());
    }
};

void icon_panel::parse_names(QString filename)
{
//    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::smatch matches;
    std::string path = filename.toStdString();
    std::regex_search(path,matches,_app_parser);
    path = matches[1];
    std::string app = matches[2];
    std::string extension = matches[3];
    std::pair<std::string,QString> name_icon;
    if(std::find(_image_ext.begin(), _image_ext.end(), extension) != _image_ext.end())
    {
        name_icon = std::make_pair(app,QString::fromStdString(":/icons/images/picture.png"));
    }
    else if(std::find(_doc_ext.begin(), _doc_ext.end(), extension) != _doc_ext.end())
    {
        name_icon = std::make_pair(app,QString::fromStdString(":/icons/images/philosophy.png"));
    }
    else {
        name_icon = std::make_pair(app,QString::fromStdString(path + "/" + app + ".png"));
    }
    _apps.emplace_back(name_icon);

}

void icon_panel::setIcon(QLabel * label, int current_icon)
{
    QPixmap icon(_apps[current_icon].second);
    label -> setPixmap(icon.scaled(label->width(),label->height(),Qt::KeepAspectRatio));
};


void icon_panel::on_addShortCut_clicked()
{
    if(!_removal){
    QString filename = QFileDialog::getOpenFileName(this,QString("Choose shortcut"),"/","All files (*.*);;Exe files (*.exe);;Pdf files (*pdf)");
    if(filename.isEmpty())return;
    _shortcuts << filename;
    parse_names(filename);
    fill_shortcuts();
    }
    else {
         ui ->addShortCut->setText("Add Shortcut");
        _removal = false;
    }
}

void icon_panel::wheelEvent(QWheelEvent *event)
{
    QPoint degrees = event -> angleDelta();
    qDebug()<<degrees.ry()<<degrees.rx()<<_current_page;
    if((degrees.ry()>0) && (_current_page + 8 < _shortcuts.size())){
        _current_page += 8;
        fill_shortcuts();
    }
    else if (_current_page > 0){
        _current_page -=8;
        fill_shortcuts();
    }
}

void icon_panel::initShortcut(QPushButton * app , QLabel * label , int current_position)
{
    app->show();
    label->show();
    app->setText(QString::fromStdString(_apps[current_position].first));
    setIcon(label,current_position);
};

void icon_panel::fill_shortcuts()
{
    int end = 0;
    if(_current_page+8<_shortcuts.size())end = _current_page + 8;
    else end=_shortcuts.size();
    for(int i=_current_page;i<_current_page+8;++i)
    {
        switch (i%8) {
        case 0:
            if (i<end){
                initShortcut(ui->app_1,ui->label_1,i);
            }
            else{
                ui->label_1->hide();
                ui->app_1->hide();;
            }
            break;
        case 1:
            if (i<end){
                initShortcut(ui->app_2,ui->label_2,i);
            }
            else{
                ui->label_2->hide();
                ui->app_2->hide();
            }
            break;
        case 2:
            if (i<end){
                initShortcut(ui->app_3,ui->label_3,i);
            }
            else{
                ui->label_3->hide();
                ui->app_3->hide();
            }
            break;
        case 3:
            if (i<end){
                initShortcut(ui->app_4,ui->label_4,i);
            }
            else{
                ui->label_4->hide();
                ui->app_4->hide();
            }
        case 4:
            if (i<end){
                initShortcut(ui->app_5,ui->label_5,i);
            }
            else{

                ui->label_5->hide();
                ui->app_5->hide();
            }
            break;
        case 5:
            if (i<end){
                initShortcut(ui->app_6,ui->label_6,i);
            }
            else{
                ui->label_6->hide();
                ui->app_6->hide();
            }
            break;
        case 6:
            if (i<end){
                initShortcut(ui->app_7,ui->label_7,i);
            }
            else{
                ui->label_7->hide();
                ui->app_7->hide();
            }
            break;
        case 7:
            if (i<end){
               initShortcut(ui->app_8,ui->label_8,i);
            }
            else{
                ui->label_8->hide();
                ui->app_8->hide();
            }
        default:
            break;
        }
    }
}

void icon_panel::on_app_1_clicked()
{
    if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(0 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(0+_current_page*9);
}

void icon_panel::on_app_2_clicked()
{
    if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(1 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(1+_current_page*9);
}

void icon_panel::on_app_3_clicked()
{
    if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(2 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(2+_current_page*9);
}
void icon_panel::on_app_4_clicked()
{
    if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(3 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(3+_current_page*9);
}
void icon_panel::on_app_5_clicked(){  if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(4 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(4+_current_page*9);
}
void icon_panel::on_app_6_clicked(){ if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(5 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(5+_current_page*9);
}

void icon_panel::on_app_7_clicked()
{
    if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(6 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(6+_current_page*9);
}

void icon_panel::on_app_8_clicked()
{
    if(!_removal)QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(7 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else removeShortCut(7+_current_page*9);
}

void icon_panel::on_removeShortCut_clicked()
{
    _removal = true;
    ui ->addShortCut->setText("Done");
}
void icon_panel::removeShortCut(int posiotion)
{
    submit_window.show();
    submit_window.setModal(true);
    if(submit_window.exec()){;
    _shortcuts.removeAt(posiotion);
    _apps.erase(_apps.begin() + posiotion);
    fill_shortcuts();
    }else return;
}

