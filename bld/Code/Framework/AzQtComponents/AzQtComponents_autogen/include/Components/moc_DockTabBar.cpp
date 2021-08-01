/****************************************************************************
** Meta object code from reading C++ file 'DockTabBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/DockTabBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockTabBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__DockTabBar_t {
    QByteArrayData data[10];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__DockTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__DockTabBar_t qt_meta_stringdata_AzQtComponents__DockTabBar = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::DockTabBar"
QT_MOC_LITERAL(1, 27, 8), // "closeTab"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "index"
QT_MOC_LITERAL(4, 43, 9), // "undockTab"
QT_MOC_LITERAL(5, 53, 26), // "singleTabFillsWidthChanged"
QT_MOC_LITERAL(6, 80, 19), // "singleTabFillsWidth"
QT_MOC_LITERAL(7, 100, 19), // "currentIndexChanged"
QT_MOC_LITERAL(8, 120, 7), // "current"
QT_MOC_LITERAL(9, 128, 13) // "closeTabGroup"

    },
    "AzQtComponents::DockTabBar\0closeTab\0"
    "\0index\0undockTab\0singleTabFillsWidthChanged\0"
    "singleTabFillsWidth\0currentIndexChanged\0"
    "current\0closeTabGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__DockTabBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   48,    2, 0x09 /* Protected */,
       9,    0,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,

       0        // eod
};

void AzQtComponents::DockTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->undockTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->singleTabFillsWidthChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->closeTabGroup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabBar::closeTab)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabBar::undockTab)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockTabBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabBar::singleTabFillsWidthChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DockTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->singleTabFillsWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DockTabBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSingleTabFillsWidth(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::DockTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<TabBar::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__DockTabBar.data,
    qt_meta_data_AzQtComponents__DockTabBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::DockTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::DockTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__DockTabBar.stringdata0))
        return static_cast<void*>(this);
    return TabBar::qt_metacast(_clname);
}

int AzQtComponents::DockTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabBar::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::DockTabBar::closeTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::DockTabBar::undockTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::DockTabBar::singleTabFillsWidthChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
