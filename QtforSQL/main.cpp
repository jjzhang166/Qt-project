#include <QApplication>
#include <QIcon>

#include "mainwindow.h"
#include "mainform.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/app.ico"));
    //Login l;
    //MainWindow l;
    mainform l;
    //courseRegister l;
    //stuRegister l;
    //classRegister l;
    //markRegister l;
    l.show();
    return a.exec();
}
