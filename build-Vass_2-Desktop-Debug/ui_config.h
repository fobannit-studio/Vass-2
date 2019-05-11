/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QPushButton *app_config;
    QPushButton *mp_config;
    QPushButton *ic_config;
    QLabel *MainLayout;
    QWidget *MainSettings;
    QGridLayout *Main_settins;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QKeySequenceEdit *keySequenceEdit_5;
    QKeySequenceEdit *keySequenceEdit;
    QKeySequenceEdit *keySequenceEdit_6;
    QKeySequenceEdit *keySequenceEdit_3;
    QLabel *label_6;
    QKeySequenceEdit *keySequenceEdit_4;
    QLabel *label_3;
    QKeySequenceEdit *keySequenceEdit_2;
    QCheckBox *checkBox_5;
    QLabel *label;
    QLabel *label_4;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QLabel *label_5;
    QCheckBox *checkBox_4;
    QWidget *Music_Player_settings;
    QGridLayout *MP_settings;
    QLabel *label_7;
    QWidget *Quick_Panel_settings;
    QGridLayout *Quick_panel_sett;
    QLabel *label_8;

    void setupUi(QWidget *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(600, 500);
        app_config = new QPushButton(config);
        app_config->setObjectName(QStringLiteral("app_config"));
        app_config->setGeometry(QRect(0, 0, 150, 50));
        app_config->setStyleSheet(QStringLiteral("QPushButton{text-align:top;padding-top:10px;border:1px solid lightgrey;background-color:white;border-radius:10px ;color:lightgery}"));
        mp_config = new QPushButton(config);
        mp_config->setObjectName(QStringLiteral("mp_config"));
        mp_config->setGeometry(QRect(150, 0, 121, 50));
        mp_config->setStyleSheet(QStringLiteral("QPushButton{text-align:top;padding-top:10px;border:1px solid lightgrey;background-color:white;border-radius:10px ;color:lightgery}"));
        ic_config = new QPushButton(config);
        ic_config->setObjectName(QStringLiteral("ic_config"));
        ic_config->setGeometry(QRect(269, 0, 191, 50));
        ic_config->setStyleSheet(QStringLiteral("QPushButton{text-align:top;padding-top:10px;border:1px solid lightgrey;background-color:white;border-radius:10px ;color:lightgery}"));
        MainLayout = new QLabel(config);
        MainLayout->setObjectName(QStringLiteral("MainLayout"));
        MainLayout->setGeometry(QRect(0, 30, 600, 470));
        MainLayout->setAutoFillBackground(false);
        MainLayout->setStyleSheet(QStringLiteral("QLabel{background-color:white;}"));
        MainSettings = new QWidget(config);
        MainSettings->setObjectName(QStringLiteral("MainSettings"));
        MainSettings->setGeometry(QRect(33, 130, 551, 351));
        Main_settins = new QGridLayout(MainSettings);
        Main_settins->setObjectName(QStringLiteral("Main_settins"));
        checkBox_3 = new QCheckBox(MainSettings);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        Main_settins->addWidget(checkBox_3, 2, 1, 1, 1);

        checkBox = new QCheckBox(MainSettings);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        Main_settins->addWidget(checkBox, 0, 1, 1, 1);

        keySequenceEdit_5 = new QKeySequenceEdit(MainSettings);
        keySequenceEdit_5->setObjectName(QStringLiteral("keySequenceEdit_5"));

        Main_settins->addWidget(keySequenceEdit_5, 4, 2, 1, 1);

        keySequenceEdit = new QKeySequenceEdit(MainSettings);
        keySequenceEdit->setObjectName(QStringLiteral("keySequenceEdit"));

        Main_settins->addWidget(keySequenceEdit, 0, 2, 1, 1);

        keySequenceEdit_6 = new QKeySequenceEdit(MainSettings);
        keySequenceEdit_6->setObjectName(QStringLiteral("keySequenceEdit_6"));

        Main_settins->addWidget(keySequenceEdit_6, 5, 2, 1, 1);

        keySequenceEdit_3 = new QKeySequenceEdit(MainSettings);
        keySequenceEdit_3->setObjectName(QStringLiteral("keySequenceEdit_3"));

        Main_settins->addWidget(keySequenceEdit_3, 2, 2, 1, 1);

        label_6 = new QLabel(MainSettings);
        label_6->setObjectName(QStringLiteral("label_6"));

        Main_settins->addWidget(label_6, 5, 0, 1, 1);

        keySequenceEdit_4 = new QKeySequenceEdit(MainSettings);
        keySequenceEdit_4->setObjectName(QStringLiteral("keySequenceEdit_4"));

        Main_settins->addWidget(keySequenceEdit_4, 3, 2, 1, 1);

        label_3 = new QLabel(MainSettings);
        label_3->setObjectName(QStringLiteral("label_3"));

        Main_settins->addWidget(label_3, 3, 0, 1, 1);

        keySequenceEdit_2 = new QKeySequenceEdit(MainSettings);
        keySequenceEdit_2->setObjectName(QStringLiteral("keySequenceEdit_2"));

        Main_settins->addWidget(keySequenceEdit_2, 1, 2, 1, 1);

        checkBox_5 = new QCheckBox(MainSettings);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        Main_settins->addWidget(checkBox_5, 4, 1, 1, 1);

        label = new QLabel(MainSettings);
        label->setObjectName(QStringLiteral("label"));

        Main_settins->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(MainSettings);
        label_4->setObjectName(QStringLiteral("label_4"));

        Main_settins->addWidget(label_4, 2, 0, 1, 1);

        checkBox_6 = new QCheckBox(MainSettings);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        Main_settins->addWidget(checkBox_6, 5, 1, 1, 1);

        checkBox_2 = new QCheckBox(MainSettings);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        Main_settins->addWidget(checkBox_2, 1, 1, 1, 1);

        label_2 = new QLabel(MainSettings);
        label_2->setObjectName(QStringLiteral("label_2"));

        Main_settins->addWidget(label_2, 4, 0, 1, 1);

        label_5 = new QLabel(MainSettings);
        label_5->setObjectName(QStringLiteral("label_5"));

        Main_settins->addWidget(label_5, 0, 0, 1, 1);

        checkBox_4 = new QCheckBox(MainSettings);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        Main_settins->addWidget(checkBox_4, 3, 1, 1, 1);

        Music_Player_settings = new QWidget(config);
        Music_Player_settings->setObjectName(QStringLiteral("Music_Player_settings"));
        Music_Player_settings->setGeometry(QRect(30, 130, 551, 351));
        MP_settings = new QGridLayout(Music_Player_settings);
        MP_settings->setObjectName(QStringLiteral("MP_settings"));
        label_7 = new QLabel(Music_Player_settings);
        label_7->setObjectName(QStringLiteral("label_7"));

        MP_settings->addWidget(label_7, 0, 0, 1, 1);

        Quick_Panel_settings = new QWidget(config);
        Quick_Panel_settings->setObjectName(QStringLiteral("Quick_Panel_settings"));
        Quick_Panel_settings->setGeometry(QRect(29, 130, 551, 351));
        Quick_panel_sett = new QGridLayout(Quick_Panel_settings);
        Quick_panel_sett->setObjectName(QStringLiteral("Quick_panel_sett"));
        label_8 = new QLabel(Quick_Panel_settings);
        label_8->setObjectName(QStringLiteral("label_8"));

        Quick_panel_sett->addWidget(label_8, 0, 0, 1, 1);


        retranslateUi(config);

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QWidget *config)
    {
        config->setWindowTitle(QApplication::translate("config", "Form", Q_NULLPTR));
        app_config->setText(QApplication::translate("config", "Main settings", Q_NULLPTR));
        mp_config->setText(QApplication::translate("config", "Music player", Q_NULLPTR));
        ic_config->setText(QApplication::translate("config", "Quick panel settings", Q_NULLPTR));
        MainLayout->setText(QString());
        checkBox_3->setText(QApplication::translate("config", "On/off", Q_NULLPTR));
        checkBox->setText(QApplication::translate("config", "On/off", Q_NULLPTR));
        label_6->setText(QApplication::translate("config", "Notes", Q_NULLPTR));
        label_3->setText(QApplication::translate("config", "Clock", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("config", "On/off", Q_NULLPTR));
        label->setText(QApplication::translate("config", "Book shelf", Q_NULLPTR));
        label_4->setText(QApplication::translate("config", "Quick panel", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("config", "On/off", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("config", "On/off", Q_NULLPTR));
        label_2->setText(QApplication::translate("config", "Painter", Q_NULLPTR));
        label_5->setText(QApplication::translate("config", "Music player                                            ", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("config", "On/off", Q_NULLPTR));
        label_7->setText(QApplication::translate("config", "Music Player settings", Q_NULLPTR));
        label_8->setText(QApplication::translate("config", "Quick panel settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
