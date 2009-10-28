#ifndef MAINVIEWPRESENTATIONMODEL_H
#define MAINVIEWPRESENTATIONMODEL_H

#include <QObject>
#include <QtGui>
#include "task.h"
#include "treemodel.h"

class MainViewPresentationModel : public QObject
{
    Q_OBJECT

public:

    MainViewPresentationModel(QObject *parent = 0);

    QString getWindowTitle();
    void openNewDb();

    void dataChanged();
    void insertNewTask();
    void newDbCreate();
    //void openRecent(const QString value);


    QList<Task *> tasksList;
    QList<QAction*> recentMenuList;
    TreeModel *treeModel;

private:
    QString _windowTitle;

private slots:
    void on_action_RecentDb_triggered();
    void onNewOpenDbActions(QString newDbName);

signals:
    void updateView();


};

#endif // MAINVIEWPRESENTATIONMODEL_H
