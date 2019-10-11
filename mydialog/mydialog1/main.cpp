#include "mywidget.h"
#include <QApplication>
#include <QDialog>
#include "childdialog.h"
#include "ui_childdialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWidget w;
    childDialog dialog;
    if(dialog.exec() == QDialog::Accepted)
    {

        w.show();

    return a.exec();
    }
    else
        return 0;
}
