/****************************************************************************
** Meta object code from reading C++ file 'connectionManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/connection/connectionManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectionManager_t {
    QByteArrayData data[102];
    char stringdata0[1708];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectionManager_t qt_meta_stringdata_ConnectionManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ConnectionManager"
QT_MOC_LITERAL(1, 18, 15), // "connectionAdded"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "connectionId"
QT_MOC_LITERAL(4, 48, 11), // "Connection*"
QT_MOC_LITERAL(5, 60, 10), // "connection"
QT_MOC_LITERAL(6, 71, 23), // "beforeConnectionRemoved"
QT_MOC_LITERAL(7, 95, 22), // "ConnectionDisconnected"
QT_MOC_LITERAL(8, 118, 17), // "ConnectionRemoved"
QT_MOC_LITERAL(9, 136, 15), // "ConnectionError"
QT_MOC_LITERAL(10, 152, 6), // "connId"
QT_MOC_LITERAL(11, 159, 5), // "error"
QT_MOC_LITERAL(12, 165, 11), // "ReadyToQuit"
QT_MOC_LITERAL(13, 177, 6), // "source"
QT_MOC_LITERAL(14, 184, 30), // "SyncAllowedListAndRejectedList"
QT_MOC_LITERAL(15, 215, 11), // "allowedList"
QT_MOC_LITERAL(16, 227, 12), // "rejectedList"
QT_MOC_LITERAL(17, 240, 22), // "AddressIsInAllowedList"
QT_MOC_LITERAL(18, 263, 5), // "token"
QT_MOC_LITERAL(19, 269, 6), // "result"
QT_MOC_LITERAL(20, 276, 27), // "FirstTimeAddedToRejctedList"
QT_MOC_LITERAL(21, 304, 9), // "ipAddress"
QT_MOC_LITERAL(22, 314, 20), // "SendMessageToService"
QT_MOC_LITERAL(23, 335, 4), // "type"
QT_MOC_LITERAL(24, 340, 6), // "serial"
QT_MOC_LITERAL(25, 347, 7), // "payload"
QT_MOC_LITERAL(26, 355, 13), // "QuitRequested"
QT_MOC_LITERAL(27, 369, 23), // "RemoveConnectionFromMap"
QT_MOC_LITERAL(28, 393, 26), // "MakeSureConnectionMapEmpty"
QT_MOC_LITERAL(29, 420, 13), // "NewConnection"
QT_MOC_LITERAL(30, 434, 7), // "qintptr"
QT_MOC_LITERAL(31, 442, 16), // "socketDescriptor"
QT_MOC_LITERAL(32, 459, 21), // "AllowedListingEnabled"
QT_MOC_LITERAL(33, 481, 7), // "enabled"
QT_MOC_LITERAL(34, 489, 22), // "IsAddressInAllowedList"
QT_MOC_LITERAL(35, 512, 12), // "QHostAddress"
QT_MOC_LITERAL(36, 525, 11), // "hostAddress"
QT_MOC_LITERAL(37, 537, 23), // "AddAddressToAllowedList"
QT_MOC_LITERAL(38, 561, 7), // "address"
QT_MOC_LITERAL(39, 569, 28), // "RemoveAddressFromAllowedList"
QT_MOC_LITERAL(40, 598, 18), // "AddRejectedAddress"
QT_MOC_LITERAL(41, 617, 15), // "surpressWarning"
QT_MOC_LITERAL(42, 633, 21), // "RemoveRejectedAddress"
QT_MOC_LITERAL(43, 655, 16), // "AddBytesReceived"
QT_MOC_LITERAL(44, 672, 3), // "add"
QT_MOC_LITERAL(45, 676, 6), // "update"
QT_MOC_LITERAL(46, 683, 12), // "AddBytesSent"
QT_MOC_LITERAL(47, 696, 12), // "AddBytesRead"
QT_MOC_LITERAL(48, 709, 15), // "AddBytesWritten"
QT_MOC_LITERAL(49, 725, 14), // "AddOpenRequest"
QT_MOC_LITERAL(50, 740, 15), // "AddCloseRequest"
QT_MOC_LITERAL(51, 756, 9), // "AddOpened"
QT_MOC_LITERAL(52, 766, 9), // "AddClosed"
QT_MOC_LITERAL(53, 776, 14), // "AddReadRequest"
QT_MOC_LITERAL(54, 791, 15), // "AddWriteRequest"
QT_MOC_LITERAL(55, 807, 14), // "AddTellRequest"
QT_MOC_LITERAL(56, 822, 14), // "AddSeekRequest"
QT_MOC_LITERAL(57, 837, 20), // "AddIsReadOnlyRequest"
QT_MOC_LITERAL(58, 858, 21), // "AddIsDirectoryRequest"
QT_MOC_LITERAL(59, 880, 14), // "AddSizeRequest"
QT_MOC_LITERAL(60, 895, 26), // "AddModificationTimeRequest"
QT_MOC_LITERAL(61, 922, 16), // "AddExistsRequest"
QT_MOC_LITERAL(62, 939, 15), // "AddFlushRequest"
QT_MOC_LITERAL(63, 955, 20), // "AddCreatePathRequest"
QT_MOC_LITERAL(64, 976, 21), // "AddDestroyPathRequest"
QT_MOC_LITERAL(65, 998, 16), // "AddRemoveRequest"
QT_MOC_LITERAL(66, 1015, 14), // "AddCopyRequest"
QT_MOC_LITERAL(67, 1030, 16), // "AddRenameRequest"
QT_MOC_LITERAL(68, 1047, 23), // "AddFindFileNamesRequest"
QT_MOC_LITERAL(69, 1071, 19), // "UpdateBytesReceived"
QT_MOC_LITERAL(70, 1091, 15), // "UpdateBytesSent"
QT_MOC_LITERAL(71, 1107, 15), // "UpdateBytesRead"
QT_MOC_LITERAL(72, 1123, 18), // "UpdateBytesWritten"
QT_MOC_LITERAL(73, 1142, 17), // "UpdateOpenRequest"
QT_MOC_LITERAL(74, 1160, 18), // "UpdateCloseRequest"
QT_MOC_LITERAL(75, 1179, 12), // "UpdateOpened"
QT_MOC_LITERAL(76, 1192, 12), // "UpdateClosed"
QT_MOC_LITERAL(77, 1205, 17), // "UpdateReadRequest"
QT_MOC_LITERAL(78, 1223, 18), // "UpdateWriteRequest"
QT_MOC_LITERAL(79, 1242, 17), // "UpdateTellRequest"
QT_MOC_LITERAL(80, 1260, 17), // "UpdateSeekRequest"
QT_MOC_LITERAL(81, 1278, 23), // "UpdateIsReadOnlyRequest"
QT_MOC_LITERAL(82, 1302, 24), // "UpdateIsDirectoryRequest"
QT_MOC_LITERAL(83, 1327, 17), // "UpdateSizeRequest"
QT_MOC_LITERAL(84, 1345, 29), // "UpdateModificationTimeRequest"
QT_MOC_LITERAL(85, 1375, 19), // "UpdateExistsRequest"
QT_MOC_LITERAL(86, 1395, 18), // "UpdateFlushRequest"
QT_MOC_LITERAL(87, 1414, 23), // "UpdateCreatePathRequest"
QT_MOC_LITERAL(88, 1438, 24), // "UpdateDestroyPathRequest"
QT_MOC_LITERAL(89, 1463, 19), // "UpdateRemoveRequest"
QT_MOC_LITERAL(90, 1483, 17), // "UpdateCopyRequest"
QT_MOC_LITERAL(91, 1501, 19), // "UpdateRenameRequest"
QT_MOC_LITERAL(92, 1521, 26), // "UpdateFindFileNamesRequest"
QT_MOC_LITERAL(93, 1548, 23), // "UpdateConnectionMetrics"
QT_MOC_LITERAL(94, 1572, 15), // "OnStatusChanged"
QT_MOC_LITERAL(95, 1588, 30), // "UpdateAllowedListFromBootStrap"
QT_MOC_LITERAL(96, 1619, 8), // "getCount"
QT_MOC_LITERAL(97, 1628, 13), // "getConnection"
QT_MOC_LITERAL(98, 1642, 16), // "getConnectionMap"
QT_MOC_LITERAL(99, 1659, 13), // "addConnection"
QT_MOC_LITERAL(100, 1673, 17), // "addUserConnection"
QT_MOC_LITERAL(101, 1691, 16) // "removeConnection"

    },
    "ConnectionManager\0connectionAdded\0\0"
    "connectionId\0Connection*\0connection\0"
    "beforeConnectionRemoved\0ConnectionDisconnected\0"
    "ConnectionRemoved\0ConnectionError\0"
    "connId\0error\0ReadyToQuit\0source\0"
    "SyncAllowedListAndRejectedList\0"
    "allowedList\0rejectedList\0"
    "AddressIsInAllowedList\0token\0result\0"
    "FirstTimeAddedToRejctedList\0ipAddress\0"
    "SendMessageToService\0type\0serial\0"
    "payload\0QuitRequested\0RemoveConnectionFromMap\0"
    "MakeSureConnectionMapEmpty\0NewConnection\0"
    "qintptr\0socketDescriptor\0AllowedListingEnabled\0"
    "enabled\0IsAddressInAllowedList\0"
    "QHostAddress\0hostAddress\0"
    "AddAddressToAllowedList\0address\0"
    "RemoveAddressFromAllowedList\0"
    "AddRejectedAddress\0surpressWarning\0"
    "RemoveRejectedAddress\0AddBytesReceived\0"
    "add\0update\0AddBytesSent\0AddBytesRead\0"
    "AddBytesWritten\0AddOpenRequest\0"
    "AddCloseRequest\0AddOpened\0AddClosed\0"
    "AddReadRequest\0AddWriteRequest\0"
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
    "UpdateConnectionMetrics\0OnStatusChanged\0"
    "UpdateAllowedListFromBootStrap\0getCount\0"
    "getConnection\0getConnectionMap\0"
    "addConnection\0addUserConnection\0"
    "removeConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectionManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      79,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  409,    2, 0x06 /* Public */,
       6,    1,  414,    2, 0x06 /* Public */,
       7,    1,  417,    2, 0x06 /* Public */,
       8,    1,  420,    2, 0x06 /* Public */,
       9,    2,  423,    2, 0x06 /* Public */,
      12,    1,  428,    2, 0x06 /* Public */,
      14,    2,  431,    2, 0x06 /* Public */,
      17,    2,  436,    2, 0x06 /* Public */,
      20,    1,  441,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    4,  444,    2, 0x0a /* Public */,
      26,    0,  453,    2, 0x0a /* Public */,
      27,    1,  454,    2, 0x0a /* Public */,
      28,    0,  457,    2, 0x0a /* Public */,
      29,    1,  458,    2, 0x0a /* Public */,
      32,    1,  461,    2, 0x0a /* Public */,
      34,    2,  464,    2, 0x0a /* Public */,
      37,    1,  469,    2, 0x0a /* Public */,
      39,    1,  472,    2, 0x0a /* Public */,
      40,    2,  475,    2, 0x0a /* Public */,
      40,    1,  480,    2, 0x2a /* Public | MethodCloned */,
      42,    1,  483,    2, 0x0a /* Public */,
      43,    3,  486,    2, 0x0a /* Public */,
      46,    3,  493,    2, 0x0a /* Public */,
      47,    3,  500,    2, 0x0a /* Public */,
      48,    3,  507,    2, 0x0a /* Public */,
      49,    2,  514,    2, 0x0a /* Public */,
      50,    2,  519,    2, 0x0a /* Public */,
      51,    2,  524,    2, 0x0a /* Public */,
      52,    2,  529,    2, 0x0a /* Public */,
      53,    2,  534,    2, 0x0a /* Public */,
      54,    2,  539,    2, 0x0a /* Public */,
      55,    2,  544,    2, 0x0a /* Public */,
      56,    2,  549,    2, 0x0a /* Public */,
      57,    2,  554,    2, 0x0a /* Public */,
      58,    2,  559,    2, 0x0a /* Public */,
      59,    2,  564,    2, 0x0a /* Public */,
      60,    2,  569,    2, 0x0a /* Public */,
      61,    2,  574,    2, 0x0a /* Public */,
      62,    2,  579,    2, 0x0a /* Public */,
      63,    2,  584,    2, 0x0a /* Public */,
      64,    2,  589,    2, 0x0a /* Public */,
      65,    2,  594,    2, 0x0a /* Public */,
      66,    2,  599,    2, 0x0a /* Public */,
      67,    2,  604,    2, 0x0a /* Public */,
      68,    2,  609,    2, 0x0a /* Public */,
      69,    1,  614,    2, 0x0a /* Public */,
      70,    1,  617,    2, 0x0a /* Public */,
      71,    1,  620,    2, 0x0a /* Public */,
      72,    1,  623,    2, 0x0a /* Public */,
      73,    1,  626,    2, 0x0a /* Public */,
      74,    1,  629,    2, 0x0a /* Public */,
      75,    1,  632,    2, 0x0a /* Public */,
      76,    1,  635,    2, 0x0a /* Public */,
      77,    1,  638,    2, 0x0a /* Public */,
      78,    1,  641,    2, 0x0a /* Public */,
      79,    1,  644,    2, 0x0a /* Public */,
      80,    1,  647,    2, 0x0a /* Public */,
      81,    1,  650,    2, 0x0a /* Public */,
      82,    1,  653,    2, 0x0a /* Public */,
      83,    1,  656,    2, 0x0a /* Public */,
      84,    1,  659,    2, 0x0a /* Public */,
      85,    1,  662,    2, 0x0a /* Public */,
      86,    1,  665,    2, 0x0a /* Public */,
      87,    1,  668,    2, 0x0a /* Public */,
      88,    1,  671,    2, 0x0a /* Public */,
      89,    1,  674,    2, 0x0a /* Public */,
      90,    1,  677,    2, 0x0a /* Public */,
      91,    1,  680,    2, 0x0a /* Public */,
      92,    1,  683,    2, 0x0a /* Public */,
      93,    0,  686,    2, 0x0a /* Public */,
      94,    1,  687,    2, 0x0a /* Public */,
      95,    0,  690,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      96,    0,  691,    2, 0x02 /* Public */,
      97,    1,  692,    2, 0x02 /* Public */,
      98,    0,  695,    2, 0x02 /* Public */,
      99,    1,  696,    2, 0x02 /* Public */,
      99,    0,  699,    2, 0x22 /* Public | MethodCloned */,
     100,    0,  700,    2, 0x02 /* Public */,
     101,    1,  701,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QObjectStar,   13,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,   15,   16,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::Bool,   18,   19,
    QMetaType::Void, QMetaType::QString,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   10,   23,   24,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, 0x80000000 | 35, QMetaType::VoidStar,   36,   18,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   38,   41,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   10,   44,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   10,   44,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   10,   44,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::LongLong, QMetaType::Bool,   10,   44,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   10,   45,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int,
    0x80000000 | 4, QMetaType::UInt,    3,
    QMetaType::Void,
    QMetaType::UInt, 0x80000000 | 30,   31,
    QMetaType::UInt,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void ConnectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionAdded((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Connection*(*)>(_a[2]))); break;
        case 1: _t->beforeConnectionRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->ConnectionDisconnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->ConnectionRemoved((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->ConnectionError((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->ReadyToQuit((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->SyncAllowedListAndRejectedList((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 7: _t->AddressIsInAllowedList((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->FirstTimeAddedToRejctedList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->SendMessageToService((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 10: _t->QuitRequested(); break;
        case 11: _t->RemoveConnectionFromMap((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 12: _t->MakeSureConnectionMapEmpty(); break;
        case 13: _t->NewConnection((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 14: _t->AllowedListingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->IsAddressInAllowedList((*reinterpret_cast< QHostAddress(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 16: _t->AddAddressToAllowedList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->RemoveAddressFromAllowedList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->AddRejectedAddress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->AddRejectedAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->RemoveRejectedAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->AddBytesReceived((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->AddBytesSent((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->AddBytesRead((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->AddBytesWritten((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 25: _t->AddOpenRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->AddCloseRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->AddOpened((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->AddClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->AddReadRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->AddWriteRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->AddTellRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->AddSeekRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->AddIsReadOnlyRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->AddIsDirectoryRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->AddSizeRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->AddModificationTimeRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->AddExistsRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 38: _t->AddFlushRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->AddCreatePathRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->AddDestroyPathRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->AddRemoveRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->AddCopyRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 43: _t->AddRenameRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 44: _t->AddFindFileNamesRequest((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 45: _t->UpdateBytesReceived((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 46: _t->UpdateBytesSent((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 47: _t->UpdateBytesRead((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 48: _t->UpdateBytesWritten((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 49: _t->UpdateOpenRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 50: _t->UpdateCloseRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 51: _t->UpdateOpened((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 52: _t->UpdateClosed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 53: _t->UpdateReadRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 54: _t->UpdateWriteRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 55: _t->UpdateTellRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 56: _t->UpdateSeekRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 57: _t->UpdateIsReadOnlyRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 58: _t->UpdateIsDirectoryRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 59: _t->UpdateSizeRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 60: _t->UpdateModificationTimeRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 61: _t->UpdateExistsRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 62: _t->UpdateFlushRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 63: _t->UpdateCreatePathRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 64: _t->UpdateDestroyPathRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 65: _t->UpdateRemoveRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 66: _t->UpdateCopyRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 67: _t->UpdateRenameRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 68: _t->UpdateFindFileNamesRequest((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 69: _t->UpdateConnectionMetrics(); break;
        case 70: _t->OnStatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 71: _t->UpdateAllowedListFromBootStrap(); break;
        case 72: { int _r = _t->getCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 73: { Connection* _r = _t->getConnection((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Connection**>(_a[0]) = std::move(_r); }  break;
        case 74: _t->getConnectionMap(); break;
        case 75: { uint _r = _t->addConnection((*reinterpret_cast< qintptr(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 76: { uint _r = _t->addConnection();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 77: { uint _r = _t->addUserConnection();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 78: _t->removeConnection((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConnectionManager::*)(unsigned int , Connection * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::connectionAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::beforeConnectionRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::ConnectionDisconnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::ConnectionRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(unsigned int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::ConnectionError)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::ReadyToQuit)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(QStringList , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::SyncAllowedListAndRejectedList)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(void * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::AddressIsInAllowedList)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ConnectionManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionManager::FirstTimeAddedToRejctedList)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConnectionManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_ConnectionManager.data,
    qt_meta_data_ConnectionManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConnectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectionManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ConnectionManagerRequestBus::Handler"))
        return static_cast< ConnectionManagerRequestBus::Handler*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int ConnectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 79)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 79;
    }
    return _id;
}

// SIGNAL 0
void ConnectionManager::connectionAdded(unsigned int _t1, Connection * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectionManager::beforeConnectionRemoved(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConnectionManager::ConnectionDisconnected(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConnectionManager::ConnectionRemoved(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConnectionManager::ConnectionError(unsigned int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ConnectionManager::ReadyToQuit(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ConnectionManager::SyncAllowedListAndRejectedList(QStringList _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ConnectionManager::AddressIsInAllowedList(void * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ConnectionManager::FirstTimeAddedToRejctedList(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
