#include "bootstrapper.h"
#include <QtSql>
#include <QMessageBox>
#include "datalayer.h"
#include "globalcontext.h"

Bootstrapper::Bootstrapper(QObject *parent)
        : QObject(parent)
{


}

Bootstrapper::~Bootstrapper()
{
    OnSystemShutdown();
    CloseConnection();
    GlobalContext::Instance().saveData();
}

void Bootstrapper::OnSystemStart()
{

}

void Bootstrapper::OnSystemShutdown()
{

}


void Bootstrapper::CreateConnection()
{
    Datalayer::Instance().Init();

}

void Bootstrapper::CloseConnection()
{
     Datalayer::Instance().ShutDown();
}

void Bootstrapper::Run()
{
    QCoreApplication::setOrganizationName("ACSGroup");
    QCoreApplication::setOrganizationDomain("acsgroup.devhub.com");
    QCoreApplication::setApplicationName("Life organizer");

    GlobalContext::Instance().readData();

    CreateConnection();

    if (!GlobalContext::Instance().CurrentDb.isEmpty())
    {
        Datalayer::Instance().openDB(GlobalContext::Instance().CurrentDb);
    }

    this->OnSystemStart();
}
