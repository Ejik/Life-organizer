#ifndef MAINVIEWCONTROLLER_H
#define MAINVIEWCONTROLLER_H

#include <QObject>
#include "mainwindow.h"


namespace Ui
{
    class MainWindow;
}

class MainViewController : public QObject
{
public:

    //MainWindow *view;
    Ui::MainWindow *ui;

    MainViewController();
    void setWindowTitle(const QString value);

};

#endif // MAINVIEWCONTROLLER_H
