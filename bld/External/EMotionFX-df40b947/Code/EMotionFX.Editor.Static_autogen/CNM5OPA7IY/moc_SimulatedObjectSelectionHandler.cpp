/****************************************************************************
** Meta object code from reading C++ file 'SimulatedObjectSelectionHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/SimulatedObjectSelectionHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulatedObjectSelectionHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__SimulatedObjectPicker_t {
    QByteArrayData data[7];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SimulatedObjectPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SimulatedObjectPicker_t qt_meta_stringdata_EMotionFX__SimulatedObjectPicker = {
    {
QT_MOC_LITERAL(0, 0, 32), // "EMotionFX::SimulatedObjectPicker"
QT_MOC_LITERAL(1, 33, 16), // "SelectionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 28), // "AZStd::vector<AZStd::string>"
QT_MOC_LITERAL(4, 80, 23), // "newSimualtedObjectNames"
QT_MOC_LITERAL(5, 104, 13), // "OnPickClicked"
QT_MOC_LITERAL(6, 118, 14) // "OnResetClicked"

    },
    "EMotionFX::SimulatedObjectPicker\0"
    "SelectionChanged\0\0AZStd::vector<AZStd::string>\0"
    "newSimualtedObjectNames\0OnPickClicked\0"
    "OnResetClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SimulatedObjectPicker[] = {

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
       5,    0,   32,    2, 0x08 /* Private */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::SimulatedObjectPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimulatedObjectPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionChanged((*reinterpret_cast< const AZStd::vector<AZStd::string>(*)>(_a[1]))); break;
        case 1: _t->OnPickClicked(); break;
        case 2: _t->OnResetClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimulatedObjectPicker::*)(const AZStd::vector<AZStd::string> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SimulatedObjectPicker::SelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SimulatedObjectPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SimulatedObjectPicker.data,
    qt_meta_data_EMotionFX__SimulatedObjectPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SimulatedObjectPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SimulatedObjectPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SimulatedObjectPicker.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::SimulatedObjectPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EMotionFX::SimulatedObjectPicker::SelectionChanged(const AZStd::vector<AZStd::string> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EMotionFX__SimulatedObjectSelectionHandler_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SimulatedObjectSelectionHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SimulatedObjectSelectionHandler_t qt_meta_stringdata_EMotionFX__SimulatedObjectSelectionHandler = {
    {
QT_MOC_LITERAL(0, 0, 42) // "EMotionFX::SimulatedObjectSel..."

    },
    "EMotionFX::SimulatedObjectSelectionHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SimulatedObjectSelectionHandler[] = {

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

void EMotionFX::SimulatedObjectSelectionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SimulatedObjectSelectionHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SimulatedObjectSelectionHandler.data,
    qt_meta_data_EMotionFX__SimulatedObjectSelectionHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SimulatedObjectSelectionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SimulatedObjectSelectionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SimulatedObjectSelectionHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,SimulatedObjectPicker>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,SimulatedObjectPicker>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::SimulatedObjectSelectionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
