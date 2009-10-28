#ifndef DATALAYER_H
#define DATALAYER_H

#include <QObject>
#include "corelib.h"
#include <QtSql>
#include <QString>
#include "task.h"

class Datalayer : public QObject
{
public:
    static Datalayer& Instance()
    {
        static Datalayer instance;
        return instance;
    }

    void Init();
    void ShutDown();
    void openDB(QString dbname);
    QList<Task *> readDatafromDb();
    void updateDb();

private:
    Datalayer();
    Datalayer(Datalayer const &);
    void operator = (Datalayer const &);

    QSqlDatabase db;

private slots:

};

#endif // DATALAYER_H
