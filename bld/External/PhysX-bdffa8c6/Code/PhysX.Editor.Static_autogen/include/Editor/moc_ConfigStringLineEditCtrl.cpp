/****************************************************************************
** Meta object code from reading C++ file 'ConfigStringLineEditCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Gems/PhysX/Code/Editor/ConfigStringLineEditCtrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigStringLineEditCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhysX__ConfigStringLineEditValidator_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__ConfigStringLineEditValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__ConfigStringLineEditValidator_t qt_meta_stringdata_PhysX__ConfigStringLineEditValidator = {
    {
QT_MOC_LITERAL(0, 0, 36) // "PhysX::ConfigStringLineEditVa..."

    },
    "PhysX::ConfigStringLineEditValidator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__ConfigStringLineEditValidator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PhysX::ConfigStringLineEditValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PhysX::ConfigStringLineEditValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QValidator::staticMetaObject>(),
    qt_meta_stringdata_PhysX__ConfigStringLineEditValidator.data,
    qt_meta_data_PhysX__ConfigStringLineEditValidator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::ConfigStringLineEditValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::ConfigStringLineEditValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__ConfigStringLineEditValidator.stringdata0))
        return static_cast<void*>(this);
    return QValidator::qt_metacast(_clname);
}

int PhysX::ConfigStringLineEditValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PhysX__ConfigStringLineEditCtrl_t {
    QByteArrayData data[5];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__ConfigStringLineEditCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__ConfigStringLineEditCtrl_t qt_meta_stringdata_PhysX__ConfigStringLineEditCtrl = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PhysX::ConfigStringLineEditCtrl"
QT_MOC_LITERAL(1, 32, 11), // "OnEditStart"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 18), // "removeEditedString"
QT_MOC_LITERAL(4, 64, 9) // "OnEditEnd"

    },
    "PhysX::ConfigStringLineEditCtrl\0"
    "OnEditStart\0\0removeEditedString\0"
    "OnEditEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__ConfigStringLineEditCtrl[] = {

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
       1,    1,   29,    2, 0x09 /* Protected */,
       1,    0,   32,    2, 0x29 /* Protected | MethodCloned */,
       4,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PhysX::ConfigStringLineEditCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigStringLineEditCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnEditStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->OnEditStart(); break;
        case 2: _t->OnEditEnd(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhysX::ConfigStringLineEditCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::PropertyStringLineEditCtrl::staticMetaObject>(),
    qt_meta_stringdata_PhysX__ConfigStringLineEditCtrl.data,
    qt_meta_data_PhysX__ConfigStringLineEditCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::ConfigStringLineEditCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::ConfigStringLineEditCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__ConfigStringLineEditCtrl.stringdata0))
        return static_cast<void*>(this);
    return AzToolsFramework::PropertyStringLineEditCtrl::qt_metacast(_clname);
}

int PhysX::ConfigStringLineEditCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::PropertyStringLineEditCtrl::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PhysX__ConfigStringLineEditHandler_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__ConfigStringLineEditHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__ConfigStringLineEditHandler_t qt_meta_stringdata_PhysX__ConfigStringLineEditHandler = {
    {
QT_MOC_LITERAL(0, 0, 34) // "PhysX::ConfigStringLineEditHa..."

    },
    "PhysX::ConfigStringLineEditHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__ConfigStringLineEditHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PhysX::ConfigStringLineEditHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PhysX::ConfigStringLineEditHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PhysX__ConfigStringLineEditHandler.data,
    qt_meta_data_PhysX__ConfigStringLineEditHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::ConfigStringLineEditHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::ConfigStringLineEditHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__ConfigStringLineEditHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::string,ConfigStringLineEditCtrl>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::string,ConfigStringLineEditCtrl>*>(this);
    return QObject::qt_metacast(_clname);
}

int PhysX::ConfigStringLineEditHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
