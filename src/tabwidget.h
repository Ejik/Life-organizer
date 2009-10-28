#ifndef TABWIDGET_H
#define TABWIDGET_H

#include <QtGui/QTabWidget>
#include "treemodel.h"

namespace Ui {
    class TabWidget;
}

class TabWidget : public QTabWidget {
    Q_OBJECT
public:
    TabWidget(QWidget *parent = 0);
    ~TabWidget();
    void insertNewTask();

    TreeModel *model;


protected:
    void changeEvent(QEvent *e);

private:
    Ui::TabWidget *m_ui;
    void resizeColumns();
    void updateActions();


public slots:
    void readData();
    void on_currentRowChanged(QModelIndex current, QModelIndex prev);

private slots:
    void on_treeView_activated(QModelIndex index);

};

#endif // TABWIDGET_H
