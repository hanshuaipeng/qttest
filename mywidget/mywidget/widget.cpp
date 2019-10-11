#include "widget.h"
#include "ui_widget.h"
#include <QDialog>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QDialog *dialog=new QDialog(this);
    dialog->setModal(true);
    dialog->show();
}

Widget::~Widget()
{
    delete ui;
}
