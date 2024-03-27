QT += testlib
QT -= gui

QMAKE_CXXFLAGS += --enable-libstdcxx-filesystem-ts

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_mytestcasename.cpp \
    ../HelloWorld/multiplicator.cpp

HEADERS += \
    ../HelloWorld/multiplicator.h

INCLUDEPATH += \
    ../HelloWorld/
