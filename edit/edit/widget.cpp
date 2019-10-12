#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QValidator>
#include <QCompleter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QValidator *validator = new QIntValidator(100,999,this);//新建验证器，指定范围为100-999
    ui->lineEdit_3->setValidator(validator);//在行编辑器中使用验证器

    //设置自动补全
    QStringList wordlist;
    wordlist<<"QT"<<"QT Creator"<<tr("你好");
    //创建自动补全
    QCompleter *completer = new QCompleter(wordlist,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);//设置大小写不敏感
    ui->lineEdit_4->setCompleter(completer);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_lineEdit_2_returnPressed()
{
    ui->lineEdit_3->setFocus();//eidt3获得焦点
    qDebug()<<ui->lineEdit_2->text();
    qDebug()<<ui->lineEdit_2->displayText();
}

void Widget::on_lineEdit_returnPressed()
{
    ui->lineEdit_2->setFocus();//eidt2获得焦点
    qDebug()<<ui->lineEdit->text();
    qDebug()<<ui->lineEdit->displayText();
}

void Widget::on_lineEdit_3_returnPressed()
{
    ui->lineEdit_4->setFocus();//eidt4获得焦点
    qDebug()<<ui->lineEdit_3->text();
    qDebug()<<ui->lineEdit_3->displayText();
}

void Widget::on_lineEdit_4_returnPressed()
{
    qDebug()<<ui->lineEdit_4->text();
    qDebug()<<ui->lineEdit_4->displayText();
}
