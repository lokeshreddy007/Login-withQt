#include "mainwindow.h"
#include <QApplication>
// adding patch

// add comments
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
