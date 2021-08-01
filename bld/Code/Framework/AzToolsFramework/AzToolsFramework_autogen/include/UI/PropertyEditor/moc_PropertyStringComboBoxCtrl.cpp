/****************************************************************************
** Meta object code from reading C++ file 'PropertyStringComboBoxCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyStringComboBoxCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyStringComboBoxCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyStringComboBoxCtrl_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyStringComboBoxCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyStringComboBoxCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyStringComboBoxCtrl = {
    {
QT_MOC_LITERAL(0, 0, 44), // "AzToolsFramework::PropertyStr..."
QT_MOC_LITERAL(1, 45, 12), // "valueChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 13), // "AZStd::string"
QT_MOC_LITERAL(4, 73, 8), // "newValue"
QT_MOC_LITERAL(5, 82, 8), // "setValue"
QT_MOC_LITERAL(6, 91, 3), // "str"
QT_MOC_LITERAL(7, 95, 26), // "onChildComboBoxValueChange"
QT_MOC_LITERAL(8, 122, 13) // "comboBoxIndex"

    },
    "AzToolsFramework::PropertyStringComboBoxCtrl\0"
    "valueChanged\0\0AZStd::string\0newValue\0"
    "setValue\0str\0onChildComboBoxValueChange\0"
    "comboBoxIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyStringComboBoxCtrl[] = {

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

void AzToolsFramework::PropertyStringComboBoxCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyStringComboBoxCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 2: _t->onChildComboBoxValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyStringComboBoxCtrl::*)(const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyStringComboBoxCtrl::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyStringComboBoxCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyStringComboBoxCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyStringComboBoxCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyStringComboBoxCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyStringComboBoxCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyStringComboBoxCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyStringComboBoxCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AzToolsFramework::PropertyStringComboBoxCtrl::valueChanged(const AZStd::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzToolsFramework__StringEnumPropertyComboBoxHandler_t {
    QByteArrayData data[1];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__StringEnumPropertyComboBoxHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__StringEnumPropertyComboBoxHandler_t qt_meta_stringdata_AzToolsFramework__StringEnumPropertyComboBoxHandler = {
    {
QT_MOC_LITERAL(0, 0, 51) // "AzToolsFramework::StringEnumP..."

    },
    "AzToolsFramework::StringEnumPropertyComboBoxHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__StringEnumPropertyComboBoxHandler[] = {

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

void AzToolsFramework::StringEnumPropertyComboBoxHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::StringEnumPropertyComboBoxHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__StringEnumPropertyComboBoxHandler.data,
    qt_meta_data_AzToolsFramework__StringEnumPropertyComboBoxHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::StringEnumPropertyComboBoxHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::StringEnumPropertyComboBoxHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__StringEnumPropertyComboBoxHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyComboBoxHandlerCommon<AZStd::string>"))
        return static_cast< PropertyComboBoxHandlerCommon<AZStd::string>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::StringEnumPropertyComboBoxHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
