QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authhandler.cpp \
    book.cpp \
    bookwidget.cpp \
    databasehandler.cpp \
    gameswidget.cpp \
    librarywidget.cpp \
    loginwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    profile.cpp \
    readnowwidget.cpp \
    signup.cpp \
    videowidget.cpp

HEADERS += \
    authhandler.h \
    book.h \
    bookwidget.h \
    databasehandler.h \
    gameswidget.h \
    librarywidget.h \
    loginwidget.h \
    mainwindow.h \
    profile.h \
    readnowwidget.h \
    signup.h \
    videowidget.h

FORMS += \
    bookwidget.ui \
    gameswidget.ui \
    librarywidget.ui \
    loginwidget.ui \
    mainwindow.ui \
    profile.ui \
    readnowwidget.ui \
    signup.ui \
    videowidget.ui

TRANSLATIONS += \
    SpeakSavvy_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
