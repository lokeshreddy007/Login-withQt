#-------------------------------------------------
#
# Project created by QtCreator 2018-12-17T10:33:33
#
#-------------------------------------------------

QT       += core gui
QT +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUi1
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11

SOURCES += \

        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc \
    img.qrc
