#-------------------------------------------------
#
# Project created by QtCreator 2019-03-19T13:46:09
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = meteo
TEMPLATE = app


SOURCES += main.cpp\
        meteo.cpp \
    dal.cpp

HEADERS  += meteo.h \
    dal.h

FORMS    += meteo.ui
