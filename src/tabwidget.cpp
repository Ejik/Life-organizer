#include "tabwidget.h"
#include "ui_tabwidget.h"
#include "globalcontext.h"
#include "datalayer.h"
#include "task.h"
#include <QAbstractItemModel>

TabWidget::TabWidget(QWidget *parent) :
    QTabWidget(parent),
    m_ui(new Ui::TabWidget)
{
    m_ui->setupUi(this);

    connect(&GlobalContext::Instance(), SIGNAL(currentDbChanged(QString)), this, SLOT(readData()));

    QStringList headers;
    headers << tr("View") << tr("Term") << tr("Icon");
    QString data;
    model = new TreeModel(headers, data);
    m_ui->treeView->setModel(model);    
}

TabWidget::~TabWidget()
{
    delete m_ui;
}

void TabWidget::changeEvent(QEvent *e)
{
    QTabWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void TabWidget::insertNewTask()
{
    QModelIndex index = m_ui->treeView->selectionModel()->currentIndex();
    if (!model->insertRow(index.row() + 1, index.parent()))
        return;

    QModelIndex child = model->index(index.row()+1, 0, index.parent());
    model->setData(child, QVariant(tr("[new task]")), Qt::EditRole);

    resizeColumns();
}

void TabWidget::readData()
{   
    model->removeRows(0, model->rowCount());

    QList<Task *> data = Datalayer::Instance().readDatafromDb();

    for (int row = 0; row < data.count(); row++)
    {
        if (!model->insertRow(row))
            return;

        QModelIndex index = model->index(row, 0);
        model->setData(index, data[row]->name);
    }

    // resize columns
    resizeColumns();

    connect(model, SIGNAL(dataChanged(QModelIndex,QModelIndex)), this, SLOT(on_currentRowChanged(QModelIndex, QModelIndex)));
}

void TabWidget::resizeColumns()
{
    for (int column = 0; column < model->columnCount(); column++)
        m_ui->treeView->resizeColumnToContents(column);
}

void TabWidget::on_treeView_activated(QModelIndex index)
{

}

void TabWidget::on_currentRowChanged(QModelIndex current, QModelIndex prev)
{

    resizeColumns();
}

void TabWidget::updateActions()
{
    QTreeView *view = m_ui->treeView;
    bool hasSelection = !view->selectionModel()->selection().isEmpty();
    //removeRowAction->setEnabled(hasSelection);
    //removeColumnAction->setEnabled(hasSelection);

    bool hasCurrent = view->selectionModel()->currentIndex().isValid();
    //insertRowAction->setEnabled(hasCurrent);
    //insertColumnAction->setEnabled(hasCurrent);

    if (hasCurrent) {
        view->closePersistentEditor(view->selectionModel()->currentIndex());

        int row = view->selectionModel()->currentIndex().row();
        int column = view->selectionModel()->currentIndex().column();
    }

}
