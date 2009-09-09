#ifndef BOOTSTRAPPER_H
#define BOOTSTRAPPER_H

#include <QtDebug>
#include <QObject>

class Bootstrapper : public QObject
{
public:
    Bootstrapper(QObject *parent);
    ~Bootstrapper();
    void Run();

private:
    void OnSystemStart();
    void OnSystemShutdown();
    void CreateConnection();
    void CloseConnection();
};

#endif // BOOTSTRAPPER_H
