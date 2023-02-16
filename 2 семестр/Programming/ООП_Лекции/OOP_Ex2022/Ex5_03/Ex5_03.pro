TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp Book.cpp \
    CPrintBook.cpp
HEADERS += Book.h PrintBook.h
