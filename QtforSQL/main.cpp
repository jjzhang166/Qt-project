#include <QApplication>
#include "mainwindow.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login l;
    l.show();
    return a.exec();
}
