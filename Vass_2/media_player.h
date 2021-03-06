#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include <QWidget>
#include <QMediaPlayer>
#include <QFileDialog>
#include <QtDebug>
#include <QListWidgetItem>
#include <QMediaPlaylist>
namespace Ui {
class Media_Player;
}

class Media_Player : public QWidget
{
    Q_OBJECT

public:
    explicit Media_Player(QWidget *parent = nullptr);
    ~Media_Player();
     QMediaPlaylist playlist;

     void add_files(const QStringList& filenames);
private slots:
    void on_ProgressSlider_sliderMoved(int position);


    void on_PlayButton_clicked();

    void on_durationChanged(quint64 position);
    void on_positionChanged(quint64 position);
    void on_media_Changed();
    void on_AddButton_clicked();

    void on_VolumeSlider_valueChanged(int value);


    void on_listWidget_itemDoubleClicked();

    void on_PreviousButton_clicked();

    void on_NextButton_clicked();

    void on_RepeatButton_clicked();

private:
    Ui::Media_Player *ui;
    QMediaPlayer* m_player;

    int current_song=0;

};

#endif // MEDIA_PLAYER_H
