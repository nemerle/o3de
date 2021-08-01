/****************************************************************************
** Meta object code from reading C++ file 'LayoutWnd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/LayoutWnd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayoutWnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CLayoutSplitter_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLayoutSplitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLayoutSplitter_t qt_meta_stringdata_CLayoutSplitter = {
    {
QT_MOC_LITERAL(0, 0, 15) // "CLayoutSplitter"

    },
    "CLayoutSplitter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLayoutSplitter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CLayoutSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CLayoutSplitter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSplitter::staticMetaObject>(),
    qt_meta_stringdata_CLayoutSplitter.data,
    qt_meta_data_CLayoutSplitter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CLayoutSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLayoutSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLayoutSplitter.stringdata0))
        return static_cast<void*>(this);
    return QSplitter::qt_metacast(_clname);
}

int CLayoutSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CLayoutWnd_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLayoutWnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLayoutWnd_t qt_meta_stringdata_CLayoutWnd = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CLayoutWnd"
QT_MOC_LITERAL(1, 11, 11), // "ResetLayout"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "OnFocusChanged"
QT_MOC_LITERAL(4, 39, 8), // "QWidget*"
QT_MOC_LITERAL(5, 48, 9), // "oldWidget"
QT_MOC_LITERAL(6, 58, 9) // "newWidget"

    },
    "CLayoutWnd\0ResetLayout\0\0OnFocusChanged\0"
    "QWidget*\0oldWidget\0newWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLayoutWnd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,

       0        // eod
};

void CLayoutWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CLayoutWnd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ResetLayout(); break;
        case 1: _t->OnFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CLayoutWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::ToolBarArea::staticMetaObject>(),
    qt_meta_stringdata_CLayoutWnd.data,
    qt_meta_data_CLayoutWnd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CLayoutWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLayoutWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLayoutWnd.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::ToolBarArea::qt_metacast(_clname);
}

int CLayoutWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::ToolBarArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
