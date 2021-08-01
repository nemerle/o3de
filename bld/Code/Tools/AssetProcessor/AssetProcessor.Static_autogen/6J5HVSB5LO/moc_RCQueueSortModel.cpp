/****************************************************************************
** Meta object code from reading C++ file 'RCQueueSortModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/resourcecompiler/RCQueueSortModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RCQueueSortModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__RCQueueSortModel_t {
    QByteArrayData data[8];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__RCQueueSortModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__RCQueueSortModel_t qt_meta_stringdata_AssetProcessor__RCQueueSortModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "AssetProcessor::RCQueueSortModel"
QT_MOC_LITERAL(1, 33, 14), // "OnEscalateJobs"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 35), // "AssetProcessor::JobIdEscalati..."
QT_MOC_LITERAL(4, 85, 19), // "jobIdEscalationList"
QT_MOC_LITERAL(5, 105, 28), // "ProcessPlatformChangeMessage"
QT_MOC_LITERAL(6, 134, 12), // "platformName"
QT_MOC_LITERAL(7, 147, 9) // "connected"

    },
    "AssetProcessor::RCQueueSortModel\0"
    "OnEscalateJobs\0\0AssetProcessor::JobIdEscalationList\0"
    "jobIdEscalationList\0ProcessPlatformChangeMessage\0"
    "platformName\0connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__RCQueueSortModel[] = {

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
       5,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,

       0        // eod
};

void AssetProcessor::RCQueueSortModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RCQueueSortModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnEscalateJobs((*reinterpret_cast< AssetProcessor::JobIdEscalationList(*)>(_a[1]))); break;
        case 1: _t->ProcessPlatformChangeMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::RCQueueSortModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__RCQueueSortModel.data,
    qt_meta_data_AssetProcessor__RCQueueSortModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::RCQueueSortModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::RCQueueSortModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__RCQueueSortModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetProcessorPlatformBus::Handler"))
        return static_cast< AssetProcessorPlatformBus::Handler*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AssetProcessor::RCQueueSortModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
