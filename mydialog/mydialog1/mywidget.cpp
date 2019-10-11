#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>
#include "childdialog.h"
#include "ui_childdialog.h"
myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_showChildButton_clicked()
{
    //accept();
    close();
    childDialog dlg;
    if(dlg.exec() == QDialog::Accepted)
        show();
}
