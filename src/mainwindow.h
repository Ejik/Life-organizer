#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QAbstractItemModel>
#include "mainviewpresentationmodel.h"

namespace Ui
{
    class MainWindow;
}

class MainViewController;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    bool _isLoadingView;

    //MainViewController controller;
    MainViewPresentationModel pModel;

    void saveToPModel();
    void syncWithPModel();

public slots:
    void loadFromPModel();

private slots:
    void on_actionNew_task_triggered();
    void on_actionSave_As_triggered();
    void on_action_Save_triggered();
    void on_action_Open_triggered();
    void on_actionAbout_Life_Organizer_triggered();
    void on_actionE_xit_triggered();
    void on_action_New_triggered();
    void on_dataChanged(QModelIndex current, QModelIndex prev);
};

#endif // MAINWINDOW_H
