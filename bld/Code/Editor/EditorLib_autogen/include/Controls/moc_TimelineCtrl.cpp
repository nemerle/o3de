/****************************************************************************
** Meta object code from reading C++ file 'TimelineCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/Controls/TimelineCtrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimelineCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimelineWidget_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimelineWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimelineWidget_t qt_meta_stringdata_TimelineWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TimelineWidget"
QT_MOC_LITERAL(1, 15, 15), // "deleteRequested"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "clicked"
QT_MOC_LITERAL(4, 40, 11), // "startChange"
QT_MOC_LITERAL(5, 52, 6), // "change"
QT_MOC_LITERAL(6, 59, 9) // "endChange"

    },
    "TimelineWidget\0deleteRequested\0\0clicked\0"
    "startChange\0change\0endChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimelineWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TimelineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimelineWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteRequested(); break;
        case 1: _t->clicked(); break;
        case 2: _t->startChange(); break;
        case 3: _t->change(); break;
        case 4: _t->endChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimelineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineWidget::deleteRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimelineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineWidget::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TimelineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineWidget::startChange)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TimelineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineWidget::change)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TimelineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimelineWidget::endChange)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TimelineWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TimelineWidget.data,
    qt_meta_data_TimelineWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimelineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimelineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimelineWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AbstractTimelineWidget"))
        return static_cast< AbstractTimelineWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int TimelineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TimelineWidget::deleteRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TimelineWidget::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TimelineWidget::startChange()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TimelineWidget::change()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TimelineWidget::endChange()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
