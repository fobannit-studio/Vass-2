#ifndef SHORTCUT_H
#define SHORTCUT_H
#include<string>
#include<QString>
class Shortcut
{
public:
    Shortcut(std::string extension, std::string filename,QString path,QString icon_path)
    {
        _extension=extension;
        _filename=filename;
        _path=path;
        _icon_path=icon_path;

    };
    std::string get_extension(){return _extension;}
    std::string get_filename(){return _filename;}
    QString get_path(){return _path;}
    QString get_path_to_icon(){return _icon_path;}
private:
    std::string _extension;
    std::string _filename;
    QString _path;
    QString _icon_path;
};

#endif // SHORTCUT_H
