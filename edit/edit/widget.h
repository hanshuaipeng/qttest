#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_lineEdit_2_returnPressed();

    void on_lineEdit_returnPressed();

    void on_lineEdit_3_returnPressed();

    void on_lineEdit_4_returnPressed();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
