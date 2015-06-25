#include <QApplication>
#include "mainwindow.h"
#include "stuRegister.h"
#include "classregister.h"
#include "courseregister.h"
#include "markregister.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Login l;
    //courseRegister l;
    //stuRegister l;
    //classRegister l;
    markRegister l;
    l.show();
    return a.exec();
}
