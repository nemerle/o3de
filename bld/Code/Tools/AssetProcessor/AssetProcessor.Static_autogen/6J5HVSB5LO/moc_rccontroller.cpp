/****************************************************************************
** Meta object code from reading C++ file 'rccontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/resourcecompiler/rccontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rccontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__RCController_t {
    QByteArrayData data[55];
    char stringdata0[866];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__RCController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__RCController_t qt_meta_stringdata_AssetProcessor__RCController = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AssetProcessor::RCController"
QT_MOC_LITERAL(1, 29, 12), // "FileCompiled"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "JobEntry"
QT_MOC_LITERAL(4, 52, 5), // "entry"
QT_MOC_LITERAL(5, 58, 35), // "AssetBuilderSDK::ProcessJobRe..."
QT_MOC_LITERAL(6, 94, 8), // "response"
QT_MOC_LITERAL(7, 103, 10), // "FileFailed"
QT_MOC_LITERAL(8, 114, 13), // "FileCancelled"
QT_MOC_LITERAL(9, 128, 7), // "RcError"
QT_MOC_LITERAL(10, 136, 5), // "error"
QT_MOC_LITERAL(11, 142, 11), // "ReadyToQuit"
QT_MOC_LITERAL(12, 154, 6), // "source"
QT_MOC_LITERAL(13, 161, 10), // "JobStarted"
QT_MOC_LITERAL(14, 172, 9), // "inputFile"
QT_MOC_LITERAL(15, 182, 8), // "platform"
QT_MOC_LITERAL(16, 191, 16), // "JobStatusChanged"
QT_MOC_LITERAL(17, 208, 40), // "AzToolsFramework::AssetSystem..."
QT_MOC_LITERAL(18, 249, 6), // "status"
QT_MOC_LITERAL(19, 256, 22), // "JobsInQueuePerPlatform"
QT_MOC_LITERAL(20, 279, 4), // "jobs"
QT_MOC_LITERAL(21, 284, 22), // "ActiveJobsCountChanged"
QT_MOC_LITERAL(22, 307, 10), // "BecameIdle"
QT_MOC_LITERAL(23, 318, 19), // "CompileGroupCreated"
QT_MOC_LITERAL(24, 338, 32), // "AssetProcessor::NetworkRequestID"
QT_MOC_LITERAL(25, 371, 7), // "groupID"
QT_MOC_LITERAL(26, 379, 37), // "AzFramework::AssetSystem::Ass..."
QT_MOC_LITERAL(27, 417, 20), // "CompileGroupFinished"
QT_MOC_LITERAL(28, 438, 12), // "EscalateJobs"
QT_MOC_LITERAL(29, 451, 35), // "AssetProcessor::JobIdEscalati..."
QT_MOC_LITERAL(30, 487, 19), // "jobIdEscalationList"
QT_MOC_LITERAL(31, 507, 12), // "JobSubmitted"
QT_MOC_LITERAL(32, 520, 10), // "JobDetails"
QT_MOC_LITERAL(33, 531, 7), // "details"
QT_MOC_LITERAL(34, 539, 13), // "QuitRequested"
QT_MOC_LITERAL(35, 553, 21), // "OnRequestCompileGroup"
QT_MOC_LITERAL(36, 575, 10), // "searchTerm"
QT_MOC_LITERAL(37, 586, 17), // "AZ::Data::AssetId"
QT_MOC_LITERAL(38, 604, 7), // "assetId"
QT_MOC_LITERAL(39, 612, 15), // "isStatusRequest"
QT_MOC_LITERAL(40, 628, 10), // "searchType"
QT_MOC_LITERAL(41, 639, 26), // "OnEscalateJobsBySearchTerm"
QT_MOC_LITERAL(42, 666, 26), // "OnEscalateJobsBySourceUUID"
QT_MOC_LITERAL(43, 693, 8), // "AZ::Uuid"
QT_MOC_LITERAL(44, 702, 10), // "sourceUuid"
QT_MOC_LITERAL(45, 713, 12), // "DispatchJobs"
QT_MOC_LITERAL(46, 726, 16), // "DispatchJobsImpl"
QT_MOC_LITERAL(47, 743, 17), // "SetDispatchPaused"
QT_MOC_LITERAL(48, 761, 5), // "pause"
QT_MOC_LITERAL(49, 767, 18), // "RemoveJobsBySource"
QT_MOC_LITERAL(50, 786, 25), // "relSourceFileDatabaseName"
QT_MOC_LITERAL(51, 812, 13), // "OnJobComplete"
QT_MOC_LITERAL(52, 826, 13), // "completeEntry"
QT_MOC_LITERAL(53, 840, 16), // "OnAddedToCatalog"
QT_MOC_LITERAL(54, 857, 8) // "jobEntry"

    },
    "AssetProcessor::RCController\0FileCompiled\0"
    "\0JobEntry\0entry\0AssetBuilderSDK::ProcessJobResponse\0"
    "response\0FileFailed\0FileCancelled\0"
    "RcError\0error\0ReadyToQuit\0source\0"
    "JobStarted\0inputFile\0platform\0"
    "JobStatusChanged\0"
    "AzToolsFramework::AssetSystem::JobStatus\0"
    "status\0JobsInQueuePerPlatform\0jobs\0"
    "ActiveJobsCountChanged\0BecameIdle\0"
    "CompileGroupCreated\0"
    "AssetProcessor::NetworkRequestID\0"
    "groupID\0AzFramework::AssetSystem::AssetStatus\0"
    "CompileGroupFinished\0EscalateJobs\0"
    "AssetProcessor::JobIdEscalationList\0"
    "jobIdEscalationList\0JobSubmitted\0"
    "JobDetails\0details\0QuitRequested\0"
    "OnRequestCompileGroup\0searchTerm\0"
    "AZ::Data::AssetId\0assetId\0isStatusRequest\0"
    "searchType\0OnEscalateJobsBySearchTerm\0"
    "OnEscalateJobsBySourceUUID\0AZ::Uuid\0"
    "sourceUuid\0DispatchJobs\0DispatchJobsImpl\0"
    "SetDispatchPaused\0pause\0RemoveJobsBySource\0"
    "relSourceFileDatabaseName\0OnJobComplete\0"
    "completeEntry\0OnAddedToCatalog\0jobEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__RCController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  144,    2, 0x06 /* Public */,
       7,    1,  149,    2, 0x06 /* Public */,
       8,    1,  152,    2, 0x06 /* Public */,
       9,    1,  155,    2, 0x06 /* Public */,
      11,    1,  158,    2, 0x06 /* Public */,
      13,    2,  161,    2, 0x06 /* Public */,
      16,    2,  166,    2, 0x06 /* Public */,
      19,    2,  171,    2, 0x06 /* Public */,
      21,    1,  176,    2, 0x06 /* Public */,
      22,    0,  179,    2, 0x06 /* Public */,
      23,    2,  180,    2, 0x06 /* Public */,
      27,    2,  185,    2, 0x06 /* Public */,
      28,    1,  190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  193,    2, 0x0a /* Public */,
      34,    0,  196,    2, 0x0a /* Public */,
      35,    6,  197,    2, 0x0a /* Public */,
      35,    5,  210,    2, 0x2a /* Public | MethodCloned */,
      35,    4,  221,    2, 0x2a /* Public | MethodCloned */,
      41,    2,  230,    2, 0x0a /* Public */,
      42,    2,  235,    2, 0x0a /* Public */,
      45,    0,  240,    2, 0x0a /* Public */,
      46,    0,  241,    2, 0x0a /* Public */,
      47,    1,  242,    2, 0x0a /* Public */,
      49,    1,  245,    2, 0x0a /* Public */,
      51,    2,  248,    2, 0x0a /* Public */,
      53,    1,  253,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QObjectStar,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 17,    4,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,   20,
    QMetaType::Void, QMetaType::UInt,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26,   25,   18,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26,   25,   18,
    QMetaType::Void, 0x80000000 | 29,   30,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QString, QMetaType::QString, 0x80000000 | 37, QMetaType::Bool, QMetaType::Int,   25,   15,   36,   38,   39,   40,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QString, QMetaType::QString, 0x80000000 | 37, QMetaType::Bool,   25,   15,   36,   38,   39,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QString, QMetaType::QString, 0x80000000 | 37,   25,   15,   36,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   36,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 43,   15,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 17,   52,   18,
    QMetaType::Void, 0x80000000 | 3,   54,

       0        // eod
};

