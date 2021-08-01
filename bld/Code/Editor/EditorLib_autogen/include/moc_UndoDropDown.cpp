/****************************************************************************
** Meta object code from reading C++ file 'UndoDropDown.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/UndoDropDown.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UndoDropDown.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UndoStackStateAdapter_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoStackStateAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoStackStateAdapter_t qt_meta_stringdata_UndoStackStateAdapter = {
    {
QT_MOC_LITERAL(0, 0, 21), // "UndoStackStateAdapter"
QT_MOC_LITERAL(1, 22, 13), // "UndoAvailable"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "count"
QT_MOC_LITERAL(4, 43, 13) // "RedoAvailable"

    },
    "UndoStackStateAdapter\0UndoAvailable\0"
    "\0count\0RedoAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoStackStateAdapter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void UndoStackStateAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UndoStackStateAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UndoAvailable((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->RedoAvailable((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UndoStackStateAdapter::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStackStateAdapter::UndoAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UndoStackStateAdapter::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UndoStackStateAdapter::RedoAvailable)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UndoStackStateAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UndoStackStateAdapter.data,
    qt_meta_data_UndoStackStateAdapter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UndoStackStateAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoStackStateAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UndoStackStateAdapter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IUndoManagerListener"))
        return static_cast< IUndoManagerListener*>(this);
    return QObject::qt_metacast(_clname);
}

int UndoStackStateAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void UndoStackStateAdapter::UndoAvailable(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UndoStackStateAdapter::RedoAvailable(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_UndoStackItemSelectionModel_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoStackItemSelectionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoStackItemSelectionModel_t qt_meta_stringdata_UndoStackItemSelectionModel = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UndoStackItemSelectionModel"
QT_MOC_LITERAL(1, 28, 6), // "select"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 48, 5), // "index"
QT_MOC_LITERAL(5, 54, 35), // "QItemSelectionModel::Selectio..."
QT_MOC_LITERAL(6, 90, 7), // "command"
QT_MOC_LITERAL(7, 98, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 113, 9) // "selection"

    },
    "UndoStackItemSelectionModel\0select\0\0"
    "QModelIndex\0index\0QItemSelectionModel::SelectionFlags\0"
    "command\0QItemSelection\0selection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoStackItemSelectionModel[] = {

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
       1,    2,   24,    2, 0x0a /* Public */,
       1,    2,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    8,    6,

       0        // eod
};

void UndoStackItemSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UndoStackItemSelectionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->select((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 1: _t->select((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UndoStackItemSelectionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemSelectionModel::staticMetaObject>(),
    qt_meta_stringdata_UndoStackItemSelectionModel.data,
    qt_meta_data_UndoStackItemSelectionModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UndoStackItemSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoStackItemSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UndoStackItemSelectionModel.stringdata0))
        return static_cast<void*>(this);
    return QItemSelectionModel::qt_metacast(_clname);
}

int UndoStackItemSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemSelectionModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CUndoDropDown_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CUndoDropDown_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CUndoDropDown_t qt_meta_stringdata_CUndoDropDown = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CUndoDropDown"
QT_MOC_LITERAL(1, 14, 7), // "Prepare"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "SelectionChanged"
QT_MOC_LITERAL(4, 40, 14), // "QItemSelection"
QT_MOC_LITERAL(5, 55, 8), // "selected"
QT_MOC_LITERAL(6, 64, 10) // "deselected"

    },
    "CUndoDropDown\0Prepare\0\0SelectionChanged\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CUndoDropDown[] = {

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

void CUndoDropDown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CUndoDropDown *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Prepare(); break;
        case 1: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CUndoDropDown::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CUndoDropDown.data,
    qt_meta_data_CUndoDropDown,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CUndoDropDown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CUndoDropDown::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CUndoDropDown.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CUndoDropDown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
