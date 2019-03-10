#include "person.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

Person::Person(QObject *parent):
    QObject(parent)
{

}
Person::~Person(){}

QString Person::getId() const
{
    return id;
}

void Person::setId(const QString &value)
{
    id = value;
}

QString Person::getFirstname() const
{
    return firstname;
}

void Person::setFirstname(const QString &value)
{
    firstname = value;
}

QString Person::getLastname() const
{
    return lastname;
}

void Person::setLastname(const QString &value)
{
    lastname = value;
}
void Person::setTodatabase(){
    qDebug()<<this->getId()+" "+this->getFirstname()+" "+this->getLastname();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("C:\\temp\\mydb.db");
            db.open();

            if (!db.open())
            {
                qDebug() <<"ERROR :"+ db.lastError().text();
            }
            else {
                qDebug()<<"Connection Open";

                QSqlQuery query;
                query.prepare("insert into person values(?,?,?)");
                query.addBindValue(this->id);
                query.addBindValue(this->firstname);
                query.addBindValue(this->lastname);

                query.exec();
                db.close();
             }
            }


void Person::delFromDatabase(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("C:\\temp\\mydb.db");
            db.open();

            if (!db.open())
            {
                qDebug() <<"ERROR :"+ db.lastError().text();
            }
            else {
                qDebug()<<"Connection Open";

                QSqlQuery query;
                query.prepare("delete from person where id=?");
                query.addBindValue(this->id);

                query.exec();
            }
            db.close();
}

QString Person::getData() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("C:\\temp\\mydb.db");
            db.open();


            if (!db.open())
            {
                qDebug() <<"ERROR :"+ db.lastError().text();
                return "No connection";
            }
            else {
                qDebug()<<"Connection Open";
                QString row="ID : Etunimi : Sukunimi\n";
                row+="____________________\n";
                QString queryString = "SELECT * FROM person";
                QSqlQuery query;
                   query.exec(queryString);

                   while (query.next()) {

                       row+=query.value(0).toString()+" : "+ query.value(1).toString()+" : "+query.value(2).toString()+"\n";

                   }
                   db.close();

              return row;

            }

}
