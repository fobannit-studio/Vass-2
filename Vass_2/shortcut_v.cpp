#include "shortcut_v.h"
#include <QString>
#include <QFileInfo>

shortcut_v * shortcut_v::Shortcuts_Base = nullptr;


shortcut_v::shortcut_v()
{
    qDebug() << "created new Shortcut vector";
    _shortcuts_file = QObject::tr("shortcuts.abk");
    _summirized_weight = 0;
    readFromFile();


}

void shortcut_v::writeToFile()
{
    if(_shortcuts_file.isEmpty())return;
    QFile file(_shortcuts_file);
    if(!file.open(QIODevice::WriteOnly))
    {
//        QMessageBox::information(this,tr("Unable to open the file"),file.errorString());
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

void shortcut_v::readFromFile()
{
    if(_shortcuts_file.isEmpty())return;
    QFile file(_shortcuts_file);
    if(!file.open(QIODevice::ReadOnly))
    {
//        QMessageBox::information(this,tr("Unable to open window"),file.errorString());
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

void shortcut_v::parse_names(QString filename)
{
//    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::smatch matches;
    std::string path = filename.toStdString();
    std::regex_search(path,matches,_app_parser);
    path = matches[1];
    std::string app = matches[2];
    std::string extension = matches[3];
    std::pair<std::string,QString> name_icon;
    bool is_image = false;
    bool exist = false;
    std::string icon_path;
    for(auto ext:_image_ext)
    {
        QFileInfo check_file(QString::fromStdString(path + "/" + app + ext));
        if(check_file.exists())
        {
            icon_path = path + "/" + app + ext;
            exist = true;
            break;
        }
    }

    if(std::find(_image_ext.begin(), _image_ext.end(), extension) != _image_ext.end())
    {
        is_image = true;
        name_icon = std::make_pair(app + extension,QString::fromStdString(":/icons/images/picture.png"));
    }
    else if(std::find(_doc_ext.begin(), _doc_ext.end(), extension) != _doc_ext.end())
    {
        name_icon = std::make_pair(app + extension,QString::fromStdString(":/icons/images/contract.png"));

    }
    else if (exist){
        name_icon = std::make_pair(app,QString::fromStdString(icon_path));
    }
    else {
        name_icon = std::make_pair(app,QString::fromStdString(":/icons/images/question-mark-button.png"));
    }

    _shortcuts_class.emplace_back(extension,name_icon.first,filename,name_icon.second,is_image);

}
