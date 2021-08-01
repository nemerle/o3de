/****************************************************************************
** Meta object code from reading C++ file 'connectionworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/connection/connectionworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__ConnectionWorker_t {
    QByteArrayData data[38];
    char stringdata0[542];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__ConnectionWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__ConnectionWorker_t qt_meta_stringdata_AssetProcessor__ConnectionWorker = {
    {
QT_MOC_LITERAL(0, 0, 32), // "AssetProcessor::ConnectionWorker"
QT_MOC_LITERAL(1, 33, 14), // "ReceiveMessage"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "type"
QT_MOC_LITERAL(4, 54, 6), // "serial"
QT_MOC_LITERAL(5, 61, 7), // "payload"
QT_MOC_LITERAL(6, 69, 15), // "SocketIPAddress"
QT_MOC_LITERAL(7, 85, 9), // "ipAddress"
QT_MOC_LITERAL(8, 95, 10), // "SocketPort"
QT_MOC_LITERAL(9, 106, 4), // "port"
QT_MOC_LITERAL(10, 111, 10), // "Identifier"
QT_MOC_LITERAL(11, 122, 10), // "identifier"
QT_MOC_LITERAL(12, 133, 20), // "AssetPlatformsString"
QT_MOC_LITERAL(13, 154, 8), // "platform"
QT_MOC_LITERAL(14, 163, 22), // "ConnectionDisconnected"
QT_MOC_LITERAL(15, 186, 21), // "ConnectionEstablished"
QT_MOC_LITERAL(16, 208, 12), // "ErrorMessage"
QT_MOC_LITERAL(17, 221, 3), // "msg"
QT_MOC_LITERAL(18, 225, 22), // "IsAddressInAllowedList"
QT_MOC_LITERAL(19, 248, 12), // "QHostAddress"
QT_MOC_LITERAL(20, 261, 11), // "hostAddress"
QT_MOC_LITERAL(21, 273, 5), // "token"
QT_MOC_LITERAL(22, 279, 13), // "ConnectSocket"
QT_MOC_LITERAL(23, 293, 7), // "qintptr"
QT_MOC_LITERAL(24, 301, 16), // "socketDescriptor"
QT_MOC_LITERAL(25, 318, 15), // "ConnectToEngine"
QT_MOC_LITERAL(26, 334, 19), // "EngineSocketHasData"
QT_MOC_LITERAL(27, 354, 24), // "EngineSocketStateChanged"
QT_MOC_LITERAL(28, 379, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(29, 408, 11), // "socketState"
QT_MOC_LITERAL(30, 420, 11), // "SendMessage"
QT_MOC_LITERAL(31, 432, 17), // "DisconnectSockets"
QT_MOC_LITERAL(32, 450, 16), // "RequestTerminate"
QT_MOC_LITERAL(33, 467, 15), // "NegotiateDirect"
QT_MOC_LITERAL(34, 483, 8), // "initiate"
QT_MOC_LITERAL(35, 492, 22), // "AddressIsInAllowedList"
QT_MOC_LITERAL(36, 515, 6), // "result"
QT_MOC_LITERAL(37, 522, 19) // "TerminateConnection"

    },
    "AssetProcessor::ConnectionWorker\0"
    "ReceiveMessage\0\0type\0serial\0payload\0"
    "SocketIPAddress\0ipAddress\0SocketPort\0"
    "port\0Identifier\0identifier\0"
    "AssetPlatformsString\0platform\0"
    "ConnectionDisconnected\0ConnectionEstablished\0"
    "ErrorMessage\0msg\0IsAddressInAllowedList\0"
    "QHostAddress\0hostAddress\0token\0"
    "ConnectSocket\0qintptr\0socketDescriptor\0"
    "ConnectToEngine\0EngineSocketHasData\0"
    "EngineSocketStateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "SendMessage\0DisconnectSockets\0"
    "RequestTerminate\0NegotiateDirect\0"
    "initiate\0AddressIsInAllowedList\0result\0"
    "TerminateConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__ConnectionWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  109,    2, 0x06 /* Public */,
       6,    1,  116,    2, 0x06 /* Public */,
       8,    1,  119,    2, 0x06 /* Public */,
      10,    1,  122,    2, 0x06 /* Public */,
      12,    1,  125,    2, 0x06 /* Public */,
      14,    0,  128,    2, 0x06 /* Public */,
      15,    2,  129,    2, 0x06 /* Public */,
      16,    1,  134,    2, 0x06 /* Public */,
      18,    2,  137,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  142,    2, 0x0a /* Public */,
      25,    2,  145,    2, 0x0a /* Public */,
      26,    0,  150,    2, 0x0a /* Public */,
      27,    1,  151,    2, 0x0a /* Public */,
      30,    3,  154,    2, 0x0a /* Public */,
      31,    0,  161,    2, 0x0a /* Public */,
      32,    0,  162,    2, 0x0a /* Public */,
      33,    1,  163,    2, 0x0a /* Public */,
      35,    2,  166,    2, 0x0a /* Public */,
      37,    0,  171,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    7,    9,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::VoidStar,   20,   21,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    7,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::QByteArray,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::Bool,   21,   36,
    QMetaType::Void,

       0        // eod
};

void AssetProcessor::ConnectionWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectionWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReceiveMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 1: _t->SocketIPAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SocketPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->Identifier((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->AssetPlatformsString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->ConnectionDisconnected(); break;
        case 6: _t->ConnectionEstablished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 7: _t->ErrorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->IsAddressInAllowedList((*reinterpret_cast< QHostAddress(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 9: _t->ConnectSocket((*reinterpret_cast< qintptr(*)>(_a[1]))); break;
        case 10: _t->ConnectToEngine((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 11: _t->EngineSocketHasData(); break;
        case 12: _t->EngineSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 13: _t->SendMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 14: _t->DisconnectSockets(); break;
        case 15: _t->RequestTerminate(); break;
        case 16: { bool _r = _t->NegotiateDirect((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->AddressIsInAllowedList((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->TerminateConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConnectionWorker::*)(unsigned int , unsigned int , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::ReceiveMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::SocketIPAddress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::SocketPort)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::Identifier)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::AssetPlatformsString)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::ConnectionDisconnected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)(QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::ConnectionEstablished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::ErrorMessage)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ConnectionWorker::*)(QHostAddress , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectionWorker::IsAddressInAllowedList)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::ConnectionWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__ConnectionWorker.data,
    qt_meta_data_AssetProcessor__ConnectionWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::ConnectionWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::ConnectionWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__ConnectionWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetProcessor::ConnectionWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void AssetProcessor::ConnectionWorker::ReceiveMessage(unsigned int _t1, unsigned int _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetProcessor::ConnectionWorker::SocketIPAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssetProcessor::ConnectionWorker::SocketPort(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AssetProcessor::ConnectionWorker::Identifier(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AssetProcessor::ConnectionWorker::AssetPlatformsString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AssetProcessor::ConnectionWorker::ConnectionDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AssetProcessor::ConnectionWorker::ConnectionEstablished(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AssetProcessor::ConnectionWorker::ErrorMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AssetProcessor::ConnectionWorker::IsAddressInAllowedList(QHostAddress _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
