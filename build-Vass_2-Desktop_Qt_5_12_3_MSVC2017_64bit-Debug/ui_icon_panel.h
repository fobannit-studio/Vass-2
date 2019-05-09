/********************************************************************************
** Form generated from reading UI file 'icon_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICON_PANEL_H
#define UI_ICON_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_icon_panel
{
public:
    QPushButton *addShortCut;
    QPushButton *app_1;
    QLabel *label_1;
    QPushButton *removeShortCut;
    QPushButton *app_2;
    QLabel *label_2;
    QPushButton *app_3;
    QLabel *label_3;
    QPushButton *app_4;
    QLabel *label_4;
    QPushButton *app_5;
    QLabel *label_5;
    QPushButton *app_6;
    QLabel *label_6;
    QPushButton *app_7;
    QLabel *label_7;
    QPushButton *app_8;
    QLabel *label_8;
    QButtonGroup *application_buttons;

    void setupUi(QWidget *icon_panel)
    {
        if (icon_panel->objectName().isEmpty())
            icon_panel->setObjectName(QString::fromUtf8("icon_panel"));
        icon_panel->resize(421, 382);
        icon_panel->setStyleSheet(QString::fromUtf8("QWidget{background-color:rgba(61, 58, 86, 0.5);}"));
        addShortCut = new QPushButton(icon_panel);
        addShortCut->setObjectName(QString::fromUtf8("addShortCut"));
        addShortCut->setGeometry(QRect(130, 140, 80, 100));
        addShortCut->setStyleSheet(QString::fromUtf8("QPushButton { background-color:rgb(255, 119, 0); color: white; border: 1px solid gray; border-radius:10px} QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(239, 134, 14), stop: 1 rgb(247, 140, 17))}"));
        app_1 = new QPushButton(icon_panel);
        application_buttons = new QButtonGroup(icon_panel);
        application_buttons->setObjectName(QString::fromUtf8("application_buttons"));
        application_buttons->addButton(app_1);
        app_1->setObjectName(QString::fromUtf8("app_1"));
        app_1->setGeometry(QRect(0, 0, 120, 120));
        app_1->setCursor(QCursor(Qt::ArrowCursor));
        app_1->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_1 = new QLabel(icon_panel);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(15, 0, 90, 90));
        label_1->setCursor(QCursor(Qt::ArrowCursor));
        label_1->setFrameShadow(QFrame::Raised);
        removeShortCut = new QPushButton(icon_panel);
        removeShortCut->setObjectName(QString::fromUtf8("removeShortCut"));
        removeShortCut->setGeometry(QRect(210, 140, 80, 100));
        removeShortCut->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(211, 10, 0); color: white; border: 1px solid gray; border-radius:10px} QPushButton:pressed { background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739); }\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(188, 71, 66), stop: 1 rgb(209, 70, 64));}"));
        app_2 = new QPushButton(icon_panel);
        app_2->setObjectName(QString::fromUtf8("app_2"));
        app_2->setGeometry(QRect(150, 0, 120, 120));
        app_2->setCursor(QCursor(Qt::ArrowCursor));
        app_2->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_2 = new QLabel(icon_panel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(165, 0, 90, 90));
        label_2->setCursor(QCursor(Qt::ArrowCursor));
        label_2->setFrameShadow(QFrame::Raised);
        app_3 = new QPushButton(icon_panel);
        app_3->setObjectName(QString::fromUtf8("app_3"));
        app_3->setGeometry(QRect(300, 0, 120, 120));
        app_3->setCursor(QCursor(Qt::ArrowCursor));
        app_3->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_3 = new QLabel(icon_panel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(315, 0, 90, 90));
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setFrameShadow(QFrame::Raised);
        app_4 = new QPushButton(icon_panel);
        app_4->setObjectName(QString::fromUtf8("app_4"));
        app_4->setGeometry(QRect(0, 130, 120, 120));
        app_4->setCursor(QCursor(Qt::ArrowCursor));
        app_4->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_4 = new QLabel(icon_panel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(15, 130, 90, 90));
        label_4->setCursor(QCursor(Qt::ArrowCursor));
        label_4->setFrameShadow(QFrame::Raised);
        app_5 = new QPushButton(icon_panel);
        app_5->setObjectName(QString::fromUtf8("app_5"));
        app_5->setGeometry(QRect(300, 130, 120, 120));
        app_5->setCursor(QCursor(Qt::ArrowCursor));
        app_5->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_5 = new QLabel(icon_panel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(315, 130, 90, 90));
        label_5->setCursor(QCursor(Qt::ArrowCursor));
        label_5->setFrameShadow(QFrame::Raised);
        app_6 = new QPushButton(icon_panel);
        app_6->setObjectName(QString::fromUtf8("app_6"));
        app_6->setGeometry(QRect(0, 260, 120, 120));
        app_6->setCursor(QCursor(Qt::ArrowCursor));
        app_6->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_6 = new QLabel(icon_panel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(15, 260, 90, 90));
        label_6->setCursor(QCursor(Qt::ArrowCursor));
        label_6->setFrameShadow(QFrame::Raised);
        app_7 = new QPushButton(icon_panel);
        app_7->setObjectName(QString::fromUtf8("app_7"));
        app_7->setGeometry(QRect(150, 260, 120, 120));
        app_7->setCursor(QCursor(Qt::ArrowCursor));
        app_7->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_7 = new QLabel(icon_panel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(165, 260, 90, 90));
        label_7->setCursor(QCursor(Qt::ArrowCursor));
        label_7->setFrameShadow(QFrame::Raised);
        app_8 = new QPushButton(icon_panel);
        app_8->setObjectName(QString::fromUtf8("app_8"));
        app_8->setGeometry(QRect(300, 260, 120, 120));
        app_8->setCursor(QCursor(Qt::ArrowCursor));
        app_8->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgb(215, 215, 215); border: 1px solid gray;border-radius:10px ; padding-top:90px} \n"
"\n"
"QPushButton:hover{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(75, 70, 89), stop: 1 rgb(66, 61, 79)); }\n"
"QPushButton:pressed{ background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(94, 100, 127), stop: 1 rgb(91, 97, 124)); }"));
        label_8 = new QLabel(icon_panel);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(315, 260, 90, 90));
        label_8->setCursor(QCursor(Qt::ArrowCursor));
        label_8->setFrameShadow(QFrame::Raised);

        retranslateUi(icon_panel);

        QMetaObject::connectSlotsByName(icon_panel);
    } // setupUi

    void retranslateUi(QWidget *icon_panel)
    {
        icon_panel->setWindowTitle(QApplication::translate("icon_panel", "Form", nullptr));
        addShortCut->setText(QApplication::translate("icon_panel", "Add ", nullptr));
        app_1->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_1->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
        removeShortCut->setText(QApplication::translate("icon_panel", "Remove", nullptr));
        app_2->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_2->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
        app_3->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_3->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
        app_4->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_4->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
        app_5->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_5->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
        app_6->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_6->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
        app_7->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_7->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
        app_8->setText(QApplication::translate("icon_panel", "PushButton", nullptr));
        label_8->setText(QApplication::translate("icon_panel", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class icon_panel: public Ui_icon_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICON_PANEL_H
