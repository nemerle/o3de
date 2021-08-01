/****************************************************************************
** Meta object code from reading C++ file 'fileServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/FileServer/fileServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileServer_t {
    QByteArrayData data[137];
    char stringdata0[2565];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileServer_t qt_meta_stringdata_FileServer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FileServer"
QT_MOC_LITERAL(1, 11, 17), // "RootFolderChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "RealtimeMetricsChanged"
QT_MOC_LITERAL(4, 53, 22), // "NumOpenRequestsChanged"
QT_MOC_LITERAL(5, 76, 23), // "NumCloseRequestsChanged"
QT_MOC_LITERAL(6, 100, 16), // "NumOpenedChanged"
QT_MOC_LITERAL(7, 117, 16), // "NumClosedChanged"
QT_MOC_LITERAL(8, 134, 22), // "NumReadRequestsChanged"
QT_MOC_LITERAL(9, 157, 23), // "NumWriteRequestsChanged"
QT_MOC_LITERAL(10, 181, 22), // "NumSeekRequestsChanged"
QT_MOC_LITERAL(11, 204, 22), // "NumTellRequestsChanged"
QT_MOC_LITERAL(12, 227, 28), // "NumIsReadOnlyRequestsChanged"
QT_MOC_LITERAL(13, 256, 29), // "NumIsDirectoryRequestsChanged"
QT_MOC_LITERAL(14, 286, 22), // "NumSizeRequestsChanged"
QT_MOC_LITERAL(15, 309, 34), // "NumModificationTimeRequestsCh..."
QT_MOC_LITERAL(16, 344, 24), // "NumExistsRequestsChanged"
QT_MOC_LITERAL(17, 369, 23), // "NumFlushRequestsChanged"
QT_MOC_LITERAL(18, 393, 28), // "NumCreatePathRequestsChanged"
QT_MOC_LITERAL(19, 422, 29), // "NumDestroyPathRequestsChanged"
QT_MOC_LITERAL(20, 452, 24), // "NumRemoveRequestsChanged"
QT_MOC_LITERAL(21, 477, 22), // "NumCopyRequestsChanged"
QT_MOC_LITERAL(22, 500, 24), // "NumRenameRequestsChanged"
QT_MOC_LITERAL(23, 525, 31), // "NumFindFileNamesRequestsChanged"
QT_MOC_LITERAL(24, 557, 16), // "BytesReadChanged"
QT_MOC_LITERAL(25, 574, 19), // "BytesWrittenChanged"
QT_MOC_LITERAL(26, 594, 16), // "BytesSentChanged"
QT_MOC_LITERAL(27, 611, 20), // "BytesReceivedChanged"
QT_MOC_LITERAL(28, 632, 19), // "NumOpenFilesChanged"
QT_MOC_LITERAL(29, 652, 16), // "AddBytesReceived"
QT_MOC_LITERAL(30, 669, 6), // "connId"
QT_MOC_LITERAL(31, 676, 3), // "add"
QT_MOC_LITERAL(32, 680, 6), // "update"
QT_MOC_LITERAL(33, 687, 12), // "AddBytesSent"
QT_MOC_LITERAL(34, 700, 12), // "AddBytesRead"
QT_MOC_LITERAL(35, 713, 15), // "AddBytesWritten"
QT_MOC_LITERAL(36, 729, 14), // "AddOpenRequest"
QT_MOC_LITERAL(37, 744, 15), // "AddCloseRequest"
QT_MOC_LITERAL(38, 760, 9), // "AddOpened"
QT_MOC_LITERAL(39, 770, 9), // "AddClosed"
QT_MOC_LITERAL(40, 780, 14), // "AddReadRequest"
QT_MOC_LITERAL(41, 795, 15), // "AddWriteRequest"
QT_MOC_LITERAL(42, 811, 14), // "AddTellRequest"
QT_MOC_LITERAL(43, 826, 14), // "AddSeekRequest"
QT_MOC_LITERAL(44, 841, 20), // "AddIsReadOnlyRequest"
QT_MOC_LITERAL(45, 862, 21), // "AddIsDirectoryRequest"
QT_MOC_LITERAL(46, 884, 14), // "AddSizeRequest"
QT_MOC_LITERAL(47, 899, 26), // "AddModificationTimeRequest"
QT_MOC_LITERAL(48, 926, 16), // "AddExistsRequest"
QT_MOC_LITERAL(49, 943, 15), // "AddFlushRequest"
QT_MOC_LITERAL(50, 959, 20), // "AddCreatePathRequest"
QT_MOC_LITERAL(51, 980, 21), // "AddDestroyPathRequest"
QT_MOC_LITERAL(52, 1002, 16), // "AddRemoveRequest"
QT_MOC_LITERAL(53, 1019, 14), // "AddCopyRequest"
QT_MOC_LITERAL(54, 1034, 16), // "AddRenameRequest"
QT_MOC_LITERAL(55, 1051, 23), // "AddFindFileNamesRequest"
QT_MOC_LITERAL(56, 1075, 19), // "UpdateBytesReceived"
QT_MOC_LITERAL(57, 1095, 15), // "UpdateBytesSent"
QT_MOC_LITERAL(58, 1111, 15), // "UpdateBytesRead"
QT_MOC_LITERAL(59, 1127, 18), // "UpdateBytesWritten"
QT_MOC_LITERAL(60, 1146, 17), // "UpdateOpenRequest"
QT_MOC_LITERAL(61, 1164, 18), // "UpdateCloseRequest"
QT_MOC_LITERAL(62, 1183, 12), // "UpdateOpened"
QT_MOC_LITERAL(63, 1196, 12), // "UpdateClosed"
QT_MOC_LITERAL(64, 1209, 17), // "UpdateReadRequest"
QT_MOC_LITERAL(65, 1227, 18), // "UpdateWriteRequest"
QT_MOC_LITERAL(66, 1246, 17), // "UpdateTellRequest"
QT_MOC_LITERAL(67, 1264, 17), // "UpdateSeekRequest"
QT_MOC_LITERAL(68, 1282, 23), // "UpdateIsReadOnlyRequest"
QT_MOC_LITERAL(69, 1306, 24), // "UpdateIsDirectoryRequest"
QT_MOC_LITERAL(70, 1331, 17), // "UpdateSizeRequest"
QT_MOC_LITERAL(71, 1349, 29), // "UpdateModificationTimeRequest"
QT_MOC_LITERAL(72, 1379, 19), // "UpdateExistsRequest"
QT_MOC_LITERAL(73, 1399, 18), // "UpdateFlushRequest"
QT_MOC_LITERAL(74, 1418, 23), // "UpdateCreatePathRequest"
QT_MOC_LITERAL(75, 1442, 24), // "UpdateDestroyPathRequest"
QT_MOC_LITERAL(76, 1467, 19), // "UpdateRemoveRequest"
QT_MOC_LITERAL(77, 1487, 17), // "UpdateCopyRequest"
QT_MOC_LITERAL(78, 1505, 19), // "UpdateRenameRequest"
QT_MOC_LITERAL(79, 1525, 26), // "UpdateFindFileNamesRequest"
QT_MOC_LITERAL(80, 1552, 23), // "UpdateConnectionMetrics"
QT_MOC_LITERAL(81, 1576, 18), // "ProcessOpenRequest"
QT_MOC_LITERAL(82, 1595, 4), // "type"
QT_MOC_LITERAL(83, 1600, 6), // "serial"
QT_MOC_LITERAL(84, 1607, 7), // "payload"
QT_MOC_LITERAL(85, 1615, 19), // "ProcessCloseRequest"
QT_MOC_LITERAL(86, 1635, 18), // "ProcessReadRequest"
QT_MOC_LITERAL(87, 1654, 19), // "ProcessWriteRequest"
QT_MOC_LITERAL(88, 1674, 18), // "ProcessTellRequest"
QT_MOC_LITERAL(89, 1693, 18), // "ProcessSeekRequest"
QT_MOC_LITERAL(90, 1712, 24), // "ProcessIsReadOnlyRequest"
QT_MOC_LITERAL(91, 1737, 25), // "ProcessIsDirectoryRequest"
QT_MOC_LITERAL(92, 1763, 18), // "ProcessSizeRequest"
QT_MOC_LITERAL(93, 1782, 30), // "ProcessModificationTimeRequest"
QT_MOC_LITERAL(94, 1813, 20), // "ProcessExistsRequest"
QT_MOC_LITERAL(95, 1834, 19), // "ProcessFlushRequest"
QT_MOC_LITERAL(96, 1854, 24), // "ProcessCreatePathRequest"
QT_MOC_LITERAL(97, 1879, 25), // "ProcessDestroyPathRequest"
QT_MOC_LITERAL(98, 1905, 20), // "ProcessRemoveRequest"
QT_MOC_LITERAL(99, 1926, 18), // "ProcessCopyRequest"
QT_MOC_LITERAL(100, 1945, 20), // "ProcessRenameRequest"
QT_MOC_LITERAL(101, 1966, 27), // "ProcessFindFileNamesRequest"
QT_MOC_LITERAL(102, 1994, 22), // "ProcessFileTreeRequest"
QT_MOC_LITERAL(103, 2017, 13), // "UpdateMetrics"
QT_MOC_LITERAL(104, 2031, 15), // "ConnectionAdded"
QT_MOC_LITERAL(105, 2047, 11), // "Connection*"
QT_MOC_LITERAL(106, 2059, 10), // "connection"
QT_MOC_LITERAL(107, 2070, 17), // "ConnectionRemoved"
QT_MOC_LITERAL(108, 2088, 18), // "setRealTimeMetrics"
QT_MOC_LITERAL(109, 2107, 6), // "enable"
QT_MOC_LITERAL(110, 2114, 10), // "rootFolder"
QT_MOC_LITERAL(111, 2125, 15), // "realtimeMetrics"
QT_MOC_LITERAL(112, 2141, 15), // "numOpenRequests"
QT_MOC_LITERAL(113, 2157, 16), // "numCloseRequests"
QT_MOC_LITERAL(114, 2174, 9), // "numOpened"
QT_MOC_LITERAL(115, 2184, 9), // "numClosed"
QT_MOC_LITERAL(116, 2194, 15), // "numReadRequests"
QT_MOC_LITERAL(117, 2210, 16), // "numWriteRequests"
QT_MOC_LITERAL(118, 2227, 15), // "numSeekRequests"
QT_MOC_LITERAL(119, 2243, 15), // "numTellRequests"
QT_MOC_LITERAL(120, 2259, 21), // "numIsReadOnlyRequests"
QT_MOC_LITERAL(121, 2281, 22), // "numIsDirectoryRequests"
QT_MOC_LITERAL(122, 2304, 15), // "numSizeRequests"
QT_MOC_LITERAL(123, 2320, 27), // "numModificationTimeRequests"
QT_MOC_LITERAL(124, 2348, 17), // "numExistsRequests"
QT_MOC_LITERAL(125, 2366, 16), // "numFlushRequests"
QT_MOC_LITERAL(126, 2383, 21), // "numCreatePathRequests"
QT_MOC_LITERAL(127, 2405, 22), // "numDestroyPathRequests"
QT_MOC_LITERAL(128, 2428, 17), // "numRemoveRequests"
QT_MOC_LITERAL(129, 2446, 15), // "numCopyRequests"
QT_MOC_LITERAL(130, 2462, 17), // "numRenameRequests"
QT_MOC_LITERAL(131, 2480, 24), // "numFindFileNamesRequests"
QT_MOC_LITERAL(132, 2505, 9), // "bytesRead"
QT_MOC_LITERAL(133, 2515, 12), // "bytesWritten"
QT_MOC_LITERAL(134, 2528, 9), // "bytesSent"
QT_MOC_LITERAL(135, 2538, 13), // "bytesReceived"
QT_MOC_LITERAL(136, 2552, 12) // "numOpenFiles"

    },
    "FileServer\0RootFolderChanged\0\0"
    "RealtimeMetricsChanged\0NumOpenRequestsChanged\0"
    "NumCloseRequestsChanged\0NumOpenedChanged\0"
    "NumClosedChanged\0NumReadRequestsChanged\0"
    "NumWriteRequestsChanged\0NumSeekRequestsChanged\0"
    "NumTellRequestsChanged\0"
    "NumIsReadOnlyRequestsChanged\0"
    "NumIsDirectoryRequestsChanged\0"
    "NumSizeRequestsChanged\0"
    "NumModificationTimeRequestsChanged\0"
    "NumExistsRequestsChanged\0"
    "NumFlushRequestsChanged\0"
    "NumCreatePathRequestsChanged\0"
    "NumDestroyPathRequestsChanged\0"
    "NumRemoveRequestsChanged\0"
    "NumCopyRequestsChanged\0NumRenameRequestsChanged\0"
    "NumFindFileNamesRequestsChanged\0"
    "BytesReadChanged\0BytesWrittenChanged\0"
    "BytesSentChanged\0BytesReceivedChanged\0"
    "NumOpenFilesChanged\0AddBytesReceived\0"
    "connId\0add\0update\0AddBytesSent\0"
    "AddBytesRead\0AddBytesWritten\0"
    "AddOpenRequest\0AddCloseRequest\0AddOpened\0"
    "AddClosed\0AddReadRequest\0AddWriteRequest\0"
    "AddTellRequest\0AddSeekRequest\0"
    "AddIsReadOnlyRequest\0AddIsDirectoryRequest\0"
    "AddSizeRequest\0AddModificationTimeRequest\0"
    "AddExistsRequest\0AddFlushRequest\0"
    "AddCreatePathRequest\0AddDestroyPathRequest\0"
    "AddRemoveRequest\0AddCopyRequest\0"
    "AddRenameRequest\0AddFindFileNamesRequest\0"
    "UpdateBytesReceived\0UpdateBytesSent\0"
    "UpdateBytesRead\0UpdateBytesWritten\0"
    "UpdateOpenRequest\0UpdateCloseRequest\0"
    "UpdateOpened\0UpdateClosed\0UpdateReadRequest\0"
    "UpdateWriteRequest\0UpdateTellRequest\0"
    "UpdateSeekRequest\0UpdateIsReadOnlyRequest\0"
    "UpdateIsDirectoryRequest\0UpdateSizeRequest\0"
    "UpdateModificationTimeRequest\0"
    "UpdateExistsRequest\0UpdateFlushRequest\0"
    "UpdateCreatePathRequest\0"
    "UpdateDestroyPathRequest\0UpdateRemoveRequest\0"
    "UpdateCopyRequest\0UpdateRenameRequest\0"
    "UpdateFindFileNamesRequest\0"
    "UpdateConnectionMetrics\0ProcessOpenRequest\0"
    "type\0serial\0payload\0ProcessCloseRequest\0"
    "ProcessReadRequest\0ProcessWriteRequest\0"
    "ProcessTellRequest\0ProcessSeekRequest\0"
    "ProcessIsReadOnlyRequest\0"
    "ProcessIsDirectoryRequest\0ProcessSizeRequest\0"
    "ProcessModificationTimeRequest\0"
    "ProcessExistsRequest\0ProcessFlushRequest\0"
    "ProcessCreatePathRequest\0"
    "ProcessDestroyPathRequest\0"
    "ProcessRemoveRequest\0ProcessCopyRequest\0"
    "ProcessRenameRequest\0ProcessFindFileNamesRequest\0"
    "ProcessFileTreeRequest\0UpdateMetrics\0"
    "ConnectionAdded\0Connection*\0connection\0"
    "ConnectionRemoved\0setRealTimeMetrics\0"
    "enable\0rootFolder\0realtimeMetrics\0"
    "numOpenRequests\0numCloseRequests\0"
    "numOpened\0numClosed\0numReadRequests\0"
    "numWriteRequests\0numSeekRequests\0"
    "numTellRequests\0numIsReadOnlyRequests\0"
    "numIsDirectoryRequests\0numSizeRequests\0"
    "numModificationTimeRequests\0"
    "numExistsRequests\0numFlushRequests\0"
    "numCreatePathRequests\0numDestroyPathRequests\0"
    "numRemoveRequests\0numCopyRequests\0"
    "numRenameRequests\0numFindFileNamesRequests\0"
    "bytesRead\0bytesWritten\0bytesSent\0"
    "bytesReceived\0numOpenFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      99,   14, // methods
      27,  920, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      76,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  509,    2, 0x06 /* Public */,
       3,    0,  510,    2, 0x06 /* Public */,
       4,    0,  511,    2, 0x06 /* Public */,
       5,    0,  512,    2, 0x06 /* Public */,
       6,    0,  513,    2, 0x06 /* Public */,
       7,    0,  514,    2, 0x06 /* Public */,
       8,    0,  515,    2, 0x06 /* Public */,
       9,    0,  516,    2, 0x06 /* Public */,
      10,    0,  517,    2, 0x06 /* Public */,
      11,    0,  518,    2, 0x06 /* Public */,
      12,    0,  519,    2, 0x06 /* Public */,
      13,    0,  520,    2, 0x06 /* Public */,
      14,    0,  521,    2, 0x06 /* Public */,
      15,    0,  522,    2, 0x06 /* Public */,
      16,    0,  523,    2, 0x06 /* Public */,
      17,    0,  524,    2, 0x06 /* Public */,
      18,    0,  525,    2, 0x06 /* Public */,
      19,    0,  526,    2, 0x06 /* Public */,
      20,    0,  527,    2, 0x06 /* Public */,
      21,    0,  528,    2, 0x06 /* Public */,
      22,    0,  529,    2, 0x06 /* Public */,
      23,    0,  530,    2, 0x06 /* Public */,
      24,    0,  531,    2, 0x06 /* Public */,
      25,    0,  532,    2, 0x06 /* Public */,
      26,    0,  533,    2, 0x06 /* Public */,
      27,    0,  534,    2, 0x06 /* Public */,
      28,    0,  535,    2, 0x06 /* Public */,
      29,    3,  536,    2, 0x06 /* Public */,
      33,    3,  543,    2, 0x06 /* Public */,
      34,    3,  550,    2, 0x06 /* Public */,
      35,    3,  557,    2, 0x06 /* Public */,
      36,    2,  564,    2, 0x06 /* Public */,
      37,    2,  569,    2, 0x06 /* Public */,
      38,    2,  574,    2, 0x06 /* Public */,
      39,    2,  579,    2, 0x06 /* Public */,
      40,    2,  584,    2, 0x06 /* Public */,
      41,    2,  589,    2, 0x06 /* Public */,
      42,    2,  594,    2, 0x06 /* Public */,
      43,    2,  599,    2, 0x06 /* Public */,
      44,    2,  604,    2, 0x06 /* Public */,
      45,    2,  609,    2, 0x06 /* Public */,
      46,    2,  614,    2, 0x06 /* Public */,
      47,    2,  619,    2, 0x06 /* Public */,
      48,    2,  624,    2, 0x06 /* Public */,
      49,    2,  629,    2, 0x06 /* Public */,
      50,    2,  634,    2, 0x06 /* Public */,
      51,    2,  639,    2, 0x06 /* Public */,
      52,    2,  644,    2, 0x06 /* Public */,
      53,    2,  649,    2, 0x06 /* Public */,
      54,    2,  654,    2, 0x06 /* Public */,
      55,    2,  659,    2, 0x06 /* Public */,
      56,    1,  664,    2, 0x06 /* Public */,
      57,    1,  667,    2, 0x06 /* Public */,
      58,    1,  670,    2, 0x06 /* Public */,
      59,    1,  673,    2, 0x06 /* Public */,
      60,    1,  676,    2, 0x06 /* Public */,
      61,    1,  679,    2, 0x06 /* Public */,
      62,    1,  682,    2, 0x06 /* Public */,
      63,    1,  685,    2, 0x06 /* Public */,
      64,    1,  688,    2, 0x06 /* Public */,
      65,    1,  691,    2, 0x06 /* Public */,
      66,    1,  694,    2, 0x06 /* Public */,
      67,    1,  697,    2, 0x06 /* Public */,
      68,    1,  700,    2, 0x06 /* Public */,
      69,    1,  703,    2, 0x06 /* Public */,
      70,    1,  706,    2, 0x06 /* Public */,
      71,    1,  709,    2, 0x06 /* Public */,
      72,    1,  712,    2, 0x06 /* Public */,
      73,    1,  715,    2, 0x06 /* Public */,
      74,    1,  718,    2, 0x06 /* Public */,
      75,    1,  721,    2, 0x06 /* Public */,
      76,    1,  724,    2, 0x06 /* Public */,
      77,    1,  727,    2, 0x06 /* Public */,
      78,    1,  730,    2, 0x06 /* Public */,
      79,    1,  733,    2, 0x06 /* Public */,
      80,    0,  736,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      81,    4,  737,    2, 0x0a /* Public */,
      85,    4,  746,    2, 0x0a /* Public */,
      86,    4,  755,    2, 0x0a /* Public */,
      87,    4,  764,    2, 0x0a /* Public */,
      88,    4,  773,    2, 0x0a /* Public */,
      89,    4,  782,    2, 0x0a /* Public */,
      90,    4,  791,    2, 0x0a /* Public */,
      91,    4,  800,    2, 0x0a /* Public */,
      92,    4,  809,    2, 0x0a /* Public */,
      93,    4,  818,    2, 0x0a /* Public */,
      94,    4,  827,    2, 0x0a /* Public */,
      95,    4,  836,    2, 0x0a /* Public */,
      96,    4,  845,    2, 0x0a /* Public */,
      97,    4,  854,    2, 0x0a /* Public */,
      98,    4,  863,    2, 0x0a /* Public */,
      99,    4,  872,    2, 0x0a /* Public */,
     100,    4,  881,    2, 0x0a /* Public */,
     101,    4,  890,    2, 0x0a /* Public */,
     102,    4,  899,    2, 0x0a /* Public */,
     103,    0,  908,    2, 0x0a /* Public */,
     104,    2,  909,    2, 0x0a /* Public */,
     107,    1,  914,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
     108,    1,  917,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   30,   31,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   30,   31,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   30,   31,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   30,   31,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   30,   32,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void, QMetaType::UInt,   30,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   30,   82,   83,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 105,   30,  106,
    QMetaType::Void, QMetaType::UInt,   30,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,  109,

 // properties: name, type, flags
     110, QMetaType::QString, 0x00495003,
     111, QMetaType::Bool, 0x00495003,
     112, QMetaType::LongLong, 0x00495003,
     113, QMetaType::LongLong, 0x00495003,
     114, QMetaType::LongLong, 0x00495003,
     115, QMetaType::LongLong, 0x00495003,
     116, QMetaType::LongLong, 0x00495003,
     117, QMetaType::LongLong, 0x00495003,
     118, QMetaType::LongLong, 0x00495003,
     119, QMetaType::LongLong, 0x00495003,
     120, QMetaType::LongLong, 0x00495003,
     121, QMetaType::LongLong, 0x00495003,
     122, QMetaType::LongLong, 0x00495003,
     123, QMetaType::LongLong, 0x00495003,
     124, QMetaType::LongLong, 0x00495003,
     125, QMetaType::LongLong, 0x00495003,
     126, QMetaType::LongLong, 0x00495003,
     127, QMetaType::LongLong, 0x00495003,
     128, QMetaType::LongLong, 0x00495003,
     129, QMetaType::LongLong, 0x00495003,
     130, QMetaType::LongLong, 0x00495003,
     131, QMetaType::LongLong, 0x00495003,
     132, QMetaType::LongLong, 0x00495003,
     133, QMetaType::LongLong, 0x00495003,
     134, QMetaType::LongLong, 0x00495003,
     135, QMetaType::LongLong, 0x00495003,
     136, QMetaType::LongLong, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,

       0        // eod
};

void FileServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RootFolderChanged(); break;
        case 1: _t->RealtimeMetricsChanged(); break;
        case 2: _t->NumOpenRequestsChanged(); break;
        case 3: _t->NumCloseRequestsChanged(); break;
        case 4: _t->NumOpenedChanged(); break;
        case 5: _t->NumClosedChanged(); break;
        case 6: _t->NumReadRequestsChanged(); break;
        case 7: _t->NumWriteRequestsChanged(); break;
        case 8: _t->NumSeekRequestsChanged(); break;
        case 9: _t->NumTellRequestsChanged(); break;
        case 10: _t->NumIsReadOnlyRequestsChanged(); break;
        case 11: _t->NumIsDirectoryRequestsChanged(); break;
        case 12: _t->NumSizeRequestsChanged(); break;
        case 13: _t->NumModificationTimeRequestsChanged(); break;
        case 14: _t->NumExistsRequestsChanged(); break;
        case 15: _t->NumFlushRequestsChanged(); break;
        case 16: _t->NumCreatePathRequestsChanged(); break;
        case 17: _t->NumDestroyPathRequestsChanged(); break;
        case 18: _t->NumRemoveRequestsChanged(); break;
        case 19: _t->NumCopyRequestsChanged(); break;
        case 20: _t->NumRenameRequestsChanged(); break;
        case 21: _t->NumFindFileNamesRequestsChanged(); break;
        case 22: _t->BytesReadChanged(); break;
        case 23: _t->BytesWrittenChanged(); break;
        case 24: _t->BytesSentChanged(); break;
        case 25: _t->BytesReceivedChanged(); break;
        case 26: _t->NumOpenFilesChanged(); break;
        case 27: _t->AddBytesReceived((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 28: _t->AddBytesSent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 29: _t->AddBytesRead((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->AddBytesWritten((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 31: _t->AddOpenRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->AddCloseRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->AddOpened((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->AddClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->AddReadRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->AddWriteRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->AddTellRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->AddSeekRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->AddIsReadOnlyRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->AddIsDirectoryRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->AddSizeRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->AddModificationTimeRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 43: _t->AddExistsRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->AddFlushRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: _t->AddCreatePathRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->AddDestroyPathRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->AddRemoveRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 48: _t->AddCopyRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->AddRenameRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 50: _t->AddFindFileNamesRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->UpdateBytesReceived((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 52: _t->UpdateBytesSent((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 53: _t->UpdateBytesRead((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 54: _t->UpdateBytesWritten((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 55: _t->UpdateOpenRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 56: _t->UpdateCloseRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 57: _t->UpdateOpened((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 58: _t->UpdateClosed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 59: _t->UpdateReadRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 60: _t->UpdateWriteRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 61: _t->UpdateTellRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 62: _t->UpdateSeekRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 63: _t->UpdateIsReadOnlyRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 64: _t->UpdateIsDirectoryRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 65: _t->UpdateSizeRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 66: _t->UpdateModificationTimeRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 67: _t->UpdateExistsRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 68: _t->UpdateFlushRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 69: _t->UpdateCreatePathRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 70: _t->UpdateDestroyPathRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 71: _t->UpdateRemoveRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 72: _t->UpdateCopyRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 73: _t->UpdateRenameRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 74: _t->UpdateFindFileNamesRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 75: _t->UpdateConnectionMetrics(); break;
        case 76: _t->ProcessOpenRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 77: _t->ProcessCloseRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 78: _t->ProcessReadRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 79: _t->ProcessWriteRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 80: _t->ProcessTellRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 81: _t->ProcessSeekRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 82: _t->ProcessIsReadOnlyRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 83: _t->ProcessIsDirectoryRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 84: _t->ProcessSizeRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 85: _t->ProcessModificationTimeRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 86: _t->ProcessExistsRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 87: _t->ProcessFlushRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 88: _t->ProcessCreatePathRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 89: _t->ProcessDestroyPathRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 90: _t->ProcessRemoveRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 91: _t->ProcessCopyRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 92: _t->ProcessRenameRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 93: _t->ProcessFindFileNamesRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 94: _t->ProcessFileTreeRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 95: _t->UpdateMetrics(); break;
        case 96: _t->ConnectionAdded((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Connection*(*)>(_a[2]))); break;
        case 97: _t->ConnectionRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 98: _t->setRealTimeMetrics((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::RootFolderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::RealtimeMetricsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumOpenRequestsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumCloseRequestsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumOpenedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumClosedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumReadRequestsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumWriteRequestsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumSeekRequestsChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumTellRequestsChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumIsReadOnlyRequestsChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumIsDirectoryRequestsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumSizeRequestsChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumModificationTimeRequestsChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumExistsRequestsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumFlushRequestsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumCreatePathRequestsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumDestroyPathRequestsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumRemoveRequestsChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumCopyRequestsChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumRenameRequestsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumFindFileNamesRequestsChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::BytesReadChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::BytesWrittenChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::BytesSentChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::BytesReceivedChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::NumOpenFilesChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , qint64 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddBytesReceived)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , qint64 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddBytesSent)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , qint64 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddBytesRead)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , qint64 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddBytesWritten)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddOpenRequest)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddCloseRequest)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddOpened)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddClosed)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddReadRequest)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddWriteRequest)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddTellRequest)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddSeekRequest)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddIsReadOnlyRequest)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddIsDirectoryRequest)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddSizeRequest)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddModificationTimeRequest)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddExistsRequest)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddFlushRequest)) {
                *result = 44;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddCreatePathRequest)) {
                *result = 45;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddDestroyPathRequest)) {
                *result = 46;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddRemoveRequest)) {
                *result = 47;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddCopyRequest)) {
                *result = 48;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddRenameRequest)) {
                *result = 49;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::AddFindFileNamesRequest)) {
                *result = 50;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateBytesReceived)) {
                *result = 51;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateBytesSent)) {
                *result = 52;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateBytesRead)) {
                *result = 53;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateBytesWritten)) {
                *result = 54;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateOpenRequest)) {
                *result = 55;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateCloseRequest)) {
                *result = 56;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateOpened)) {
                *result = 57;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateClosed)) {
                *result = 58;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateReadRequest)) {
                *result = 59;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateWriteRequest)) {
                *result = 60;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateTellRequest)) {
                *result = 61;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateSeekRequest)) {
                *result = 62;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateIsReadOnlyRequest)) {
                *result = 63;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateIsDirectoryRequest)) {
                *result = 64;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateSizeRequest)) {
                *result = 65;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateModificationTimeRequest)) {
                *result = 66;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateExistsRequest)) {
                *result = 67;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateFlushRequest)) {
                *result = 68;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateCreatePathRequest)) {
                *result = 69;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateDestroyPathRequest)) {
                *result = 70;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateRemoveRequest)) {
                *result = 71;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateCopyRequest)) {
                *result = 72;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateRenameRequest)) {
                *result = 73;
                return;
            }
        }
        {
            using _t = void (FileServer::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateFindFileNamesRequest)) {
                *result = 74;
                return;
            }
        }
        {
            using _t = void (FileServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServer::UpdateConnectionMetrics)) {
                *result = 75;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->m_displayRoot; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->m_realtimeMetrics; break;
        case 2: *reinterpret_cast< qint64*>(_v) = _t->m_numOpenRequests; break;
        case 3: *reinterpret_cast< qint64*>(_v) = _t->m_numCloseRequests; break;
        case 4: *reinterpret_cast< qint64*>(_v) = _t->m_numOpened; break;
        case 5: *reinterpret_cast< qint64*>(_v) = _t->m_numClosed; break;
        case 6: *reinterpret_cast< qint64*>(_v) = _t->m_numReadRequests; break;
        case 7: *reinterpret_cast< qint64*>(_v) = _t->m_numWriteRequests; break;
        case 8: *reinterpret_cast< qint64*>(_v) = _t->m_numSeekRequests; break;
        case 9: *reinterpret_cast< qint64*>(_v) = _t->m_numTellRequests; break;
        case 10: *reinterpret_cast< qint64*>(_v) = _t->m_numIsReadOnlyRequests; break;
        case 11: *reinterpret_cast< qint64*>(_v) = _t->m_numIsDirectoryRequests; break;
        case 12: *reinterpret_cast< qint64*>(_v) = _t->m_numSizeRequests; break;
        case 13: *reinterpret_cast< qint64*>(_v) = _t->m_numModificationTimeRequests; break;
        case 14: *reinterpret_cast< qint64*>(_v) = _t->m_numExistsRequests; break;
        case 15: *reinterpret_cast< qint64*>(_v) = _t->m_numFlushRequests; break;
        case 16: *reinterpret_cast< qint64*>(_v) = _t->m_numCreatePathRequests; break;
        case 17: *reinterpret_cast< qint64*>(_v) = _t->m_numDestroyPathRequests; break;
        case 18: *reinterpret_cast< qint64*>(_v) = _t->m_numRemoveRequests; break;
        case 19: *reinterpret_cast< qint64*>(_v) = _t->m_numCopyRequests; break;
        case 20: *reinterpret_cast< qint64*>(_v) = _t->m_numRenameRequests; break;
        case 21: *reinterpret_cast< qint64*>(_v) = _t->m_numFindFileNamesRequests; break;
        case 22: *reinterpret_cast< qint64*>(_v) = _t->m_bytesRead; break;
        case 23: *reinterpret_cast< qint64*>(_v) = _t->m_bytesWritten; break;
        case 24: *reinterpret_cast< qint64*>(_v) = _t->m_bytesSent; break;
        case 25: *reinterpret_cast< qint64*>(_v) = _t->m_bytesReceived; break;
        case 26: *reinterpret_cast< qint64*>(_v) = _t->m_numOpenFiles; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_displayRoot != *reinterpret_cast< QString*>(_v)) {
                _t->m_displayRoot = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->RootFolderChanged();
            }
            break;
        case 1:
            if (_t->m_realtimeMetrics != *reinterpret_cast< bool*>(_v)) {
                _t->m_realtimeMetrics = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->RealtimeMetricsChanged();
            }
            break;
        case 2:
            if (_t->m_numOpenRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numOpenRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumOpenRequestsChanged();
            }
            break;
        case 3:
            if (_t->m_numCloseRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numCloseRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumCloseRequestsChanged();
            }
            break;
        case 4:
            if (_t->m_numOpened != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numOpened = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumOpenedChanged();
            }
            break;
        case 5:
            if (_t->m_numClosed != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numClosed = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumClosedChanged();
            }
            break;
        case 6:
            if (_t->m_numReadRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numReadRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumReadRequestsChanged();
            }
            break;
        case 7:
            if (_t->m_numWriteRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numWriteRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumWriteRequestsChanged();
            }
            break;
        case 8:
            if (_t->m_numSeekRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numSeekRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumSeekRequestsChanged();
            }
            break;
        case 9:
            if (_t->m_numTellRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numTellRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumTellRequestsChanged();
            }
            break;
        case 10:
            if (_t->m_numIsReadOnlyRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numIsReadOnlyRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumIsReadOnlyRequestsChanged();
            }
            break;
        case 11:
            if (_t->m_numIsDirectoryRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numIsDirectoryRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumIsDirectoryRequestsChanged();
            }
            break;
        case 12:
            if (_t->m_numSizeRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numSizeRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumSizeRequestsChanged();
            }
            break;
        case 13:
            if (_t->m_numModificationTimeRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numModificationTimeRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumModificationTimeRequestsChanged();
            }
            break;
        case 14:
            if (_t->m_numExistsRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numExistsRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumExistsRequestsChanged();
            }
            break;
        case 15:
            if (_t->m_numFlushRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numFlushRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumFlushRequestsChanged();
            }
            break;
        case 16:
            if (_t->m_numCreatePathRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numCreatePathRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumCreatePathRequestsChanged();
            }
            break;
        case 17:
            if (_t->m_numDestroyPathRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numDestroyPathRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumDestroyPathRequestsChanged();
            }
            break;
        case 18:
            if (_t->m_numRemoveRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numRemoveRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumRemoveRequestsChanged();
            }
            break;
        case 19:
            if (_t->m_numCopyRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numCopyRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumCopyRequestsChanged();
            }
            break;
        case 20:
            if (_t->m_numRenameRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numRenameRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumRenameRequestsChanged();
            }
            break;
        case 21:
            if (_t->m_numFindFileNamesRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numFindFileNamesRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumFindFileNamesRequestsChanged();
            }
            break;
        case 22:
            if (_t->m_bytesRead != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesRead = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesReadChanged();
            }
            break;
        case 23:
            if (_t->m_bytesWritten != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesWritten = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesWrittenChanged();
            }
            break;
        case 24:
            if (_t->m_bytesSent != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesSent = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesSentChanged();
            }
            break;
        case 25:
            if (_t->m_bytesReceived != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesReceived = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesReceivedChanged();
            }
            break;
        case 26:
            if (_t->m_numOpenFiles != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numOpenFiles = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumOpenFilesChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FileServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileServer.data,
    qt_meta_data_FileServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 99)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 99;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 99)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 99;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 27;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FileServer::RootFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileServer::RealtimeMetricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileServer::NumOpenRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FileServer::NumCloseRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FileServer::NumOpenedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FileServer::NumClosedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FileServer::NumReadRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FileServer::NumWriteRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void FileServer::NumSeekRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void FileServer::NumTellRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void FileServer::NumIsReadOnlyRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void FileServer::NumIsDirectoryRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void FileServer::NumSizeRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void FileServer::NumModificationTimeRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void FileServer::NumExistsRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void FileServer::NumFlushRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void FileServer::NumCreatePathRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void FileServer::NumDestroyPathRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void FileServer::NumRemoveRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void FileServer::NumCopyRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void FileServer::NumRenameRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void FileServer::NumFindFileNamesRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void FileServer::BytesReadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void FileServer::BytesWrittenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void FileServer::BytesSentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void FileServer::BytesReceivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void FileServer::NumOpenFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void FileServer::AddBytesReceived(unsigned int _t1, qint64 _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void FileServer::AddBytesSent(unsigned int _t1, qint64 _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void FileServer::AddBytesRead(unsigned int _t1, qint64 _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void FileServer::AddBytesWritten(unsigned int _t1, qint64 _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void FileServer::AddOpenRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void FileServer::AddCloseRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void FileServer::AddOpened(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void FileServer::AddClosed(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void FileServer::AddReadRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void FileServer::AddWriteRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void FileServer::AddTellRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void FileServer::AddSeekRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void FileServer::AddIsReadOnlyRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void FileServer::AddIsDirectoryRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void FileServer::AddSizeRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void FileServer::AddModificationTimeRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void FileServer::AddExistsRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void FileServer::AddFlushRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void FileServer::AddCreatePathRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void FileServer::AddDestroyPathRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void FileServer::AddRemoveRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void FileServer::AddCopyRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void FileServer::AddRenameRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void FileServer::AddFindFileNamesRequest(unsigned int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void FileServer::UpdateBytesReceived(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void FileServer::UpdateBytesSent(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void FileServer::UpdateBytesRead(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void FileServer::UpdateBytesWritten(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}

// SIGNAL 55
void FileServer::UpdateOpenRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 55, _a);
}

// SIGNAL 56
void FileServer::UpdateCloseRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 56, _a);
}

// SIGNAL 57
void FileServer::UpdateOpened(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 57, _a);
}

// SIGNAL 58
void FileServer::UpdateClosed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 58, _a);
}

// SIGNAL 59
void FileServer::UpdateReadRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 59, _a);
}

// SIGNAL 60
void FileServer::UpdateWriteRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 60, _a);
}

