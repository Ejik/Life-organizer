#include "globalcontext.h"
#include <QSettings>
#include <QFile>
#include "datalayer.h"
#include "mainwindow.h"

GlobalContext::GlobalContext()
{
}

void GlobalContext::readData()
{
    QSettings settings;

    CurrentDb = settings.value("CurrentDB", "").toString();
    RecentDb  = settings.value("RecentDB").toStringList();
}

void GlobalContext::saveData()
{
    QSettings settings;

    settings.setValue("CurrentDB", CurrentDb);
    settings.setValue("RecentDB", RecentDb);
}

void GlobalContext::setCurrentDb(QString dbname)
{
    Datalayer::Instance().openDB(dbname);

    addToRecent(dbname);
    CurrentDb = dbname;

    emit currentDbChanged(dbname);
}

void GlobalContext::addToRecent(const QString value)
{
    QMutableStringListIterator i(RecentDb);
    while (i.hasNext())
    {
        QString elem = i.next();
        if (value.compare(elem) == 0)
        {
            i.remove();
            break;
        }
    }

    RecentDb.prepend(value);
    if (RecentDb.count() > 8) // remove more than 8 elements
        RecentDb.removeLast();

}
