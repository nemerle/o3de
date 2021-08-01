/****************************************************************************
** Meta object code from reading C++ file 'PropertyCheckBoxCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyCheckBoxCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyCheckBoxCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyCheckBoxCtrl_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyCheckBoxCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyCheckBoxCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyCheckBoxCtrl = {
    {
QT_MOC_LITERAL(0, 0, 38), // "AzToolsFramework::PropertyChe..."
QT_MOC_LITERAL(1, 39, 12), // "valueChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 8), // "newValue"
QT_MOC_LITERAL(4, 62, 8), // "setValue"
QT_MOC_LITERAL(5, 71, 3), // "val"
QT_MOC_LITERAL(6, 75, 14), // "onStateChanged"
QT_MOC_LITERAL(7, 90, 5) // "value"

    },
    "AzToolsFramework::PropertyCheckBoxCtrl\0"
    "valueChanged\0\0newValue\0setValue\0val\0"
    "onStateChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyCheckBoxCtrl[] = {

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

void AzToolsFramework::PropertyCheckBoxCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyCheckBoxCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyCheckBoxCtrl::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyCheckBoxCtrl::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyCheckBoxCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyCheckBoxCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyCheckBoxCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyCheckBoxCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyCheckBoxCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyCheckBoxCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyCheckBoxCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AzToolsFramework::PropertyCheckBoxCtrl::valueChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzToolsFramework__CheckBoxHandlerCommon_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__CheckBoxHandlerCommon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__CheckBoxHandlerCommon_t qt_meta_stringdata_AzToolsFramework__CheckBoxHandlerCommon = {
    {
QT_MOC_LITERAL(0, 0, 39) // "AzToolsFramework::CheckBoxHan..."

    },
    "AzToolsFramework::CheckBoxHandlerCommon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__CheckBoxHandlerCommon[] = {

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

void AzToolsFramework::CheckBoxHandlerCommon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::CheckBoxHandlerCommon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__CheckBoxHandlerCommon.data,
    qt_meta_data_AzToolsFramework__CheckBoxHandlerCommon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::CheckBoxHandlerCommon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::CheckBoxHandlerCommon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__CheckBoxHandlerCommon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::CheckBoxHandlerCommon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__BoolPropertyCheckBoxHandler_t {
    QByteArrayData data[1];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__BoolPropertyCheckBoxHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__BoolPropertyCheckBoxHandler_t qt_meta_stringdata_AzToolsFramework__BoolPropertyCheckBoxHandler = {
    {
QT_MOC_LITERAL(0, 0, 45) // "AzToolsFramework::BoolPropert..."

    },
    "AzToolsFramework::BoolPropertyCheckBoxHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__BoolPropertyCheckBoxHandler[] = {

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

void AzToolsFramework::BoolPropertyCheckBoxHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::BoolPropertyCheckBoxHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<PropertyCheckBoxHandlerCommon<bool>::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__BoolPropertyCheckBoxHandler.data,
    qt_meta_data_AzToolsFramework__BoolPropertyCheckBoxHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::BoolPropertyCheckBoxHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::BoolPropertyCheckBoxHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__BoolPropertyCheckBoxHandler.stringdata0))
        return static_cast<void*>(this);
    return PropertyCheckBoxHandlerCommon<bool>::qt_metacast(_clname);
}

int AzToolsFramework::BoolPropertyCheckBoxHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyCheckBoxHandlerCommon<bool>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__CheckBoxGenericHandler_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__CheckBoxGenericHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__CheckBoxGenericHandler_t qt_meta_stringdata_AzToolsFramework__CheckBoxGenericHandler = {
    {
QT_MOC_LITERAL(0, 0, 40) // "AzToolsFramework::CheckBoxGen..."

    },
    "AzToolsFramework::CheckBoxGenericHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__CheckBoxGenericHandler[] = {

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

void AzToolsFramework::CheckBoxGenericHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::CheckBoxGenericHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<CheckBoxHandlerCommon::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__CheckBoxGenericHandler.data,
    qt_meta_data_AzToolsFramework__CheckBoxGenericHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::CheckBoxGenericHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::CheckBoxGenericHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__CheckBoxGenericHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GenericPropertyHandler<PropertyCheckBoxCtrl>"))
        return static_cast< GenericPropertyHandler<PropertyCheckBoxCtrl>*>(this);
    return CheckBoxHandlerCommon::qt_metacast(_clname);
}

int AzToolsFramework::CheckBoxGenericHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CheckBoxHandlerCommon::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
