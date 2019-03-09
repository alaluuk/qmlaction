#include "database.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include<QDebug>

Database::Database(QObject *parent) :
    QObject(parent)
{
}
QString Database::getData() {
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
                       qDebug()<<row;
                   }
              return row;
            }

    }

