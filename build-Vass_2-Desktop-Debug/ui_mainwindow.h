/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <icon_panel.h>
#include <timewidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    TimeWidget *TimeLabel;
    QPushButton *pushButton_2;
    icon_panel *icons;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(799, 539);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(true);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/images/icon2.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMinimumSize(QSize(400, 400));
        QFont font;
        font.setPointSize(12);
        centralWidget->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 191, 41));
        TimeLabel = new TimeWidget(centralWidget);
        TimeLabel->setObjectName(QStringLiteral("TimeLabel"));
        TimeLabel->setGeometry(QRect(640, 0, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Rubik"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        TimeLabel->setFont(font1);
        TimeLabel->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 10, 191, 41));
        icons = new icon_panel(centralWidget);
        icons->setObjectName(QStringLiteral("icons"));
        icons->setGeometry(QRect(370, 90, 421, 382));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 799, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Vass 2", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Open Music", Q_NULLPTR));
        TimeLabel->setText(QApplication::translate("MainWindow", "12:45:37", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Open Time Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
