#ifndef GLOBALCONTEXT_H
#define GLOBALCONTEXT_H

#include <QObject>
#include <QStringList>
#include <QString>


class GlobalContext : public QObject
{
    Q_OBJECT

public:
    static GlobalContext& Instance()
    {
        static GlobalContext instance;
        return instance;
    }

    QString CurrentDb;
    QStringList RecentDb;

    void readData();
    void saveData();
    void setCurrentDb(QString dbname);

private:
    GlobalContext();
    GlobalContext(GlobalContext const&);
    void operator = (GlobalContext const&);

    void addToRecent(const QString value);
    
signals:
    void currentDbChanged(QString value);
};

#endif // GLOBALCONTEXT_H
