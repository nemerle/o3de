/****************************************************************************
** Meta object code from reading C++ file 'AssetCatalog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/AssetManager/AssetCatalog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetCatalog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__AssetCatalog_t {
    QByteArrayData data[30];
    char stringdata0[736];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__AssetCatalog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__AssetCatalog_t qt_meta_stringdata_AssetProcessor__AssetCatalog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AssetProcessor::AssetCatalog"
QT_MOC_LITERAL(1, 29, 16), // "SendAssetMessage"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 50), // "AzFramework::AssetSystem::Ass..."
QT_MOC_LITERAL(4, 98, 7), // "message"
QT_MOC_LITERAL(5, 106, 31), // "AsyncAssetCatalogStatusResponse"
QT_MOC_LITERAL(6, 138, 18), // "AssetCatalogStatus"
QT_MOC_LITERAL(7, 157, 6), // "status"
QT_MOC_LITERAL(8, 164, 14), // "OnAssetMessage"
QT_MOC_LITERAL(9, 179, 20), // "OnDependencyResolved"
QT_MOC_LITERAL(10, 200, 17), // "AZ::Data::AssetId"
QT_MOC_LITERAL(11, 218, 7), // "assetId"
QT_MOC_LITERAL(12, 226, 63), // "AzToolsFramework::AssetDataba..."
QT_MOC_LITERAL(13, 290, 5), // "entry"
QT_MOC_LITERAL(14, 296, 17), // "SaveRegistry_Impl"
QT_MOC_LITERAL(15, 314, 42), // "HandleGetUnresolvedDependency..."
QT_MOC_LITERAL(16, 357, 63), // "AzFramework::AssetSystem::Get..."
QT_MOC_LITERAL(17, 421, 75), // "MessageData<AzFramework::Asse..."
QT_MOC_LITERAL(18, 497, 11), // "messageData"
QT_MOC_LITERAL(19, 509, 29), // "HandleSaveAssetCatalogRequest"
QT_MOC_LITERAL(20, 539, 62), // "MessageData<AzFramework::Asse..."
QT_MOC_LITERAL(21, 602, 13), // "BuildRegistry"
QT_MOC_LITERAL(22, 616, 14), // "OnSourceQueued"
QT_MOC_LITERAL(23, 631, 8), // "AZ::Uuid"
QT_MOC_LITERAL(24, 640, 10), // "sourceUuid"
QT_MOC_LITERAL(25, 651, 10), // "legacyUuid"
QT_MOC_LITERAL(26, 662, 8), // "rootPath"
QT_MOC_LITERAL(27, 671, 16), // "relativeFilePath"
QT_MOC_LITERAL(28, 688, 16), // "OnSourceFinished"
QT_MOC_LITERAL(29, 705, 30) // "AsyncAssetCatalogStatusRequest"

    },
    "AssetProcessor::AssetCatalog\0"
    "SendAssetMessage\0\0"
    "AzFramework::AssetSystem::AssetNotificationMessage\0"
    "message\0AsyncAssetCatalogStatusResponse\0"
    "AssetCatalogStatus\0status\0OnAssetMessage\0"
    "OnDependencyResolved\0AZ::Data::AssetId\0"
    "assetId\0"
    "AzToolsFramework::AssetDatabase::ProductDependencyDatabaseEntry\0"
    "entry\0SaveRegistry_Impl\0"
    "HandleGetUnresolvedDependencyCountsRequest\0"
    "AzFramework::AssetSystem::GetUnresolvedDependencyCountsResponse\0"
    "MessageData<AzFramework::AssetSystem::GetUnresolvedDependencyCountsReq"
    "uest>\0"
    "messageData\0HandleSaveAssetCatalogRequest\0"
    "MessageData<AzFramework::AssetSystem::SaveAssetCatalogRequest>\0"
    "BuildRegistry\0OnSourceQueued\0AZ::Uuid\0"
    "sourceUuid\0legacyUuid\0rootPath\0"
    "relativeFilePath\0OnSourceFinished\0"
    "AsyncAssetCatalogStatusRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__AssetCatalog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   75,    2, 0x0a /* Public */,
       9,    2,   78,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,
      15,    1,   84,    2, 0x0a /* Public */,
      19,    1,   87,    2, 0x0a /* Public */,
      21,    0,   90,    2, 0x0a /* Public */,
      22,    4,   91,    2, 0x0a /* Public */,
      28,    2,  100,    2, 0x0a /* Public */,
      29,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void,
    0x80000000 | 16, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23, QMetaType::QString, QMetaType::QString,   24,   25,   26,   27,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,   24,   25,
    QMetaType::Void,

       0        // eod
};

void AssetProcessor::AssetCatalog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetCatalog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendAssetMessage((*reinterpret_cast< AzFramework::AssetSystem::AssetNotificationMessage(*)>(_a[1]))); break;
        case 1: _t->AsyncAssetCatalogStatusResponse((*reinterpret_cast< AssetCatalogStatus(*)>(_a[1]))); break;
        case 2: _t->OnAssetMessage((*reinterpret_cast< AzFramework::AssetSystem::AssetNotificationMessage(*)>(_a[1]))); break;
        case 3: _t->OnDependencyResolved((*reinterpret_cast< const AZ::Data::AssetId(*)>(_a[1])),(*reinterpret_cast< const AzToolsFramework::AssetDatabase::ProductDependencyDatabaseEntry(*)>(_a[2]))); break;
        case 4: _t->SaveRegistry_Impl(); break;
        case 5: { AzFramework::AssetSystem::GetUnresolvedDependencyCountsResponse _r = _t->HandleGetUnresolvedDependencyCountsRequest((*reinterpret_cast< MessageData<AzFramework::AssetSystem::GetUnresolvedDependencyCountsRequest>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AzFramework::AssetSystem::GetUnresolvedDependencyCountsResponse*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->HandleSaveAssetCatalogRequest((*reinterpret_cast< MessageData<AzFramework::AssetSystem::SaveAssetCatalogRequest>(*)>(_a[1]))); break;
        case 7: _t->BuildRegistry(); break;
        case 8: _t->OnSourceQueued((*reinterpret_cast< AZ::Uuid(*)>(_a[1])),(*reinterpret_cast< AZ::Uuid(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 9: _t->OnSourceFinished((*reinterpret_cast< AZ::Uuid(*)>(_a[1])),(*reinterpret_cast< AZ::Uuid(*)>(_a[2]))); break;
        case 10: _t->AsyncAssetCatalogStatusRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetCatalog::*)(AzFramework::AssetSystem::AssetNotificationMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetCatalog::SendAssetMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetCatalog::*)(AssetCatalogStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetCatalog::AsyncAssetCatalogStatusResponse)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::AssetCatalog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__AssetCatalog.data,
    qt_meta_data_AssetProcessor__AssetCatalog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::AssetCatalog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::AssetCatalog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__AssetCatalog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetProcessor::AssetCatalog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AssetProcessor::AssetCatalog::SendAssetMessage(AzFramework::AssetSystem::AssetNotificationMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetProcessor::AssetCatalog::AsyncAssetCatalogStatusResponse(AssetCatalogStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
