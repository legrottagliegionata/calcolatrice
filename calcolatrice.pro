QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
QMAKE_CXXFLAGS += -std=c++11

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    punto.cpp \
    vertice.cpp \
    poligonoconvesso.cpp \
    triangolo.cpp \
    shape.cpp \
    main.cpp \
    poligono.cpp \
    poligonoconvesso.cpp \
    punto.cpp \
    shape.cpp \
    vertice.cpp \
    PoligonoConvessi/decagono.cpp \
    PoligonoConvessi/ennagono.cpp \
    PoligonoConvessi/esagono.cpp \
    PoligonoConvessi/ettagono.cpp \
    PoligonoConvessi/ottagono.cpp \
    PoligonoConvessi/pentagono.cpp \
    PoligonoConvessi/quadrilatero.cpp \
    PoligonoConvessi/triangolo.cpp \
    main.cpp \
    poligono.cpp \
    poligonoconvesso.cpp \
    punto.cpp \
    shape.cpp \
    vertice.cpp


HEADERS += \
    punto.h \
    vertice.h \
    poligonoconvesso.h \
    shape.h \
    poligono.h \
    poligono.h \
    poligonoconvesso.h \
    punto.h \
    shape.h \
    vertice.h \
    PoligonoConvessi/decagono.h \
    PoligonoConvessi/ennagono.h \
    PoligonoConvessi/esagono.h \
    PoligonoConvessi/ettagono.h \
    PoligonoConvessi/ottagono.h \
    PoligonoConvessi/pentagono.h \
    PoligonoConvessi/quadrilatero.h \
    PoligonoConvessi/triangolo.h \
    poligono.h \
    poligonoconvesso.h \
    punto.h \
    shape.h \
    vertice.h

SUBDIRS += \
    calcolatrice.pro

DISTFILES +=
