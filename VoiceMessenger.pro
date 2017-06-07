#-------------------------------------------------
#
# Project created by QtCreator 2017-04-02T16:50:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VoiceMessenger
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    messageconstructor.cpp \
    messageform.cpp \
    messagewidget.cpp \
    message.cpp

HEADERS  += mainwindow.h \
    messageconstructor.h \
    messageform.h \
    messagewidget.h \
    message.h

FORMS    += mainwindow.ui \
    messageconstructor.ui \
    messageform.ui \
    messagewidget.ui \
    message.ui

RESOURCES += \
    resources.qrc
