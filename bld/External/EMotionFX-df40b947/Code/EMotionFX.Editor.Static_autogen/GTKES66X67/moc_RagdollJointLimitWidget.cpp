/****************************************************************************
** Meta object code from reading C++ file 'RagdollJointLimitWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/Plugins/Ragdoll/RagdollJointLimitWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RagdollJointLimitWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__RagdollJointLimitWidget_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__RagdollJointLimitWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__RagdollJointLimitWidget_t qt_meta_stringdata_EMotionFX__RagdollJointLimitWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "EMotionFX::RagdollJointLimitW..."
QT_MOC_LITERAL(1, 35, 16), // "JointLimitCopied"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 13), // "AZStd::string"
QT_MOC_LITERAL(4, 67, 21), // "serializedJointLimits"
QT_MOC_LITERAL(5, 89, 18), // "OnJointTypeChanged"
QT_MOC_LITERAL(6, 108, 5), // "index"
QT_MOC_LITERAL(7, 114, 22), // "OnHasLimitStateChanged"
QT_MOC_LITERAL(8, 137, 5), // "state"
QT_MOC_LITERAL(9, 143, 17), // "OnCardContextMenu"
QT_MOC_LITERAL(10, 161, 8) // "position"

    },
    "EMotionFX::RagdollJointLimitWidget\0"
    "JointLimitCopied\0\0AZStd::string\0"
    "serializedJointLimits\0OnJointTypeChanged\0"
    "index\0OnHasLimitStateChanged\0state\0"
    "OnCardContextMenu\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__RagdollJointLimitWidget[] = {

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
       5,    1,   37,    2, 0x08 /* Private */,
       7,    1,   40,    2, 0x08 /* Private */,
       9,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QPoint,   10,

       0        // eod
};

void EMotionFX::RagdollJointLimitWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RagdollJointLimitWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->JointLimitCopied((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 1: _t->OnJointTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnHasLimitStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnCardContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RagdollJointLimitWidget::*)(const AZStd::string & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RagdollJointLimitWidget::JointLimitCopied)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::RagdollJointLimitWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::Card::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__RagdollJointLimitWidget.data,
    qt_meta_data_EMotionFX__RagdollJointLimitWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::RagdollJointLimitWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::RagdollJointLimitWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__RagdollJointLimitWidget.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::Card::qt_metacast(_clname);
}

int EMotionFX::RagdollJointLimitWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::Card::qt_metacall(_c, _id, _a);
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
void EMotionFX::RagdollJointLimitWidget::JointLimitCopied(const AZStd::string & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< EMotionFX::RagdollJointLimitWidget *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
