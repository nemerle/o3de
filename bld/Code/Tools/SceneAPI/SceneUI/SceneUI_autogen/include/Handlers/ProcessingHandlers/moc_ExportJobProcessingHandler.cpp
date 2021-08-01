/****************************************************************************
** Meta object code from reading C++ file 'ExportJobProcessingHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/SceneAPI/SceneUI/Handlers/ProcessingHandlers/ExportJobProcessingHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExportJobProcessingHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler_t {
    QByteArrayData data[13];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler_t qt_meta_stringdata_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler = {
    {
QT_MOC_LITERAL(0, 0, 49), // "AZ::SceneAPI::SceneUI::Export..."
QT_MOC_LITERAL(1, 50, 16), // "OnJobQueryFailed"
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 11), // "const char*"
QT_MOC_LITERAL(4, 80, 7), // "message"
QT_MOC_LITERAL(5, 88, 23), // "OnJobProcessingComplete"
QT_MOC_LITERAL(6, 112, 13), // "AZStd::string"
QT_MOC_LITERAL(7, 126, 8), // "platform"
QT_MOC_LITERAL(8, 135, 7), // "AZ::u64"
QT_MOC_LITERAL(9, 143, 5), // "jobId"
QT_MOC_LITERAL(10, 149, 7), // "success"
QT_MOC_LITERAL(11, 157, 11), // "fullLogText"
QT_MOC_LITERAL(12, 169, 17) // "OnAllJobsComplete"

    },
    "AZ::SceneAPI::SceneUI::ExportJobProcessingHandler\0"
    "OnJobQueryFailed\0\0const char*\0message\0"
    "OnJobProcessingComplete\0AZStd::string\0"
    "platform\0AZ::u64\0jobId\0success\0"
    "fullLogText\0OnAllJobsComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    4,   32,    2, 0x08 /* Private */,
      12,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Bool, 0x80000000 | 6,    7,    9,   10,   11,
    QMetaType::Void,

       0        // eod
};

void AZ::SceneAPI::SceneUI::ExportJobProcessingHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExportJobProcessingHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnJobQueryFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: _t->OnJobProcessingComplete((*reinterpret_cast< const AZStd::string(*)>(_a[1])),(*reinterpret_cast< AZ::u64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const AZStd::string(*)>(_a[4]))); break;
        case 2: _t->OnAllJobsComplete(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AZ::SceneAPI::SceneUI::ExportJobProcessingHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<ProcessingHandler::staticMetaObject>(),
    qt_meta_stringdata_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler.data,
    qt_meta_data_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AZ::SceneAPI::SceneUI::ExportJobProcessingHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AZ::SceneAPI::SceneUI::ExportJobProcessingHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AZ__SceneAPI__SceneUI__ExportJobProcessingHandler.stringdata0))
        return static_cast<void*>(this);
    return ProcessingHandler::qt_metacast(_clname);
}

int AZ::SceneAPI::SceneUI::ExportJobProcessingHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProcessingHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
