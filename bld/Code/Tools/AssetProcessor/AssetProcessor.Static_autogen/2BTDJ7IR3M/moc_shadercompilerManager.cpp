/****************************************************************************
** Meta object code from reading C++ file 'shadercompilerManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/shadercompiler/shadercompilerManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shadercompilerManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShaderCompilerManager_t {
    QByteArrayData data[19];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShaderCompilerManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShaderCompilerManager_t qt_meta_stringdata_ShaderCompilerManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ShaderCompilerManager"
QT_MOC_LITERAL(1, 22, 16), // "sendErrorMessage"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "errorMessage"
QT_MOC_LITERAL(4, 53, 29), // "sendErrorMessageFromShaderJob"
QT_MOC_LITERAL(5, 83, 6), // "server"
QT_MOC_LITERAL(6, 90, 9), // "timestamp"
QT_MOC_LITERAL(7, 100, 7), // "payload"
QT_MOC_LITERAL(8, 108, 26), // "numberOfJobsStartedChanged"
QT_MOC_LITERAL(9, 135, 24), // "numberOfJobsEndedChanged"
QT_MOC_LITERAL(10, 160, 21), // "numberOfErrorsChanged"
QT_MOC_LITERAL(11, 182, 27), // "OnShaderCompilerJobComplete"
QT_MOC_LITERAL(12, 210, 9), // "requestId"
QT_MOC_LITERAL(13, 220, 19), // "shaderCompilerError"
QT_MOC_LITERAL(14, 240, 10), // "jobStarted"
QT_MOC_LITERAL(15, 251, 8), // "jobEnded"
QT_MOC_LITERAL(16, 260, 19), // "numberOfJobsStarted"
QT_MOC_LITERAL(17, 280, 17), // "numberOfJobsEnded"
QT_MOC_LITERAL(18, 298, 14) // "numberOfErrors"

    },
    "ShaderCompilerManager\0sendErrorMessage\0"
    "\0errorMessage\0sendErrorMessageFromShaderJob\0"
    "server\0timestamp\0payload\0"
    "numberOfJobsStartedChanged\0"
    "numberOfJobsEndedChanged\0numberOfErrorsChanged\0"
    "OnShaderCompilerJobComplete\0requestId\0"
    "shaderCompilerError\0jobStarted\0jobEnded\0"
    "numberOfJobsStarted\0numberOfJobsEnded\0"
    "numberOfErrors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShaderCompilerManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    4,   62,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,
       9,    0,   72,    2, 0x06 /* Public */,
      10,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   74,    2, 0x0a /* Public */,
      13,    4,   79,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::UInt,    7,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       2,
       3,
       4,

       0        // eod
};

void ShaderCompilerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShaderCompilerManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendErrorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendErrorMessageFromShaderJob((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->numberOfJobsStartedChanged(); break;
        case 3: _t->numberOfJobsEndedChanged(); break;
        case 4: _t->numberOfErrorsChanged(); break;
        case 5: _t->OnShaderCompilerJobComplete((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 6: _t->shaderCompilerError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->jobStarted(); break;
        case 8: _t->jobEnded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShaderCompilerManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShaderCompilerManager::sendErrorMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShaderCompilerManager::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShaderCompilerManager::sendErrorMessageFromShaderJob)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShaderCompilerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShaderCompilerManager::numberOfJobsStartedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShaderCompilerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShaderCompilerManager::numberOfJobsEndedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShaderCompilerManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShaderCompilerManager::numberOfErrorsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShaderCompilerManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->numberOfJobsStarted(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->numberOfJobsEnded(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->numberOfErrors(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ShaderCompilerManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ShaderCompilerManager.data,
    qt_meta_data_ShaderCompilerManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShaderCompilerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShaderCompilerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShaderCompilerManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShaderCompilerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ShaderCompilerManager::sendErrorMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ShaderCompilerManager::sendErrorMessageFromShaderJob(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ShaderCompilerManager::numberOfJobsStartedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ShaderCompilerManager::numberOfJobsEndedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ShaderCompilerManager::numberOfErrorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
