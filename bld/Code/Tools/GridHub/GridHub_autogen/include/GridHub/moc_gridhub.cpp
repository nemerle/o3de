/****************************************************************************
** Meta object code from reading C++ file 'gridhub.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Tools/GridHub/GridHub/gridhub.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gridhub.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GridHub_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GridHub_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GridHub_t qt_meta_stringdata_GridHub = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GridHub"
QT_MOC_LITERAL(1, 8, 18), // "OnStartStopSession"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "SetSessionPort"
QT_MOC_LITERAL(4, 43, 4), // "port"
QT_MOC_LITERAL(5, 48, 15), // "SetSessionSlots"
QT_MOC_LITERAL(6, 64, 13), // "numberOfSlots"
QT_MOC_LITERAL(7, 78, 10), // "SetHubName"
QT_MOC_LITERAL(8, 89, 4), // "name"
QT_MOC_LITERAL(9, 94, 25), // "EnableDisconnectDetection"
QT_MOC_LITERAL(10, 120, 5), // "state"
QT_MOC_LITERAL(11, 126, 18), // "AddToStartupFolder"
QT_MOC_LITERAL(12, 145, 9), // "LogToFile"
QT_MOC_LITERAL(13, 155, 25), // "OnDisconnectTimeOutChange"
QT_MOC_LITERAL(14, 181, 5) // "value"

    },
    "GridHub\0OnStartStopSession\0\0SetSessionPort\0"
    "port\0SetSessionSlots\0numberOfSlots\0"
    "SetHubName\0name\0EnableDisconnectDetection\0"
    "state\0AddToStartupFolder\0LogToFile\0"
    "OnDisconnectTimeOutChange\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GridHub[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,
      12,    1,   70,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void GridHub::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GridHub *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnStartStopSession(); break;
        case 1: _t->SetSessionPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetSessionSlots((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetHubName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->EnableDisconnectDetection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->AddToStartupFolder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->LogToFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnDisconnectTimeOutChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GridHub::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GridHub.data,
    qt_meta_data_GridHub,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GridHub::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GridHub::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GridHub.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AZ::Debug::TraceMessageBus::Handler"))
        return static_cast< AZ::Debug::TraceMessageBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int GridHub::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
