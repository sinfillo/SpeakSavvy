QT       += core gui
QT       += network
QT       += multimedia
QT       += multimediawidgets
QT       += svg
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authhandler.cpp \
    book.cpp \
    bookscollection.cpp \
    bookwidget.cpp \
    databasehandler.cpp \
    gameswidget.cpp \
    librarywidget.cpp \
    loginwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    notificationwindow.cpp \
    profile.cpp \
    readnowwidget.cpp \
    revisionwidget.cpp \
    signup.cpp \
    quizwidget.cpp \
    resultquizwidget.cpp \
    startquizwidget.cpp \
    videowidget.cpp \
    word.cpp \
    subtitleitem.cpp

HEADERS += \
    authhandler.h \
    book.h \
    bookscollection.h \
    bookwidget.h \
    databasehandler.h \
    gameswidget.h \
    librarywidget.h \
    loginwidget.h \
    mainwindow.h \
    notificationwindow.h \
    profile.h \
    readnowwidget.h \
    revisionwidget.h \
    signup.h \
    videowidget.h \
    quizwidget.h \
    resultquizwidget.h \
    startquizwidget.h \
    word.h \
    subtitleitem.h

FORMS += \
    bookscollection.ui \
    bookwidget.ui \
    gameswidget.ui \
    librarywidget.ui \
    loginwidget.ui \
    mainwindow.ui \
    profile.ui \
    readnowwidget.ui \
    revisionwidget.ui \
    signup.ui \
    videowidget.ui \
    quizwidget.ui \
    resultquizwidget.ui \
    startquizwidget.ui \

TRANSLATIONS += \
    SpeakSavvy_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

UI_DIR = $$PWD

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


RESOURCES += \
    resources.qrc

DISTFILES += \
    resources/synonyms.json
