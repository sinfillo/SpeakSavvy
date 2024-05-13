/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "signal",
    "",
    "nickname",
    "LogIntoAccount",
    "m_idToken",
    "email",
    "signInError",
    "error",
    "changeTabToReadNow",
    "bookId",
    "changeTabToSignUp",
    "changeTabToLogIn",
    "signUp",
    "password",
    "logIn",
    "logOut",
    "changeToQuiz",
    "size_t",
    "cnt",
    "changeToStartQuizOrProfile",
    "is_start",
    "changeToStartQuizBack",
    "changeToResult",
    "cnt_correct",
    "cnt_all",
    "changeTabToRevision",
    "flag",
    "changeTabToCollection",
    "connectButton",
    "endRevision",
    "from_quiz",
    "on_goToGamesButton_clicked",
    "on_goToLibraryButton_clicked",
    "on_goToProfileButton_clicked",
    "on_goToQuizButton_clicked",
    "on_goToReadingButton_clicked",
    "on_goToVideoButton_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  158,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,  161,    2, 0x08,    3 /* Private */,
       7,    1,  166,    2, 0x08,    6 /* Private */,
       9,    1,  169,    2, 0x08,    8 /* Private */,
      11,    0,  172,    2, 0x08,   10 /* Private */,
      12,    0,  173,    2, 0x08,   11 /* Private */,
      13,    2,  174,    2, 0x08,   12 /* Private */,
      15,    2,  179,    2, 0x08,   15 /* Private */,
      16,    0,  184,    2, 0x08,   18 /* Private */,
      17,    1,  185,    2, 0x08,   19 /* Private */,
      20,    1,  188,    2, 0x08,   21 /* Private */,
      22,    0,  191,    2, 0x08,   23 /* Private */,
      23,    2,  192,    2, 0x08,   24 /* Private */,
      26,    1,  197,    2, 0x08,   27 /* Private */,
      26,    0,  200,    2, 0x28,   29 /* Private | MethodCloned */,
      28,    0,  201,    2, 0x08,   30 /* Private */,
      29,    0,  202,    2, 0x08,   31 /* Private */,
      30,    1,  203,    2, 0x08,   32 /* Private */,
      32,    0,  206,    2, 0x08,   34 /* Private */,
      33,    0,  207,    2, 0x08,   35 /* Private */,
      34,    0,  208,    2, 0x08,   36 /* Private */,
      35,    0,  209,    2, 0x08,   37 /* Private */,
      36,    0,  210,    2, 0x08,   38 /* Private */,
      37,    0,  211,    2, 0x08,   39 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   24,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'LogIntoAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'signInError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'changeTabToReadNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeTabToSignUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeTabToLogIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'logIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'logOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeToQuiz'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'changeToStartQuizOrProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'changeToStartQuizBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeToResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'changeTabToRevision'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'changeTabToRevision'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeTabToCollection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endRevision'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_goToGamesButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_goToLibraryButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_goToProfileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_goToQuizButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_goToReadingButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_goToVideoButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->LogIntoAccount((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->signInError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->changeTabToReadNow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->changeTabToSignUp(); break;
        case 5: _t->changeTabToLogIn(); break;
        case 6: _t->signUp((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->logIn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->logOut(); break;
        case 9: _t->changeToQuiz((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1]))); break;
        case 10: _t->changeToStartQuizOrProfile((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->changeToStartQuizBack(); break;
        case 12: _t->changeToResult((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[2]))); break;
        case 13: _t->changeTabToRevision((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->changeTabToRevision(); break;
        case 15: _t->changeTabToCollection(); break;
        case 16: _t->connectButton(); break;
        case 17: _t->endRevision((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->on_goToGamesButton_clicked(); break;
        case 19: _t->on_goToLibraryButton_clicked(); break;
        case 20: _t->on_goToProfileButton_clicked(); break;
        case 21: _t->on_goToQuizButton_clicked(); break;
        case 22: _t->on_goToReadingButton_clicked(); break;
        case 23: _t->on_goToVideoButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (_t _q_method = &MainWindow::signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
