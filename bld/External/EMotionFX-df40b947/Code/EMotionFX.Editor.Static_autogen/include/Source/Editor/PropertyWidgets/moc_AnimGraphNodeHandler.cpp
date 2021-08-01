/****************************************************************************
** Meta object code from reading C++ file 'AnimGraphNodeHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/AnimGraphNodeHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimGraphNodeHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__AnimGraphNodeIdPicker_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphNodeIdPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphNodeIdPicker_t qt_meta_stringdata_EMotionFX__AnimGraphNodeIdPicker = {
    {
QT_MOC_LITERAL(0, 0, 32), // "EMotionFX::AnimGraphNodeIdPicker"
QT_MOC_LITERAL(1, 33, 16), // "SelectionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13) // "OnPickClicked"

    },
    "EMotionFX::AnimGraphNodeIdPicker\0"
    "SelectionChanged\0\0OnPickClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphNodeIdPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void EMotionFX::AnimGraphNodeIdPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnimGraphNodeIdPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionChanged(); break;
        case 1: _t->OnPickClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimGraphNodeIdPicker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimGraphNodeIdPicker::SelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphNodeIdPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphNodeIdPicker.data,
    qt_meta_data_EMotionFX__AnimGraphNodeIdPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphNodeIdPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphNodeIdPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphNodeIdPicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::AnimGraphNodeIdPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EMotionFX::AnimGraphNodeIdPicker::SelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EMotionFX__AnimGraphNodeIdHandler_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphNodeIdHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphNodeIdHandler_t qt_meta_stringdata_EMotionFX__AnimGraphNodeIdHandler = {
    {
QT_MOC_LITERAL(0, 0, 33) // "EMotionFX::AnimGraphNodeIdHan..."

    },
    "EMotionFX::AnimGraphNodeIdHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphNodeIdHandler[] = {

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

void EMotionFX::AnimGraphNodeIdHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphNodeIdHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphNodeIdHandler.data,
    qt_meta_data_EMotionFX__AnimGraphNodeIdHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphNodeIdHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphNodeIdHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphNodeIdHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZ::u64,AnimGraphNodeIdPicker>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZ::u64,AnimGraphNodeIdPicker>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::AnimGraphNodeIdHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__AnimGraphMotionNodeIdHandler_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphMotionNodeIdHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphMotionNodeIdHandler_t qt_meta_stringdata_EMotionFX__AnimGraphMotionNodeIdHandler = {
    {
QT_MOC_LITERAL(0, 0, 39) // "EMotionFX::AnimGraphMotionNod..."

    },
    "EMotionFX::AnimGraphMotionNodeIdHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphMotionNodeIdHandler[] = {

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

void EMotionFX::AnimGraphMotionNodeIdHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphMotionNodeIdHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<AnimGraphNodeIdHandler::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphMotionNodeIdHandler.data,
    qt_meta_data_EMotionFX__AnimGraphMotionNodeIdHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphMotionNodeIdHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphMotionNodeIdHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphMotionNodeIdHandler.stringdata0))
        return static_cast<void*>(this);
    return AnimGraphNodeIdHandler::qt_metacast(_clname);
}

int EMotionFX::AnimGraphMotionNodeIdHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnimGraphNodeIdHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__AnimGraphStateIdHandler_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphStateIdHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphStateIdHandler_t qt_meta_stringdata_EMotionFX__AnimGraphStateIdHandler = {
    {
QT_MOC_LITERAL(0, 0, 34) // "EMotionFX::AnimGraphStateIdHa..."

    },
    "EMotionFX::AnimGraphStateIdHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphStateIdHandler[] = {

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

void EMotionFX::AnimGraphStateIdHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphStateIdHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<AnimGraphNodeIdHandler::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphStateIdHandler.data,
    qt_meta_data_EMotionFX__AnimGraphStateIdHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphStateIdHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphStateIdHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphStateIdHandler.stringdata0))
        return static_cast<void*>(this);
    return AnimGraphNodeIdHandler::qt_metacast(_clname);
}

int EMotionFX::AnimGraphStateIdHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnimGraphNodeIdHandler::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
