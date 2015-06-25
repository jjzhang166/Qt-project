#-------------------------------------------------
#
# Project created by QtCreator 2012-10-29T13:55:33
#
#-------------------------------------------------

QT       += core gui
QT	 += widgets
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtforSQL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    contactsql.cpp \
    login.cpp\
    sturegister.cpp\
    classregister.cpp\
    courseregister.cpp\
    markregister.cpp

HEADERS  += mainwindow.h \
    contactsql.h \
    login.h \
    ui_login.h \
    ui_mainwindow.h\
    sturegister.h\
    classregister.h\
    courseregister.h\
    markregister.h

FORMS    += mainwindow.ui \
    login.ui

RESOURCES += \
    image/image.qrc

OTHER_FILES +=
