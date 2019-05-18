/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainLay;
    QTabWidget *tabWidget;
    QWidget *main_config;
    QWidget *icon_panel;
    QPushButton *b_up;
    QPushButton *b_down;
    QGroupBox *apps;
    QPushButton *app_1;
    QPushButton *app_2;
    QPushButton *app_3;
    QPushButton *app_4;
    QPushButton *app_5;
    QPushButton *app_6;
    QPushButton *app_7;
    QPushButton *app_8;
    QWidget *player;

    void setupUi(QWidget *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(600, 570);
        verticalLayoutWidget = new QWidget(config);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 601, 511));
        mainLay = new QVBoxLayout(verticalLayoutWidget);
        mainLay->setObjectName(QStringLiteral("mainLay"));
        mainLay->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(verticalLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 10px;\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"}\n"
""
                        "\n"
"QTabBar::tab:selected {\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}"));
        main_config = new QWidget();
        main_config->setObjectName(QStringLiteral("main_config"));
        tabWidget->addTab(main_config, QString());
        icon_panel = new QWidget();
        icon_panel->setObjectName(QStringLiteral("icon_panel"));
        b_up = new QPushButton(icon_panel);
        b_up->setObjectName(QStringLiteral("b_up"));
        b_up->setGeometry(QRect(520, 120, 80, 60));
        b_down = new QPushButton(icon_panel);
        b_down->setObjectName(QStringLiteral("b_down"));
        b_down->setGeometry(QRect(520, 180, 80, 60));
        apps = new QGroupBox(icon_panel);
        apps->setObjectName(QStringLiteral("apps"));
        apps->setGeometry(QRect(310, 20, 211, 421));
        app_1 = new QPushButton(apps);
        app_1->setObjectName(QStringLiteral("app_1"));
        app_1->setGeometry(QRect(0, 20, 211, 51));
        app_2 = new QPushButton(apps);
        app_2->setObjectName(QStringLiteral("app_2"));
        app_2->setGeometry(QRect(0, 70, 211, 51));
        app_3 = new QPushButton(apps);
        app_3->setObjectName(QStringLiteral("app_3"));
        app_3->setGeometry(QRect(0, 120, 211, 51));
        app_4 = new QPushButton(apps);
        app_4->setObjectName(QStringLiteral("app_4"));
        app_4->setGeometry(QRect(0, 170, 211, 51));
        app_5 = new QPushButton(apps);
        app_5->setObjectName(QStringLiteral("app_5"));
        app_5->setGeometry(QRect(0, 220, 211, 51));
        app_6 = new QPushButton(apps);
        app_6->setObjectName(QStringLiteral("app_6"));
        app_6->setGeometry(QRect(0, 270, 211, 51));
        app_7 = new QPushButton(apps);
        app_7->setObjectName(QStringLiteral("app_7"));
        app_7->setGeometry(QRect(0, 320, 211, 51));
        app_8 = new QPushButton(apps);
        app_8->setObjectName(QStringLiteral("app_8"));
        app_8->setGeometry(QRect(0, 370, 211, 51));
        tabWidget->addTab(icon_panel, QString());
        player = new QWidget();
        player->setObjectName(QStringLiteral("player"));
        tabWidget->addTab(player, QString());

        mainLay->addWidget(tabWidget);


        retranslateUi(config);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QWidget *config)
    {
        config->setWindowTitle(QApplication::translate("config", "Form", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(main_config), QApplication::translate("config", "Main configuration", Q_NULLPTR));
        b_up->setText(QApplication::translate("config", "Up", Q_NULLPTR));
        b_down->setText(QApplication::translate("config", "Down", Q_NULLPTR));
        apps->setTitle(QApplication::translate("config", "Applications priority", Q_NULLPTR));
        app_1->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_2->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_3->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_4->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_5->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_6->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_7->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        app_8->setText(QApplication::translate("config", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(icon_panel), QApplication::translate("config", "Icon Panel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(player), QApplication::translate("config", "Music player", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
