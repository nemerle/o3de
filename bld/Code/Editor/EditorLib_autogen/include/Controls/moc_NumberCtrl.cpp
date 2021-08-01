/****************************************************************************
** Meta object code from reading C++ file 'NumberCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/Controls/NumberCtrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NumberCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNumberCtrl_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNumberCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNumberCtrl_t qt_meta_stringdata_QNumberCtrl = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QNumberCtrl"
QT_MOC_LITERAL(1, 12, 11), // "dragStarted"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "dragFinished"
QT_MOC_LITERAL(4, 38, 12), // "valueUpdated"
QT_MOC_LITERAL(5, 51, 12), // "valueChanged"
QT_MOC_LITERAL(6, 64, 13), // "mouseReleased"
QT_MOC_LITERAL(7, 78, 12) // "mousePressed"

    },
    "QNumberCtrl\0dragStarted\0\0dragFinished\0"
    "valueUpdated\0valueChanged\0mouseReleased\0"
    "mousePressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNumberCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNumberCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QNumberCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dragStarted(); break;
        case 1: _t->dragFinished(); break;
        case 2: _t->valueUpdated(); break;
        case 3: _t->valueChanged(); break;
        case 4: _t->mouseReleased(); break;
        case 5: _t->mousePressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QNumberCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNumberCtrl::dragStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QNumberCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNumberCtrl::dragFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QNumberCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNumberCtrl::valueUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QNumberCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNumberCtrl::valueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QNumberCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNumberCtrl::mouseReleased)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QNumberCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNumberCtrl::mousePressed)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QNumberCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleSpinBox::staticMetaObject>(),
    qt_meta_stringdata_QNumberCtrl.data,
    qt_meta_data_QNumberCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QNumberCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNumberCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNumberCtrl.stringdata0))
        return static_cast<void*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int QNumberCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QNumberCtrl::dragStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QNumberCtrl::dragFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QNumberCtrl::valueUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QNumberCtrl::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QNumberCtrl::mouseReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QNumberCtrl::mousePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
