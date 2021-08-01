/****************************************************************************
** Meta object code from reading C++ file 'ClothJointWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/Plugins/Cloth/ClothJointWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClothJointWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__ClothJointWidget_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__ClothJointWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__ClothJointWidget_t qt_meta_stringdata_EMotionFX__ClothJointWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMotionFX::ClothJointWidget"
QT_MOC_LITERAL(1, 28, 13), // "OnAddCollider"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "AZ::TypeId"
QT_MOC_LITERAL(4, 54, 12), // "colliderType"
QT_MOC_LITERAL(5, 67, 14), // "OnCopyCollider"
QT_MOC_LITERAL(6, 82, 6), // "size_t"
QT_MOC_LITERAL(7, 89, 13), // "colliderIndex"
QT_MOC_LITERAL(8, 103, 15), // "OnPasteCollider"
QT_MOC_LITERAL(9, 119, 7), // "replace"
QT_MOC_LITERAL(10, 127, 16) // "OnRemoveCollider"

    },
    "EMotionFX::ClothJointWidget\0OnAddCollider\0"
    "\0AZ::TypeId\0colliderType\0OnCopyCollider\0"
    "size_t\0colliderIndex\0OnPasteCollider\0"
    "replace\0OnRemoveCollider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__ClothJointWidget[] = {

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

void EMotionFX::ClothJointWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClothJointWidget *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject EMotionFX::ClothJointWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<SkeletonModelJointWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__ClothJointWidget.data,
    qt_meta_data_EMotionFX__ClothJointWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::ClothJointWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::ClothJointWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__ClothJointWidget.stringdata0))
        return static_cast<void*>(this);
    return SkeletonModelJointWidget::qt_metacast(_clname);
}

int EMotionFX::ClothJointWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
