/****************************************************************************
** Meta object code from reading C++ file 'SplineCtrlEx.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/Controls/SplineCtrlEx.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SplineCtrlEx.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SplineWidget_t {
    QByteArrayData data[9];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplineWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplineWidget_t qt_meta_stringdata_SplineWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SplineWidget"
QT_MOC_LITERAL(1, 13, 12), // "beforeChange"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "change"
QT_MOC_LITERAL(4, 34, 10), // "timeChange"
QT_MOC_LITERAL(5, 45, 19), // "scrollZoomRequested"
QT_MOC_LITERAL(6, 65, 7), // "clicked"
QT_MOC_LITERAL(7, 73, 12), // "rightClicked"
QT_MOC_LITERAL(8, 86, 18) // "keySelectionChange"

    },
    "SplineWidget\0beforeChange\0\0change\0"
    "timeChange\0scrollZoomRequested\0clicked\0"
    "rightClicked\0keySelectionChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplineWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SplineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SplineWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beforeChange(); break;
        case 1: _t->change(); break;
        case 2: _t->timeChange(); break;
        case 3: _t->scrollZoomRequested(); break;
        case 4: _t->clicked(); break;
        case 5: _t->rightClicked(); break;
        case 6: _t->keySelectionChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SplineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineWidget::beforeChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SplineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineWidget::change)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SplineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineWidget::timeChange)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SplineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineWidget::scrollZoomRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SplineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineWidget::clicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SplineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineWidget::rightClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SplineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplineWidget::keySelectionChange)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SplineWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SplineWidget.data,
    qt_meta_data_SplineWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SplineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplineWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AbstractSplineWidget"))
        return static_cast< AbstractSplineWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int SplineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SplineWidget::beforeChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SplineWidget::change()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SplineWidget::timeChange()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SplineWidget::scrollZoomRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SplineWidget::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SplineWidget::rightClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SplineWidget::keySelectionChange()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
