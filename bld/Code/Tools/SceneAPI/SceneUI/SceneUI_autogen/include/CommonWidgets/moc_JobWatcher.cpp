/****************************************************************************
** Meta object code from reading C++ file 'JobWatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/SceneAPI/SceneUI/CommonWidgets/JobWatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JobWatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AZ__SceneAPI__SceneUI__JobWatcher_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AZ__SceneAPI__SceneUI__JobWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AZ__SceneAPI__SceneUI__JobWatcher_t qt_meta_stringdata_AZ__SceneAPI__SceneUI__JobWatcher = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AZ::SceneAPI::SceneUI::JobWat..."
QT_MOC_LITERAL(1, 34, 14), // "JobQueryFailed"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "const char*"
QT_MOC_LITERAL(4, 62, 7), // "message"
QT_MOC_LITERAL(5, 70, 21), // "JobProcessingComplete"
QT_MOC_LITERAL(6, 92, 13), // "AZStd::string"
QT_MOC_LITERAL(7, 106, 8), // "platform"
QT_MOC_LITERAL(8, 115, 3), // "u64"
QT_MOC_LITERAL(9, 119, 5), // "jobId"
QT_MOC_LITERAL(10, 125, 7), // "success"
QT_MOC_LITERAL(11, 133, 7), // "fullLog"
QT_MOC_LITERAL(12, 141, 15), // "AllJobsComplete"
QT_MOC_LITERAL(13, 157, 11) // "OnQueryJobs"

    },
    "AZ::SceneAPI::SceneUI::JobWatcher\0"
    "JobQueryFailed\0\0const char*\0message\0"
    "JobProcessingComplete\0AZStd::string\0"
    "platform\0u64\0jobId\0success\0fullLog\0"
    "AllJobsComplete\0OnQueryJobs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AZ__SceneAPI__SceneUI__JobWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    4,   37,    2, 0x06 /* Public */,
      12,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Bool, 0x80000000 | 6,    7,    9,   10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AZ::SceneAPI::SceneUI::JobWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JobWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->JobQueryFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 1: _t->JobProcessingComplete((*reinterpret_cast< const AZStd::string(*)>(_a[1])),(*reinterpret_cast< u64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const AZStd::string(*)>(_a[4]))); break;
        case 2: _t->AllJobsComplete(); break;
        case 3: _t->OnQueryJobs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JobWatcher::*)(const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobWatcher::JobQueryFailed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JobWatcher::*)(const AZStd::string & , u64 , bool , const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobWatcher::JobProcessingComplete)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (JobWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JobWatcher::AllJobsComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AZ::SceneAPI::SceneUI::JobWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AZ__SceneAPI__SceneUI__JobWatcher.data,
    qt_meta_data_AZ__SceneAPI__SceneUI__JobWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AZ::SceneAPI::SceneUI::JobWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AZ::SceneAPI::SceneUI::JobWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AZ__SceneAPI__SceneUI__JobWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AZ::SceneAPI::SceneUI::JobWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AZ::SceneAPI::SceneUI::JobWatcher::JobQueryFailed(const char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AZ::SceneAPI::SceneUI::JobWatcher::JobProcessingComplete(const AZStd::string & _t1, u64 _t2, bool _t3, const AZStd::string & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AZ::SceneAPI::SceneUI::JobWatcher::AllJobsComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
