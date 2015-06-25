#ifndef CONTACTSQL_H
#define CONTACTSQL_H

#include <QtSql/QSqlDatabase>
#include <QString>
#include <QtSql/QSqlQuery>
#include <QStringList>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>

class ContactSQL
{
public:
    ContactSQL();
    ~ContactSQL();

    bool isconnecttosql();
    QSqlQuery selectfromSql(QString str,QString str2);
    QSqlQuery selectfromContact(QString str);
    QSqlQuery selectfromGrade(QString str);
    void selectallinformation();
    QSqlQuery addtoStudent(QStringList font);
    QSqlQuery addtoContact(QStringList font);
    QSqlQuery addtoGrade(QString str,int data[5]);
    //void changeStudent(QString str1,QString str2);
    void deletesomeone(QString str);


public:
    QSqlQueryModel model;
    QSqlDatabase db;

};

#endif // CONTACTSQL_H