// SIGNAL 61
void FileServer::UpdateTellRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 61, _a);
}

// SIGNAL 62
void FileServer::UpdateSeekRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 62, _a);
}

// SIGNAL 63
void FileServer::UpdateIsReadOnlyRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 63, _a);
}

// SIGNAL 64
void FileServer::UpdateIsDirectoryRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 64, _a);
}

// SIGNAL 65
void FileServer::UpdateSizeRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 65, _a);
}

// SIGNAL 66
void FileServer::UpdateModificationTimeRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 66, _a);
}

// SIGNAL 67
void FileServer::UpdateExistsRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 67, _a);
}

// SIGNAL 68
void FileServer::UpdateFlushRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 68, _a);
}

// SIGNAL 69
void FileServer::UpdateCreatePathRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 69, _a);
}

// SIGNAL 70
void FileServer::UpdateDestroyPathRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 70, _a);
}

// SIGNAL 71
void FileServer::UpdateRemoveRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 71, _a);
}

// SIGNAL 72
void FileServer::UpdateCopyRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 72, _a);
}

// SIGNAL 73
void FileServer::UpdateRenameRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 73, _a);
}

// SIGNAL 74
void FileServer::UpdateFindFileNamesRequest(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 74, _a);
}

// SIGNAL 75
void FileServer::UpdateConnectionMetrics()
{
    QMetaObject::activate(this, &staticMetaObject, 75, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
