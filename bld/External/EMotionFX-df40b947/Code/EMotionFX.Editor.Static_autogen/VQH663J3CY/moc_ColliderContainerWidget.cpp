/****************************************************************************
** Meta object code from reading C++ file 'ColliderContainerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/ColliderContainerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColliderContainerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__ColliderWidget_t {
    QByteArrayData data[13];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__ColliderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__ColliderWidget_t qt_meta_stringdata_EMotionFX__ColliderWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EMotionFX::ColliderWidget"
QT_MOC_LITERAL(1, 26, 12), // "CopyCollider"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "size_t"
QT_MOC_LITERAL(4, 47, 5), // "index"
QT_MOC_LITERAL(5, 53, 13), // "PasteCollider"
QT_MOC_LITERAL(6, 67, 14), // "RemoveCollider"
QT_MOC_LITERAL(7, 82, 13), // "colliderIndex"
QT_MOC_LITERAL(8, 96, 17), // "OnCardContextMenu"
QT_MOC_LITERAL(9, 114, 8), // "position"
QT_MOC_LITERAL(10, 123, 14), // "OnCopyCollider"
QT_MOC_LITERAL(11, 138, 15), // "OnPasteCollider"
QT_MOC_LITERAL(12, 154, 16) // "OnRemoveCollider"

    },
    "EMotionFX::ColliderWidget\0CopyCollider\0"
    "\0size_t\0index\0PasteCollider\0RemoveCollider\0"
    "colliderIndex\0OnCardContextMenu\0"
    "position\0OnCopyCollider\0OnPasteCollider\0"
    "OnRemoveCollider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__ColliderWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,
      11,    0,   62,    2, 0x08 /* Private */,
      12,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::ColliderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColliderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CopyCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->PasteCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 2: _t->RemoveCollider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnCardContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->OnCopyCollider(); break;
        case 5: _t->OnPasteCollider(); break;
        case 6: _t->OnRemoveCollider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColliderWidget::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColliderWidget::CopyCollider)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColliderWidget::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColliderWidget::PasteCollider)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColliderWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColliderWidget::RemoveCollider)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::ColliderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::Card::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__ColliderWidget.data,
    qt_meta_data_EMotionFX__ColliderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::ColliderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::ColliderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__ColliderWidget.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::Card::qt_metacast(_clname);
}

int EMotionFX::ColliderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::Card::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void EMotionFX::ColliderWidget::CopyCollider(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMotionFX::ColliderWidget::PasteCollider(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EMotionFX::ColliderWidget::RemoveCollider(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_EMotionFX__AddColliderButton_t {
    QByteArrayData data[8];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AddColliderButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AddColliderButton_t qt_meta_stringdata_EMotionFX__AddColliderButton = {
    {
QT_MOC_LITERAL(0, 0, 28), // "EMotionFX::AddColliderButton"
QT_MOC_LITERAL(1, 29, 11), // "AddCollider"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "AZ::TypeId"
QT_MOC_LITERAL(4, 53, 12), // "colliderType"
QT_MOC_LITERAL(5, 66, 19), // "OnCreateContextMenu"
QT_MOC_LITERAL(6, 86, 28), // "OnAddColliderActionTriggered"
QT_MOC_LITERAL(7, 115, 29) // "OnCopyColliderActionTriggered"

    },
    "EMotionFX::AddColliderButton\0AddCollider\0"
    "\0AZ::TypeId\0colliderType\0OnCreateContextMenu\0"
    "OnAddColliderActionTriggered\0"
    "OnCopyColliderActionTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AddColliderButton[] = {

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
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::AddColliderButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddColliderButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddCollider((*reinterpret_cast< AZ::TypeId(*)>(_a[1]))); break;
        case 1: _t->OnCreateContextMenu(); break;
        case 2: _t->OnAddColliderActionTriggered(); break;
        case 3: _t->OnCopyColliderActionTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddColliderButton::*)(AZ::TypeId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddColliderButton::AddCollider)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AddColliderButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AddColliderButton.data,
    qt_meta_data_EMotionFX__AddColliderButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AddColliderButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AddColliderButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AddColliderButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int EMotionFX::AddColliderButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EMotionFX::AddColliderButton::AddCollider(AZ::TypeId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EMotionFX__ColliderContainerWidget_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__ColliderContainerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__ColliderContainerWidget_t qt_meta_stringdata_EMotionFX__ColliderContainerWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "EMotionFX::ColliderContainerW..."
QT_MOC_LITERAL(1, 35, 12), // "CopyCollider"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 6), // "size_t"
QT_MOC_LITERAL(4, 56, 5), // "index"
QT_MOC_LITERAL(5, 62, 13), // "PasteCollider"
QT_MOC_LITERAL(6, 76, 7), // "replace"
QT_MOC_LITERAL(7, 84, 14) // "RemoveCollider"

    },
    "EMotionFX::ColliderContainerWidget\0"
    "CopyCollider\0\0size_t\0index\0PasteCollider\0"
    "replace\0RemoveCollider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__ColliderContainerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    2,   32,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void EMotionFX::ColliderContainerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColliderContainerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CopyCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->PasteCollider((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->RemoveCollider((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColliderContainerWidget::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColliderContainerWidget::CopyCollider)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColliderContainerWidget::*)(size_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColliderContainerWidget::PasteCollider)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColliderContainerWidget::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColliderContainerWidget::RemoveCollider)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::ColliderContainerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__ColliderContainerWidget.data,
    qt_meta_data_EMotionFX__ColliderContainerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::ColliderContainerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::ColliderContainerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__ColliderContainerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::ColliderContainerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EMotionFX::ColliderContainerWidget::CopyCollider(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMotionFX::ColliderContainerWidget::PasteCollider(size_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EMotionFX::ColliderContainerWidget::RemoveCollider(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
