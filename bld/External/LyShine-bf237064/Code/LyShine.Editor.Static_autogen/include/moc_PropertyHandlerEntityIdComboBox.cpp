/****************************************************************************
** Meta object code from reading C++ file 'PropertyHandlerEntityIdComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/LyShine/Code/Editor/PropertyHandlerEntityIdComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyHandlerEntityIdComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyEntityIdComboBoxCtrl_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyEntityIdComboBoxCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyEntityIdComboBoxCtrl_t qt_meta_stringdata_PropertyEntityIdComboBoxCtrl = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PropertyEntityIdComboBoxCtrl"
QT_MOC_LITERAL(1, 29, 12), // "valueChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "AZ::EntityId"
QT_MOC_LITERAL(4, 56, 8), // "newValue"
QT_MOC_LITERAL(5, 65, 8), // "setValue"
QT_MOC_LITERAL(6, 74, 3), // "val"
QT_MOC_LITERAL(7, 78, 26), // "onChildComboBoxValueChange"
QT_MOC_LITERAL(8, 105, 13) // "comboBoxIndex"

    },
    "PropertyEntityIdComboBoxCtrl\0valueChanged\0"
    "\0AZ::EntityId\0newValue\0setValue\0val\0"
    "onChildComboBoxValueChange\0comboBoxIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyEntityIdComboBoxCtrl[] = {

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
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void PropertyEntityIdComboBoxCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyEntityIdComboBoxCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< AZ::EntityId(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< AZ::EntityId(*)>(_a[1]))); break;
        case 2: _t->onChildComboBoxValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyEntityIdComboBoxCtrl::*)(AZ::EntityId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyEntityIdComboBoxCtrl::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropertyEntityIdComboBoxCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PropertyEntityIdComboBoxCtrl.data,
    qt_meta_data_PropertyEntityIdComboBoxCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyEntityIdComboBoxCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyEntityIdComboBoxCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEntityIdComboBoxCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PropertyEntityIdComboBoxCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PropertyEntityIdComboBoxCtrl::valueChanged(AZ::EntityId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PropertyHandlerEntityIdComboBox_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyHandlerEntityIdComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyHandlerEntityIdComboBox_t qt_meta_stringdata_PropertyHandlerEntityIdComboBox = {
    {
QT_MOC_LITERAL(0, 0, 31) // "PropertyHandlerEntityIdComboBox"

    },
    "PropertyHandlerEntityIdComboBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyHandlerEntityIdComboBox[] = {

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

void PropertyHandlerEntityIdComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PropertyHandlerEntityIdComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PropertyHandlerEntityIdComboBox.data,
    qt_meta_data_PropertyHandlerEntityIdComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyHandlerEntityIdComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyHandlerEntityIdComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyHandlerEntityIdComboBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZ::EntityId,PropertyEntityIdComboBoxCtrl>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZ::EntityId,PropertyEntityIdComboBoxCtrl>*>(this);
    return QObject::qt_metacast(_clname);
}

int PropertyHandlerEntityIdComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
