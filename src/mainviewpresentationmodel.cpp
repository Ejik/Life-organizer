#include <QFileDialog>
#include "mainviewpresentationmodel.h"
#include "globalcontext.h"
#include "newdbview.h"


MainViewPresentationModel::MainViewPresentationModel(QObject *parent)
{
    QStringList headers;
    headers << tr("View") << tr("Term") << tr("Icon");
    QString data;
    treeModel = new TreeModel(headers, data);

    connect(&GlobalContext::Instance(), SIGNAL(currentDbChanged(QString)), this, SLOT(onNewOpenDbActions(QString)));
}

QString MainViewPresentationModel::getWindowTitle()
{
    return "Life organizer - " + _windowTitle;
}

void MainViewPresentationModel::openNewDb()
{
    QFileDialog dialog(0, tr("Open db"), "", tr("Data files (*.db) | *.db"));
    dialog.setFileMode(QFileDialog::AnyFile);
    if (dialog.exec())
    {
        QStringList files = dialog.selectedFiles();
        GlobalContext::Instance().setCurrentDb(files.value(0));

        _windowTitle = files.value(0);
    }
}


void MainViewPresentationModel::onNewOpenDbActions(QString newDbName)
{   
    // Fill the recent menu
    qDeleteAll(recentMenuList);

    QStringListIterator i(GlobalContext::Instance().RecentDb);
    while (i.hasNext()) {

        QAction *newAction = new QAction(this);
        newAction->setText(i.next());

        connect(newAction, SIGNAL(triggered()), SLOT(on_action_RecentDb_triggered()));

        recentMenuList << newAction;
        //ui->menuOpen_recent->addAction(newAction);
    }
}

void MainViewPresentationModel::dataChanged()
{
    if (_windowTitle.right(1).compare("*") != 0)
       _windowTitle += "*";
 }

void MainViewPresentationModel::newDbCreate()
{
    newdbview view;
    if (view.exec())
    {

    }
}


void MainViewPresentationModel::insertNewTask()
{

}

void MainViewPresentationModel::on_action_RecentDb_triggered()
{
    QAction *act = qobject_cast<QAction *>(sender());

    GlobalContext::Instance().setCurrentDb(act->text());
}
