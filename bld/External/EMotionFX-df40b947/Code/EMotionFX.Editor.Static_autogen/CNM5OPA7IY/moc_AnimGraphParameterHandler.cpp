/****************************************************************************
** Meta object code from reading C++ file 'AnimGraphParameterHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/AnimGraphParameterHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimGraphParameterHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__AnimGraphParameterPicker_t {
    QByteArrayData data[8];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphParameterPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphParameterPicker_t qt_meta_stringdata_EMotionFX__AnimGraphParameterPicker = {
    {
QT_MOC_LITERAL(0, 0, 35), // "EMotionFX::AnimGraphParameter..."
QT_MOC_LITERAL(1, 36, 17), // "ParametersChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 28), // "AZStd::vector<AZStd::string>"
QT_MOC_LITERAL(4, 84, 13), // "newParameters"
QT_MOC_LITERAL(5, 98, 13), // "OnPickClicked"
QT_MOC_LITERAL(6, 112, 14), // "OnResetClicked"
QT_MOC_LITERAL(7, 127, 15) // "OnShrinkClicked"

    },
    "EMotionFX::AnimGraphParameterPicker\0"
    "ParametersChanged\0\0AZStd::vector<AZStd::string>\0"
    "newParameters\0OnPickClicked\0OnResetClicked\0"
    "OnShrinkClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphParameterPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::AnimGraphParameterPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnimGraphParameterPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ParametersChanged((*reinterpret_cast< const AZStd::vector<AZStd::string>(*)>(_a[1]))); break;
        case 1: _t->OnPickClicked(); break;
        case 2: _t->OnResetClicked(); break;
        case 3: _t->OnShrinkClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimGraphParameterPicker::*)(const AZStd::vector<AZStd::string> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimGraphParameterPicker::ParametersChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphParameterPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphParameterPicker.data,
    qt_meta_data_EMotionFX__AnimGraphParameterPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphParameterPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphParameterPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphParameterPicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::AnimGraphParameterPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void EMotionFX::AnimGraphParameterPicker::ParametersChanged(const AZStd::vector<AZStd::string> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EMotionFX__AnimGraphSingleParameterHandler_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphSingleParameterHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphSingleParameterHandler_t qt_meta_stringdata_EMotionFX__AnimGraphSingleParameterHandler = {
    {
QT_MOC_LITERAL(0, 0, 42) // "EMotionFX::AnimGraphSinglePar..."

    },
    "EMotionFX::AnimGraphSingleParameterHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphSingleParameterHandler[] = {

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

void EMotionFX::AnimGraphSingleParameterHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphSingleParameterHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphSingleParameterHandler.data,
    qt_meta_data_EMotionFX__AnimGraphSingleParameterHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphSingleParameterHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphSingleParameterHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphSingleParameterHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::string,AnimGraphParameterPicker>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::string,AnimGraphParameterPicker>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::AnimGraphSingleParameterHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__AnimGraphSingleNumberParameterHandler_t {
    QByteArrayData data[1];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphSingleNumberParameterHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphSingleNumberParameterHandler_t qt_meta_stringdata_EMotionFX__AnimGraphSingleNumberParameterHandler = {
    {
QT_MOC_LITERAL(0, 0, 48) // "EMotionFX::AnimGraphSingleNum..."

    },
    "EMotionFX::AnimGraphSingleNumberParameterHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphSingleNumberParameterHandler[] = {

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

void EMotionFX::AnimGraphSingleNumberParameterHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphSingleNumberParameterHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<AnimGraphSingleParameterHandler::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphSingleNumberParameterHandler.data,
    qt_meta_data_EMotionFX__AnimGraphSingleNumberParameterHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphSingleNumberParameterHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphSingleNumberParameterHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphSingleNumberParameterHandler.stringdata0))
        return static_cast<void*>(this);
    return AnimGraphSingleParameterHandler::qt_metacast(_clname);
}

int EMotionFX::AnimGraphSingleNumberParameterHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnimGraphSingleParameterHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__AnimGraphSingleVector2ParameterHandler_t {
    QByteArrayData data[1];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphSingleVector2ParameterHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphSingleVector2ParameterHandler_t qt_meta_stringdata_EMotionFX__AnimGraphSingleVector2ParameterHandler = {
    {
QT_MOC_LITERAL(0, 0, 49) // "EMotionFX::AnimGraphSingleVec..."

    },
    "EMotionFX::AnimGraphSingleVector2ParameterHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphSingleVector2ParameterHandler[] = {

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

void EMotionFX::AnimGraphSingleVector2ParameterHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphSingleVector2ParameterHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<AnimGraphSingleParameterHandler::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphSingleVector2ParameterHandler.data,
    qt_meta_data_EMotionFX__AnimGraphSingleVector2ParameterHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphSingleVector2ParameterHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphSingleVector2ParameterHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphSingleVector2ParameterHandler.stringdata0))
        return static_cast<void*>(this);
    return AnimGraphSingleParameterHandler::qt_metacast(_clname);
}

int EMotionFX::AnimGraphSingleVector2ParameterHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnimGraphSingleParameterHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__AnimGraphMultipleParameterHandler_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphMultipleParameterHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphMultipleParameterHandler_t qt_meta_stringdata_EMotionFX__AnimGraphMultipleParameterHandler = {
    {
QT_MOC_LITERAL(0, 0, 44) // "EMotionFX::AnimGraphMultipleP..."

    },
    "EMotionFX::AnimGraphMultipleParameterHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphMultipleParameterHandler[] = {

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

void EMotionFX::AnimGraphMultipleParameterHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphMultipleParameterHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphMultipleParameterHandler.data,
    qt_meta_data_EMotionFX__AnimGraphMultipleParameterHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphMultipleParameterHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphMultipleParameterHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphMultipleParameterHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,AnimGraphParameterPicker>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,AnimGraphParameterPicker>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::AnimGraphMultipleParameterHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
