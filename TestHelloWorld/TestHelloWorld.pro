QT += testlib
QT -= gui

QMAKE_CXXFLAGS += -std=c++17

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle
CONFIG -= qt

TEMPLATE = app

SOURCES +=  tst_mytestcasename.cpp \
    ../HelloWorld/multiplicator.cpp

HEADERS += \
    ../HelloWorld/multiplicator.h

INCLUDEPATH += \
    ../HelloWorld/
