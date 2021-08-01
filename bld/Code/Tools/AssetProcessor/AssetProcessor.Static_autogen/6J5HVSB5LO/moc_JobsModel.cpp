/****************************************************************************
** Meta object code from reading C++ file 'JobsModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/resourcecompiler/JobsModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JobsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__JobsModel_t {
    QByteArrayData data[14];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__JobsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__JobsModel_t qt_meta_stringdata_AssetProcessor__JobsModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AssetProcessor::JobsModel"
QT_MOC_LITERAL(1, 26, 18), // "OnJobStatusChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "JobEntry"
QT_MOC_LITERAL(4, 55, 5), // "entry"
QT_MOC_LITERAL(5, 61, 40), // "AzToolsFramework::AssetSystem..."
QT_MOC_LITERAL(6, 102, 6), // "status"
QT_MOC_LITERAL(7, 109, 12), // "OnJobRemoved"
QT_MOC_LITERAL(8, 122, 38), // "AzToolsFramework::AssetSystem..."
QT_MOC_LITERAL(9, 161, 7), // "jobInfo"
QT_MOC_LITERAL(10, 169, 15), // "OnSourceRemoved"
QT_MOC_LITERAL(11, 185, 18), // "sourceDatabasePath"
QT_MOC_LITERAL(12, 204, 15), // "OnFolderRemoved"
QT_MOC_LITERAL(13, 220, 10) // "folderPath"

    },
    "AssetProcessor::JobsModel\0OnJobStatusChanged\0"
    "\0JobEntry\0entry\0"
    "AzToolsFramework::AssetSystem::JobStatus\0"
    "status\0OnJobRemoved\0"
    "AzToolsFramework::AssetSystem::JobInfo\0"
    "jobInfo\0OnSourceRemoved\0sourceDatabasePath\0"
    "OnFolderRemoved\0folderPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__JobsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       7,    1,   39,    2, 0x0a /* Public */,
      10,    1,   42,    2, 0x0a /* Public */,
      12,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void AssetProcessor::JobsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JobsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnJobStatusChanged((*reinterpret_cast< JobEntry(*)>(_a[1])),(*reinterpret_cast< AzToolsFramework::AssetSystem::JobStatus(*)>(_a[2]))); break;
        case 1: _t->OnJobRemoved((*reinterpret_cast< AzToolsFramework::AssetSystem::JobInfo(*)>(_a[1]))); break;
        case 2: _t->OnSourceRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->OnFolderRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AzToolsFramework::AssetSystem::JobStatus >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::JobsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__JobsModel.data,
    qt_meta_data_AssetProcessor__JobsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::JobsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::JobsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__JobsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int AssetProcessor::JobsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
