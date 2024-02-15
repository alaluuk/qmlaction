#include "person.h"
#include <QDebug>
#include <QDir>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

Person::Person(QObject *parent) : QObject(parent) {
  db = QSqlDatabase::addDatabase("QSQLITE");

  // database kansio on projektikansion sisällä
  // asetetaan sen polku
  QDir dir("../database");
  myFolder = dir.absolutePath();
  // hakemisto polun tarkistus
  // qDebug()<<myFolder;
  db.setDatabaseName(myFolder + "/mydb.db");
  // avataan tietokantayhteys
  db.open();
}
Person::~Person() {}

QString Person::getId() const { return id; }

void Person::setId(const QString &value) { id = value; }

QString Person::getFirstname() const { return firstname; }

void Person::setFirstname(const QString &value) { firstname = value; }

QString Person::getLastname() const { return lastname; }

void Person::setLastname(const QString &value) { lastname = value; }

void Person::addTodatabase() {
  if (!db.open()) {
    qDebug() << "ERROR :" + db.lastError().text();
  } else {
    qDebug() << "Connection Open";

    QSqlQuery query;
    query.prepare("insert into person values(?,?,?)");
    query.addBindValue(this->id);
    query.addBindValue(this->firstname);
    query.addBindValue(this->lastname);

    query.exec();
    db.close();
  }
}

void Person::delFromDatabase() {
  if (!db.open()) {
    qDebug() << "ERROR :" + db.lastError().text();
  } else {
    qDebug() << "Connection Open";

    QSqlQuery query;
    query.prepare("delete from person where id=?");
    query.addBindValue(this->id);

    query.exec();
  }
  db.close();
  getData();
}

QString Person::getData() {

  if (!db.open()) {
    qDebug() << "ERROR :" + db.lastError().text();
    return "No connection";
  } else {
    qDebug() << "Connection Open";
    QString row = "ID : Etunimi : Sukunimi\n";
    row += "____________________\n";
    QString queryString = "SELECT * FROM person";
    QSqlQuery query;
    query.exec(queryString);

    while (query.next()) {

      row += query.value(0).toString() + " : " + query.value(1).toString() +
             " : " + query.value(2).toString() + "\n";
    }
    db.close();

    return row;
  }
}

void Person::getSelected() {

  if (!db.open()) {
    qDebug() << "ERROR :" + db.lastError().text();

  } else {
    QSqlQuery query;
    query.prepare("select firstname,lastname from person where id = ?");
    query.addBindValue(this->id);
    query.exec();
    // qDebug()<<query.value(0).toString();
    while (query.next()) {
      this->firstname = query.value(0).toString();
      this->lastname = query.value(1).toString();
    }
    db.close();
  }
}
void Person::updateSelected() {

  if (!db.open()) {
    qDebug() << "ERROR :" + db.lastError().text();

  } else {

    QSqlQuery query;
    query.prepare("update person set firstname=?,lastname=? where id = ?");

    query.addBindValue(this->firstname);
    query.addBindValue(this->lastname);
    query.addBindValue(this->id);
    query.exec();

    db.close();
  }
}
