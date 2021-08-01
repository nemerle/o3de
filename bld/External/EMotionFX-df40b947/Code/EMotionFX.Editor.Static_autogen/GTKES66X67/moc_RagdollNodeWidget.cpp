/****************************************************************************
** Meta object code from reading C++ file 'RagdollNodeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/Plugins/Ragdoll/RagdollNodeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RagdollNodeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__RagdollNodeWidget_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__RagdollNodeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__RagdollNodeWidget_t qt_meta_stringdata_EMotionFX__RagdollNodeWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "EMotionFX::RagdollNodeWidget"
QT_MOC_LITERAL(1, 29, 22), // "OnAddRemoveRagdollNode"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 13), // "OnAddCollider"
QT_MOC_LITERAL(4, 67, 10), // "AZ::TypeId"
QT_MOC_LITERAL(5, 78, 12), // "colliderType"
QT_MOC_LITERAL(6, 91, 14), // "OnCopyCollider"
QT_MOC_LITERAL(7, 106, 6), // "size_t"
QT_MOC_LITERAL(8, 113, 13), // "colliderIndex"
QT_MOC_LITERAL(9, 127, 15), // "OnPasteCollider"
QT_MOC_LITERAL(10, 143, 7), // "replace"
QT_MOC_LITERAL(11, 151, 16) // "OnRemoveCollider"

    },
    "EMotionFX::RagdollNodeWidget\0"
    "OnAddRemoveRagdollNode\0\0OnAddCollider\0"
    "AZ::TypeId\0colliderType\0OnCopyCollider\0"
    "size_t\0colliderIndex\0OnPasteCollider\0"
    "replace\0OnRemoveCollider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__RagdollNodeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,
       9,    2,   46,    2, 0x0a /* Public */,
      11,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,   10,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void EMotionFX::RagdollNodeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RagdollNodeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAddRemoveRagdollNode(); break;
        case 1: _t->OnAddCollider((*reinterpret_cast< const AZ::TypeId(*)>(_a[1]))); break;
        case 2: _t->OnCopyCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 3: _t->OnPasteCollider((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->OnRemoveCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::RagdollNodeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SkeletonModelJointWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__RagdollNodeWidget.data,
    qt_meta_data_EMotionFX__RagdollNodeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::RagdollNodeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::RagdollNodeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__RagdollNodeWidget.stringdata0))
        return static_cast<void*>(this);
    return SkeletonModelJointWidget::qt_metacast(_clname);
}

int EMotionFX::RagdollNodeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SkeletonModelJointWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
