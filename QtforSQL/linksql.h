#ifndef LINKSQL
#define LINKSQL

#include <QtSql/QSqlDatabase>
#include <QString>
#include <QtSql/QSqlQuery>
#include <QStringList>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include <QMessageBox>

class LinkSql{
public:
    LinkSql();
    ~LinkSql();

    bool isLinkToSql();
    void selectAllInf(int i);

    QSqlQuery selectFromSql(QString str1,QString str2,QString str3);
    QSqlQuery selectfromContact(QString str);
    QSqlQuery selectfromGrade(QString str);


    QSqlQuery addToStudent(QStringList list);
    QSqlQuery addToCourse(QStringList list);
    QSqlQuery addToMark(QStringList list);
    QSqlQuery addToFamily(QStringList list);
    QSqlQuery addToGrade(QStringList list);

    //void changeStudent(QString str1,QString str2);

    void deletesomeone(QString str);


public:
    QSqlQueryModel model;
    QSqlDatabase db;

};


#endif // LINKSQL

