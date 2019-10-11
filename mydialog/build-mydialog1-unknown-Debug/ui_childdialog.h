/********************************************************************************
** Form generated from reading UI file 'childdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDIALOG_H
#define UI_CHILDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_childDialog
{
public:
    QPushButton *backmaster;

    void setupUi(QDialog *childDialog)
    {
        if (childDialog->objectName().isEmpty())
            childDialog->setObjectName(QStringLiteral("childDialog"));
        childDialog->resize(400, 300);
        backmaster = new QPushButton(childDialog);
        backmaster->setObjectName(QStringLiteral("backmaster"));
        backmaster->setGeometry(QRect(140, 100, 99, 27));

        retranslateUi(childDialog);
        QObject::connect(backmaster, SIGNAL(clicked()), childDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(childDialog);
    } // setupUi

    void retranslateUi(QDialog *childDialog)
    {
        childDialog->setWindowTitle(QApplication::translate("childDialog", "Dialog", 0));
        backmaster->setText(QApplication::translate("childDialog", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class childDialog: public Ui_childDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
