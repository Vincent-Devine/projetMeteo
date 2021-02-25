#include "meteo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    meteo w;
    w.show();

    //Requeste();

    return a.exec();
}
