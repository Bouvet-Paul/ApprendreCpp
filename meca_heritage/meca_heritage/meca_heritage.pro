TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CaisseDeBieres.cpp \
        CaisseDeBouteilles.cpp \
        carton.cpp \
        contenant.cpp \
        main.cpp

HEADERS += \
    CaisseDeBieres.h \
    CaisseDeBoutteilles.h \
    carton.h \
    contenant.h
