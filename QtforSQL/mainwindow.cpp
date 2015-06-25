#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QtSql/QSqlRecord>
#include <QPalette>
#include <QBrush>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    sql.isconnecttosql();
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/3.jpg")));
    this->setPalette(palette);
    ui->label_back1->setPixmap(QPixmap(":/2.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_selone_clicked()
{
    qDebug() << ui->comboBox->currentIndex();
    QString name;
    int current;
    if(ui->lineEdit_selname->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the whole name!");
        msg.exec();
        return;
    }
    ui->tableView->clearFocus();
    name = ui->lineEdit_selname->text();
    current = ui->comboBox->currentIndex();
    switch (current)
    {
    case 0:
    {
        query = sql.selectfromSql(name,"S");
        if(!query.next())
        {
            QMessageBox msg;
            msg.setText("Please enter the correct name");
            msg.exec();
            ui->lineEdit_selname->clear();
            return;
        }
        sql.model.setQuery(query);
        sql.model.setHeaderData(0,Qt::Horizontal,tr("name"));
        sql.model.setHeaderData(1,Qt::Horizontal,tr("sno"));
        sql.model.setHeaderData(2,Qt::Horizontal,tr("birthday"));
        sql.model.setHeaderData(3,Qt::Horizontal,tr("sdept"));
        sql.model.setHeaderData(4,Qt::Horizontal,tr("hometown"));
        ui->tableView->setModel(&sql.model);
        break;
    }
    case 1:
    {
        query = sql.selectfromSql(name,"Contact");
        if(!query.next())
        {
            QMessageBox msg;
            msg.setText("Please enter the correct name");
            msg.exec();
            ui->lineEdit_selname->clear();
            return;
        }
        sql.model.setQuery(query);
        ui->tableView->setModel(&sql.model);
        break;
    }
    case 2:
    {
        query = sql.selectfromSql(name,"Grade");
        if(!query.next())
        {
            QMessageBox msg;
            msg.setText("Please enter the correct name");
            msg.exec();
            ui->lineEdit_selname->clear();
            return;
        }
        sql.model.setQuery(query);
        sql.model.setHeaderData(4,Qt::Horizontal,tr("database"));
        ui->tableView->setModel(&sql.model);
        break;
    }
    }

}

void MainWindow::on_pushButton_selall_clicked()
{
    ui->tableView->clearFocus();
    sql.selectallinformation();
    ui->tableView->setModel(&sql.model);
}

void MainWindow::on_pushButton_addoneinfo_clicked()
{
    QStringList font;
    if(ui->lineEdit_addname->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the name");
        msg.exec();
        return;
    }
    if(ui->lineEdit_addsno->text().isEmpty() || ui->lineEdit_addbirth->text().isEmpty()
       || ui->lineEdit_addsdept->text().isEmpty() || ui->lineEdit_addhome->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the whole information");
        msg.exec();
        return;
    }
    QString str1,str2,str3,str4,str5;
    str1 = ui->lineEdit_addname->text();
    str2 = ui->lineEdit_addsno->text();
    str3 = ui->lineEdit_addbirth->text();
    str4 = ui->lineEdit_addsdept->text();
    str5 = ui->lineEdit_addhome->text();
    font << str1 << str2 << str3 << str4 << str5;
    query = sql.addtoStudent(font);
}

void MainWindow::on_pushButton_addcontact_clicked()
{
    QStringList font;
    if(ui->lineEdit_addname->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the name");
        msg.exec();
        return;
    }
    if(ui->lineEdit_addQQ->text().isEmpty() || ui->lineEdit_addtelnum->text().isEmpty()
       || ui->lineEdit_sushe->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the whole Contact");
        msg.exec();
        return;
    }
    QString str1,str2,str3,str4;
    str1 = ui->lineEdit_addname->text();
    str2 = ui->lineEdit_addQQ->text();
    str3 = ui->lineEdit_addtelnum->text();
    str4 = ui->lineEdit_sushe->text();
    font << str1 << str2 << str3 << str4;
    sql.addtoContact(font);
}

void MainWindow::on_pushButton_addgrade_clicked()
{
    if(ui->lineEdit_addname->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the name");
        msg.exec();
        return;
    }
    if(ui->lineEdit_addmath->text().isEmpty() || ui->lineEdit_addC->text().isEmpty()
       || ui->lineEdit_addenglish->text().isEmpty() || ui->lineEdit_addddatabase->text().isEmpty()
            || ui->lineEdit_addelec->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the whole Grade");
        msg.exec();
        return;
    }
    QString str = ui->lineEdit_addname->text();
    int data[5];
    data[0] = ui->lineEdit_addmath->text().toInt();
    data[1] = ui->lineEdit_addC->text().toInt();
    data[2] = ui->lineEdit_addenglish->text().toInt();
    data[3] = ui->lineEdit_addddatabase->text().toInt();
    data[4] = ui->lineEdit_addelec->text().toInt();
    sql.addtoGrade(str,data);
}

void MainWindow::on_pushButton_delete_clicked()
{
    QString name;
    if(ui->lineEdit_deletename->text().isEmpty())
    {
        QMessageBox msg;
        msg.setText("Please enter the name");
        msg.exec();
        return;
    }
    name = ui->lineEdit_deletename->text();
    sql.deletesomeone(name);
}
