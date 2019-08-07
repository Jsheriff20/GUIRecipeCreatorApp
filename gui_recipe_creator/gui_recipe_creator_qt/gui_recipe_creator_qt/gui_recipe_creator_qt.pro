#-------------------------------------------------
#
# Project created by QtCreator 2019-06-12T14:39:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui_recipe_creator_qt
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

SOURCES += \
        confirm_final_details.cpp \
        creating_method.cpp \
        final_infomation.cpp \
        get_ingredients.cpp \
        getting_meal_name.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        confirm_final_details.h \
        creating_method.h \
        final_infomation.h \
        get_ingredients.h \
        getting_meal_name.h \
        mainwindow.h

FORMS += \
        confirm_final_details.ui \
        creating_method.ui \
        get_ingredients.ui \
        getting_meal_name.ui \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
