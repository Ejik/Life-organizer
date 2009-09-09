#ifndef MAINWINDOWCONTROLLER_H
#define MAINWINDOWCONTROLLER_H

#include <QObject>
#include <QtGui/QMainWindow>
#include "tabwidget.h"

//class MainWindow;


class MainWindowController : public QObject
{
    Q_OBJECT

public:
    MainWindowController();
    void setWidget(TabWidget *widget) { _widget = widget; }

private:
    Ui::TabWidget *_widget;

private slots:
    void readData();
};

#endif // MAINWINDOWCONTROLLER_H
