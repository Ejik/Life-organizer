#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include "newdbview.h"
#include "globalcontext.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    GlobalContext *gc = &GlobalContext::Instance();
    connect(gc, SIGNAL(currentDbChanged(QString)), this, SLOT(setWindowTitle(QString)));

    setWindowTitle(GlobalContext::Instance().CurrentDb);

    controller.setWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setWindowTitle(const QString value)
{

    QWidget::setWindowTitle("Life organizer - " + value);

    /// Fill the recent menu
    ui->menuOpen_recent->clear();
    QStringListIterator i(GlobalContext::Instance().RecentDb);
    while (i.hasNext()) {
        
        QAction *newAction = new QAction(this);
        newAction->setText(i.next());
        ui->menuOpen_recent->addAction(newAction);
    }
}

void MainWindow::on_action_New_triggered()
{
    newdbview view(this);
    if (view.exec())
    {

    }
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
    QFileDialog dialog(this, tr("Open db"), "", tr("Data files (*.db) | *.db"));
    dialog.setFileMode(QFileDialog::AnyFile);
    if (dialog.exec())
    {
        QStringList files = dialog.selectedFiles();
        GlobalContext::Instance().setCurrentDb(files.value(0));
    }
}


