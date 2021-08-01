/****************************************************************************
** Meta object code from reading C++ file 'FileWatcherAPI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/AssetProcessor/native/FileWatcher/FileWatcherAPI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileWatcherAPI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FolderWatchBase_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FolderWatchBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FolderWatchBase_t qt_meta_stringdata_FolderWatchBase = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FolderWatchBase"
QT_MOC_LITERAL(1, 16, 15), // "OnAnyFileChange"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "FileChangeInfo"
QT_MOC_LITERAL(4, 48, 4), // "info"
QT_MOC_LITERAL(5, 53, 12) // "OnFileChange"

    },
    "FolderWatchBase\0OnAnyFileChange\0\0"
    "FileChangeInfo\0info\0OnFileChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderWatchBase[] = {

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
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void FolderWatchBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWatchBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAnyFileChange((*reinterpret_cast< FileChangeInfo(*)>(_a[1]))); break;
        case 1: _t->OnFileChange((*reinterpret_cast< const FileChangeInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FileChangeInfo >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FileChangeInfo >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FolderWatchBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FolderWatchBase.data,
    qt_meta_data_FolderWatchBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FolderWatchBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderWatchBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FolderWatchBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FolderWatchBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_FolderWatchCallbackEx_t {
    QByteArrayData data[9];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FolderWatchCallbackEx_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FolderWatchCallbackEx_t qt_meta_stringdata_FolderWatchCallbackEx = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FolderWatchCallbackEx"
QT_MOC_LITERAL(1, 22, 10), // "fileChange"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "FileChangeInfo"
QT_MOC_LITERAL(4, 49, 4), // "info"
QT_MOC_LITERAL(5, 54, 9), // "fileAdded"
QT_MOC_LITERAL(6, 64, 8), // "filePath"
QT_MOC_LITERAL(7, 73, 11), // "fileRemoved"
QT_MOC_LITERAL(8, 85, 12) // "fileModified"

    },
    "FolderWatchCallbackEx\0fileChange\0\0"
    "FileChangeInfo\0info\0fileAdded\0filePath\0"
    "fileRemoved\0fileModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderWatchCallbackEx[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       7,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void FolderWatchCallbackEx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWatchCallbackEx *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileChange((*reinterpret_cast< FileChangeInfo(*)>(_a[1]))); break;
        case 1: _t->fileAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->fileRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->fileModified((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FileChangeInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderWatchCallbackEx::*)(FileChangeInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWatchCallbackEx::fileChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderWatchCallbackEx::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWatchCallbackEx::fileAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FolderWatchCallbackEx::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWatchCallbackEx::fileRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FolderWatchCallbackEx::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderWatchCallbackEx::fileModified)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FolderWatchCallbackEx::staticMetaObject = { {
    QMetaObject::SuperData::link<FolderWatchBase::staticMetaObject>(),
    qt_meta_stringdata_FolderWatchCallbackEx.data,
    qt_meta_data_FolderWatchCallbackEx,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FolderWatchCallbackEx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderWatchCallbackEx::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FolderWatchCallbackEx.stringdata0))
        return static_cast<void*>(this);
    return FolderWatchBase::qt_metacast(_clname);
}

int FolderWatchCallbackEx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FolderWatchBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FolderWatchCallbackEx::fileChange(FileChangeInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FolderWatchCallbackEx::fileAdded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FolderWatchCallbackEx::fileRemoved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FolderWatchCallbackEx::fileModified(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
