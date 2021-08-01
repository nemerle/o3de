/****************************************************************************
** Meta object code from reading C++ file 'BlendTreeRotationLimitHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/BlendTreeRotationLimitHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlendTreeRotationLimitHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__RotationLimitWdget_t {
    QByteArrayData data[6];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__RotationLimitWdget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__RotationLimitWdget_t qt_meta_stringdata_EMotionFX__RotationLimitWdget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "EMotionFX::RotationLimitWdget"
QT_MOC_LITERAL(1, 30, 11), // "DataChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "HandleMinValueChanged"
QT_MOC_LITERAL(4, 65, 5), // "value"
QT_MOC_LITERAL(5, 71, 21) // "HandleMaxValueChanged"

    },
    "EMotionFX::RotationLimitWdget\0DataChanged\0"
    "\0HandleMinValueChanged\0value\0"
    "HandleMaxValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__RotationLimitWdget[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,

       0        // eod
};

void EMotionFX::RotationLimitWdget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RotationLimitWdget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DataChanged(); break;
        case 1: _t->HandleMinValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->HandleMaxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RotationLimitWdget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RotationLimitWdget::DataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::RotationLimitWdget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__RotationLimitWdget.data,
    qt_meta_data_EMotionFX__RotationLimitWdget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::RotationLimitWdget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::RotationLimitWdget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__RotationLimitWdget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::RotationLimitWdget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EMotionFX::RotationLimitWdget::DataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitHandler_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitHandler_t qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitHandler = {
    {
QT_MOC_LITERAL(0, 0, 40) // "EMotionFX::BlendTreeRotationL..."

    },
    "EMotionFX::BlendTreeRotationLimitHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendTreeRotationLimitHandler[] = {

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

void EMotionFX::BlendTreeRotationLimitHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendTreeRotationLimitHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitHandler.data,
    qt_meta_data_EMotionFX__BlendTreeRotationLimitHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendTreeRotationLimitHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendTreeRotationLimitHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<BlendTreeRotationLimitNode::RotationLimit,RotationLimitWdget>"))
        return static_cast< AzToolsFramework::PropertyHandler<BlendTreeRotationLimitNode::RotationLimit,RotationLimitWdget>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::BlendTreeRotationLimitHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__RotationLimitContainerWdget_t {
    QByteArrayData data[1];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__RotationLimitContainerWdget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__RotationLimitContainerWdget_t qt_meta_stringdata_EMotionFX__RotationLimitContainerWdget = {
    {
QT_MOC_LITERAL(0, 0, 38) // "EMotionFX::RotationLimitConta..."

    },
    "EMotionFX::RotationLimitContainerWdget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__RotationLimitContainerWdget[] = {

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

void EMotionFX::RotationLimitContainerWdget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::RotationLimitContainerWdget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__RotationLimitContainerWdget.data,
    qt_meta_data_EMotionFX__RotationLimitContainerWdget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::RotationLimitContainerWdget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::RotationLimitContainerWdget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__RotationLimitContainerWdget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::RotationLimitContainerWdget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitContainerHandler_t {
    QByteArrayData data[1];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitContainerHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitContainerHandler_t qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitContainerHandler = {
    {
QT_MOC_LITERAL(0, 0, 49) // "EMotionFX::BlendTreeRotationL..."

    },
    "EMotionFX::BlendTreeRotationLimitContainerHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendTreeRotationLimitContainerHandler[] = {

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

void EMotionFX::BlendTreeRotationLimitContainerHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendTreeRotationLimitContainerHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitContainerHandler.data,
    qt_meta_data_EMotionFX__BlendTreeRotationLimitContainerHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendTreeRotationLimitContainerHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendTreeRotationLimitContainerHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendTreeRotationLimitContainerHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::array<BlendTreeRotationLimitNode::RotationLimit,3>,RotationLimitContainerWdget>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::array<BlendTreeRotationLimitNode::RotationLimit,3>,RotationLimitContainerWdget>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::BlendTreeRotationLimitContainerHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
