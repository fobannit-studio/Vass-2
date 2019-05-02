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
#include <QtWidgets/QLabel>
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
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_1;
    QButtonGroup *application_buttons;

    void setupUi(QWidget *icon_panel)
    {
        if (icon_panel->objectName().isEmpty())
            icon_panel->setObjectName(QStringLiteral("icon_panel"));
        icon_panel->resize(300, 270);
        addShortCut = new QPushButton(icon_panel);
        addShortCut->setObjectName(QStringLiteral("addShortCut"));
        addShortCut->setGeometry(QRect(100, 110, 100, 50));
        addShortCut->setStyleSheet(QStringLiteral("QPushButton { background-color: rgb(255, 151, 57); color: white; border: 1px solid gray; border-radius:10px} QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }"));
        app_1 = new QPushButton(icon_panel);
        application_buttons = new QButtonGroup(icon_panel);
        application_buttons->setObjectName(QStringLiteral("application_buttons"));
        application_buttons->addButton(app_1);
        app_1->setObjectName(QStringLiteral("app_1"));
        app_1->setGeometry(QRect(10, 0, 80, 90));
        app_1->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_2 = new QPushButton(icon_panel);
        application_buttons->addButton(app_2);
        app_2->setObjectName(QStringLiteral("app_2"));
        app_2->setGeometry(QRect(110, 0, 80, 90));
        app_2->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_3 = new QPushButton(icon_panel);
        application_buttons->addButton(app_3);
        app_3->setObjectName(QStringLiteral("app_3"));
        app_3->setGeometry(QRect(210, 0, 80, 90));
        app_3->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_4 = new QPushButton(icon_panel);
        application_buttons->addButton(app_4);
        app_4->setObjectName(QStringLiteral("app_4"));
        app_4->setGeometry(QRect(10, 90, 80, 90));
        app_4->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_5 = new QPushButton(icon_panel);
        application_buttons->addButton(app_5);
        app_5->setObjectName(QStringLiteral("app_5"));
        app_5->setGeometry(QRect(210, 90, 80, 90));
        app_5->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_6 = new QPushButton(icon_panel);
        application_buttons->addButton(app_6);
        app_6->setObjectName(QStringLiteral("app_6"));
        app_6->setGeometry(QRect(10, 180, 80, 90));
        app_6->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_7 = new QPushButton(icon_panel);
        application_buttons->addButton(app_7);
        app_7->setObjectName(QStringLiteral("app_7"));
        app_7->setGeometry(QRect(110, 180, 80, 90));
        app_7->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        app_8 = new QPushButton(icon_panel);
        application_buttons->addButton(app_8);
        app_8->setObjectName(QStringLiteral("app_8"));
        app_8->setGeometry(QRect(210, 180, 80, 90));
        app_8->setStyleSheet(QLatin1String("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:40px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(115, 175, 215), stop: 1 rgb(175, 175, 215)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7); }"));
        label_2 = new QLabel(icon_panel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 10, 51, 41));
        label_2->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(icon_panel);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 0, 61, 50));
        label_3->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(icon_panel);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 180, 61, 50));
        label_7->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(icon_panel);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 180, 51, 50));
        label_8->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(icon_panel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 61, 50));
        label_6->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(icon_panel);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 90, 61, 50));
        label_5->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(icon_panel);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(19, 90, 61, 50));
        label_4->setFrameShadow(QFrame::Raised);
        label_1 = new QLabel(icon_panel);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(20, 0, 61, 61));
        label_1->setFrameShadow(QFrame::Raised);

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
        label_2->setText(QString());
        label_3->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        label_8->setText(QString());
        label_6->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
        label_1->setText(QApplication::translate("icon_panel", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class icon_panel: public Ui_icon_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICON_PANEL_H
