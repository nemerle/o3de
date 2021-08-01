/****************************************************************************
** Meta object code from reading C++ file 'connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/connection/connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Connection_t {
    QByteArrayData data[115];
    char stringdata0[1923];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connection_t qt_meta_stringdata_Connection = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Connection"
QT_MOC_LITERAL(1, 11, 17), // "IdentifierChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "IpAddressChanged"
QT_MOC_LITERAL(4, 47, 11), // "PortChanged"
QT_MOC_LITERAL(5, 59, 13), // "StatusChanged"
QT_MOC_LITERAL(6, 73, 6), // "connId"
QT_MOC_LITERAL(7, 80, 20), // "AssetPlatformChanged"
QT_MOC_LITERAL(8, 101, 18), // "AutoConnectChanged"
QT_MOC_LITERAL(9, 120, 18), // "DisplayNameChanged"
QT_MOC_LITERAL(10, 139, 14), // "ElapsedChanged"
QT_MOC_LITERAL(11, 154, 25), // "NormalConnectionRequested"
QT_MOC_LITERAL(12, 180, 9), // "IpAddress"
QT_MOC_LITERAL(13, 190, 4), // "Port"
QT_MOC_LITERAL(14, 195, 15), // "connectionEnded"
QT_MOC_LITERAL(15, 211, 19), // "TerminateConnection"
QT_MOC_LITERAL(16, 231, 11), // "SendMessage"
QT_MOC_LITERAL(17, 243, 4), // "type"
QT_MOC_LITERAL(18, 248, 6), // "serial"
QT_MOC_LITERAL(19, 255, 7), // "payload"
QT_MOC_LITERAL(20, 263, 14), // "DeliverMessage"
QT_MOC_LITERAL(21, 278, 19), // "ConnectionDestroyed"
QT_MOC_LITERAL(22, 298, 20), // "DisconnectConnection"
QT_MOC_LITERAL(23, 319, 29), // "AddGameMessageToOutgoingQueue"
QT_MOC_LITERAL(24, 349, 5), // "Error"
QT_MOC_LITERAL(25, 355, 11), // "errorString"
QT_MOC_LITERAL(26, 367, 22), // "IsAddressInAllowedList"
QT_MOC_LITERAL(27, 390, 12), // "QHostAddress"
QT_MOC_LITERAL(28, 403, 11), // "hostAddress"
QT_MOC_LITERAL(29, 415, 5), // "token"
QT_MOC_LITERAL(30, 421, 22), // "AddressIsInAllowedList"
QT_MOC_LITERAL(31, 444, 6), // "result"
QT_MOC_LITERAL(32, 451, 22), // "NumOpenRequestsChanged"
QT_MOC_LITERAL(33, 474, 23), // "NumCloseRequestsChanged"
QT_MOC_LITERAL(34, 498, 16), // "NumOpenedChanged"
QT_MOC_LITERAL(35, 515, 16), // "NumClosedChanged"
QT_MOC_LITERAL(36, 532, 22), // "NumReadRequestsChanged"
QT_MOC_LITERAL(37, 555, 23), // "NumWriteRequestsChanged"
QT_MOC_LITERAL(38, 579, 22), // "NumSeekRequestsChanged"
QT_MOC_LITERAL(39, 602, 22), // "NumTellRequestsChanged"
QT_MOC_LITERAL(40, 625, 21), // "NumEofRequestsChanged"
QT_MOC_LITERAL(41, 647, 28), // "NumIsReadOnlyRequestsChanged"
QT_MOC_LITERAL(42, 676, 29), // "NumIsDirectoryRequestsChanged"
QT_MOC_LITERAL(43, 706, 22), // "NumSizeRequestsChanged"
QT_MOC_LITERAL(44, 729, 34), // "NumModificationTimeRequestsCh..."
QT_MOC_LITERAL(45, 764, 24), // "NumExistsRequestsChanged"
QT_MOC_LITERAL(46, 789, 23), // "NumFlushRequestsChanged"
QT_MOC_LITERAL(47, 813, 28), // "NumCreatePathRequestsChanged"
QT_MOC_LITERAL(48, 842, 29), // "NumDestroyPathRequestsChanged"
QT_MOC_LITERAL(49, 872, 24), // "NumRemoveRequestsChanged"
QT_MOC_LITERAL(50, 897, 22), // "NumCopyRequestsChanged"
QT_MOC_LITERAL(51, 920, 24), // "NumRenameRequestsChanged"
QT_MOC_LITERAL(52, 945, 31), // "NumFindFileNamesRequestsChanged"
QT_MOC_LITERAL(53, 977, 16), // "BytesReadChanged"
QT_MOC_LITERAL(54, 994, 19), // "BytesWrittenChanged"
QT_MOC_LITERAL(55, 1014, 16), // "BytesSentChanged"
QT_MOC_LITERAL(56, 1031, 20), // "BytesReceivedChanged"
QT_MOC_LITERAL(57, 1052, 19), // "NumOpenFilesChanged"
QT_MOC_LITERAL(58, 1072, 13), // "SetIdentifier"
QT_MOC_LITERAL(59, 1086, 10), // "Identifier"
QT_MOC_LITERAL(60, 1097, 12), // "SetIpAddress"
QT_MOC_LITERAL(61, 1110, 7), // "SetPort"
QT_MOC_LITERAL(62, 1118, 9), // "SetStatus"
QT_MOC_LITERAL(63, 1128, 16), // "ConnectionStatus"
QT_MOC_LITERAL(64, 1145, 6), // "Status"
QT_MOC_LITERAL(65, 1152, 17), // "SetAssetPlatforms"
QT_MOC_LITERAL(66, 1170, 13), // "assetPlatform"
QT_MOC_LITERAL(67, 1184, 23), // "SetAssetPlatformsString"
QT_MOC_LITERAL(68, 1208, 14), // "assetPlatforms"
QT_MOC_LITERAL(69, 1223, 14), // "SetAutoConnect"
QT_MOC_LITERAL(70, 1238, 11), // "AutoConnect"
QT_MOC_LITERAL(71, 1250, 22), // "OnConnectionDisconnect"
QT_MOC_LITERAL(72, 1273, 23), // "OnConnectionEstablished"
QT_MOC_LITERAL(73, 1297, 9), // "ipAddress"
QT_MOC_LITERAL(74, 1307, 4), // "port"
QT_MOC_LITERAL(75, 1312, 14), // "ReceiveMessage"
QT_MOC_LITERAL(76, 1327, 12), // "ErrorMessage"
QT_MOC_LITERAL(77, 1340, 16), // "negotiateFailure"
QT_MOC_LITERAL(78, 1357, 13), // "UpdateElapsed"
QT_MOC_LITERAL(79, 1371, 7), // "Connect"
QT_MOC_LITERAL(80, 1379, 10), // "identifier"
QT_MOC_LITERAL(81, 1390, 6), // "status"
QT_MOC_LITERAL(82, 1397, 20), // "assetPlatformsString"
QT_MOC_LITERAL(83, 1418, 11), // "autoConnect"
QT_MOC_LITERAL(84, 1430, 11), // "displayName"
QT_MOC_LITERAL(85, 1442, 7), // "elapsed"
QT_MOC_LITERAL(86, 1450, 15), // "numOpenRequests"
QT_MOC_LITERAL(87, 1466, 16), // "numCloseRequests"
QT_MOC_LITERAL(88, 1483, 9), // "numOpened"
QT_MOC_LITERAL(89, 1493, 9), // "numClosed"
QT_MOC_LITERAL(90, 1503, 15), // "numReadRequests"
QT_MOC_LITERAL(91, 1519, 16), // "numWriteRequests"
QT_MOC_LITERAL(92, 1536, 15), // "numSeekRequests"
QT_MOC_LITERAL(93, 1552, 15), // "numTellRequests"
QT_MOC_LITERAL(94, 1568, 14), // "numEofRequests"
QT_MOC_LITERAL(95, 1583, 21), // "numIsReadOnlyRequests"
QT_MOC_LITERAL(96, 1605, 22), // "numIsDirectoryRequests"
QT_MOC_LITERAL(97, 1628, 15), // "numSizeRequests"
QT_MOC_LITERAL(98, 1644, 27), // "numModificationTimeRequests"
QT_MOC_LITERAL(99, 1672, 17), // "numExistsRequests"
QT_MOC_LITERAL(100, 1690, 16), // "numFlushRequests"
QT_MOC_LITERAL(101, 1707, 21), // "numCreatePathRequests"
QT_MOC_LITERAL(102, 1729, 22), // "numDestroyPathRequests"
QT_MOC_LITERAL(103, 1752, 17), // "numRemoveRequests"
QT_MOC_LITERAL(104, 1770, 15), // "numCopyRequests"
QT_MOC_LITERAL(105, 1786, 17), // "numRenameRequests"
QT_MOC_LITERAL(106, 1804, 24), // "numFindFileNamesRequests"
QT_MOC_LITERAL(107, 1829, 9), // "bytesRead"
QT_MOC_LITERAL(108, 1839, 12), // "bytesWritten"
QT_MOC_LITERAL(109, 1852, 9), // "bytesSent"
QT_MOC_LITERAL(110, 1862, 13), // "bytesReceived"
QT_MOC_LITERAL(111, 1876, 12), // "numOpenFiles"
QT_MOC_LITERAL(112, 1889, 12), // "Disconnected"
QT_MOC_LITERAL(113, 1902, 9), // "Connected"
QT_MOC_LITERAL(114, 1912, 10) // "Connecting"

    },
    "Connection\0IdentifierChanged\0\0"
    "IpAddressChanged\0PortChanged\0StatusChanged\0"
    "connId\0AssetPlatformChanged\0"
    "AutoConnectChanged\0DisplayNameChanged\0"
    "ElapsedChanged\0NormalConnectionRequested\0"
    "IpAddress\0Port\0connectionEnded\0"
    "TerminateConnection\0SendMessage\0type\0"
    "serial\0payload\0DeliverMessage\0"
    "ConnectionDestroyed\0DisconnectConnection\0"
    "AddGameMessageToOutgoingQueue\0Error\0"
    "errorString\0IsAddressInAllowedList\0"
    "QHostAddress\0hostAddress\0token\0"
    "AddressIsInAllowedList\0result\0"
    "NumOpenRequestsChanged\0NumCloseRequestsChanged\0"
    "NumOpenedChanged\0NumClosedChanged\0"
    "NumReadRequestsChanged\0NumWriteRequestsChanged\0"
    "NumSeekRequestsChanged\0NumTellRequestsChanged\0"
    "NumEofRequestsChanged\0"
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
    "NumOpenFilesChanged\0SetIdentifier\0"
    "Identifier\0SetIpAddress\0SetPort\0"
    "SetStatus\0ConnectionStatus\0Status\0"
    "SetAssetPlatforms\0assetPlatform\0"
    "SetAssetPlatformsString\0assetPlatforms\0"
    "SetAutoConnect\0AutoConnect\0"
    "OnConnectionDisconnect\0OnConnectionEstablished\0"
    "ipAddress\0port\0ReceiveMessage\0"
    "ErrorMessage\0negotiateFailure\0"
    "UpdateElapsed\0Connect\0identifier\0"
    "status\0assetPlatformsString\0autoConnect\0"
    "displayName\0elapsed\0numOpenRequests\0"
    "numCloseRequests\0numOpened\0numClosed\0"
    "numReadRequests\0numWriteRequests\0"
    "numSeekRequests\0numTellRequests\0"
    "numEofRequests\0numIsReadOnlyRequests\0"
    "numIsDirectoryRequests\0numSizeRequests\0"
    "numModificationTimeRequests\0"
    "numExistsRequests\0numFlushRequests\0"
    "numCreatePathRequests\0numDestroyPathRequests\0"
    "numRemoveRequests\0numCopyRequests\0"
    "numRenameRequests\0numFindFileNamesRequests\0"
    "bytesRead\0bytesWritten\0bytesSent\0"
    "bytesReceived\0numOpenFiles\0Disconnected\0"
    "Connected\0Connecting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
      35,  424, // properties
       1,  564, // enums/sets
       0,    0, // constructors
       0,       // flags
      45,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  304,    2, 0x06 /* Public */,
       3,    0,  305,    2, 0x06 /* Public */,
       4,    0,  306,    2, 0x06 /* Public */,
       5,    1,  307,    2, 0x06 /* Public */,
       7,    0,  310,    2, 0x06 /* Public */,
       8,    0,  311,    2, 0x06 /* Public */,
       9,    0,  312,    2, 0x06 /* Public */,
      10,    0,  313,    2, 0x06 /* Public */,
      11,    2,  314,    2, 0x06 /* Public */,
      14,    0,  319,    2, 0x06 /* Public */,
      15,    0,  320,    2, 0x06 /* Public */,
      16,    3,  321,    2, 0x06 /* Public */,
      20,    4,  328,    2, 0x06 /* Public */,
      21,    1,  337,    2, 0x06 /* Public */,
      22,    1,  340,    2, 0x06 /* Public */,
      23,    0,  343,    2, 0x06 /* Public */,
      24,    2,  344,    2, 0x06 /* Public */,
      26,    2,  349,    2, 0x06 /* Public */,
      30,    2,  354,    2, 0x06 /* Public */,
      32,    0,  359,    2, 0x06 /* Public */,
      33,    0,  360,    2, 0x06 /* Public */,
      34,    0,  361,    2, 0x06 /* Public */,
      35,    0,  362,    2, 0x06 /* Public */,
      36,    0,  363,    2, 0x06 /* Public */,
      37,    0,  364,    2, 0x06 /* Public */,
      38,    0,  365,    2, 0x06 /* Public */,
      39,    0,  366,    2, 0x06 /* Public */,
      40,    0,  367,    2, 0x06 /* Public */,
      41,    0,  368,    2, 0x06 /* Public */,
      42,    0,  369,    2, 0x06 /* Public */,
      43,    0,  370,    2, 0x06 /* Public */,
      44,    0,  371,    2, 0x06 /* Public */,
      45,    0,  372,    2, 0x06 /* Public */,
      46,    0,  373,    2, 0x06 /* Public */,
      47,    0,  374,    2, 0x06 /* Public */,
      48,    0,  375,    2, 0x06 /* Public */,
      49,    0,  376,    2, 0x06 /* Public */,
      50,    0,  377,    2, 0x06 /* Public */,
      51,    0,  378,    2, 0x06 /* Public */,
      52,    0,  379,    2, 0x06 /* Public */,
      53,    0,  380,    2, 0x06 /* Public */,
      54,    0,  381,    2, 0x06 /* Public */,
      55,    0,  382,    2, 0x06 /* Public */,
      56,    0,  383,    2, 0x06 /* Public */,
      57,    0,  384,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      58,    1,  385,    2, 0x0a /* Public */,
      60,    1,  388,    2, 0x0a /* Public */,
      61,    1,  391,    2, 0x0a /* Public */,
      62,    1,  394,    2, 0x0a /* Public */,
      65,    1,  397,    2, 0x0a /* Public */,
      67,    1,  400,    2, 0x0a /* Public */,
      69,    1,  403,    2, 0x0a /* Public */,
      71,    0,  406,    2, 0x0a /* Public */,
      72,    2,  407,    2, 0x0a /* Public */,
      75,    3,  412,    2, 0x0a /* Public */,
      76,    1,  419,    2, 0x0a /* Public */,
      78,    0,  422,    2, 0x0a /* Public */,
      79,    0,  423,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   17,   18,   19,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,    6,   17,   18,   19,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    6,   25,
    QMetaType::Void, 0x80000000 | 27, QMetaType::VoidStar,   28,   29,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::Bool,   29,   31,
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

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void, QMetaType::QStringList,   66,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,   73,   74,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,   17,   18,   19,
    QMetaType::Void, QMetaType::QString,   77,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      80, QMetaType::QString, 0x00495003,
      73, QMetaType::QString, 0x00495003,
      74, QMetaType::Int, 0x00495003,
      81, 0x80000000 | 63, 0x00495009,
      66, QMetaType::QStringList, 0x00495003,
      82, QMetaType::QString, 0x00095003,
      83, QMetaType::Bool, 0x00495003,
      84, QMetaType::QString, 0x00495001,
      85, QMetaType::QString, 0x00495001,
      86, QMetaType::LongLong, 0x00495003,
      87, QMetaType::LongLong, 0x00495003,
      88, QMetaType::LongLong, 0x00495003,
      89, QMetaType::LongLong, 0x00495003,
      90, QMetaType::LongLong, 0x00495003,
      91, QMetaType::LongLong, 0x00495003,
      92, QMetaType::LongLong, 0x00495003,
      93, QMetaType::LongLong, 0x00495003,
      94, QMetaType::LongLong, 0x00495003,
      95, QMetaType::LongLong, 0x00495003,
      96, QMetaType::LongLong, 0x00495003,
      97, QMetaType::LongLong, 0x00495003,
      98, QMetaType::LongLong, 0x00495003,
      99, QMetaType::LongLong, 0x00495003,
     100, QMetaType::LongLong, 0x00495003,
     101, QMetaType::LongLong, 0x00495003,
     102, QMetaType::LongLong, 0x00495003,
     103, QMetaType::LongLong, 0x00495003,
     104, QMetaType::LongLong, 0x00495003,
     105, QMetaType::LongLong, 0x00495003,
     106, QMetaType::LongLong, 0x00495003,
     107, QMetaType::LongLong, 0x00495003,
     108, QMetaType::LongLong, 0x00495003,
     109, QMetaType::LongLong, 0x00495003,
     110, QMetaType::LongLong, 0x00495003,
     111, QMetaType::LongLong, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       0,
       5,
       6,
       7,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      41,
      42,
      43,
      44,

 // enums: name, alias, flags, count, data
      63,   63, 0x0,    3,  569,

 // enum data: key, value
     112, uint(Connection::Disconnected),
     113, uint(Connection::Connected),
     114, uint(Connection::Connecting),

       0        // eod
};

void Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->IdentifierChanged(); break;
        case 1: _t->IpAddressChanged(); break;
        case 2: _t->PortChanged(); break;
        case 3: _t->StatusChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->AssetPlatformChanged(); break;
        case 5: _t->AutoConnectChanged(); break;
        case 6: _t->DisplayNameChanged(); break;
        case 7: _t->ElapsedChanged(); break;
        case 8: _t->NormalConnectionRequested((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 9: _t->connectionEnded(); break;
        case 10: _t->TerminateConnection(); break;
        case 11: _t->SendMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 12: _t->DeliverMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 13: _t->ConnectionDestroyed((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->DisconnectConnection((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 15: _t->AddGameMessageToOutgoingQueue(); break;
        case 16: _t->Error((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 17: _t->IsAddressInAllowedList((*reinterpret_cast< QHostAddress(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 18: _t->AddressIsInAllowedList((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->NumOpenRequestsChanged(); break;
        case 20: _t->NumCloseRequestsChanged(); break;
        case 21: _t->NumOpenedChanged(); break;
        case 22: _t->NumClosedChanged(); break;
        case 23: _t->NumReadRequestsChanged(); break;
        case 24: _t->NumWriteRequestsChanged(); break;
        case 25: _t->NumSeekRequestsChanged(); break;
        case 26: _t->NumTellRequestsChanged(); break;
        case 27: _t->NumEofRequestsChanged(); break;
        case 28: _t->NumIsReadOnlyRequestsChanged(); break;
        case 29: _t->NumIsDirectoryRequestsChanged(); break;
        case 30: _t->NumSizeRequestsChanged(); break;
        case 31: _t->NumModificationTimeRequestsChanged(); break;
        case 32: _t->NumExistsRequestsChanged(); break;
        case 33: _t->NumFlushRequestsChanged(); break;
        case 34: _t->NumCreatePathRequestsChanged(); break;
        case 35: _t->NumDestroyPathRequestsChanged(); break;
        case 36: _t->NumRemoveRequestsChanged(); break;
        case 37: _t->NumCopyRequestsChanged(); break;
        case 38: _t->NumRenameRequestsChanged(); break;
        case 39: _t->NumFindFileNamesRequestsChanged(); break;
        case 40: _t->BytesReadChanged(); break;
        case 41: _t->BytesWrittenChanged(); break;
        case 42: _t->BytesSentChanged(); break;
        case 43: _t->BytesReceivedChanged(); break;
        case 44: _t->NumOpenFilesChanged(); break;
        case 45: _t->SetIdentifier((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->SetIpAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->SetPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->SetStatus((*reinterpret_cast< ConnectionStatus(*)>(_a[1]))); break;
        case 49: _t->SetAssetPlatforms((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 50: _t->SetAssetPlatformsString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->SetAutoConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->OnConnectionDisconnect(); break;
        case 53: _t->OnConnectionEstablished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 54: _t->ReceiveMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 55: _t->ErrorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 56: _t->UpdateElapsed(); break;
        case 57: _t->Connect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::IdentifierChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::IpAddressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::PortChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Connection::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::StatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::AssetPlatformChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::AutoConnectChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::DisplayNameChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::ElapsedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Connection::*)(QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NormalConnectionRequested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::connectionEnded)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::TerminateConnection)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Connection::*)(unsigned int , unsigned int , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::SendMessage)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Connection::*)(unsigned int , unsigned int , unsigned int , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::DeliverMessage)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Connection::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::ConnectionDestroyed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Connection::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::DisconnectConnection)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::AddGameMessageToOutgoingQueue)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Connection::*)(unsigned int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::Error)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Connection::*)(QHostAddress , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::IsAddressInAllowedList)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Connection::*)(void * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::AddressIsInAllowedList)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumOpenRequestsChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumCloseRequestsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumOpenedChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumClosedChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumReadRequestsChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumWriteRequestsChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumSeekRequestsChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumTellRequestsChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumEofRequestsChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumIsReadOnlyRequestsChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumIsDirectoryRequestsChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumSizeRequestsChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumModificationTimeRequestsChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumExistsRequestsChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumFlushRequestsChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumCreatePathRequestsChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumDestroyPathRequestsChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumRemoveRequestsChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumCopyRequestsChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumRenameRequestsChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumFindFileNamesRequestsChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::BytesReadChanged)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::BytesWrittenChanged)) {
                *result = 41;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::BytesSentChanged)) {
                *result = 42;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::BytesReceivedChanged)) {
                *result = 43;
                return;
            }
        }
        {
            using _t = void (Connection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Connection::NumOpenFilesChanged)) {
                *result = 44;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->Identifier(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->IpAddress(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->Port(); break;
        case 3: *reinterpret_cast< ConnectionStatus*>(_v) = _t->Status(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->AssetPlatforms(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->AssetPlatformsString(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->AutoConnect(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->DisplayName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->Elapsed(); break;
        case 9: *reinterpret_cast< qint64*>(_v) = _t->m_numOpenRequests; break;
        case 10: *reinterpret_cast< qint64*>(_v) = _t->m_numCloseRequests; break;
        case 11: *reinterpret_cast< qint64*>(_v) = _t->m_numOpened; break;
        case 12: *reinterpret_cast< qint64*>(_v) = _t->m_numClosed; break;
        case 13: *reinterpret_cast< qint64*>(_v) = _t->m_numReadRequests; break;
        case 14: *reinterpret_cast< qint64*>(_v) = _t->m_numWriteRequests; break;
        case 15: *reinterpret_cast< qint64*>(_v) = _t->m_numSeekRequests; break;
        case 16: *reinterpret_cast< qint64*>(_v) = _t->m_numTellRequests; break;
        case 17: *reinterpret_cast< qint64*>(_v) = _t->m_numEofRequests; break;
        case 18: *reinterpret_cast< qint64*>(_v) = _t->m_numIsReadOnlyRequests; break;
        case 19: *reinterpret_cast< qint64*>(_v) = _t->m_numIsDirectoryRequests; break;
        case 20: *reinterpret_cast< qint64*>(_v) = _t->m_numSizeRequests; break;
        case 21: *reinterpret_cast< qint64*>(_v) = _t->m_numModificationTimeRequests; break;
        case 22: *reinterpret_cast< qint64*>(_v) = _t->m_numExistsRequests; break;
        case 23: *reinterpret_cast< qint64*>(_v) = _t->m_numFlushRequests; break;
        case 24: *reinterpret_cast< qint64*>(_v) = _t->m_numCreatePathRequests; break;
        case 25: *reinterpret_cast< qint64*>(_v) = _t->m_numDestroyPathRequests; break;
        case 26: *reinterpret_cast< qint64*>(_v) = _t->m_numRemoveRequests; break;
        case 27: *reinterpret_cast< qint64*>(_v) = _t->m_numCopyRequests; break;
        case 28: *reinterpret_cast< qint64*>(_v) = _t->m_numRenameRequests; break;
        case 29: *reinterpret_cast< qint64*>(_v) = _t->m_numFindFileNamesRequests; break;
        case 30: *reinterpret_cast< qint64*>(_v) = _t->m_bytesRead; break;
        case 31: *reinterpret_cast< qint64*>(_v) = _t->m_bytesWritten; break;
        case 32: *reinterpret_cast< qint64*>(_v) = _t->m_bytesSent; break;
        case 33: *reinterpret_cast< qint64*>(_v) = _t->m_bytesReceived; break;
        case 34: *reinterpret_cast< qint64*>(_v) = _t->m_numOpenFiles; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetIdentifier(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->SetIpAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->SetPort(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->SetAssetPlatforms(*reinterpret_cast< QStringList*>(_v)); break;
        case 5: _t->SetAssetPlatformsString(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->SetAutoConnect(*reinterpret_cast< bool*>(_v)); break;
        case 9:
            if (_t->m_numOpenRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numOpenRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumOpenRequestsChanged();
            }
            break;
        case 10:
            if (_t->m_numCloseRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numCloseRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumCloseRequestsChanged();
            }
            break;
        case 11:
            if (_t->m_numOpened != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numOpened = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumOpenedChanged();
            }
            break;
        case 12:
            if (_t->m_numClosed != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numClosed = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumClosedChanged();
            }
            break;
        case 13:
            if (_t->m_numReadRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numReadRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumReadRequestsChanged();
            }
            break;
        case 14:
            if (_t->m_numWriteRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numWriteRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumWriteRequestsChanged();
            }
            break;
        case 15:
            if (_t->m_numSeekRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numSeekRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumSeekRequestsChanged();
            }
            break;
        case 16:
            if (_t->m_numTellRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numTellRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumTellRequestsChanged();
            }
            break;
        case 17:
            if (_t->m_numEofRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numEofRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumEofRequestsChanged();
            }
            break;
        case 18:
            if (_t->m_numIsReadOnlyRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numIsReadOnlyRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumIsReadOnlyRequestsChanged();
            }
            break;
        case 19:
            if (_t->m_numIsDirectoryRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numIsDirectoryRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumIsDirectoryRequestsChanged();
            }
            break;
        case 20:
            if (_t->m_numSizeRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numSizeRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumSizeRequestsChanged();
            }
            break;
        case 21:
            if (_t->m_numModificationTimeRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numModificationTimeRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumModificationTimeRequestsChanged();
            }
            break;
        case 22:
            if (_t->m_numExistsRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numExistsRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumExistsRequestsChanged();
            }
            break;
        case 23:
            if (_t->m_numFlushRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numFlushRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumFlushRequestsChanged();
            }
            break;
        case 24:
            if (_t->m_numCreatePathRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numCreatePathRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumCreatePathRequestsChanged();
            }
            break;
        case 25:
            if (_t->m_numDestroyPathRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numDestroyPathRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumDestroyPathRequestsChanged();
            }
            break;
        case 26:
            if (_t->m_numRemoveRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numRemoveRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumRemoveRequestsChanged();
            }
            break;
        case 27:
            if (_t->m_numCopyRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numCopyRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumCopyRequestsChanged();
            }
            break;
        case 28:
            if (_t->m_numRenameRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numRenameRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumRenameRequestsChanged();
            }
            break;
        case 29:
            if (_t->m_numFindFileNamesRequests != *reinterpret_cast< qint64*>(_v)) {
                _t->m_numFindFileNamesRequests = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->NumFindFileNamesRequestsChanged();
            }
            break;
        case 30:
            if (_t->m_bytesRead != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesRead = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesReadChanged();
            }
            break;
        case 31:
            if (_t->m_bytesWritten != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesWritten = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesWrittenChanged();
            }
            break;
        case 32:
            if (_t->m_bytesSent != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesSent = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesSentChanged();
            }
            break;
        case 33:
            if (_t->m_bytesReceived != *reinterpret_cast< qint64*>(_v)) {
                _t->m_bytesReceived = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->BytesReceivedChanged();
            }
            break;
        case 34:
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

QT_INIT_METAOBJECT const QMetaObject Connection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Connection.data,
    qt_meta_data_Connection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Connection.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetProcessor::ConnectionBus::Handler"))
        return static_cast< AssetProcessor::ConnectionBus::Handler*>(this);
    return QObject::qt_metacast(_clname);
}

int Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 35;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 35;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Connection::IdentifierChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Connection::IpAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Connection::PortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Connection::StatusChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Connection::AssetPlatformChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Connection::AutoConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Connection::DisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Connection::ElapsedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Connection::NormalConnectionRequested(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Connection::connectionEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Connection::TerminateConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Connection::SendMessage(unsigned int _t1, unsigned int _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Connection::DeliverMessage(unsigned int _t1, unsigned int _t2, unsigned int _t3, QByteArray _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Connection::ConnectionDestroyed(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Connection::DisconnectConnection(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Connection::AddGameMessageToOutgoingQueue()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Connection::Error(unsigned int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Connection::IsAddressInAllowedList(QHostAddress _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Connection::AddressIsInAllowedList(void * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Connection::NumOpenRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Connection::NumCloseRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Connection::NumOpenedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Connection::NumClosedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Connection::NumReadRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Connection::NumWriteRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void Connection::NumSeekRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Connection::NumTellRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Connection::NumEofRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Connection::NumIsReadOnlyRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Connection::NumIsDirectoryRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Connection::NumSizeRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Connection::NumModificationTimeRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Connection::NumExistsRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Connection::NumFlushRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Connection::NumCreatePathRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void Connection::NumDestroyPathRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Connection::NumRemoveRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Connection::NumCopyRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void Connection::NumRenameRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void Connection::NumFindFileNamesRequestsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void Connection::BytesReadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void Connection::BytesWrittenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}

// SIGNAL 42
void Connection::BytesSentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 42, nullptr);
}

// SIGNAL 43
void Connection::BytesReceivedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 43, nullptr);
}

// SIGNAL 44
void Connection::NumOpenFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 44, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
