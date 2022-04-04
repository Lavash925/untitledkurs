QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TARGET = QSQLDatabase
TEMPLATE = app
SOURCES += \
    authwindow.cpp \
    choosewindow.cpp \
    fizfacewindow.cpp \
    idchoose.cpp \
    main.cpp \
    sucwindow.cpp \
    urfacewindow.cpp \
    widget.cpp

HEADERS += \
    authwindow.h \
    choosewindow.h \
    fizfacewindow.h \
    idchoose.h \
    sucwindow.h \
    urfacewindow.h \
    widget.h

FORMS += \
    authwindow.ui \
    choosewindow.ui \
    fizfacewindow.ui \
    idchoose.ui \
    sucwindow.ui \
    urfacewindow.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
