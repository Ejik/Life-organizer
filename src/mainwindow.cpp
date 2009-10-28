#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include "globalcontext.h"
#include "tabwidget.h"
#include "mainviewpresentationmodel.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _isLoadingView = false;

    loadFromPModel();
   
    connect(&GlobalContext::Instance(), SIGNAL(currentDbChanged(QString)), this, SLOT(loadFromPModel()));

    //connect(&pModel, SIGNAL(updateView()), this, SLOT(loadFromPModel()));
    //connect(ui->tabWidget->model, SIGNAL(dataChanged(QModelIndex,QModelIndex)), this, SLOT(on_dataChanged(QModelIndex, QModelIndex)));

    //setWindowTitle(GlobalContext::Instance().CurrentDb);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadFromPModel()
{
     if (!_isLoadingView) {
        _isLoadingView = true;
        setWindowTitle(pModel.getWindowTitle());
        ui->menuOpen_recent->clear();
        ui->menuOpen_recent->addActions(pModel.recentMenuList);
        _isLoadingView = false;
    }
}

void MainWindow::saveToPModel()
{
    //pModel.windowTitle = windowTitle();

}

void MainWindow::syncWithPModel()
{
    if (!_isLoadingView) {
        saveToPModel();
        loadFromPModel();
    }
}

void MainWindow::on_action_New_triggered()
{
    pModel.newDbCreate();
    loadFromPModel();
}

void MainWindow::on_actionE_xit_triggered()
{
    QApplication::exit(0);
}

void MainWindow::on_actionAbout_Life_Organizer_triggered()
{
    QMessageBox::about(this, tr("About Life organizer"), tr("Life Organizer ver.: alpha 0.1"));
}

void MainWindow::on_action_Open_triggered()
{
   pModel.openNewDb();
   loadFromPModel();
}


void MainWindow::on_dataChanged(QModelIndex current, QModelIndex prev)
{
   pModel.dataChanged();
   loadFromPModel();
}


void MainWindow::on_action_Save_triggered()
{
    GlobalContext::Instance().updateDb(QString::null);
}

void MainWindow::on_actionSave_As_triggered()
{
    QFileDialog dialog(this, tr("Save db as"), "", tr("Data files (*.db) | *.db"));
    dialog.setFileMode(QFileDialog::AnyFile);
    if (dialog.exec())
    {
        QStringList files = dialog.selectedFiles();
        GlobalContext::Instance().updateDb(files.value(0));
    }
}

void MainWindow::on_actionNew_task_triggered()
{
    pModel.insertNewTask();
}
