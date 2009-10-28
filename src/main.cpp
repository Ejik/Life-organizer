#include <QtGui/QApplication>
#include "mainwindow.h"
#include "bootstrapper.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Bootstrapper bs(NULL);
    bs.Run();
    MainWindow w;
    w.show();
    bs.onAfterSystemStart();
    return a.exec();
}
