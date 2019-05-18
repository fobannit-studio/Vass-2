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

class shortcut_v
{
public:
    std::vector<Shortcut> _shortcuts_class;
    QString _shortcuts_file;
    std::regex _app_parser{R"((.*)\/(.*)(\..*)$)"};
    std::vector<std::string> _image_ext{".png",".jpg",".bmp",".svg"};
    std::vector<std::string> _doc_ext{".pdf",".doc",".lib",".csv"};
    shortcut_v();
    void parse_names(QString);
    void writeToFile();
    void readFromFile();
};

#endif // SHORTCUT_V_H
