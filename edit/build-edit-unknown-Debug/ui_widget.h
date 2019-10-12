/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSplitter *splitter;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 67, 17));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 67, 17));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 180, 67, 17));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 220, 67, 17));
        splitter = new QSplitter(Widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(110, 80, 231, 171));
        splitter->setOrientation(Qt::Vertical);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        splitter->addWidget(lineEdit);
        lineEdit_2 = new QLineEdit(splitter);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        splitter->addWidget(lineEdit_2);
        lineEdit_3 = new QLineEdit(splitter);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        splitter->addWidget(lineEdit_3);
        lineEdit_4 = new QLineEdit(splitter);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        splitter->addWidget(lineEdit_4);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\346\250\241\345\274\217", 0));
        label_2->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\346\216\251\347\240\201", 0));
        label_3->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\351\252\214\350\257\201", 0));
        label_4->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\345\256\214\346\210\220", 0));
        lineEdit->setInputMask(QString());
        lineEdit_2->setInputMask(QApplication::translate("Widget", ">AA-90-BB-! aa\\#H;*", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
