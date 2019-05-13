#include "saver.h"
#include <fstream>

Saver::Saver()
{


}
QJsonDocument Saver::open_file()
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
            qWarning("Couldn't open save file.");

        }
    QByteArray tmp = file.readAll();
    file.close();


    return QJsonDocument::fromJson(tmp);
}
void Saver::save()
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
            qWarning("Couldn't open save file.");
            return;
        }

    file.write(QJsonDocument(settings_obj).toJson());


    file.close();
    qWarning("saved");

}
void Saver::save_music(const QMediaPlaylist& songs)
{
  QJsonArray arr;
  for (int i=0;i<songs.mediaCount();i++)
  {
      arr.append(songs.media(i).canonicalUrl().toString());
  }

  this->settings_obj.insert("song list",arr);
  save();
}

QStringList Saver::load_music()
{

  QJsonDocument Saved_Data= open_file();
  QJsonArray songlist=Saved_Data["song list"].toArray();
  QStringList arr;
  for (auto item : songlist)
  {
   arr.append(item.toString());
  }
  return arr;




}










