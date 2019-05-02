#include "media_player.h"
#include "ui_media_player.h"
#include <iostream>
#include <QLabel>
#include <iostream>
#include <regex>
Media_Player::Media_Player(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Media_Player)
{
    ui->setupUi(this);
    m_player=new QMediaPlayer(this);
    connect(m_player,&QMediaPlayer::positionChanged,this,&Media_Player::on_positionChanged);
    connect(m_player,&QMediaPlayer::durationChanged,this,&Media_Player::on_durationChanged);

}

Media_Player::~Media_Player()
{
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

      if (m_player->mediaStatus()==QMediaPlayer::NoMedia) m_player->setMedia(QUrl::fromLocalFile(songs[0]));
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



void Media_Player::on_AddButton_clicked()
{
    QStringList filenames = QFileDialog::getOpenFileNames(this,"Select Media Files","/",tr("Media Files(*.mp3 *.waw *.ogg *.m4a)"));
    songs.append(filenames);

    std::string tmp;
    if (!filenames.isEmpty())
    {
        for (int i=0;i<songs.count();i++)
        {   tmp=songs[i].toStdString();
            tmp=tmp.substr(tmp.find_last_of("/")+1);
            std::cout<<tmp<<std::endl;
            ui->listWidget->addItem(QString::fromStdString(tmp));
        }
    }
}

void Media_Player::on_VolumeSlider_valueChanged(int value)
{
    m_player->setVolume(value);
}


void Media_Player::on_listWidget_itemDoubleClicked()
{
   m_player->setMedia(QUrl::fromLocalFile(songs[ui->listWidget->currentRow()]));
   m_player->play();
   ui->PlayButton->setText("Play");
}
