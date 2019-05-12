#include "icon_panel.h"
#include "ui_icon_panel.h"



icon_panel::icon_panel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::icon_panel),
    submit_window(this)
{
    ui->setupUi(this);
    _removal = false;
    _range ={-1,-1};
    _range_selection = false;
    _current_page = 0;
    _shortcuts_file = tr("shortcuts.abk");
    sumbmit = new QShortcut(QKeySequence(Qt::Key_Enter), this, SLOT(removeSequence()));
    _app_buttons ={ui->app_1,ui->app_2,ui->app_3,ui->app_4,ui->app_5,ui->app_6,ui->app_7,ui->app_8};
    _image_labels = {ui->label_1,ui->label_2,ui->label_3,ui->label_4,ui->label_5,ui->label_6,ui->label_7,ui->label_8};
    for(QPushButton * app:_app_buttons)app->installEventFilter(this);
    readFromFile();
    fill_shortcuts();
}

icon_panel::~icon_panel()
{
    writeToFile();
    delete this->sumbmit;
    this->_app_buttons.clear();
    this -> _image_labels.clear();

    delete ui;
//    delete this;
}

bool icon_panel::eventFilter(QObject *obj, QEvent *event )
{
    int i = 0;
    while (_app_buttons[i]!=obj and i<_app_buttons.size()) {
        ++i;
    }
//    std::vector<QPushButton *>::const_iterator it = std::find(_app_buttons.begin(),_app_buttons.end(),obj);
    if(i==_app_buttons.size())return QWidget::eventFilter(obj, event);;
    if (event->type() == QEvent::MouseButtonPress) {
         QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
         if (mouseEvent->modifiers() == Qt::ShiftModifier and _removal) {
             if(_range.first == -1 ){_range.first=i;}
             else {_range.second = i;}
             mark_for_removal(_app_buttons[i],i+_current_page*9,State::Single);
             if(_range.first != -1 and _range.second != -1 ){
                 range_selection(_range.first,_range.second);
             }

             return true;
         }
    }
    return QWidget::eventFilter(obj, event);
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
    //
    QStringList data_to_save;
    for(auto& i:_shortcuts_class)
    {
      data_to_save.append(i.get_path());
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_4_5);
    out << data_to_save;
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
    QStringList data_from_file;
    in.setVersion(QDataStream::Qt_4_5);
    in >> data_from_file;
    for(int i = 0 ; i< data_from_file.size();++i)
    {
        parse_names(data_from_file.at(i).toLocal8Bit().constData());

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
    _shortcuts_class.emplace_back(extension,name_icon.first,filename,name_icon.second);

}

void icon_panel::setIcon(QLabel * label, QPushButton * button,int current_icon)
{
    QPixmap icon(_shortcuts_class[current_icon].get_path_to_icon());
    icon = icon.scaled(button->width(),label->width(),Qt::KeepAspectRatio);
    button->setIcon(icon);
    button ->setIconSize(icon.rect().size());
//    label -> setPixmap(icon.scaled(label->width(),label->height(),Qt::KeepAspectRatio));

};

void icon_panel::on_addShortCut_clicked()
{
    if(!_removal){

    QStringList filenames = QFileDialog::getOpenFileNames(this,QString("Choose shortcut"),"/","All files (*.*);;Exe files (*.exe);;Pdf files (*pdf)");
    if(filenames.isEmpty())return;
    std::string tmp;
    for (int i=0;i<filenames.count();i++)
     {   tmp=filenames[i].toStdString();
        parse_names(filenames[i]);
     }
    fill_shortcuts();
    }
    else {
        _removal = false;
        removeSequence();
        ui -> removeShortCut ->setText("Remove");
        ui -> removeShortCut -> setStyleSheet("QPushButton { background-color: rgb(211, 10, 0); color: white; border: 1px solid gray; border-radius:10px} QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(188, 71, 66), stop: 1 rgb(209, 70, 64));}");
        return_default_style();
         ui ->addShortCut->setText("Add");
    }
}

void icon_panel::wheelEvent(QWheelEvent *event)
{

    QPoint degrees = event -> angleDelta();
    qDebug()<<degrees.ry()<<degrees.rx()<<_current_page;
    if((degrees.ry()>0) and (_current_page + 8 < _shortcuts_class.size())){
        _current_page += 8;
        fill_shortcuts();
    }
    else if (_current_page > 0 and degrees.ry()<0){
        _current_page -=8;
        fill_shortcuts();
    }
    setStyle(_current_page);
}

void icon_panel::initShortcut(QPushButton * app , QLabel * label , int current_position)
{
    app->show();
    label->show();
    label->setText(QString::fromStdString(_shortcuts_class[current_position].get_filename()));
    setIcon(label,app,current_position);

//    app->setText(QString::fromStdString(_apps[current_position].first));
};

void icon_panel::fill_shortcuts()
{
    int end = 0;
    int i = 0;
    if(_current_page+8<_shortcuts_class.size())end = _current_page + 8;
    else end=_shortcuts_class.size();
    for(i=_current_page;i<end;++i)
    {
        initShortcut(_app_buttons[i%_app_buttons.size()],_image_labels[i%_image_labels.size()],i);
    }
    for(;i<_current_page+8;++i)
    {
        _app_buttons[i%_app_buttons.size()]->hide();
        _image_labels[i%_image_labels.size()]->hide();
    }
}

void icon_panel::on_app_1_clicked()
{

    if(!_removal)execute(0);
//        QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(0 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else {
        mark_for_removal(ui->app_1,0+_current_page,State::Single);
    };
}

