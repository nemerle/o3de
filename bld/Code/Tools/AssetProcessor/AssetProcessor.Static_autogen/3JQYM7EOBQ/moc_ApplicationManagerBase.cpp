/****************************************************************************
** Meta object code from reading C++ file 'ApplicationManagerBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/utilities/ApplicationManagerBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApplicationManagerBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApplicationManagerBase_t {
    QByteArrayData data[14];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApplicationManagerBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApplicationManagerBase_t qt_meta_stringdata_ApplicationManagerBase = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ApplicationManagerBase"
QT_MOC_LITERAL(1, 23, 35), // "CheckAssetProcessorManagerIdl..."
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 19), // "ConnectionStatusMsg"
QT_MOC_LITERAL(4, 80, 7), // "message"
QT_MOC_LITERAL(5, 88, 18), // "SourceControlReady"
QT_MOC_LITERAL(6, 107, 20), // "OnBuildersRegistered"
QT_MOC_LITERAL(7, 128, 36), // "AssetProcesserManagerIdleStat..."
QT_MOC_LITERAL(8, 165, 6), // "isIdle"
QT_MOC_LITERAL(9, 172, 8), // "FullIdle"
QT_MOC_LITERAL(10, 181, 32), // "OnAssetProcessorManagerIdleState"
QT_MOC_LITERAL(11, 214, 24), // "OnActiveJobsCountChanged"
QT_MOC_LITERAL(12, 239, 5), // "count"
QT_MOC_LITERAL(13, 245, 12) // "CheckForIdle"

    },
    "ApplicationManagerBase\0"
    "CheckAssetProcessorManagerIdleState\0"
    "\0ConnectionStatusMsg\0message\0"
    "SourceControlReady\0OnBuildersRegistered\0"
    "AssetProcesserManagerIdleStateChange\0"
    "isIdle\0FullIdle\0OnAssetProcessorManagerIdleState\0"
    "OnActiveJobsCountChanged\0count\0"
    "CheckForIdle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApplicationManagerBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,
       7,    1,   65,    2, 0x06 /* Public */,
       9,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      13,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void,

       0        // eod
};

void ApplicationManagerBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApplicationManagerBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CheckAssetProcessorManagerIdleState(); break;
        case 1: _t->ConnectionStatusMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SourceControlReady(); break;
        case 3: _t->OnBuildersRegistered(); break;
        case 4: _t->AssetProcesserManagerIdleStateChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->FullIdle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->OnAssetProcessorManagerIdleState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->OnActiveJobsCountChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->CheckForIdle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ApplicationManagerBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationManagerBase::CheckAssetProcessorManagerIdleState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ApplicationManagerBase::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationManagerBase::ConnectionStatusMsg)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ApplicationManagerBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationManagerBase::SourceControlReady)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ApplicationManagerBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationManagerBase::OnBuildersRegistered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ApplicationManagerBase::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationManagerBase::AssetProcesserManagerIdleStateChange)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ApplicationManagerBase::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApplicationManagerBase::FullIdle)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ApplicationManagerBase::staticMetaObject = { {
    QMetaObject::SuperData::link<ApplicationManager::staticMetaObject>(),
    qt_meta_stringdata_ApplicationManagerBase.data,
    qt_meta_data_ApplicationManagerBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApplicationManagerBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApplicationManagerBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationManagerBase.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetBuilderSDK::AssetBuilderBus::Handler"))
        return static_cast< AssetBuilderSDK::AssetBuilderBus::Handler*>(this);
    if (!strcmp(_clname, "AssetProcessor::AssetBuilderInfoBus::Handler"))
        return static_cast< AssetProcessor::AssetBuilderInfoBus::Handler*>(this);
    if (!strcmp(_clname, "AssetProcessor::AssetBuilderRegistrationBus::Handler"))
        return static_cast< AssetProcessor::AssetBuilderRegistrationBus::Handler*>(this);
    if (!strcmp(_clname, "AZ::Debug::TraceMessageBus::Handler"))
        return static_cast< AZ::Debug::TraceMessageBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::AssetDatabase::AssetDatabaseRequests::Bus::Handler"))
        return static_cast< AzToolsFramework::AssetDatabase::AssetDatabaseRequests::Bus::Handler*>(this);
    if (!strcmp(_clname, "AssetProcessor::DiskSpaceInfoBus::Handler"))
        return static_cast< AssetProcessor::DiskSpaceInfoBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::SourceControlNotificationBus::Handler"))
        return static_cast< AzToolsFramework::SourceControlNotificationBus::Handler*>(this);
    return ApplicationManager::qt_metacast(_clname);
}

int ApplicationManagerBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApplicationManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ApplicationManagerBase::CheckAssetProcessorManagerIdleState()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ApplicationManagerBase::ConnectionStatusMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ApplicationManagerBase::SourceControlReady()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ApplicationManagerBase::OnBuildersRegistered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ApplicationManagerBase::AssetProcesserManagerIdleStateChange(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ApplicationManagerBase::FullIdle(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
