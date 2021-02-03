#include "painterwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PainterWidget w;    //Call class instance
    w.show();
    return a.exec();
}
