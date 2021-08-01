/****************************************************************************
** Meta object code from reading C++ file 'PropertyBoolRadioButtonsCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyBoolRadioButtonsCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyBoolRadioButtonsCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyBoolRadioButtonsCtrl_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyBoolRadioButtonsCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyBoolRadioButtonsCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyBoolRadioButtonsCtrl = {
    {
QT_MOC_LITERAL(0, 0, 46), // "AzToolsFramework::PropertyBoo..."
QT_MOC_LITERAL(1, 47, 12), // "valueChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 8), // "newValue"
QT_MOC_LITERAL(4, 70, 8), // "setValue"
QT_MOC_LITERAL(5, 79, 3), // "val"
QT_MOC_LITERAL(6, 83, 21), // "onRadioButtonSelected"
QT_MOC_LITERAL(7, 105, 5) // "value"

    },
    "AzToolsFramework::PropertyBoolRadioButtonsCtrl\0"
    "valueChanged\0\0newValue\0setValue\0val\0"
    "onRadioButtonSelected\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyBoolRadioButtonsCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void AzToolsFramework::PropertyBoolRadioButtonsCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyBoolRadioButtonsCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onRadioButtonSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyBoolRadioButtonsCtrl::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyBoolRadioButtonsCtrl::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyBoolRadioButtonsCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyBoolRadioButtonsCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyBoolRadioButtonsCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyBoolRadioButtonsCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyBoolRadioButtonsCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyBoolRadioButtonsCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyBoolRadioButtonsCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AzToolsFramework::PropertyBoolRadioButtonsCtrl::valueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzToolsFramework__BoolPropertyRadioButtonsHandler_t {
    QByteArrayData data[1];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__BoolPropertyRadioButtonsHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__BoolPropertyRadioButtonsHandler_t qt_meta_stringdata_AzToolsFramework__BoolPropertyRadioButtonsHandler = {
    {
QT_MOC_LITERAL(0, 0, 49) // "AzToolsFramework::BoolPropert..."

    },
    "AzToolsFramework::BoolPropertyRadioButtonsHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__BoolPropertyRadioButtonsHandler[] = {

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

void AzToolsFramework::BoolPropertyRadioButtonsHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::BoolPropertyRadioButtonsHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__BoolPropertyRadioButtonsHandler.data,
    qt_meta_data_AzToolsFramework__BoolPropertyRadioButtonsHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::BoolPropertyRadioButtonsHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::BoolPropertyRadioButtonsHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__BoolPropertyRadioButtonsHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyHandler<bool,PropertyBoolRadioButtonsCtrl>"))
        return static_cast< PropertyHandler<bool,PropertyBoolRadioButtonsCtrl>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::BoolPropertyRadioButtonsHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