void AssetProcessor::RCController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RCController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FileCompiled((*reinterpret_cast< JobEntry(*)>(_a[1])),(*reinterpret_cast< AssetBuilderSDK::ProcessJobResponse(*)>(_a[2]))); break;
        case 1: _t->FileFailed((*reinterpret_cast< JobEntry(*)>(_a[1]))); break;
        case 2: _t->FileCancelled((*reinterpret_cast< JobEntry(*)>(_a[1]))); break;
        case 3: _t->RcError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->ReadyToQuit((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->JobStarted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->JobStatusChanged((*reinterpret_cast< JobEntry(*)>(_a[1])),(*reinterpret_cast< AzToolsFramework::AssetSystem::JobStatus(*)>(_a[2]))); break;
        case 7: _t->JobsInQueuePerPlatform((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->ActiveJobsCountChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->BecameIdle(); break;
        case 10: _t->CompileGroupCreated((*reinterpret_cast< AssetProcessor::NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< AzFramework::AssetSystem::AssetStatus(*)>(_a[2]))); break;
        case 11: _t->CompileGroupFinished((*reinterpret_cast< AssetProcessor::NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< AzFramework::AssetSystem::AssetStatus(*)>(_a[2]))); break;
        case 12: _t->EscalateJobs((*reinterpret_cast< AssetProcessor::JobIdEscalationList(*)>(_a[1]))); break;
        case 13: _t->JobSubmitted((*reinterpret_cast< JobDetails(*)>(_a[1]))); break;
        case 14: _t->QuitRequested(); break;
        case 15: _t->OnRequestCompileGroup((*reinterpret_cast< AssetProcessor::NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< AZ::Data::AssetId(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 16: _t->OnRequestCompileGroup((*reinterpret_cast< AssetProcessor::NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< AZ::Data::AssetId(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 17: _t->OnRequestCompileGroup((*reinterpret_cast< AssetProcessor::NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< AZ::Data::AssetId(*)>(_a[4]))); break;
        case 18: _t->OnEscalateJobsBySearchTerm((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->OnEscalateJobsBySourceUUID((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< AZ::Uuid(*)>(_a[2]))); break;
        case 20: _t->DispatchJobs(); break;
        case 21: _t->DispatchJobsImpl(); break;
        case 22: _t->SetDispatchPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->RemoveJobsBySource((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->OnJobComplete((*reinterpret_cast< JobEntry(*)>(_a[1])),(*reinterpret_cast< AzToolsFramework::AssetSystem::JobStatus(*)>(_a[2]))); break;
        case 25: _t->OnAddedToCatalog((*reinterpret_cast< JobEntry(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RCController::*)(JobEntry , AssetBuilderSDK::ProcessJobResponse );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::FileCompiled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RCController::*)(JobEntry );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::FileFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RCController::*)(JobEntry );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::FileCancelled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RCController::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::RcError)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RCController::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::ReadyToQuit)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RCController::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::JobStarted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RCController::*)(JobEntry , AzToolsFramework::AssetSystem::JobStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::JobStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RCController::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::JobsInQueuePerPlatform)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RCController::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::ActiveJobsCountChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RCController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::BecameIdle)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RCController::*)(AssetProcessor::NetworkRequestID , AzFramework::AssetSystem::AssetStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::CompileGroupCreated)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RCController::*)(AssetProcessor::NetworkRequestID , AzFramework::AssetSystem::AssetStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::CompileGroupFinished)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RCController::*)(AssetProcessor::JobIdEscalationList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RCController::EscalateJobs)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::RCController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__RCController.data,
    qt_meta_data_AssetProcessor__RCController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::RCController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::RCController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__RCController.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetProcessorPlatformBus::Handler"))
        return static_cast< AssetProcessorPlatformBus::Handler*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetProcessor::RCController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void AssetProcessor::RCController::FileCompiled(JobEntry _t1, AssetBuilderSDK::ProcessJobResponse _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetProcessor::RCController::FileFailed(JobEntry _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssetProcessor::RCController::FileCancelled(JobEntry _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AssetProcessor::RCController::RcError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AssetProcessor::RCController::ReadyToQuit(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AssetProcessor::RCController::JobStarted(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AssetProcessor::RCController::JobStatusChanged(JobEntry _t1, AzToolsFramework::AssetSystem::JobStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AssetProcessor::RCController::JobsInQueuePerPlatform(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AssetProcessor::RCController::ActiveJobsCountChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AssetProcessor::RCController::BecameIdle()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void AssetProcessor::RCController::CompileGroupCreated(AssetProcessor::NetworkRequestID _t1, AzFramework::AssetSystem::AssetStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AssetProcessor::RCController::CompileGroupFinished(AssetProcessor::NetworkRequestID _t1, AzFramework::AssetSystem::AssetStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AssetProcessor::RCController::EscalateJobs(AssetProcessor::JobIdEscalationList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
