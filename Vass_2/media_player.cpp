#include "media_player.h"
#include "ui_media_player.h"
#include <QLabel>
#include <regex>
#include <QtDebug>
Media_Player::Media_Player(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Media_Player)
{
    ui->setupUi(this);
    m_player=new QMediaPlayer(this);
    m_player->setPlaylist(&playlist);
    connect(m_player,&QMediaPlayer::positionChanged,this,&Media_Player::on_positionChanged);
    connect(m_player,&QMediaPlayer::durationChanged,this,&Media_Player::on_durationChanged);
    connect(m_player,&QMediaPlayer::mediaChanged,this,&Media_Player::on_media_Changed);
}

Media_Player::~Media_Player()

{

    delete this->m_player;
    delete ui;

}

void Media_Player::on_ProgressSlider_sliderMoved(int position)
{
  m_player->setPosition(position);

}



void Media_Player::on_PlayButton_clicked()
{

  if (ui->PlayButton->text()=="Play")
  {

      if (m_player->mediaStatus()==QMediaPlayer::NoMedia) {playlist.setCurrentIndex(0); m_player->play();}
      else
      {
          ui->PlayButton->setText("Pause");
          m_player->play();
      }

  }

  else
  {
      ui->PlayButton->setText("Play");
      m_player->pause();
  }

}

void Media_Player::on_durationChanged(quint64 position)
{

   ui->ProgressSlider->setMaximum(position);

}
void Media_Player::on_positionChanged(quint64 position)
{
   ui->ProgressSlider->setValue(position);
   short int minutes=(int)position/60000;
   ui->MinutesSpinBox->setValue(minutes);
   ui->SecondsSpinBox->setValue((short int)((position-minutes*60000)/1000));

}

void Media_Player::on_media_Changed()
{


    m_player->play();

}

void Media_Player::add_files(const QStringList& filenames )
{   qWarning("hit");
    if (!filenames.isEmpty())
    {   std::string tmp;
        for (int i=0;i<filenames.count();i++)
        {
            playlist.addMedia(QMediaContent(filenames[i]));

            tmp=filenames[i].toStdString();
            tmp=tmp.substr(tmp.find_last_of("/")+1);

            ui->listWidget->addItem(QString::fromStdString(tmp));

        }

    }
}

void Media_Player::on_AddButton_clicked()
{
    QStringList filenames = QFileDialog::getOpenFileNames(this,"Select Media Files","/",tr("Media Files(*.mp3 *.waw *.ogg *.m4a)"));

   add_files(filenames);


}

void Media_Player::on_VolumeSlider_valueChanged(int value)
{
    m_player->setVolume(value);
}


void Media_Player::on_listWidget_itemDoubleClicked()
{
   playlist.setCurrentIndex( ui->listWidget->currentRow());

   this->m_player->play();
   ui->PlayButton->setText("Pause");
}

void Media_Player::on_PreviousButton_clicked()
{
    playlist.setCurrentIndex(playlist.previousIndex());

    m_player->play();
    ui->PlayButton->setText("Pause");
}

void Media_Player::on_NextButton_clicked()
{
    playlist.setCurrentIndex(playlist.nextIndex());

    m_player->play();
    ui->PlayButton->setText("Pause");
}

void Media_Player::on_RepeatButton_clicked()
{
    if (playlist.playbackMode()==playlist.Loop)
    {
        playlist.setPlaybackMode(playlist.Random);
        ui->RepeatButton->setText("Mode: Random");
    }
    else if (playlist.playbackMode()==playlist.Random)
    {
        playlist.setPlaybackMode(playlist.Sequential);
        ui->RepeatButton->setText("Mode: Sequential");
    }
    else if (playlist.playbackMode()==playlist.Sequential)
    {
        playlist.setPlaybackMode(playlist.CurrentItemOnce);
        ui->RepeatButton->setText("Mode: One Song One Time");
    }
    else if (playlist.playbackMode()==playlist.CurrentItemOnce)
    {
        playlist.setPlaybackMode(playlist.CurrentItemInLoop);
        ui->RepeatButton->setText("Mode: Repeat One Song");
    }
    else if (playlist.playbackMode()==playlist.CurrentItemInLoop)
    {
        playlist.setPlaybackMode(playlist.Loop);
        ui->RepeatButton->setText("Mode: Repeat All");
    }

}
