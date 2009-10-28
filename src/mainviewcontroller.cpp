#include "mainviewcontroller.h"
#include "globalcontext.h"
#include "ui_mainwindow.h"

MainViewController::MainViewController()
{
}

void MainViewController::setWindowTitle(const QString value)
{
    ui->centralWidget->setWindowTitle("Life organizer - " + value);


}
