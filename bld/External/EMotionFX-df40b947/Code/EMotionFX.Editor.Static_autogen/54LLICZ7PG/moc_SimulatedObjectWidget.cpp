/****************************************************************************
** Meta object code from reading C++ file 'SimulatedObjectWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/Plugins/SimulatedObject/SimulatedObjectWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulatedObjectWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__SimulatedObjectWidget_t {
    QByteArrayData data[15];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SimulatedObjectWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SimulatedObjectWidget_t qt_meta_stringdata_EMotionFX__SimulatedObjectWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "EMotionFX::SimulatedObjectWidget"
QT_MOC_LITERAL(1, 33, 13), // "OnContextMenu"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "position"
QT_MOC_LITERAL(4, 57, 23), // "OnRemoveSimulatedObject"
QT_MOC_LITERAL(5, 81, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 93, 11), // "objectIndex"
QT_MOC_LITERAL(7, 105, 22), // "OnRemoveSimulatedJoint"
QT_MOC_LITERAL(8, 128, 10), // "jointIndex"
QT_MOC_LITERAL(9, 139, 14), // "removeChildren"
QT_MOC_LITERAL(10, 154, 23), // "OnRemoveSimulatedJoints"
QT_MOC_LITERAL(11, 178, 15), // "QModelIndexList"
QT_MOC_LITERAL(12, 194, 12), // "jointIndices"
QT_MOC_LITERAL(13, 207, 13), // "OnAddCollider"
QT_MOC_LITERAL(14, 221, 16) // "OnClearColliders"

    },
    "EMotionFX::SimulatedObjectWidget\0"
    "OnContextMenu\0\0position\0OnRemoveSimulatedObject\0"
    "QModelIndex\0objectIndex\0OnRemoveSimulatedJoint\0"
    "jointIndex\0removeChildren\0"
    "OnRemoveSimulatedJoints\0QModelIndexList\0"
    "jointIndices\0OnAddCollider\0OnClearColliders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SimulatedObjectWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       7,    2,   50,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x0a /* Public */,
      13,    0,   58,    2, 0x0a /* Public */,
      14,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::SimulatedObjectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimulatedObjectWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->OnRemoveSimulatedObject((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->OnRemoveSimulatedJoint((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->OnRemoveSimulatedJoints((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 4: _t->OnAddCollider(); break;
        case 5: _t->OnClearColliders(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SimulatedObjectWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<EMStudio::DockWidgetPlugin::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SimulatedObjectWidget.data,
    qt_meta_data_EMotionFX__SimulatedObjectWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SimulatedObjectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SimulatedObjectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SimulatedObjectWidget.stringdata0))
        return static_cast<void*>(this);
    return EMStudio::DockWidgetPlugin::qt_metacast(_clname);
}

int EMotionFX::SimulatedObjectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EMStudio::DockWidgetPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
