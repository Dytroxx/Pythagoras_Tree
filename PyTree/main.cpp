#include "pythagorastree.h"
#include "dialog.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PythagorasTree w;
    w.show();
    return a.exec();
}
