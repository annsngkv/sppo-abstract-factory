QT += core
QT -= gui

CONFIG += c++11

TARGET = sppo-abstract-factory
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    classunit.cpp \
    methodunit.cpp \
    cppclassunit.cpp \
    cppmethodunit.cpp \
    cppprintoperatorunit.cpp \
    cppfactory.cpp \
    javafactory.cpp \
    csharpfactory.cpp
    javaclassunit.cpp \
    javamethodunit.cpp \
    javaprintoperatorunit.cpp
    csharpclassunit.cpp \
    csharpmethodunit.cpp \
    csharpprintoperatorunit.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DISTFILES += \
    .gitignore

HEADERS += \
    printoperatorunit.h \
    unit.h \
    classunit.h \
    methodunit.h \
    cppclassunit.h \
    cppmethodunit.h \
    cppprintoperatorunit.h \
    ifactory.h \
    cppfactory.h \
    javafactory.h \
    csharpfactory.h
    javaclassunit.h \
    javamethodunit.h \
    javaprintoperatorunit.h
    csharpclassunit.h \
    csharpmethodunit.h \
    csharpprintoperatorunit.h
