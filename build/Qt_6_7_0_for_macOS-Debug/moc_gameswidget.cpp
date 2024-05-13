/****************************************************************************
** Meta object code from reading C++ file 'gameswidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/gameswidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameswidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGamesWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGamesWidgetENDCLASS = QtMocHelpers::stringData(
    "GamesWidget",
    "keyClicked",
    "",
    "QAbstractButton*",
    "key",
    "eventFilter",
    "obj",
    "QEvent*",
    "event",
    "on_EnterKey_clicked",
    "on_howToPlayButton_clicked",
    "on_GameButton_clicked",
    "on_StatsButton_clicked",
    "on_BackespaceKey_clicked",
    "getAllWords",
    "QStringList&",
    "dictionary",
    "QFile&",
    "file",
    "newGameStarted",
    "formJson",
    "QJsonObject&",
    "jsonObject",
    "setStatistics",
    "setProgressBar",
    "QProgressBar*",
    "progressBar",
    "attempts",
    "winCount",
    "bgColor",
    "chunkColor",
    "updJson",
    "filterColoredLabels",
    "QList<QLabel*>&",
    "labelList",
    "gameStarted",
    "gameEnded",
    "handleWinEvent",
    "handleLoseEvent",
    "findEmptyLabelIndex",
    "updatePlayerStats",
    "remainingGuesses"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGamesWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  134,    2, 0x0a,    1 /* Public */,
       5,    2,  137,    2, 0x08,    3 /* Private */,
       9,    0,  142,    2, 0x08,    6 /* Private */,
      10,    0,  143,    2, 0x08,    7 /* Private */,
      11,    0,  144,    2, 0x08,    8 /* Private */,
      12,    0,  145,    2, 0x08,    9 /* Private */,
      13,    0,  146,    2, 0x08,   10 /* Private */,
      14,    2,  147,    2, 0x08,   11 /* Private */,
      19,    0,  152,    2, 0x08,   14 /* Private */,
      20,    2,  153,    2, 0x08,   15 /* Private */,
      23,    0,  158,    2, 0x08,   18 /* Private */,
      24,    5,  159,    2, 0x08,   19 /* Private */,
      31,    2,  170,    2, 0x08,   25 /* Private */,
      32,    1,  175,    2, 0x08,   28 /* Private */,
      35,    0,  178,    2, 0x08,   30 /* Private */,
      36,    0,  179,    2, 0x08,   31 /* Private */,
      37,    0,  180,    2, 0x08,   32 /* Private */,
      38,    0,  181,    2, 0x08,   33 /* Private */,
      39,    1,  182,    2, 0x08,   34 /* Private */,
      40,    1,  185,    2, 0x08,   36 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 17,   22,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, QMetaType::Int, QMetaType::Double, QMetaType::QString, QMetaType::QString,   26,   27,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 21,   18,   22,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::Int,   41,

       0        // eod
};

Q_CONSTINIT const QMetaObject GamesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGamesWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGamesWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGamesWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GamesWidget, std::true_type>,
        // method 'keyClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'eventFilter'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>,
        // method 'on_EnterKey_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_howToPlayButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_GameButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_StatsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_BackespaceKey_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getAllWords'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFile &, std::false_type>,
        // method 'newGameStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'formJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFile &, std::false_type>,
        // method 'setStatistics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setProgressBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProgressBar *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFile &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject &, std::false_type>,
        // method 'filterColoredLabels'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QLabel*> &, std::false_type>,
        // method 'gameStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleWinEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleLoseEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findEmptyLabelIndex'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QLabel*> &, std::false_type>,
        // method 'updatePlayerStats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void GamesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamesWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->keyClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_EnterKey_clicked(); break;
        case 3: _t->on_howToPlayButton_clicked(); break;
        case 4: _t->on_GameButton_clicked(); break;
        case 5: _t->on_StatsButton_clicked(); break;
        case 6: _t->on_BackespaceKey_clicked(); break;
        case 7: _t->getAllWords((*reinterpret_cast< std::add_pointer_t<QStringList&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFile&>>(_a[2]))); break;
        case 8: _t->newGameStarted(); break;
        case 9: _t->formJson((*reinterpret_cast< std::add_pointer_t<QJsonObject&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFile&>>(_a[2]))); break;
        case 10: _t->setStatistics(); break;
        case 11: _t->setProgressBar((*reinterpret_cast< std::add_pointer_t<QProgressBar*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 12: _t->updJson((*reinterpret_cast< std::add_pointer_t<QFile&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject&>>(_a[2]))); break;
        case 13: _t->filterColoredLabels((*reinterpret_cast< std::add_pointer_t<QList<QLabel*>&>>(_a[1]))); break;
        case 14: _t->gameStarted(); break;
        case 15: _t->gameEnded(); break;
        case 16: _t->handleWinEvent(); break;
        case 17: _t->handleLoseEvent(); break;
        case 18: { int _r = _t->findEmptyLabelIndex((*reinterpret_cast< std::add_pointer_t<QList<QLabel*>&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->updatePlayerStats((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QProgressBar* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *GamesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGamesWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GamesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
