#-------------------------------------------------
#
# Project created by QtCreator 2019-04-23T15:24:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VirMem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    queue.cpp \
    producline.cpp \
    process.cpp \
    node.cpp

HEADERS  += mainwindow.h \
    queue.h \
    producline.h \
    process.h \
    node.h

FORMS    += mainwindow.ui
