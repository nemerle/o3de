/****************************************************************************
** Meta object code from reading C++ file 'SimulatedObjectColliderWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/Plugins/SimulatedObject/SimulatedObjectColliderWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulatedObjectColliderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__SimulatedObjectColliderWidget_t {
    QByteArrayData data[11];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SimulatedObjectColliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SimulatedObjectColliderWidget_t qt_meta_stringdata_EMotionFX__SimulatedObjectColliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "EMotionFX::SimulatedObjectCol..."
QT_MOC_LITERAL(1, 41, 13), // "OnAddCollider"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 10), // "AZ::TypeId"
QT_MOC_LITERAL(4, 67, 12), // "colliderType"
QT_MOC_LITERAL(5, 80, 14), // "OnCopyCollider"
QT_MOC_LITERAL(6, 95, 6), // "size_t"
QT_MOC_LITERAL(7, 102, 13), // "colliderIndex"
QT_MOC_LITERAL(8, 116, 15), // "OnPasteCollider"
QT_MOC_LITERAL(9, 132, 7), // "replace"
QT_MOC_LITERAL(10, 140, 16) // "OnRemoveCollider"

    },
    "EMotionFX::SimulatedObjectColliderWidget\0"
    "OnAddCollider\0\0AZ::TypeId\0colliderType\0"
    "OnCopyCollider\0size_t\0colliderIndex\0"
    "OnPasteCollider\0replace\0OnRemoveCollider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SimulatedObjectColliderWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       8,    2,   40,    2, 0x0a /* Public */,
      10,    1,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    7,    9,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void EMotionFX::SimulatedObjectColliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimulatedObjectColliderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAddCollider((*reinterpret_cast< const AZ::TypeId(*)>(_a[1]))); break;
        case 1: _t->OnCopyCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 2: _t->OnPasteCollider((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->OnRemoveCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SimulatedObjectColliderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SkeletonModelJointWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SimulatedObjectColliderWidget.data,
    qt_meta_data_EMotionFX__SimulatedObjectColliderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SimulatedObjectColliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SimulatedObjectColliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SimulatedObjectColliderWidget.stringdata0))
        return static_cast<void*>(this);
    return SkeletonModelJointWidget::qt_metacast(_clname);
}

int EMotionFX::SimulatedObjectColliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SkeletonModelJointWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_EMotionFX__AddToSimulatedObjectButton_t {
    QByteArrayData data[7];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AddToSimulatedObjectButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AddToSimulatedObjectButton_t qt_meta_stringdata_EMotionFX__AddToSimulatedObjectButton = {
    {
QT_MOC_LITERAL(0, 0, 37), // "EMotionFX::AddToSimulatedObje..."
QT_MOC_LITERAL(1, 38, 20), // "AddToSimulatedObject"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 19), // "OnCreateContextMenu"
QT_MOC_LITERAL(4, 80, 34), // "OnAddJointsToObjectActionTrig..."
QT_MOC_LITERAL(5, 115, 7), // "checked"
QT_MOC_LITERAL(6, 123, 41) // "OnCreateObjectAndAddJointsAct..."

    },
    "EMotionFX::AddToSimulatedObjectButton\0"
    "AddToSimulatedObject\0\0OnCreateContextMenu\0"
    "OnAddJointsToObjectActionTriggered\0"
    "checked\0OnCreateObjectAndAddJointsActionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AddToSimulatedObjectButton[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::AddToSimulatedObjectButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddToSimulatedObjectButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddToSimulatedObject(); break;
        case 1: _t->OnCreateContextMenu(); break;
        case 2: _t->OnAddJointsToObjectActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnCreateObjectAndAddJointsActionTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddToSimulatedObjectButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddToSimulatedObjectButton::AddToSimulatedObject)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AddToSimulatedObjectButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AddToSimulatedObjectButton.data,
    qt_meta_data_EMotionFX__AddToSimulatedObjectButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AddToSimulatedObjectButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AddToSimulatedObjectButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AddToSimulatedObjectButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int EMotionFX::AddToSimulatedObjectButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void EMotionFX::AddToSimulatedObjectButton::AddToSimulatedObject()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
