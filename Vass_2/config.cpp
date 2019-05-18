#include "config.h"

#include "ui_config.h"
config::config(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);
    shortcuts = shortcut_v::Initialialize();
    _app_buttons ={ui->app_1,ui->app_2,ui->app_3,ui->app_4,ui->app_5,ui->app_6,ui->app_7,ui->app_8};
    _current_page = 0;
    _active_element = -1;
    fill_shortcuts();
}


config::~config()
{

    delete ui;

}



void config::mouseMoveEvent(QMouseEvent *event)
{
    if (isMouseDown)
    {
        mousePosition=event->globalPos();
        move(mousePosition.rx() - this->width()/5,mousePosition.ry() - this->height()/5);
    }
}

void config::mousePressEvent(QMouseEvent *event)
{
    if (event->button()==Qt::LeftButton)
    {
        isMouseDown=true;
    }
}

void config::fill_shortcuts()
{
    int end = 0;
    int i = 0;
    if(_current_page+8<shortcuts->_shortcuts_class.size())end = _current_page + 8;
    else end=shortcuts->_shortcuts_class.size();
    for(i=_current_page;i<end;++i)
    {
        initShortcut(_app_buttons[i%_app_buttons.size()],i);
    }
    for(;i<_current_page+8;++i)
    {
        _app_buttons[i%_app_buttons.size()]->hide();

    }
    setStyle();
}

void config::initShortcut(QPushButton * app , int current_position)
{
    app->show();

    app->setText(QString::fromStdString(shortcuts->_shortcuts_class[current_position].get_filename()));
    setIcon(app,current_position);

//    app->setText(QString::fromStdString(_apps[current_position].first));
};

void config::setIcon( QPushButton * button,int current_icon)
{
    QPixmap icon(shortcuts->_shortcuts_class[current_icon].get_path_to_icon());
    icon = icon.scaled(button->width()/10,button->width()/10,Qt::KeepAspectRatio);
    button->setIcon(icon);
    button ->setIconSize(icon.rect().size());
//    label -> setPixmap(icon.scaled(label->width(),label->height(),Qt::KeepAspectRatio));

};


void config::on_b_up_clicked()
{
    if(_active_element == 0) return;
    std::swap(shortcuts -> _shortcuts_class[_active_element],shortcuts -> _shortcuts_class[_active_element-1]);
    _active_element -= 1;
    fill_shortcuts();

}

void config::on_b_down_clicked()
{
    if(_active_element < shortcuts -> _shortcuts_class.size() - 1){
    qDebug() << _active_element;
    qDebug() << shortcuts -> _shortcuts_class.size();
     std::swap(shortcuts -> _shortcuts_class[_active_element],shortcuts -> _shortcuts_class[_active_element+1]);
     _active_element += 1;
    fill_shortcuts();
    }
}

void config::setStyle()
{
    for(unsigned int i = 0;i<8;++i)
    {
        if(i == _active_element%(_current_page+8))
        {
           _app_buttons[i]-> setStyleSheet("QPushButton{background-color:rgba(160, 8, 33,0.7);border: 1px solid gray;border-radius:10px ; padding-top:0px}QPushButton:hover{background-color:rgb(160, 8, 33)}");
        }else {
           _app_buttons[i]-> setStyleSheet("QPushButton{background-color:white}");
}
    }
}
void config::on_app_1_clicked()
{
_active_element = 0 + _current_page*8;
setStyle();
}

void config::on_app_2_clicked()
{
    _active_element = 1 + _current_page*8;
    setStyle();
}

void config::on_app_3_clicked()
{
    _active_element = 2 + _current_page*8;
    setStyle();
}

void config::on_app_4_clicked()
{
    _active_element = 3 + _current_page*8;
    setStyle();
}

void config::on_app_5_clicked()
{
    _active_element = 4 + _current_page*8;
    setStyle();
}

void config::on_app_6_clicked()
{
    _active_element = 5 + _current_page*8;
    setStyle();
}

void config::on_app_7_clicked()
{
    _active_element = 6 + _current_page*8;
    setStyle();
}

void config::on_app_8_clicked()
{
    _active_element = 7 + _current_page*8;
    setStyle();
}
