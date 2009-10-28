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

void Bootstrapper::onAfterSystemStart()
{
    if (!GlobalContext::Instance().CurrentDb.isEmpty())
        GlobalContext::Instance().setCurrentDb(GlobalContext::Instance().CurrentDb);
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

    this->OnSystemStart();
}
