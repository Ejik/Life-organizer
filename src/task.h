#ifndef TASK_H
#define TASK_H

#include <QObject>

class Task : public QObject
{
public:
    Task(int id, QString name);

    int id;
    QString name;


};

#endif // TASK_H
