#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>

class Database:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString getData READ getData)


public:
    explicit Database(QObject *parent = nullptr);

public slots:
    QString getData();

};



#endif // DATABASE_H
