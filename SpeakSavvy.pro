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
    src/authhandler.cpp \
    src/book.cpp \
    src/bookscollection.cpp \
    src/bookwidget.cpp \
    src/databasehandler.cpp \
    src/gameswidget.cpp \
    src/librarywidget.cpp \
    src/loginwidget.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/notificationwindow.cpp \
    src/profile.cpp \
    src/readnowwidget.cpp \
    src/revisionwidget.cpp \
    src/signup.cpp \
    src/quizwidget.cpp \
    src/resultquizwidget.cpp \
    src/startquizwidget.cpp \
    src/subtitleitem.cpp \
    src/videowidget.cpp \
    src/word.cpp

HEADERS += \
    inc/authhandler.h \
    inc/book.h \
    inc/bookscollection.h \
    inc/bookwidget.h \
    inc/databasehandler.h \
    inc/gameswidget.h \
    inc/librarywidget.h \
    inc/loginwidget.h \
    inc/mainwindow.h \
    inc/notificationwindow.h \
    inc/profile.h \
    inc/readnowwidget.h \
    inc/revisionwidget.h \
    inc/signup.h \
    inc/subtitleitem.h \
    inc/videowidget.h \
    inc/quizwidget.h \
    inc/resultquizwidget.h \
    inc/startquizwidget.h \
    inc/word.h

FORMS += \
    ui/src/bookscollection.ui \
    ui/src/bookwidget.ui \
    ui/src/gameswidget.ui \
    ui/src/librarywidget.ui \
    ui/src/loginwidget.ui \
    ui/src/mainwindow.ui \
    ui/src/profile.ui \
    ui/src/readnowwidget.ui \
    ui/src/revisionwidget.ui \
    ui/src/signup.ui \
    ui/src/videowidget.ui \
    ui/src/quizwidget.ui \
    ui/src/resultquizwidget.ui \
    ui/src/startquizwidget.ui \

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
    resrc/resources.qrc

DISTFILES += \
    resrc/resources/synonyms.json
