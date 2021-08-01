/****************************************************************************
** Meta object code from reading C++ file 'assetProcessorManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/AssetManager/assetProcessorManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'assetProcessorManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__AssetProcessorManager_t {
    QByteArrayData data[109];
    char stringdata0[2014];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__AssetProcessorManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__AssetProcessorManager_t qt_meta_stringdata_AssetProcessor__AssetProcessorManager = {
    {
QT_MOC_LITERAL(0, 0, 37), // "AssetProcessor::AssetProcesso..."
QT_MOC_LITERAL(1, 38, 23), // "NumRemainingJobsChanged"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 10), // "newNumJobs"
QT_MOC_LITERAL(4, 74, 14), // "AssetToProcess"
QT_MOC_LITERAL(5, 89, 10), // "JobDetails"
QT_MOC_LITERAL(6, 100, 10), // "jobDetails"
QT_MOC_LITERAL(7, 111, 12), // "AssetMessage"
QT_MOC_LITERAL(8, 124, 50), // "AzFramework::AssetSystem::Ass..."
QT_MOC_LITERAL(9, 175, 7), // "message"
QT_MOC_LITERAL(10, 183, 19), // "InputAssetProcessed"
QT_MOC_LITERAL(11, 203, 13), // "fullAssetPath"
QT_MOC_LITERAL(12, 217, 8), // "platform"
QT_MOC_LITERAL(13, 226, 23), // "RequestInputAssetStatus"
QT_MOC_LITERAL(14, 250, 14), // "inputAssetPath"
QT_MOC_LITERAL(15, 265, 14), // "jobDescription"
QT_MOC_LITERAL(16, 280, 27), // "RequestPriorityAssetCompile"
QT_MOC_LITERAL(17, 308, 30), // "AssetProcessorManagerIdleState"
QT_MOC_LITERAL(18, 339, 5), // "state"
QT_MOC_LITERAL(19, 345, 11), // "ReadyToQuit"
QT_MOC_LITERAL(20, 357, 6), // "source"
QT_MOC_LITERAL(21, 364, 19), // "CreateAssetsRequest"
QT_MOC_LITERAL(22, 384, 5), // "nonce"
QT_MOC_LITERAL(23, 390, 4), // "name"
QT_MOC_LITERAL(24, 395, 14), // "onlyExactMatch"
QT_MOC_LITERAL(25, 410, 11), // "syncRequest"
QT_MOC_LITERAL(26, 422, 23), // "SendAssetExistsResponse"
QT_MOC_LITERAL(27, 446, 16), // "NetworkRequestID"
QT_MOC_LITERAL(28, 463, 7), // "groupID"
QT_MOC_LITERAL(29, 471, 6), // "exists"
QT_MOC_LITERAL(30, 478, 17), // "FenceFileDetected"
QT_MOC_LITERAL(31, 496, 7), // "fenceId"
QT_MOC_LITERAL(32, 504, 12), // "EscalateJobs"
QT_MOC_LITERAL(33, 517, 35), // "AssetProcessor::JobIdEscalati..."
QT_MOC_LITERAL(34, 553, 19), // "jobIdEscalationList"
QT_MOC_LITERAL(35, 573, 13), // "SourceDeleted"
QT_MOC_LITERAL(36, 587, 13), // "relSourceFile"
QT_MOC_LITERAL(37, 601, 19), // "SourceFolderDeleted"
QT_MOC_LITERAL(38, 621, 10), // "folderPath"
QT_MOC_LITERAL(39, 632, 12), // "SourceQueued"
QT_MOC_LITERAL(40, 645, 8), // "AZ::Uuid"
QT_MOC_LITERAL(41, 654, 10), // "sourceUuid"
QT_MOC_LITERAL(42, 665, 10), // "legacyUuid"
QT_MOC_LITERAL(43, 676, 8), // "rootPath"
QT_MOC_LITERAL(44, 685, 16), // "relativeFilePath"
QT_MOC_LITERAL(45, 702, 14), // "SourceFinished"
QT_MOC_LITERAL(46, 717, 10), // "JobRemoved"
QT_MOC_LITERAL(47, 728, 38), // "AzToolsFramework::AssetSystem..."
QT_MOC_LITERAL(48, 767, 7), // "jobInfo"
QT_MOC_LITERAL(49, 775, 11), // "JobComplete"
QT_MOC_LITERAL(50, 787, 8), // "JobEntry"
QT_MOC_LITERAL(51, 796, 8), // "jobEntry"
QT_MOC_LITERAL(52, 805, 40), // "AzToolsFramework::AssetSystem..."
QT_MOC_LITERAL(53, 846, 6), // "status"
QT_MOC_LITERAL(54, 853, 22), // "PathDependencyResolved"
QT_MOC_LITERAL(55, 876, 17), // "AZ::Data::AssetId"
QT_MOC_LITERAL(56, 894, 7), // "assetId"
QT_MOC_LITERAL(57, 902, 63), // "AzToolsFramework::AssetDataba..."
QT_MOC_LITERAL(58, 966, 5), // "entry"
QT_MOC_LITERAL(59, 972, 14), // "AddedToCatalog"
QT_MOC_LITERAL(60, 987, 14), // "AssetProcessed"
QT_MOC_LITERAL(61, 1002, 35), // "AssetBuilderSDK::ProcessJobRe..."
QT_MOC_LITERAL(62, 1038, 8), // "response"
QT_MOC_LITERAL(63, 1047, 19), // "AssetProcessed_Impl"
QT_MOC_LITERAL(64, 1067, 11), // "AssetFailed"
QT_MOC_LITERAL(65, 1079, 14), // "AssetCancelled"
QT_MOC_LITERAL(66, 1094, 22), // "AssessFilesFromScanner"
QT_MOC_LITERAL(67, 1117, 19), // "QSet<AssetFileInfo>"
QT_MOC_LITERAL(68, 1137, 9), // "filePaths"
QT_MOC_LITERAL(69, 1147, 18), // "AssessModifiedFile"
QT_MOC_LITERAL(70, 1166, 8), // "filePath"
QT_MOC_LITERAL(71, 1175, 15), // "AssessAddedFile"
QT_MOC_LITERAL(72, 1191, 17), // "AssessDeletedFile"
QT_MOC_LITERAL(73, 1209, 26), // "OnAssetScannerStatusChange"
QT_MOC_LITERAL(74, 1236, 35), // "AssetProcessor::AssetScanning..."
QT_MOC_LITERAL(75, 1272, 18), // "OnJobStatusChanged"
QT_MOC_LITERAL(76, 1291, 9), // "JobStatus"
QT_MOC_LITERAL(77, 1301, 28), // "CheckAssetProcessorIdleState"
QT_MOC_LITERAL(78, 1330, 13), // "QuitRequested"
QT_MOC_LITERAL(79, 1344, 30), // "ProcessGetAssetJobsInfoRequest"
QT_MOC_LITERAL(80, 1375, 21), // "AssetJobsInfoResponse"
QT_MOC_LITERAL(81, 1397, 33), // "MessageData<AssetJobsInfoRequ..."
QT_MOC_LITERAL(82, 1431, 11), // "messageData"
QT_MOC_LITERAL(83, 1443, 28), // "ProcessGetAssetJobLogRequest"
QT_MOC_LITERAL(84, 1472, 19), // "AssetJobLogResponse"
QT_MOC_LITERAL(85, 1492, 31), // "MessageData<AssetJobLogRequest>"
QT_MOC_LITERAL(86, 1524, 46), // "ProcessGetAbsoluteAssetDataba..."
QT_MOC_LITERAL(87, 1571, 40), // "GetAbsoluteAssetDatabaseLocat..."
QT_MOC_LITERAL(88, 1612, 52), // "MessageData<GetAbsoluteAssetD..."
QT_MOC_LITERAL(89, 1665, 20), // "OnRequestAssetExists"
QT_MOC_LITERAL(90, 1686, 9), // "requestId"
QT_MOC_LITERAL(91, 1696, 10), // "searchTerm"
QT_MOC_LITERAL(92, 1707, 29), // "GuessProductOrSourceAssetName"
QT_MOC_LITERAL(93, 1737, 13), // "useLikeSearch"
QT_MOC_LITERAL(94, 1751, 26), // "ProcessFilesToExamineQueue"
QT_MOC_LITERAL(95, 1778, 12), // "CheckForIdle"
QT_MOC_LITERAL(96, 1791, 17), // "CheckMissingFiles"
QT_MOC_LITERAL(97, 1809, 21), // "AssetJobsInfoRequest&"
QT_MOC_LITERAL(98, 1831, 7), // "request"
QT_MOC_LITERAL(99, 1839, 22), // "AssetJobsInfoResponse&"
QT_MOC_LITERAL(100, 1862, 18), // "AssetJobLogRequest"
QT_MOC_LITERAL(101, 1881, 20), // "AssetJobLogResponse&"
QT_MOC_LITERAL(102, 1902, 18), // "ScheduleNextUpdate"
QT_MOC_LITERAL(103, 1921, 11), // "ProcessJobs"
QT_MOC_LITERAL(104, 1933, 18), // "RemoveEmptyFolders"
QT_MOC_LITERAL(105, 1952, 20), // "OnBuildersRegistered"
QT_MOC_LITERAL(106, 1973, 14), // "FinishAnalysis"
QT_MOC_LITERAL(107, 1988, 13), // "AZStd::string"
QT_MOC_LITERAL(108, 2002, 11) // "fileToCheck"

    },
    "AssetProcessor::AssetProcessorManager\0"
    "NumRemainingJobsChanged\0\0newNumJobs\0"
    "AssetToProcess\0JobDetails\0jobDetails\0"
    "AssetMessage\0"
    "AzFramework::AssetSystem::AssetNotificationMessage\0"
    "message\0InputAssetProcessed\0fullAssetPath\0"
    "platform\0RequestInputAssetStatus\0"
    "inputAssetPath\0jobDescription\0"
    "RequestPriorityAssetCompile\0"
    "AssetProcessorManagerIdleState\0state\0"
    "ReadyToQuit\0source\0CreateAssetsRequest\0"
    "nonce\0name\0onlyExactMatch\0syncRequest\0"
    "SendAssetExistsResponse\0NetworkRequestID\0"
    "groupID\0exists\0FenceFileDetected\0"
    "fenceId\0EscalateJobs\0"
    "AssetProcessor::JobIdEscalationList\0"
    "jobIdEscalationList\0SourceDeleted\0"
    "relSourceFile\0SourceFolderDeleted\0"
    "folderPath\0SourceQueued\0AZ::Uuid\0"
    "sourceUuid\0legacyUuid\0rootPath\0"
    "relativeFilePath\0SourceFinished\0"
    "JobRemoved\0AzToolsFramework::AssetSystem::JobInfo\0"
    "jobInfo\0JobComplete\0JobEntry\0jobEntry\0"
    "AzToolsFramework::AssetSystem::JobStatus\0"
    "status\0PathDependencyResolved\0"
    "AZ::Data::AssetId\0assetId\0"
    "AzToolsFramework::AssetDatabase::ProductDependencyDatabaseEntry\0"
    "entry\0AddedToCatalog\0AssetProcessed\0"
    "AssetBuilderSDK::ProcessJobResponse\0"
    "response\0AssetProcessed_Impl\0AssetFailed\0"
    "AssetCancelled\0AssessFilesFromScanner\0"
    "QSet<AssetFileInfo>\0filePaths\0"
    "AssessModifiedFile\0filePath\0AssessAddedFile\0"
    "AssessDeletedFile\0OnAssetScannerStatusChange\0"
    "AssetProcessor::AssetScanningStatus\0"
    "OnJobStatusChanged\0JobStatus\0"
    "CheckAssetProcessorIdleState\0QuitRequested\0"
    "ProcessGetAssetJobsInfoRequest\0"
    "AssetJobsInfoResponse\0"
    "MessageData<AssetJobsInfoRequest>\0"
    "messageData\0ProcessGetAssetJobLogRequest\0"
    "AssetJobLogResponse\0MessageData<AssetJobLogRequest>\0"
    "ProcessGetAbsoluteAssetDatabaseLocationRequest\0"
    "GetAbsoluteAssetDatabaseLocationResponse\0"
    "MessageData<GetAbsoluteAssetDatabaseLocationRequest>\0"
    "OnRequestAssetExists\0requestId\0"
    "searchTerm\0GuessProductOrSourceAssetName\0"
    "useLikeSearch\0ProcessFilesToExamineQueue\0"
    "CheckForIdle\0CheckMissingFiles\0"
    "AssetJobsInfoRequest&\0request\0"
    "AssetJobsInfoResponse&\0AssetJobLogRequest\0"
    "AssetJobLogResponse&\0ScheduleNextUpdate\0"
    "ProcessJobs\0RemoveEmptyFolders\0"
    "OnBuildersRegistered\0FinishAnalysis\0"
    "AZStd::string\0fileToCheck"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__AssetProcessorManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  259,    2, 0x06 /* Public */,
       4,    1,  262,    2, 0x06 /* Public */,
       7,    1,  265,    2, 0x06 /* Public */,
      10,    2,  268,    2, 0x06 /* Public */,
      13,    3,  273,    2, 0x06 /* Public */,
      16,    3,  280,    2, 0x06 /* Public */,
      17,    1,  287,    2, 0x06 /* Public */,
      19,    1,  290,    2, 0x06 /* Public */,
      21,    5,  293,    2, 0x06 /* Public */,
      21,    4,  304,    2, 0x26 /* Public | MethodCloned */,
      21,    3,  313,    2, 0x26 /* Public | MethodCloned */,
      26,    2,  320,    2, 0x06 /* Public */,
      30,    1,  325,    2, 0x06 /* Public */,
      32,    1,  328,    2, 0x06 /* Public */,
      35,    1,  331,    2, 0x06 /* Public */,
      37,    1,  334,    2, 0x06 /* Public */,
      39,    4,  337,    2, 0x06 /* Public */,
      45,    2,  346,    2, 0x06 /* Public */,
      46,    1,  351,    2, 0x06 /* Public */,
      49,    2,  354,    2, 0x06 /* Public */,
      54,    2,  359,    2, 0x06 /* Public */,
      59,    1,  364,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      60,    2,  367,    2, 0x0a /* Public */,
      63,    0,  372,    2, 0x0a /* Public */,
      64,    1,  373,    2, 0x0a /* Public */,
      65,    1,  376,    2, 0x0a /* Public */,
      66,    1,  379,    2, 0x0a /* Public */,
      69,    1,  382,    2, 0x0a /* Public */,
      71,    1,  385,    2, 0x0a /* Public */,
      72,    1,  388,    2, 0x0a /* Public */,
      73,    1,  391,    2, 0x0a /* Public */,
      75,    2,  394,    2, 0x0a /* Public */,
      77,    0,  399,    2, 0x0a /* Public */,
      78,    0,  400,    2, 0x0a /* Public */,
      79,    1,  401,    2, 0x0a /* Public */,
      83,    1,  404,    2, 0x0a /* Public */,
      86,    1,  407,    2, 0x0a /* Public */,
      89,    4,  410,    2, 0x0a /* Public */,
      92,    3,  419,    2, 0x0a /* Public */,
      94,    0,  426,    2, 0x0a /* Public */,
      95,    0,  427,    2, 0x0a /* Public */,
      96,    0,  428,    2, 0x0a /* Public */,
      79,    2,  429,    2, 0x0a /* Public */,
      83,    2,  434,    2, 0x0a /* Public */,
     102,    0,  439,    2, 0x0a /* Public */,
     103,    0,  440,    2, 0x0a /* Public */,
     104,    0,  441,    2, 0x0a /* Public */,
     105,    0,  442,    2, 0x0a /* Public */,
     106,    1,  443,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   12,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   12,   15,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::QObjectStar,   20,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   22,   23,   12,   24,   25,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   22,   23,   12,   24,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QString,   22,   23,   12,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,   28,   29,
    QMetaType::Void, QMetaType::UInt,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 40, QMetaType::QString, QMetaType::QString,   41,   42,   43,   44,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 40,   41,   42,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 50, 0x80000000 | 52,   51,   53,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 57,   56,   58,
    QMetaType::Void, 0x80000000 | 50,   51,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 50, 0x80000000 | 61,   51,   62,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 67,   68,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, 0x80000000 | 74,   53,
    QMetaType::Void, 0x80000000 | 50, 0x80000000 | 76,   51,   53,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 80, 0x80000000 | 81,   82,
    0x80000000 | 84, 0x80000000 | 85,   82,
    0x80000000 | 87, 0x80000000 | 88,   82,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, QMetaType::QString, 0x80000000 | 55,   90,   12,   91,   56,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   91,   12,   93,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 97, 0x80000000 | 99,   98,   62,
    QMetaType::Void, 0x80000000 | 100, 0x80000000 | 101,   98,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 107,  108,

       0        // eod
};

