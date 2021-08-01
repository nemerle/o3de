/****************************************************************************
** Meta object code from reading C++ file 'AssetRequestHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/AssetManager/AssetRequestHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetRequestHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__AssetRequestHandler_t {
    QByteArrayData data[32];
    char stringdata0[543];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__AssetRequestHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__AssetRequestHandler_t qt_meta_stringdata_AssetProcessor__AssetRequestHandler = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AssetProcessor::AssetRequestH..."
QT_MOC_LITERAL(1, 36, 19), // "RequestCompileGroup"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 16), // "NetworkRequestID"
QT_MOC_LITERAL(4, 74, 7), // "groupID"
QT_MOC_LITERAL(5, 82, 8), // "platform"
QT_MOC_LITERAL(6, 91, 10), // "searchTerm"
QT_MOC_LITERAL(7, 102, 17), // "AZ::Data::AssetId"
QT_MOC_LITERAL(8, 120, 7), // "assetId"
QT_MOC_LITERAL(9, 128, 15), // "isStatusRequest"
QT_MOC_LITERAL(10, 144, 10), // "searchType"
QT_MOC_LITERAL(11, 155, 18), // "RequestAssetExists"
QT_MOC_LITERAL(12, 174, 26), // "RequestEscalateAssetByUuid"
QT_MOC_LITERAL(13, 201, 8), // "AZ::Uuid"
QT_MOC_LITERAL(14, 210, 18), // "escalatedAssetUUID"
QT_MOC_LITERAL(15, 229, 32), // "RequestEscalateAssetBySearchTerm"
QT_MOC_LITERAL(16, 262, 19), // "escalatedSearchTerm"
QT_MOC_LITERAL(17, 282, 19), // "ProcessAssetRequest"
QT_MOC_LITERAL(18, 302, 57), // "MessageData<AzFramework::Asse..."
QT_MOC_LITERAL(19, 360, 11), // "messageData"
QT_MOC_LITERAL(20, 372, 21), // "OnCompileGroupCreated"
QT_MOC_LITERAL(21, 394, 11), // "AssetStatus"
QT_MOC_LITERAL(22, 406, 6), // "status"
QT_MOC_LITERAL(23, 413, 22), // "OnCompileGroupFinished"
QT_MOC_LITERAL(24, 436, 28), // "OnRequestAssetExistsResponse"
QT_MOC_LITERAL(25, 465, 6), // "exists"
QT_MOC_LITERAL(26, 472, 19), // "OnFenceFileDetected"
QT_MOC_LITERAL(27, 492, 7), // "fenceId"
QT_MOC_LITERAL(28, 500, 20), // "OnNewIncomingRequest"
QT_MOC_LITERAL(29, 521, 6), // "connId"
QT_MOC_LITERAL(30, 528, 6), // "serial"
QT_MOC_LITERAL(31, 535, 7) // "payload"

    },
    "AssetProcessor::AssetRequestHandler\0"
    "RequestCompileGroup\0\0NetworkRequestID\0"
    "groupID\0platform\0searchTerm\0"
    "AZ::Data::AssetId\0assetId\0isStatusRequest\0"
    "searchType\0RequestAssetExists\0"
    "RequestEscalateAssetByUuid\0AZ::Uuid\0"
    "escalatedAssetUUID\0RequestEscalateAssetBySearchTerm\0"
    "escalatedSearchTerm\0ProcessAssetRequest\0"
    "MessageData<AzFramework::AssetSystem::RequestAssetStatus>\0"
    "messageData\0OnCompileGroupCreated\0"
    "AssetStatus\0status\0OnCompileGroupFinished\0"
    "OnRequestAssetExistsResponse\0exists\0"
    "OnFenceFileDetected\0fenceId\0"
    "OnNewIncomingRequest\0connId\0serial\0"
    "payload"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__AssetRequestHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   64,    2, 0x06 /* Public */,
      11,    5,   77,    2, 0x06 /* Public */,
      12,    2,   88,    2, 0x06 /* Public */,
      15,    2,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   98,    2, 0x0a /* Public */,
      20,    2,  101,    2, 0x0a /* Public */,
      23,    2,  106,    2, 0x0a /* Public */,
      24,    2,  111,    2, 0x0a /* Public */,
      26,    1,  116,    2, 0x0a /* Public */,
      28,    4,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 7, QMetaType::Bool, QMetaType::Int,    4,    5,    6,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, 0x80000000 | 7, QMetaType::Int,    4,    5,    6,    8,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,    5,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,   16,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 21,    4,   22,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 21,    4,   22,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   25,
    QMetaType::Void, QMetaType::UInt,   27,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray, QMetaType::QString,   29,   30,   31,    5,

       0        // eod
};

void AssetProcessor::AssetRequestHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetRequestHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RequestCompileGroup((*reinterpret_cast< NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< AZ::Data::AssetId(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->RequestAssetExists((*reinterpret_cast< NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< AZ::Data::AssetId(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->RequestEscalateAssetByUuid((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< AZ::Uuid(*)>(_a[2]))); break;
        case 3: _t->RequestEscalateAssetBySearchTerm((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->ProcessAssetRequest((*reinterpret_cast< MessageData<AzFramework::AssetSystem::RequestAssetStatus>(*)>(_a[1]))); break;
        case 5: _t->OnCompileGroupCreated((*reinterpret_cast< NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< AssetStatus(*)>(_a[2]))); break;
        case 6: _t->OnCompileGroupFinished((*reinterpret_cast< NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< AssetStatus(*)>(_a[2]))); break;
        case 7: _t->OnRequestAssetExistsResponse((*reinterpret_cast< NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->OnFenceFileDetected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->OnNewIncomingRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetRequestHandler::*)(NetworkRequestID , QString , QString , AZ::Data::AssetId , bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetRequestHandler::RequestCompileGroup)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetRequestHandler::*)(NetworkRequestID , QString , QString , AZ::Data::AssetId , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetRequestHandler::RequestAssetExists)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssetRequestHandler::*)(QString , AZ::Uuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetRequestHandler::RequestEscalateAssetByUuid)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AssetRequestHandler::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetRequestHandler::RequestEscalateAssetBySearchTerm)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::AssetRequestHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__AssetRequestHandler.data,
    qt_meta_data_AssetProcessor__AssetRequestHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::AssetRequestHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::AssetRequestHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__AssetRequestHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetProcessor::AssetRequestHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AssetProcessor::AssetRequestHandler::RequestCompileGroup(NetworkRequestID _t1, QString _t2, QString _t3, AZ::Data::AssetId _t4, bool _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetProcessor::AssetRequestHandler::RequestAssetExists(NetworkRequestID _t1, QString _t2, QString _t3, AZ::Data::AssetId _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssetProcessor::AssetRequestHandler::RequestEscalateAssetByUuid(QString _t1, AZ::Uuid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AssetProcessor::AssetRequestHandler::RequestEscalateAssetBySearchTerm(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
