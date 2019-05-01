/********************************************************************************
** Form generated from reading UI file 'media_player.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIA_PLAYER_H
#define UI_MEDIA_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Media_Player
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PreviousButton;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QHBoxLayout *horizontalLayout_3;
    QSlider *ProgressSlider;
    QSpinBox *MinutesSpinBox;
    QSpinBox *SecondsSpinBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *ShuffleButton;
    QSlider *VolumeSlider;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *Media_Player)
    {
        if (Media_Player->objectName().isEmpty())
            Media_Player->setObjectName(QString::fromUtf8("Media_Player"));
        Media_Player->resize(400, 400);
        verticalLayout = new QVBoxLayout(Media_Player);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PreviousButton = new QPushButton(Media_Player);
        PreviousButton->setObjectName(QString::fromUtf8("PreviousButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Rubik"));
        font.setPointSize(14);
        PreviousButton->setFont(font);

        horizontalLayout_2->addWidget(PreviousButton);

        PlayButton = new QPushButton(Media_Player);
        PlayButton->setObjectName(QString::fromUtf8("PlayButton"));
        PlayButton->setFont(font);

        horizontalLayout_2->addWidget(PlayButton);

        NextButton = new QPushButton(Media_Player);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rubik"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        NextButton->setFont(font1);

        horizontalLayout_2->addWidget(NextButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ProgressSlider = new QSlider(Media_Player);
        ProgressSlider->setObjectName(QString::fromUtf8("ProgressSlider"));
        ProgressSlider->setValue(0);
        ProgressSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(ProgressSlider);

        MinutesSpinBox = new QSpinBox(Media_Player);
        MinutesSpinBox->setObjectName(QString::fromUtf8("MinutesSpinBox"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Red October"));
        font2.setPointSize(14);
        MinutesSpinBox->setFont(font2);

        horizontalLayout_3->addWidget(MinutesSpinBox);

        SecondsSpinBox = new QSpinBox(Media_Player);
        SecondsSpinBox->setObjectName(QString::fromUtf8("SecondsSpinBox"));
        SecondsSpinBox->setFont(font2);

        horizontalLayout_3->addWidget(SecondsSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddButton = new QPushButton(Media_Player);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setFont(font);

        horizontalLayout->addWidget(AddButton);

        ShuffleButton = new QPushButton(Media_Player);
        ShuffleButton->setObjectName(QString::fromUtf8("ShuffleButton"));
        ShuffleButton->setFont(font);

        horizontalLayout->addWidget(ShuffleButton);

        VolumeSlider = new QSlider(Media_Player);
        VolumeSlider->setObjectName(QString::fromUtf8("VolumeSlider"));
        VolumeSlider->setValue(50);
        VolumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(VolumeSlider);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(Media_Player);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 264));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Media_Player);

        QMetaObject::connectSlotsByName(Media_Player);
    } // setupUi

    void retranslateUi(QWidget *Media_Player)
    {
        Media_Player->setWindowTitle(QApplication::translate("Media_Player", "Media Player", nullptr));
        PreviousButton->setText(QApplication::translate("Media_Player", "Previous", nullptr));
        PlayButton->setText(QApplication::translate("Media_Player", "Play", nullptr));
        NextButton->setText(QApplication::translate("Media_Player", "Next", nullptr));
        AddButton->setText(QApplication::translate("Media_Player", "Add", nullptr));
        ShuffleButton->setText(QApplication::translate("Media_Player", "Shuffle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Media_Player: public Ui_Media_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIA_PLAYER_H
