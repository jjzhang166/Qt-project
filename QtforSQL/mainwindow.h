#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contactsql.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ContactSQL sql;
    QSqlQuery query;
    
private slots:
    void on_pushButton_selone_clicked();

    void on_pushButton_selall_clicked();

    void on_pushButton_addoneinfo_clicked();

    void on_pushButton_addcontact_clicked();

    void on_pushButton_addgrade_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
