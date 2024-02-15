#ifndef PERSON_H
#define PERSON_H
#include<QString>
#include<QObject>
#include <QSqlDatabase>


class Person:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString getId READ getId WRITE setId)
    Q_PROPERTY(QString getFirstname READ getFirstname WRITE setFirstname)
    Q_PROPERTY(QString getLastname READ getLastname WRITE setLastname)
    Q_PROPERTY(QString getData READ getData)
public:
    explicit Person(QObject *parent =nullptr);
    ~Person();

    QString getId() const;
    QString getFirstname() const;
    QString getLastname() const;


public slots:
    void setId(const QString &value);
    void setFirstname(const QString &value);
    void setLastname(const QString &value);
    void addTodatabase();
    void delFromDatabase();
    QString getData();
    void getSelected();
    void updateSelected();
private:
    QString id;
    QString firstname;
    QString lastname;
    QSqlDatabase db;
    QString myFolder;
};

#endif // PERSON_H
