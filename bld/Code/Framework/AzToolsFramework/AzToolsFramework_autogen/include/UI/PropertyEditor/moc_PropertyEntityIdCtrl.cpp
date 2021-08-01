/****************************************************************************
** Meta object code from reading C++ file 'PropertyEntityIdCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyEntityIdCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyEntityIdCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyEntityIdCtrl_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyEntityIdCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyEntityIdCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyEntityIdCtrl = {
    {
QT_MOC_LITERAL(0, 0, 38), // "AzToolsFramework::PropertyEnt..."
QT_MOC_LITERAL(1, 39, 17), // "OnEntityIdChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 12), // "AZ::EntityId"
QT_MOC_LITERAL(4, 71, 11), // "newEntityId"
QT_MOC_LITERAL(5, 83, 11), // "OnPickStart"
QT_MOC_LITERAL(6, 95, 14), // "OnPickComplete"
QT_MOC_LITERAL(7, 110, 18), // "SetCurrentEntityId"
QT_MOC_LITERAL(8, 129, 10), // "emitChange"
QT_MOC_LITERAL(9, 140, 13), // "AZStd::string"
QT_MOC_LITERAL(10, 154, 12), // "nameOverride"
QT_MOC_LITERAL(11, 167, 13) // "ClearEntityId"

    },
    "AzToolsFramework::PropertyEntityIdCtrl\0"
    "OnEntityIdChanged\0\0AZ::EntityId\0"
    "newEntityId\0OnPickStart\0OnPickComplete\0"
    "SetCurrentEntityId\0emitChange\0"
    "AZStd::string\0nameOverride\0ClearEntityId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyEntityIdCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   44,    2, 0x0a /* Public */,
      11,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 9,    4,    8,   10,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::PropertyEntityIdCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyEntityIdCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnEntityIdChanged((*reinterpret_cast< AZ::EntityId(*)>(_a[1]))); break;
        case 1: _t->OnPickStart(); break;
        case 2: _t->OnPickComplete(); break;
        case 3: _t->SetCurrentEntityId((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const AZStd::string(*)>(_a[3]))); break;
        case 4: _t->ClearEntityId(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyEntityIdCtrl::*)(AZ::EntityId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyEntityIdCtrl::OnEntityIdChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyEntityIdCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyEntityIdCtrl::OnPickStart)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PropertyEntityIdCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyEntityIdCtrl::OnPickComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyEntityIdCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyEntityIdCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyEntityIdCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyEntityIdCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyEntityIdCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyEntityIdCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyEntityIdCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::PropertyEntityIdCtrl::OnEntityIdChanged(AZ::EntityId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::PropertyEntityIdCtrl::OnPickStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzToolsFramework::PropertyEntityIdCtrl::OnPickComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__EntityIdPropertyHandler_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__EntityIdPropertyHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__EntityIdPropertyHandler_t qt_meta_stringdata_AzToolsFramework__EntityIdPropertyHandler = {
    {
QT_MOC_LITERAL(0, 0, 41) // "AzToolsFramework::EntityIdPro..."

    },
    "AzToolsFramework::EntityIdPropertyHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__EntityIdPropertyHandler[] = {

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

void AzToolsFramework::EntityIdPropertyHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::EntityIdPropertyHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__EntityIdPropertyHandler.data,
    qt_meta_data_AzToolsFramework__EntityIdPropertyHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::EntityIdPropertyHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::EntityIdPropertyHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__EntityIdPropertyHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyHandler<AZ::EntityId,PropertyEntityIdCtrl>"))
        return static_cast< PropertyHandler<AZ::EntityId,PropertyEntityIdCtrl>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::EntityIdPropertyHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
