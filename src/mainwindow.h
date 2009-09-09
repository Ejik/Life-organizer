#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include "mainwindowcontroller.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    MainWindowController controller;
private:
    Ui::MainWindow *ui;

public slots:
    void setWindowTitle(const QString value);

private slots:
    void on_action_Open_triggered();
    void on_actionAbout_Life_Organizer_triggered();
    void on_actionE_xit_triggered();
    void on_action_New_triggered();

};

#endif // MAINWINDOW_H
