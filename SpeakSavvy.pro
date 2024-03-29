QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    basewindow.cpp \
    booksmap.cpp \
    collectionwidget.cpp \
    dbhandler.cpp \
    dbmap.cpp \
    librarywidget.cpp \
    main.cpp \
    bookwindow.cpp \
    readwidget.cpp \
    translate.cpp \
    user.cpp

HEADERS += \
    basewindow.h \
    book.h \
    booksmap.h \
    bookwindow.h \
    collectionwidget.h \
    dbhandler.h \
    dbmap.h \
    librarywidget.h \
    readwidget.h \
    user.h \
    word.h

FORMS += \
    bookwindow.ui

TRANSLATIONS += \
    SpeakSavvy_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
