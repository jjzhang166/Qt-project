#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <iostream>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QDebug>
#include <QMessageBox>

#include <stdio.h>
#include <windows.h>
#include <shlobj.h>

using namespace std;


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QLabel *shortcutLabel;
    QLineEdit *shortcutEdit;
    QGridLayout *layout;
};

#endif // WIDGET_H
