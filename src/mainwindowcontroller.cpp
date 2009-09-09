#include "mainwindowcontroller.h"
#include "globalcontext.h"

MainWindowController::MainWindowController()
{
    //connect(&GlobalContext::Instance(), SIGNAL(currentDbChanged(QString)), this, SLOT(readData()));
}

void MainWindowController::readData()
{
    _widget->treeView
}

