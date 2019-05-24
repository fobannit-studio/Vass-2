#ifndef SHORTCUT_V_H
#define SHORTCUT_V_H
#include<vector>
#include<string>
#include<regex>
#include"shortcut.h"
#include<QString>
#include <QFile>
#include<QIODevice>
#include<QDataStream>
#include<QMessageBox>
#include<QTranslator>
#include<QObject>
#include<QDebug>


enum class State{Ranged,Single};
class shortcut_v
{
private:
    static shortcut_v * Shortcuts_Base;
    shortcut_v();
public:

//singleton class
    static shortcut_v * Initialialize(){
        if(Shortcuts_Base == nullptr)Shortcuts_Base = new shortcut_v;
        return Shortcuts_Base;
    }
    int _icons;
    int _player;
    int _time;
    int _config;
    std::vector<Shortcut> _shortcuts_class;
    std::vector<int> _hotKeys;
    QString _shortcuts_file;
    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::vector<std::string> _image_ext{".png",".jpg",".bmp",".svg",".ico"};
    std::vector<std::string> _doc_ext{".pdf",".doc",".lib",".csv",".odt"};
    long int _summirized_weight; // sum of weighted elements in shortcuts
    void parse_names(QString);
    void writeToFile();
    void readFromFile();
    int return_key_code(QString);

};

#endif // SHORTCUT_V_H
