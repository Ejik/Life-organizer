# -------------------------------------------------
# Project created by QtCreator 2009-07-18T09:54:54
# -------------------------------------------------
QT += network \
    sql \
    xml
debug { 
    CONFIG += console
    INCLUDEPATH += ./GeneratedFiles/Debug
    MOC_DIR += ./GeneratedFiles/Debug
    OBJECTS_DIR += ./bin/Debug
    DESTDIR = ./bin/Debug
}
TARGET = LifeOrganizer
TEMPLATE = app
SOURCES += src/main.cpp \
    src/mainwindow.cpp \
    src/bootstrapper.cpp \
    src/newdbview.cpp \
    src/datalayer.cpp \
    src/corelib.cpp \
    src/globalcontext.cpp \
    src/mainwindowcontroller.cpp \
    src/tabwidget.cpp
HEADERS += src/mainwindow.h \
    src/bootstrapper.h \
    src/newdbview.h \
    src/datalayer.h \
    src/corelib.h \
    src/globalcontext.h \
    src/mainwindowcontroller.h \
    src/tabwidget.h
FORMS += src/mainwindow.ui \
    src/newdbview.ui \
    src/tabwidget.ui
