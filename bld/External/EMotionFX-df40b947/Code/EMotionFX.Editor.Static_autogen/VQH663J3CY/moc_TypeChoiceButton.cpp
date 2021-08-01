/****************************************************************************
** Meta object code from reading C++ file 'TypeChoiceButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/TypeChoiceButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TypeChoiceButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__TypeChoiceButton_t {
    QByteArrayData data[8];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__TypeChoiceButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__TypeChoiceButton_t qt_meta_stringdata_EMotionFX__TypeChoiceButton = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMotionFX::TypeChoiceButton"
QT_MOC_LITERAL(1, 28, 16), // "ObjectTypeChosen"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "AZ::TypeId"
QT_MOC_LITERAL(4, 57, 4), // "type"
QT_MOC_LITERAL(5, 62, 19), // "OnCreateContextMenu"
QT_MOC_LITERAL(6, 82, 17), // "OnActionTriggered"
QT_MOC_LITERAL(7, 100, 7) // "checked"

    },
    "EMotionFX::TypeChoiceButton\0"
    "ObjectTypeChosen\0\0AZ::TypeId\0type\0"
    "OnCreateContextMenu\0OnActionTriggered\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__TypeChoiceButton[] = {

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
       5,    0,   32,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void EMotionFX::TypeChoiceButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TypeChoiceButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ObjectTypeChosen((*reinterpret_cast< AZ::TypeId(*)>(_a[1]))); break;
        case 1: _t->OnCreateContextMenu(); break;
        case 2: _t->OnActionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TypeChoiceButton::*)(AZ::TypeId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TypeChoiceButton::ObjectTypeChosen)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::TypeChoiceButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__TypeChoiceButton.data,
    qt_meta_data_EMotionFX__TypeChoiceButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::TypeChoiceButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::TypeChoiceButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__TypeChoiceButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int EMotionFX::TypeChoiceButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void EMotionFX::TypeChoiceButton::ObjectTypeChosen(AZ::TypeId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
