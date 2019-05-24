#-------------------------------------------------
#
# Project created by QtCreator 2019-04-20T00:07:19
#
#-------------------------------------------------_

QT       += core gui
QT       += multimedia
QT       += x11extras
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Vass_2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
CONFIG    += link_pkgconfig
PKGCONFIG += x11

SOURCES += \
        clock.cpp \
        config.cpp \
        event_filter.cpp \
        icon_panel.cpp \
        main.cpp \
        mainwindow.cpp \
        media_player.cpp \
        saver.cpp \
        shortcut.cpp \
        shortcut.cpp \
        shortcut.cpp \
        shortcut_v.cpp \
        submit_removal.cpp \
        timewidget.cpp

RC_ICONS=icon2.png

HEADERS += \
        clock.h \
        config.h \
        event_filter.h \
        icon_panel.h \
        mainwindow.h \
        media_player.h \
        saver.h \
        shortcut.h \
        shortcut.h \
        shortcut.h \
        shortcut.h \
        shortcut_v.h \
        submit_removal.h \
        timewidget.h
FORMS += \
        clock.ui \
        config.ui \
        icon_panel.ui \
        mainwindow.ui \
        media_player.ui \
        submit_removal.ui
#QT+=multimedia



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc \
    resources.qrc



#unix|win32: LIBS += -L$$PWD/../ -lUGlobalHotkey

INCLUDEPATH += $$PWD/../
DEPENDPATH += $$PWD/../

#INCLUDEPATH +=$$PWD/../UGlobalHotkey

#win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../UGlobalHotkey.lib
#else:unix|win32-g++: PRE_TARGETDEPS += $$PWD/../libUGlobalHotkey.a