void icon_panel::on_app_2_clicked()
{
    if(!_removal)execute(1);
//        QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(1 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else {
        mark_for_removal(ui->app_2,1+_current_page,State::Single);
    }
}

void icon_panel::on_app_3_clicked()
{
    if(!_removal)execute(2);
        //QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(2 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else mark_for_removal(ui->app_3,2+_current_page,State::Single);;
}
void icon_panel::on_app_4_clicked()
{
    if(!_removal)execute(3);
        //QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(3 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else mark_for_removal(ui->app_4,3+_current_page,State::Single);
}
void icon_panel::on_app_5_clicked(){  if(!_removal)execute(4);
        //QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(4 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else mark_for_removal(ui->app_5,4+_current_page,State::Single);
}
void icon_panel::on_app_6_clicked(){ if(!_removal)execute(5);
        //QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(5 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else mark_for_removal(ui->app_6,5+_current_page,State::Single);
}

void icon_panel::on_app_7_clicked()
{
    if(!_removal)execute(6);
        //QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(6 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else mark_for_removal(ui->app_7,6+_current_page,State::Single);;
}

void icon_panel::on_app_8_clicked()
{
    if(!_removal)execute(7);
//        QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts.at(7 + _current_page*9).toLocal8Bit().constData() ,QUrl::TolerantMode));
    else mark_for_removal(ui->app_8,7+_current_page,State::Single);;
}

void icon_panel::on_removeShortCut_clicked()
{
    if(!_removal){
    _removal = true;
    ui ->addShortCut->setText("Done");
    ui -> removeShortCut ->setText("Cancel");
    ui -> removeShortCut -> setStyleSheet("QPushButton { background-color: rgba(255, 210, 50 , 0.7); color: white; border: 1px solid gray; border-radius:10px}QPushButton:hover{ background-color: rgb(255, 210, 50)}");
    }else {
    _to_remove.clear();
    for(int i=0;i<_shortcuts_class.size();++i)
        _shortcuts_class[i].set_removable(false);

    return_default_style();
}


}
void icon_panel::removeSequence()
{
    if(_range.first != -1 and _range.second == -1)return;
    if(_to_remove.empty())return;
    submit_window.show();
    submit_window.setModal(true);
    if(submit_window.exec()){
     for(int i:_to_remove){
     qDebug()<<i;

     _shortcuts_class[i].set_removable(true);

    }

     for (auto it = _shortcuts_class.begin(); it != _shortcuts_class.end(); /* NOTHING */)
          {
            if ((*it).get_removable())
              it = _shortcuts_class.erase(it);
            else
              ++it;
          }


     _removal = false;
    ui ->addShortCut->setText("Add");
    ui -> removeShortCut ->setText("Remove");
    ui -> removeShortCut -> setStyleSheet("QPushButton { background-color: rgb(211, 10, 0); color: white; border: 1px solid gray; border-radius:10px} QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(188, 71, 66), stop: 1 rgb(209, 70, 64));}");
    return_default_style();
    fill_shortcuts();
    _to_remove.clear();
    }else return;
}
void icon_panel::mark_for_removal(QPushButton * app,int index , State current_state){

    std::vector<int>::const_iterator position =std::find (_to_remove.begin(), _to_remove.end(), index);// check is element already marked for removing
    if((current_state==State::Ranged and position == _to_remove.end() )or (current_state==State::Single and position == _to_remove.end() ))
    {//not in the vector for remove - append
        _shortcuts_class[index].set_removable(true);
        app->setStyleSheet("QPushButton{background-color:rgba(160, 8, 33,0.7);border: 1px solid gray;border-radius:10px ; padding-top:0px}QPushButton:hover{background-color:rgb(160, 8, 33)}");
        _to_remove.emplace_back(index);
    }
    else if (current_state==State::Single and position != _to_remove.end())
    {
        //deselecting object for removing
        _shortcuts_class[index].set_removable(false);
        _to_remove.erase(position);
        app->setStyleSheet("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }");
    }


}
void icon_panel::return_default_style()
{
    _range={-1,-1};
    for(QPushButton * app:_app_buttons)
    {
       app->setStyleSheet("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }");
    }

}

void icon_panel::setStyle(int index){ //index - position of this element in shortuct_class vector
for(int i=index;i<index + 8;++i){
    if(_shortcuts_class[i].get_removable())//returns true if removable
    {
        _app_buttons[i%_app_buttons.size()] -> setStyleSheet("QPushButton{background-color:rgba(160, 8, 33,0.7);border: 1px solid gray;border-radius:10px ; padding-top:0px}QPushButton:hover{background-color:rgb(160, 8, 33)}");
    }else {
        _app_buttons[i%_app_buttons.size()]->setStyleSheet("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:0px} QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgba(75, 70, 89 ,0.5), stop: 1 rgba(66, 61, 79,0.7)); }QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }");

}
}
}
void icon_panel::range_selection(int begin , int end){

    int first_el;
    int last_el;
    if(begin>end){first_el= end;last_el=begin;}
    else{first_el=begin;last_el=end;}
    for(int i = first_el;i<last_el;++i)
    {
        mark_for_removal(_app_buttons[i],i+_current_page*9,State::Ranged);
    }
}
void icon_panel::execute(int index)
{
    int current_index = index + _current_page;
    if(_shortcuts_class[current_index].get_extension() == ".sh"){
    QProcess process;
    process.startDetached("/bin/sh", QStringList()<< _shortcuts_class[current_index].get_path());
    }else {
    QDesktopServices::openUrl(QUrl(tr("file:///") + _shortcuts_class[current_index].get_path().toLocal8Bit().constData() ,QUrl::TolerantMode));
}
}


