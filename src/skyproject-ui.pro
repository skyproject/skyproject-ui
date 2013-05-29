#-------------------------------------------------
#
# Project created by QtCreator 2013-05-01T22:14:13
#
#-------------------------------------------------

QT       += core gui

QMAKE_CXXFLAGS += -std=c++0x

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = skyproject-ui
TEMPLATE = lib

DEFINES += SKYPROJECTUI_LIBRARY

SOURCES += suil_data.cpp \
           suil_button.cpp \
           suil_number_edit.cpp \
           suil_table.cpp \
           suil_wizard.cpp \
           suil_number_box.cpp

HEADERS += suil_data.h \
           suil_global.h \
           suil_button.h \
           suil_number_edit.h \
           suil_table.h \
           suil_wizard.h \
           suil_number_box.h


FORMS += suil_wizard.ui


unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
