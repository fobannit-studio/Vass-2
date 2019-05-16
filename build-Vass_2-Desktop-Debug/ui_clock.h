/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_clock
{
public:

    void setupUi(QDialog *clock)
    {
        if (clock->objectName().isEmpty())
            clock->setObjectName(QStringLiteral("clock"));
        clock->resize(406, 269);

        retranslateUi(clock);

        QMetaObject::connectSlotsByName(clock);
    } // setupUi

    void retranslateUi(QDialog *clock)
    {
        clock->setWindowTitle(QApplication::translate("clock", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class clock: public Ui_clock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
