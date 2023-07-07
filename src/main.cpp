#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setTitle("FlexiFlightVis - Aeroelastic Flight Dynamics Visualization");
    w.resize(1280, 960);
    w.show();

    return a.exec();
}
