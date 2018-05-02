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

SOURCES +=\
    PoligoniConvessi/decagono.cpp \
    PoligoniConvessi/ennagono.cpp \
    PoligoniConvessi/esagono.cpp \
    PoligoniConvessi/ettagono.cpp \
    PoligoniConvessi/ottagono.cpp \
    PoligoniConvessi/pentagono.cpp \
    PoligoniConvessi/quadrilatero.cpp \
    PoligoniConvessi/triangolo.cpp \
    main.cpp \
    poligono.cpp \
    poligonoconvesso.cpp \
    punto.cpp \
    shape.cpp \
    vertice.cpp \
    PoligoniConvessi/endecagono.cpp \
    PoligoniConvessi/dodecagono.cpp \
    PoligoniConvessi/tridecagono.cpp \
    PoligoniConvessi/tetradecagono.cpp \
    PoligoniConvessi/pentadecagono.cpp \
    PoligoniConvessi/esadecagono.cpp \
    PoligoniConvessi/eptadecagono.cpp \
    PoligoniConvessi/ottadecagono.cpp \
    PoligoniConvessi/ennadecagono.cpp \
    PoligoniConvessi/icosagono.cpp \
    cerchio.cpp


HEADERS += \
    poligonoconvesso.h \
    poligono.h \
    punto.h \
    shape.h \
    vertice.h \
    PoligoniConvessi/decagono.h \
    PoligoniConvessi/ennagono.h \
    PoligoniConvessi/esagono.h \
    PoligoniConvessi/ettagono.h \
    PoligoniConvessi/ottagono.h \
    PoligoniConvessi/pentagono.h \
    PoligoniConvessi/quadrilatero.h \
    PoligoniConvessi/triangolo.h \
    PoligoniConvessi/endecagono.h \
    PoligoniConvessi/dodecagono.h \
    PoligoniConvessi/tridecagono.h \
    PoligoniConvessi/tetradecagono.h \
    PoligoniConvessi/pentadecagono.h \
    PoligoniConvessi/esadecagono.h \
    PoligoniConvessi/eptadecagono.h \
    PoligoniConvessi/ottadecagono.h \
    PoligoniConvessi/ennadecagono.h \
    PoligoniConvessi/icosagono.h \
    cerchio.h


SUBDIRS += \
    calcolatrice.pro

DISTFILES += \
    out.txt