void AssetProcessor::AssetProcessorManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetProcessorManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NumRemainingJobsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->AssetToProcess((*reinterpret_cast< JobDetails(*)>(_a[1]))); break;
        case 2: _t->AssetMessage((*reinterpret_cast< AzFramework::AssetSystem::AssetNotificationMessage(*)>(_a[1]))); break;
        case 3: _t->InputAssetProcessed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->RequestInputAssetStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->RequestPriorityAssetCompile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->AssetProcessorManagerIdleState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->ReadyToQuit((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->CreateAssetsRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 9: _t->CreateAssetsRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: _t->CreateAssetsRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->SendAssetExistsResponse((*reinterpret_cast< NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->FenceFileDetected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 13: _t->EscalateJobs((*reinterpret_cast< AssetProcessor::JobIdEscalationList(*)>(_a[1]))); break;
        case 14: _t->SourceDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->SourceFolderDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->SourceQueued((*reinterpret_cast< AZ::Uuid(*)>(_a[1])),(*reinterpret_cast< AZ::Uuid(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 17: _t->SourceFinished((*reinterpret_cast< AZ::Uuid(*)>(_a[1])),(*reinterpret_cast< AZ::Uuid(*)>(_a[2]))); break;
        case 18: _t->JobRemoved((*reinterpret_cast< AzToolsFramework::AssetSystem::JobInfo(*)>(_a[1]))); break;
        case 19: _t->JobComplete((*reinterpret_cast< JobEntry(*)>(_a[1])),(*reinterpret_cast< AzToolsFramework::AssetSystem::JobStatus(*)>(_a[2]))); break;
        case 20: _t->PathDependencyResolved((*reinterpret_cast< const AZ::Data::AssetId(*)>(_a[1])),(*reinterpret_cast< const AzToolsFramework::AssetDatabase::ProductDependencyDatabaseEntry(*)>(_a[2]))); break;
        case 21: _t->AddedToCatalog((*reinterpret_cast< JobEntry(*)>(_a[1]))); break;
        case 22: _t->AssetProcessed((*reinterpret_cast< JobEntry(*)>(_a[1])),(*reinterpret_cast< AssetBuilderSDK::ProcessJobResponse(*)>(_a[2]))); break;
        case 23: _t->AssetProcessed_Impl(); break;
        case 24: _t->AssetFailed((*reinterpret_cast< JobEntry(*)>(_a[1]))); break;
        case 25: _t->AssetCancelled((*reinterpret_cast< JobEntry(*)>(_a[1]))); break;
        case 26: _t->AssessFilesFromScanner((*reinterpret_cast< QSet<AssetFileInfo>(*)>(_a[1]))); break;
        case 27: _t->AssessModifiedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->AssessAddedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->AssessDeletedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->OnAssetScannerStatusChange((*reinterpret_cast< AssetProcessor::AssetScanningStatus(*)>(_a[1]))); break;
        case 31: _t->OnJobStatusChanged((*reinterpret_cast< JobEntry(*)>(_a[1])),(*reinterpret_cast< JobStatus(*)>(_a[2]))); break;
        case 32: _t->CheckAssetProcessorIdleState(); break;
        case 33: _t->QuitRequested(); break;
        case 34: { AssetJobsInfoResponse _r = _t->ProcessGetAssetJobsInfoRequest((*reinterpret_cast< MessageData<AssetJobsInfoRequest>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AssetJobsInfoResponse*>(_a[0]) = std::move(_r); }  break;
        case 35: { AssetJobLogResponse _r = _t->ProcessGetAssetJobLogRequest((*reinterpret_cast< MessageData<AssetJobLogRequest>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AssetJobLogResponse*>(_a[0]) = std::move(_r); }  break;
        case 36: { GetAbsoluteAssetDatabaseLocationResponse _r = _t->ProcessGetAbsoluteAssetDatabaseLocationRequest((*reinterpret_cast< MessageData<GetAbsoluteAssetDatabaseLocationRequest>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GetAbsoluteAssetDatabaseLocationResponse*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->OnRequestAssetExists((*reinterpret_cast< NetworkRequestID(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< AZ::Data::AssetId(*)>(_a[4]))); break;
        case 38: { QString _r = _t->GuessProductOrSourceAssetName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->ProcessFilesToExamineQueue(); break;
        case 40: _t->CheckForIdle(); break;
        case 41: _t->CheckMissingFiles(); break;
        case 42: _t->ProcessGetAssetJobsInfoRequest((*reinterpret_cast< AssetJobsInfoRequest(*)>(_a[1])),(*reinterpret_cast< AssetJobsInfoResponse(*)>(_a[2]))); break;
        case 43: _t->ProcessGetAssetJobLogRequest((*reinterpret_cast< const AssetJobLogRequest(*)>(_a[1])),(*reinterpret_cast< AssetJobLogResponse(*)>(_a[2]))); break;
        case 44: _t->ScheduleNextUpdate(); break;
        case 45: _t->ProcessJobs(); break;
        case 46: _t->RemoveEmptyFolders(); break;
        case 47: _t->OnBuildersRegistered(); break;
        case 48: _t->FinishAnalysis((*reinterpret_cast< AZStd::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetProcessorManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::NumRemainingJobsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(JobDetails );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::AssetToProcess)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(AzFramework::AssetSystem::AssetNotificationMessage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::AssetMessage)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::InputAssetProcessed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::RequestInputAssetStatus)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::RequestPriorityAssetCompile)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::AssetProcessorManagerIdleState)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::ReadyToQuit)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(unsigned int , QString , QString , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::CreateAssetsRequest)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(NetworkRequestID , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::SendAssetExistsResponse)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::FenceFileDetected)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(AssetProcessor::JobIdEscalationList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::EscalateJobs)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::SourceDeleted)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::SourceFolderDeleted)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(AZ::Uuid , AZ::Uuid , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::SourceQueued)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(AZ::Uuid , AZ::Uuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::SourceFinished)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(AzToolsFramework::AssetSystem::JobInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::JobRemoved)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(JobEntry , AzToolsFramework::AssetSystem::JobStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::JobComplete)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(const AZ::Data::AssetId & , const AzToolsFramework::AssetDatabase::ProductDependencyDatabaseEntry & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::PathDependencyResolved)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManager::*)(JobEntry );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManager::AddedToCatalog)) {
                *result = 21;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::AssetProcessorManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__AssetProcessorManager.data,
    qt_meta_data_AssetProcessor__AssetProcessorManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::AssetProcessorManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::AssetProcessorManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__AssetProcessorManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetProcessor::ProcessingJobInfoBus::Handler"))
        return static_cast< AssetProcessor::ProcessingJobInfoBus::Handler*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetProcessor::AssetProcessorManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void AssetProcessor::AssetProcessorManager::NumRemainingJobsChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetProcessor::AssetProcessorManager::AssetToProcess(JobDetails _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssetProcessor::AssetProcessorManager::AssetMessage(AzFramework::AssetSystem::AssetNotificationMessage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AssetProcessor::AssetProcessorManager::InputAssetProcessed(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AssetProcessor::AssetProcessorManager::RequestInputAssetStatus(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AssetProcessor::AssetProcessorManager::RequestPriorityAssetCompile(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AssetProcessor::AssetProcessorManager::AssetProcessorManagerIdleState(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AssetProcessor::AssetProcessorManager::ReadyToQuit(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AssetProcessor::AssetProcessorManager::CreateAssetsRequest(unsigned int _t1, QString _t2, QString _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 11
void AssetProcessor::AssetProcessorManager::SendAssetExistsResponse(NetworkRequestID _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AssetProcessor::AssetProcessorManager::FenceFileDetected(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AssetProcessor::AssetProcessorManager::EscalateJobs(AssetProcessor::JobIdEscalationList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AssetProcessor::AssetProcessorManager::SourceDeleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void AssetProcessor::AssetProcessorManager::SourceFolderDeleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void AssetProcessor::AssetProcessorManager::SourceQueued(AZ::Uuid _t1, AZ::Uuid _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void AssetProcessor::AssetProcessorManager::SourceFinished(AZ::Uuid _t1, AZ::Uuid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void AssetProcessor::AssetProcessorManager::JobRemoved(AzToolsFramework::AssetSystem::JobInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void AssetProcessor::AssetProcessorManager::JobComplete(JobEntry _t1, AzToolsFramework::AssetSystem::JobStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void AssetProcessor::AssetProcessorManager::PathDependencyResolved(const AZ::Data::AssetId & _t1, const AzToolsFramework::AssetDatabase::ProductDependencyDatabaseEntry & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void AssetProcessor::AssetProcessorManager::AddedToCatalog(JobEntry _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
