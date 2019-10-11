#-------------------------------------------------
#
# Project created by QtCreator 2019-10-11T14:21:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mydialog1
TEMPLATE = app


SOURCES += main.cpp\
        mywidget.cpp \
    childdialog.cpp

HEADERS  += mywidget.h \
    childdialog.h

FORMS    += mywidget.ui \
    childdialog.ui
