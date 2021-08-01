/****************************************************************************
** Meta object code from reading C++ file 'PropertyAnimationCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Editor/Controls/ReflectedPropertyControl/PropertyAnimationCtrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyAnimationCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnimationPropertyCtrl_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnimationPropertyCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnimationPropertyCtrl_t qt_meta_stringdata_AnimationPropertyCtrl = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AnimationPropertyCtrl"
QT_MOC_LITERAL(1, 22, 12), // "ValueChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "CReflectedVarAnimation"
QT_MOC_LITERAL(4, 59, 5), // "value"
QT_MOC_LITERAL(5, 65, 8), // "SetValue"
QT_MOC_LITERAL(6, 74, 9), // "animation"
QT_MOC_LITERAL(7, 84, 14) // "OnApplyClicked"

    },
    "AnimationPropertyCtrl\0ValueChanged\0\0"
    "CReflectedVarAnimation\0value\0SetValue\0"
    "animation\0OnApplyClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnimationPropertyCtrl[] = {

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
       5,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,

       0        // eod
};

void AnimationPropertyCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnimationPropertyCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< CReflectedVarAnimation(*)>(_a[1]))); break;
        case 1: _t->SetValue((*reinterpret_cast< const CReflectedVarAnimation(*)>(_a[1]))); break;
        case 2: _t->OnApplyClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimationPropertyCtrl::*)(CReflectedVarAnimation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimationPropertyCtrl::ValueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnimationPropertyCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AnimationPropertyCtrl.data,
    qt_meta_data_AnimationPropertyCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnimationPropertyCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnimationPropertyCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnimationPropertyCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AnimationPropertyCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AnimationPropertyCtrl::ValueChanged(CReflectedVarAnimation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
