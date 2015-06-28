#include "linksql.h"
#include <QDebug>
#include <QtSql/QSqlRecord>

LinkSql::LinkSql(){
}

LinkSql::~LinkSql(){
}

bool LinkSql::isLinkToSql(){
    db = QSqlDatabase::addDatabase("QODBC");
    //QString dsn = QString::fromLocal8Bit("Course");
    db.setDatabaseName("kcsj");
    db.setUserName("sa");
    db.setPassword("sa");
    if(!db.open()){
        QMessageBox::critical(0,QObject::tr("Database Error"),db.lastError().text());
        return false;
    }
    else{
        QMessageBox msg;
        msg.setText("Open SQL succeed");
        msg.exec();
    }
    return true;
}

void LinkSql::updateFromSql(QString str1,QString str2,QString str3){
    QSqlQuery query(db);
    QString s = "'";
    s.append(str3);
    s.append("'");
    QString update = "select " + str2 + " from " + str1 + " where " + str2 + " = " + s;
    qDebug() << update;
    query.prepare(update);
    //query.bindValue(":sname",name);
    query.exec();
    qDebug() << query.lastQuery();
    if(!query.next()){
        QMessageBox msg;
        msg.setText("This data is not in our Table!So you can't Update!");
        msg.exec();
        return;
    }
    QString updateStr;
    updateStr = "update " + str1 + "set " + str2 + " = " + s;
    query.prepare(updateStr);
    //query.bindValue(":sname",str);
    if(query.exec()){
        qDebug() << "succeed";
    }
    else{
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText("Update is failed!");
        msg.exec();
    }
    return;
}

void LinkSql::deleteFromSql(QString str1,QString str2,QString str3){
    QSqlQuery query(db);
    QString s = "'";
    s.append(str3);
    s.append("'");
    QString delStr;
    delStr = "delete from " + str1 + " where " + str2 + " = " + s;
    query.prepare(delStr);
    if(query.exec()){
        qDebug() << delStr + " \n succeed ";
        QMessageBox msg;
        msg.setText(delStr + "\n and delete is succeed!");
        msg.exec();
    }
    else{
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText(delStr + "\n and delete is failed!");
        msg.exec();
    }
    return;
}

QSqlQuery LinkSql::selectFromSql(QString str1,QString str2,QString str3){
    QSqlQuery query(db);
    QString s;
    QString s2 = "'";
    s2.append(str3);
    s2.append("'");
    s = "select * from " + str1 + " where " + str2 + " = " + s2;

    qDebug() << s;
    query.prepare(s);
    model.setQuery(s);
    if(query.exec())
    {
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText(s + "\n and select is succeed!");
        msg.exec();
    }
    else
    {
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText(s + "\n and select is failed!");
        msg.exec();
    }
    return query;
}

void LinkSql::selectAllInf(int i){
    switch (i) {
    case 0:
        model.setQuery("select * from Course");
        break;
    case 1:
        model.setQuery("select * from Family");
        break;
    case 2:
        model.setQuery("select * from Grade");
        break;
    case 3:
        model.setQuery("select * from Mark");
        break;
    case 4:
        model.setQuery("select * from Student");
        break;
    }

}

QSqlQuery LinkSql::addToCourse(QStringList list){
    QSqlQuery query(db);
    QString Cno = list.at(0);
    query.prepare("select sname from Course where Cno = :Cno");
    query.bindValue(":Cno",Cno);
    query.exec();
    if(query.next()){
        QMessageBox msg;
        msg.setText("This Cno has already in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into Course(Cno,Cname,Cteacher)" "values(?,?,?)");
    for(int i = 0;i < list.size(); ++i){
        qDebug() << list.at(i);
        query.bindValue(i,list.at(i));
    }
    if(query.exec()){
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to Course succeed!");
        msg.exec();
    }
    else{
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText("Add to Course failed!");
        msg.exec();
    }
    return query;
}

QSqlQuery LinkSql::addToFamily(QStringList list)
{
    QSqlQuery query(db);
    QString Fno = list.at(0);
    query.prepare("select Fno from Family where Fno = :Fno");
    query.bindValue(":Fno",Fno);
    query.exec();
    if(query.next()){
        QMessageBox msg;
        msg.setText("This Fno has already in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into Family(Fno,Fname,Fphone,Frelation,Sno)" "values(?,?,?,?,?)");
    for(int i = 0;i < list.size(); ++i){
        qDebug() << list.at(i);
        query.bindValue(i,list.at(i));
    }
    if(query.exec()){
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to Family succeed!");
        msg.exec();
    }
    else{
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText("Add to Family failed!");
        msg.exec();
    }
    return query;
}

QSqlQuery LinkSql::addToGrade(QStringList list)
{
    QSqlQuery query(db);
    QString Gno = list.at(0);
    query.prepare("select Gno from Grade where Gno = :Gno");
    query.bindValue(":Gno",Gno);
    query.exec();
    if(query.next()){
        QMessageBox msg;
        msg.setText("This Gno has already in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into Grade(Gno,Gperiod,Ggrade,Gstunum,Gcharge)" "values(?,?,?,?,?)");
    for(int i = 0;i < list.size(); ++i){
        qDebug() << list.at(i);
        query.bindValue(i,list.at(i));
    }
    if(query.exec()){
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to Grade succeed!");
        msg.exec();
    }
    else{
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText("Add to Grade failed!");
        msg.exec();
    }
    return query;
}

QSqlQuery LinkSql::addToMark(QStringList list)
{
    QSqlQuery query(db);
    QString Cno = list.at(0);
    query.prepare("select Cno from Course where Cno = :Cno");
    query.bindValue(":Cno",Cno);
    query.exec();
    if(!query.next()){
        QMessageBox msg;
        msg.setText("This Cno has not in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into Mark(Cno,Sno,Mpoint,Msemester)" "values(?,?,?,?)");
    for(int i = 0;i < list.size(); ++i){
        qDebug() << list.at(i);
        query.bindValue(i,list.at(i));
    }
    if(query.exec()){
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to Mark succeed!");
        msg.exec();
    }
    else{
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText("Add to Mark failed!");
        msg.exec();
    }
    return query;
}

QSqlQuery LinkSql::addToStudent(QStringList list)
{
    QSqlQuery query(db);
    QString Sno = list.at(0);
    query.prepare("select Sno from Student where Sno = :Sno");
    query.bindValue(":Sno",Sno);
    query.exec();
    if(query.next()){
        QMessageBox msg;
        msg.setText("This Sno has already in the database!\nPlease reset!");
        msg.exec();
        return query;
    }
    query.prepare("insert into Student(Sno,Sname,Ssex,Sdate,Snation,Sphone,Saddress,Sgraduate,Gno)" "values(?,?,?,?,?,?,?,?,?)");
    for(int i = 0;i < list.size(); ++i){
        qDebug() << list.at(i);
        query.bindValue(i,list.at(i));
    }
    if(query.exec()){
        qDebug() << "succeed";
        QMessageBox msg;
        msg.setText("Add to Student succeed!");
        msg.exec();
    }
    else{
        qDebug() << "failed";
        QMessageBox msg;
        msg.setText("Add to Student failed!");
        msg.exec();
    }
    return query;
}
