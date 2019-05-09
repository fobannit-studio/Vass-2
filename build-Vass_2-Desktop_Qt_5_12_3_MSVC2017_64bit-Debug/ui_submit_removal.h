/********************************************************************************
** Form generated from reading UI file 'submit_removal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMIT_REMOVAL_H
#define UI_SUBMIT_REMOVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_submit_removal
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *submit_removal)
    {
        if (submit_removal->objectName().isEmpty())
            submit_removal->setObjectName(QString::fromUtf8("submit_removal"));
        submit_removal->resize(200, 200);
        buttonBox = new QDialogButtonBox(submit_removal);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(0, 150, 191, 31));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(submit_removal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 171, 111));

        retranslateUi(submit_removal);
        QObject::connect(buttonBox, SIGNAL(accepted()), submit_removal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), submit_removal, SLOT(reject()));

        QMetaObject::connectSlotsByName(submit_removal);
    } // setupUi

    void retranslateUi(QDialog *submit_removal)
    {
        submit_removal->setWindowTitle(QApplication::translate("submit_removal", "Dialog", nullptr));
        label->setText(QApplication::translate("submit_removal", "Are you sure \n"
"you want to delete\n"
" this shortcut?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class submit_removal: public Ui_submit_removal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMIT_REMOVAL_H
