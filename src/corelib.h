#ifndef CORELIB_H
#define CORELIB_H
#include <QObject>
#include <QVariant>

template <typename T> class ISingleton
{
public:
    static T& Instance(QObject *parent = NULL)
    {
        static T theSingleInstance(parent); // default constructor
        return theSingleInstance;
    }
};

class Corelib
{
public:
    Corelib();

    static bool ValueFilled(QVariant value);
};



#endif // CORELIB_H
