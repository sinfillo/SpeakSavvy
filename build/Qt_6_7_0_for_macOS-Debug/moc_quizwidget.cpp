/****************************************************************************
** Meta object code from reading C++ file 'quizwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../inc/quizwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quizwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQuizWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQuizWidgetENDCLASS = QtMocHelpers::stringData(
    "QuizWidget",
    "changeWidgetToStartOrProfile",
    "",
    "back_to_start",
    "changeWidgetToResult",
    "size_t",
    "cnt_correct",
    "cnt",
    "correctButton1",
    "correctButton2",
    "correctButton3",
    "on_backButton_clicked",
    "on_translationButton1_clicked",
    "on_translationButton2_clicked",
    "on_translationButton3_clicked",
    "updateTimeInfo",
    "updateWords",
    "selectNewWordAndUpdTimer"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuizWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       4,    2,   89,    2, 0x06,    3 /* Public */,
       8,    0,   94,    2, 0x06,    6 /* Public */,
       9,    0,   95,    2, 0x06,    7 /* Public */,
      10,    0,   96,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   97,    2, 0x08,    9 /* Private */,
      12,    0,   98,    2, 0x08,   10 /* Private */,
      13,    0,   99,    2, 0x08,   11 /* Private */,
      14,    0,  100,    2, 0x08,   12 /* Private */,
      15,    0,  101,    2, 0x08,   13 /* Private */,
      16,    0,  102,    2, 0x08,   14 /* Private */,
      17,    0,  103,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QuizWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQuizWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQuizWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQuizWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QuizWidget, std::true_type>,
        // method 'changeWidgetToStartOrProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'changeWidgetToResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<size_t, std::false_type>,
        // method 'correctButton1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'correctButton2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'correctButton3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_translationButton1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_translationButton2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_translationButton3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTimeInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateWords'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectNewWordAndUpdTimer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QuizWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuizWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeWidgetToStartOrProfile((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->changeWidgetToResult((*reinterpret_cast< std::add_pointer_t<size_t>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<size_t>>(_a[2]))); break;
        case 2: _t->correctButton1(); break;
        case 3: _t->correctButton2(); break;
        case 4: _t->correctButton3(); break;
        case 5: _t->on_backButton_clicked(); break;
        case 6: _t->on_translationButton1_clicked(); break;
        case 7: _t->on_translationButton2_clicked(); break;
        case 8: _t->on_translationButton3_clicked(); break;
        case 9: _t->updateTimeInfo(); break;
        case 10: _t->updateWords(); break;
        case 11: _t->selectNewWordAndUpdTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QuizWidget::*)(bool );
            if (_t _q_method = &QuizWidget::changeWidgetToStartOrProfile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QuizWidget::*)(size_t , size_t );
            if (_t _q_method = &QuizWidget::changeWidgetToResult; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QuizWidget::*)();
            if (_t _q_method = &QuizWidget::correctButton1; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QuizWidget::*)();
            if (_t _q_method = &QuizWidget::correctButton2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QuizWidget::*)();
            if (_t _q_method = &QuizWidget::correctButton3; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *QuizWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuizWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQuizWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QuizWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QuizWidget::changeWidgetToStartOrProfile(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QuizWidget::changeWidgetToResult(size_t _t1, size_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QuizWidget::correctButton1()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QuizWidget::correctButton2()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QuizWidget::correctButton3()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
