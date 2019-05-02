/********************************************************************************
** Form generated from reading UI file 'icon_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICON_PANEL_H
#define UI_ICON_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_icon_panel
{
public:
    QPushButton *addShortCut;
    QPushButton *app_1;
    QPushButton *app_2;
    QPushButton *app_3;
    QPushButton *app_4;
    QPushButton *app_5;
    QPushButton *app_6;
    QPushButton *app_7;
    QPushButton *app_8;

    void setupUi(QWidget *icon_panel)
    {
        if (icon_panel->objectName().isEmpty())
            icon_panel->setObjectName(QStringLiteral("icon_panel"));
        icon_panel->resize(300, 150);
        addShortCut = new QPushButton(icon_panel);
        addShortCut->setObjectName(QStringLiteral("addShortCut"));
        addShortCut->setGeometry(QRect(100, 50, 100, 50));
        addShortCut->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; border-radius:10px} QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }"));
        app_1 = new QPushButton(icon_panel);
        app_1->setObjectName(QStringLiteral("app_1"));
        app_1->setGeometry(QRect(0, 1, 100, 50));
        app_1->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_2 = new QPushButton(icon_panel);
        app_2->setObjectName(QStringLiteral("app_2"));
        app_2->setGeometry(QRect(100, 0, 100, 50));
        app_2->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_3 = new QPushButton(icon_panel);
        app_3->setObjectName(QStringLiteral("app_3"));
        app_3->setGeometry(QRect(200, 0, 100, 50));
        app_3->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_4 = new QPushButton(icon_panel);
        app_4->setObjectName(QStringLiteral("app_4"));
        app_4->setGeometry(QRect(0, 50, 100, 50));
        app_4->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_5 = new QPushButton(icon_panel);
        app_5->setObjectName(QStringLiteral("app_5"));
        app_5->setGeometry(QRect(200, 50, 100, 50));
        app_5->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_6 = new QPushButton(icon_panel);
        app_6->setObjectName(QStringLiteral("app_6"));
        app_6->setGeometry(QRect(0, 100, 100, 50));
        app_6->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_7 = new QPushButton(icon_panel);
        app_7->setObjectName(QStringLiteral("app_7"));
        app_7->setGeometry(QRect(100, 100, 100, 50));
        app_7->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_8 = new QPushButton(icon_panel);
        app_8->setObjectName(QStringLiteral("app_8"));
        app_8->setGeometry(QRect(200, 100, 100, 50));
        app_8->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px } \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));

        retranslateUi(icon_panel);

        QMetaObject::connectSlotsByName(icon_panel);
    } // setupUi

    void retranslateUi(QWidget *icon_panel)
    {
        icon_panel->setWindowTitle(QApplication::translate("icon_panel", "Form", Q_NULLPTR));
        addShortCut->setText(QApplication::translate("icon_panel", "Add Shortcut", Q_NULLPTR));
        app_1->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
        app_2->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
        app_3->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
        app_4->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
        app_5->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
        app_6->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
        app_7->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
        app_8->setText(QApplication::translate("icon_panel", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class icon_panel: public Ui_icon_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICON_PANEL_H
