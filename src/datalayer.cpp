#include "datalayer.h"
#include "task.h"

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
    //QSqlDatabase::database().close();
    db.setDatabaseName(dbname);
    db.setUserName("sa");
    db.setPassword("sa");
    if (!db.open())
        qDebug() << "Unable to connect to db" << db.lastError();

}

QList<Task *> Datalayer::readDatafromDb()
{
    QList<Task *> list;

    QString text = "select * from Tasks";
    QSqlQuery query = db.exec(text);

    while(query.next())
    {
        Task *task = new Task(query.value(0).toInt(), query.value(1).toString());
        list << task;
    }

    return list;
}

void Datalayer::updateDb()
{
    QString text = "INSERT INTO Tasks (NAME) VALUES (:name)";
    //db.transaction();

    QSqlQuery query(text, db);
    query.bindValue(":name", "test");
    if (!query.exec())
        qDebug() << "Fail excec. " << db.lastError();
    //db.commit();
}

