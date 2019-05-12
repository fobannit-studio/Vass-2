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
        _is_removable = false;

    }
    bool get_removable() const {return _is_removable;}
    std::string get_extension() const {return _extension;}
    std::string get_filename() const {return _filename;}
    QString get_path() const {return _path;}
    QString get_path_to_icon() const {return _icon_path;}
    void set_removable(bool val){_is_removable = val;}
private:
    bool _is_removable; // check is this shortcut should be removed .To remove elements on right position , i first mark them as removable , and then clear all shortcuts with rem==true , to clear elements on their exact positions in vector and prevent out of range overlapping
    std::string _extension;
    std::string _filename;

    QString _path;
    QString _icon_path;
};

#endif // SHORTCUT_H
