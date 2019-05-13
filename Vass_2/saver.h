
#ifndef SAVER_H
#define SAVER_H
#include <QJsonValue>
#include <QJsonArray>
#include <QJsonObject>
#include <QFile>
#include <QDebug>
#include <QJsonDocument>
#include <QMediaPlaylist>


class Saver
{
public:
    QString filePath="settings.json";
    Saver();


    void save_music(const QMediaPlaylist& songs);
    QStringList load_music();
    void save_icons();
    void read_icons();
    void save();

    QJsonDocument open_file();
private:
    QJsonObject settings_obj;
    void save_to_file();

};

#endif // SAVER_H
