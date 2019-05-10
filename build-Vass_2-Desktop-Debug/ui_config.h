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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QPushButton *app_config;
    QPushButton *mp_config;
    QPushButton *lib_config;
    QPushButton *ic_config;
    QLabel *Layout;

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
        mp_config->setGeometry(QRect(150, 0, 150, 50));
        mp_config->setStyleSheet(QStringLiteral("QPushButton{text-align:top;padding-top:10px;border:1px solid lightgrey;background-color:white;border-radius:10px ;color:lightgery}"));
        lib_config = new QPushButton(config);
        lib_config->setObjectName(QStringLiteral("lib_config"));
        lib_config->setGeometry(QRect(450, 0, 150, 50));
        lib_config->setStyleSheet(QStringLiteral("QPushButton{text-align:top;padding-top:10px;border:1px solid lightgrey;background-color:white;border-radius:10px ;color:lightgery}"));
        ic_config = new QPushButton(config);
        ic_config->setObjectName(QStringLiteral("ic_config"));
        ic_config->setGeometry(QRect(300, 0, 150, 50));
        ic_config->setStyleSheet(QStringLiteral("QPushButton{text-align:top;padding-top:10px;border:1px solid lightgrey;background-color:white;border-radius:10px ;color:lightgery}"));
        Layout = new QLabel(config);
        Layout->setObjectName(QStringLiteral("Layout"));
        Layout->setGeometry(QRect(0, 30, 600, 470));
        Layout->setAutoFillBackground(false);
        Layout->setStyleSheet(QStringLiteral("QLabel{background-color:white;}"));

        retranslateUi(config);

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QWidget *config)
    {
        config->setWindowTitle(QApplication::translate("config", "Form", Q_NULLPTR));
        app_config->setText(QApplication::translate("config", "Main settings", Q_NULLPTR));
        mp_config->setText(QApplication::translate("config", "Music player", Q_NULLPTR));
        lib_config->setText(QApplication::translate("config", "Library", Q_NULLPTR));
        ic_config->setText(QApplication::translate("config", "Quick panel settings", Q_NULLPTR));
        Layout->setText(QApplication::translate("config", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
