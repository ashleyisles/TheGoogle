#-------------------------------------------------
#
# Project created by QtCreator 2014-11-12T00:18:42
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = SearchEngine
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   =+ c++11

TEMPLATE = app


SOURCES += main.cpp \
    hashentry.cpp \
    hashmap.cpp \
    pugixml.cpp \
    xmlparser.cpp \
    document.cpp \
    stopwords.cpp

HEADERS += \
    hashentry.h \
    hashmap.h \
    pugixml.hpp \
    pugiconfig.hpp \
    xmlparser.h \
    document.h \
    stopwords.h
