#include "datalayer.h"


Datalayer::Datalayer()
{
}

void Datalayer::Init()
{
    // if (QSqlDatabase::drivers().contains("QSQLITE"))
   //     QMessageBox::critical(NULL, "Unable to load database", "It needs the SQLITE driver");

    this->db = QSqlDatabase::addDatabase("QSQLITE");
}

void Datalayer::ShutDown()
{
    QSqlDatabase::database().close();
}

void Datalayer::openDB(QString dbname)
{
    QSqlDatabase::database().close();
    db.setDatabaseName(dbname);
    if (!db.open())
        qDebug() << "Unable to connect to db" << db.lastError();
}
