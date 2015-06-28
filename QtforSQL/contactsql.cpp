#include "contactsql.h"
#include <QMessageBox>
#include <QDebug>
#include <QtSql/QSqlRecord>

ContactSQL::ContactSQL()
{
}

ContactSQL::~ContactSQL()
{

}

bool ContactSQL::isconnecttosql()
{
    db = QSqlDatabase::addDatabase("QODBC");
    QString dsn = QString::fromLocal8Bit("Student");
    db.setDatabaseName("ClassSix");
    db.setUserName("sa");
    db.setPassword("sa");
    if(!db.open())
    {
        QMessageBox::critical(0,QObject::tr("Database Error"),db.lastError().text());
        return false;
    }
    else
    {
        QMessageBox msg;
        msg.setText("Open SQL succeed");
        msg.exec();
    }
    return true;
}


QSqlQuery ContactSQL::selectfromSql(QString str,QString str2){
    QSqlQuery query(db);
    QString s;
    s = "select * from " + str2 + " where sname = :sname";
    qDebug() << s;
    query.prepare(s);
    query.bindValue(":sname",str);
    if(query.exec())
    {
        qDebug() << "succeed";
    }
    else
    {
        qDebug() << "failed";
    }
    return query;
}

void ContactSQL::selectallinformation(){
    model.setQuery("select * from S,Contact,Grade where S.sname = Contact.sname and S.sname = Grade.sname");
}

void ContactSQL::deletesomeone(QString str)
{
    QSqlQuery query(db);
    QString name = str;
    qDebug() << name;
    query.prepare("select sname from Contact where sname = :sname");
    query.bindValue(":sname",name);
    query.exec();
    qDebug() << query.lastQuery();
    if(!query.next())
    {
        QMessageBox msg;
        msg.setText("This name is not in our class!So you can't delete!");
        msg.exec();
        return;
    }
    query.prepare("delete from S where sname = :sname");
    query.bindValue(":sname",str);
    if(query.exec())
    {
        qDebug() << "succeed";
    }
    else
    {
        qDebug() << "failed";
    }
    query.prepare("delete from Grade where sname = :sname");
    query.bindValue(":sname",str);
    if(query.exec())
    {
        qDebug() << "succeed";
    }
    else
    {
        qDebug() << "failed";
    }
    query.prepare("delete from Contact where sname = :sname");
    query.bindValue(":sname",str);
    if(query.exec())
    {
        qDebug() << "succeed";
    }
    else
    {
        qDebug() << "failed";
    }
    return;
}

QSqlQuery ContactSQL::addtoStudent(QStringList font)
{
    QSqlQuery query(db);
    QString name = font.at(0);
    query.prepare("select sname from S where sname = :sname");
    query.bindValue(":sname",name);
    query.exec();
    if(query.next())
    {
        QMessageBox msg;
        msg.setText("This name has already in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into S(sname,sno,sbirth,sdept,sbiradd)" "values(?,?,?,?,?)");
    for(int i = 0;i < font.size();++ i)
    {
        qDebug() << font.at(i);
        query.bindValue(i,font.at(i));
    }
    if(query.exec())
    {
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to S succeed!");
        msg.exec();
    }
    else
    {
        qDebug() << "failed";
    }
    return query;
}

QSqlQuery ContactSQL::addtoContact(QStringList font)
{
    QSqlQuery query(db);
    QString name = font.at(0);
    query.prepare("select sname from Contact where sname = :sname");
    query.bindValue(":sname",name);
    query.exec();
    if(query.next())
    {
        QMessageBox msg;
        msg.setText("This name has already in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into Contact(sname,qq,telnum,address)" "values(?,?,?,?)");
    for(int i = 0;i < font.size();++ i)
    {
        query.bindValue(i,font.at(i));
    }
    if(query.exec())
    {
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to S succeed!");
    }
    else
    {
        qDebug() << "failed";
    }
    return query;
}

QSqlQuery ContactSQL::addtoGrade(QString str, int data[5])
{
    QSqlQuery query(db);
    QString name = str;
    query.prepare("select sname from Grade where sname = :sname");
    query.bindValue(":sname",name);
    query.exec();
    if(query.next())
    {
        QMessageBox msg;
        msg.setText("This name has already in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into Grade(sname,math,C,english,telnum,elec)" "values(?,?,?,?,?,?)");
    query.bindValue(0,str);
    for(int i = 1;i < 6;i ++)
    {
        query.bindValue(i,data[i - 1]);
    }
    if(query.exec())
    {
        qDebug() << "succeed";
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to S succeed!");
    }
    else
    {
        qDebug() << "failed";
    }
    return query;
}

