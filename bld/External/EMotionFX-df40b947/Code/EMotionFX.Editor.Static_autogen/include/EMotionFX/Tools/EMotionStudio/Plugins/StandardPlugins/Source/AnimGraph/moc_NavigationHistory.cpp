/****************************************************************************
** Meta object code from reading C++ file 'NavigationHistory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/NavigationHistory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavigationHistory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__NavigationHistory_t {
    QByteArrayData data[13];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NavigationHistory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NavigationHistory_t qt_meta_stringdata_EMStudio__NavigationHistory = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMStudio::NavigationHistory"
QT_MOC_LITERAL(1, 28, 21), // "ChangedSteppingLimits"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 14), // "OnFocusChanged"
QT_MOC_LITERAL(4, 66, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 78, 13), // "newFocusIndex"
QT_MOC_LITERAL(6, 92, 14), // "newFocusParent"
QT_MOC_LITERAL(7, 107, 13), // "oldFocusIndex"
QT_MOC_LITERAL(8, 121, 14), // "oldFocusParent"
QT_MOC_LITERAL(9, 136, 13), // "OnRowsRemoved"
QT_MOC_LITERAL(10, 150, 6), // "parent"
QT_MOC_LITERAL(11, 157, 5), // "first"
QT_MOC_LITERAL(12, 163, 4) // "last"

    },
    "EMStudio::NavigationHistory\0"
    "ChangedSteppingLimits\0\0OnFocusChanged\0"
    "QModelIndex\0newFocusIndex\0newFocusParent\0"
    "oldFocusIndex\0oldFocusParent\0OnRowsRemoved\0"
    "parent\0first\0last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NavigationHistory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    4,   30,    2, 0x08 /* Private */,
       9,    3,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::Int,   10,   11,   12,

       0        // eod
};

void EMStudio::NavigationHistory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationHistory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangedSteppingLimits(); break;
        case 1: _t->OnFocusChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 2: _t->OnRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavigationHistory::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavigationHistory::ChangedSteppingLimits)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::NavigationHistory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NavigationHistory.data,
    qt_meta_data_EMStudio__NavigationHistory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NavigationHistory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NavigationHistory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NavigationHistory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EMStudio::NavigationHistory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::NavigationHistory::ChangedSteppingLimits()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
