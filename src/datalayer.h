#ifndef DATALAYER_H
#define DATALAYER_H

#include <QObject>
#include "corelib.h"
#include <QtSql>
#include <QString>

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

private:
    Datalayer();
    Datalayer(Datalayer const &);
    void operator = (Datalayer const &);

    QSqlDatabase db;
};

#endif // DATALAYER_H
