/****************************************************************************
** Meta object code from reading C++ file 'TransitionStateFilterLocalHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/TransitionStateFilterLocalHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransitionStateFilterLocalHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__TransitionStateFilterPicker_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__TransitionStateFilterPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__TransitionStateFilterPicker_t qt_meta_stringdata_EMotionFX__TransitionStateFilterPicker = {
    {
QT_MOC_LITERAL(0, 0, 38), // "EMotionFX::TransitionStateFil..."
QT_MOC_LITERAL(1, 39, 16), // "SelectionChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 13), // "OnPickClicked"
QT_MOC_LITERAL(4, 71, 14) // "OnResetClicked"

    },
    "EMotionFX::TransitionStateFilterPicker\0"
    "SelectionChanged\0\0OnPickClicked\0"
    "OnResetClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__TransitionStateFilterPicker[] = {

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
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::TransitionStateFilterPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransitionStateFilterPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionChanged(); break;
        case 1: _t->OnPickClicked(); break;
        case 2: _t->OnResetClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransitionStateFilterPicker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransitionStateFilterPicker::SelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::TransitionStateFilterPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__TransitionStateFilterPicker.data,
    qt_meta_data_EMotionFX__TransitionStateFilterPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::TransitionStateFilterPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::TransitionStateFilterPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__TransitionStateFilterPicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::TransitionStateFilterPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EMotionFX::TransitionStateFilterPicker::SelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EMotionFX__TransitionStateFilterLocalHandler_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__TransitionStateFilterLocalHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__TransitionStateFilterLocalHandler_t qt_meta_stringdata_EMotionFX__TransitionStateFilterLocalHandler = {
    {
QT_MOC_LITERAL(0, 0, 44) // "EMotionFX::TransitionStateFil..."

    },
    "EMotionFX::TransitionStateFilterLocalHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__TransitionStateFilterLocalHandler[] = {

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

void EMotionFX::TransitionStateFilterLocalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::TransitionStateFilterLocalHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__TransitionStateFilterLocalHandler.data,
    qt_meta_data_EMotionFX__TransitionStateFilterLocalHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::TransitionStateFilterLocalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::TransitionStateFilterLocalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__TransitionStateFilterLocalHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AnimGraphStateTransition::StateFilterLocal,TransitionStateFilterPicker>"))
        return static_cast< AzToolsFramework::PropertyHandler<AnimGraphStateTransition::StateFilterLocal,TransitionStateFilterPicker>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::TransitionStateFilterLocalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
