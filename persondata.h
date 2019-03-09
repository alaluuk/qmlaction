#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <QObject>

class PersonData:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString getPersonData READ getPersonData WRITE setPersonData)

public:
    explicit PersonData(QObject *parent = nullptr);
    QString getPersonData();


private:
    QString id;
    QString firstname;
    QString lastname;

public slots:
    void setPersonData(const QString &p_id, const QString &p_firstname, const QString &p_lastname);


};

#endif // PERSONDATA_H
