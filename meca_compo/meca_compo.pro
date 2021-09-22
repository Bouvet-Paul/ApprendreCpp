TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CapteurHumidite.cpp \
        main.cpp \
        vanne.cpp \
        zonearrosage.cpp

HEADERS += \
    CapteurHumidite.h \
    vanne.h \
    zonearrosage.h
