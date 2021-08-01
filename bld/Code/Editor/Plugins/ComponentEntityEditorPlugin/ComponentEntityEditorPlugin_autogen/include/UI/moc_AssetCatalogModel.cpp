/****************************************************************************
** Meta object code from reading C++ file 'AssetCatalogModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Editor/Plugins/ComponentEntityEditorPlugin/UI/AssetCatalogModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetCatalogModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetCatalogModel_t {
    QByteArrayData data[14];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetCatalogModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetCatalogModel_t qt_meta_stringdata_AssetCatalogModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AssetCatalogModel"
QT_MOC_LITERAL(1, 18, 12), // "LoadComplete"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "SetTotalProgress"
QT_MOC_LITERAL(4, 49, 5), // "value"
QT_MOC_LITERAL(5, 55, 14), // "UpdateProgress"
QT_MOC_LITERAL(6, 70, 21), // "SearchCriteriaChanged"
QT_MOC_LITERAL(7, 92, 12), // "QStringList&"
QT_MOC_LITERAL(8, 105, 12), // "criteriaList"
QT_MOC_LITERAL(9, 118, 36), // "AzToolsFramework::FilterOpera..."
QT_MOC_LITERAL(10, 155, 14), // "filterOperator"
QT_MOC_LITERAL(11, 170, 13), // "ProcessAssets"
QT_MOC_LITERAL(12, 184, 21), // "StartProcessingAssets"
QT_MOC_LITERAL(13, 206, 20) // "StopProcessingAssets"

    },
    "AssetCatalogModel\0LoadComplete\0\0"
    "SetTotalProgress\0value\0UpdateProgress\0"
    "SearchCriteriaChanged\0QStringList&\0"
    "criteriaList\0AzToolsFramework::FilterOperatorType\0"
    "filterOperator\0ProcessAssets\0"
    "StartProcessingAssets\0StopProcessingAssets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetCatalogModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   56,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x0a /* Public */,
      12,    0,   62,    2, 0x0a /* Public */,
      13,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssetCatalogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetCatalogModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadComplete(); break;
        case 1: _t->SetTotalProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->UpdateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SearchCriteriaChanged((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< AzToolsFramework::FilterOperatorType(*)>(_a[2]))); break;
        case 4: _t->ProcessAssets(); break;
        case 5: _t->StartProcessingAssets(); break;
        case 6: _t->StopProcessingAssets(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetCatalogModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetCatalogModel::LoadComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetCatalogModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetCatalogModel::SetTotalProgress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssetCatalogModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetCatalogModel::UpdateProgress)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetCatalogModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_AssetCatalogModel.data,
    qt_meta_data_AssetCatalogModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetCatalogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetCatalogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetCatalogModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzFramework::AssetCatalogEventBus::Handler"))
        return static_cast< AzFramework::AssetCatalogEventBus::Handler*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int AssetCatalogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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
void AssetCatalogModel::LoadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AssetCatalogModel::SetTotalProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssetCatalogModel::UpdateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_AssetCatalogModelWorkerThread_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetCatalogModelWorkerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetCatalogModelWorkerThread_t qt_meta_stringdata_AssetCatalogModelWorkerThread = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AssetCatalogModelWorkerThread"
QT_MOC_LITERAL(1, 30, 14), // "ReturnToThread"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "AssetCatalogModelWorkerThread\0"
    "ReturnToThread\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetCatalogModelWorkerThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AssetCatalogModelWorkerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetCatalogModelWorkerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReturnToThread(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssetCatalogModelWorkerThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_AssetCatalogModelWorkerThread.data,
    qt_meta_data_AssetCatalogModelWorkerThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetCatalogModelWorkerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetCatalogModelWorkerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetCatalogModelWorkerThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int AssetCatalogModelWorkerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
