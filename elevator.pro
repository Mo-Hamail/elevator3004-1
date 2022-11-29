QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    audiosystem.cpp \
    cbell.cpp \
    cbutton.cpp \
    ccarbutton.cpp \
    cdoor.cpp \
    cecs.cpp \
    celevatorcontrolpanel.cpp \
    cfloor.cpp \
    cfloorbutton.cpp \
    display.cpp \
    doorsensor.cpp \
    elevatorcar.cpp \
    firesensor.cpp \
    floorsensor.cpp \
    main.cpp \
    mainwindow.cpp \
    overloadsensor.cpp \
    powersensor.cpp \
    sensor.cpp

HEADERS += \
    audiosystem.h \
    cbell.h \
    cbutton.h \
    ccarbutton.h \
    cdoor.h \
    cecs.h \
    celevatorcontrolpanel.h \
    cfloor.h \
    cfloorbutton.h \
    display.h \
    doorsensor.h \
    elevatorcar.h \
    firesensor.h \
    floorsensor.h \
    mainwindow.h \
    overloadsensor.h \
    powersensor.h \
    sensor.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
