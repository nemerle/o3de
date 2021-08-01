/****************************************************************************
** Meta object code from reading C++ file 'CollisionGroupsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Gems/PhysX/Code/Editor/CollisionGroupsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CollisionGroupsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhysX__Editor__ColumnHeader_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__Editor__ColumnHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__Editor__ColumnHeader_t qt_meta_stringdata_PhysX__Editor__ColumnHeader = {
    {
QT_MOC_LITERAL(0, 0, 27) // "PhysX::Editor::ColumnHeader"

    },
    "PhysX::Editor::ColumnHeader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__Editor__ColumnHeader[] = {

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

void PhysX::Editor::ColumnHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PhysX::Editor::ColumnHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PhysX__Editor__ColumnHeader.data,
    qt_meta_data_PhysX__Editor__ColumnHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::Editor::ColumnHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::Editor::ColumnHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__Editor__ColumnHeader.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PhysX::Editor::ColumnHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PhysX__Editor__RowHeader_t {
    QByteArrayData data[7];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__Editor__RowHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__Editor__RowHeader_t qt_meta_stringdata_PhysX__Editor__RowHeader = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PhysX::Editor::RowHeader"
QT_MOC_LITERAL(1, 25, 14), // "OnGroupRenamed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 30), // "AzPhysics::CollisionGroups::Id"
QT_MOC_LITERAL(4, 72, 7), // "groupId"
QT_MOC_LITERAL(5, 80, 13), // "AZStd::string"
QT_MOC_LITERAL(6, 94, 7) // "newName"

    },
    "PhysX::Editor::RowHeader\0OnGroupRenamed\0"
    "\0AzPhysics::CollisionGroups::Id\0groupId\0"
    "AZStd::string\0newName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__Editor__RowHeader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void PhysX::Editor::RowHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RowHeader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnGroupRenamed((*reinterpret_cast< AzPhysics::CollisionGroups::Id(*)>(_a[1])),(*reinterpret_cast< const AZStd::string(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RowHeader::*)(AzPhysics::CollisionGroups::Id , const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RowHeader::OnGroupRenamed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhysX::Editor::RowHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PhysX__Editor__RowHeader.data,
    qt_meta_data_PhysX__Editor__RowHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::Editor::RowHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::Editor::RowHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__Editor__RowHeader.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PhysX::Editor::RowHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PhysX::Editor::RowHeader::OnGroupRenamed(AzPhysics::CollisionGroups::Id _t1, const AZStd::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PhysX__Editor__Cell_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__Editor__Cell_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__Editor__Cell_t qt_meta_stringdata_PhysX__Editor__Cell = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PhysX::Editor::Cell"
QT_MOC_LITERAL(1, 20, 14), // "OnLayerChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 30), // "AzPhysics::CollisionGroups::Id"
QT_MOC_LITERAL(4, 67, 7), // "groupId"
QT_MOC_LITERAL(5, 75, 25), // "AzPhysics::CollisionLayer"
QT_MOC_LITERAL(6, 101, 5), // "layer"
QT_MOC_LITERAL(7, 107, 7) // "enabled"

    },
    "PhysX::Editor::Cell\0OnLayerChanged\0\0"
    "AzPhysics::CollisionGroups::Id\0groupId\0"
    "AzPhysics::CollisionLayer\0layer\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__Editor__Cell[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,

       0        // eod
};

void PhysX::Editor::Cell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cell *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnLayerChanged((*reinterpret_cast< AzPhysics::CollisionGroups::Id(*)>(_a[1])),(*reinterpret_cast< const AzPhysics::CollisionLayer(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Cell::*)(AzPhysics::CollisionGroups::Id , const AzPhysics::CollisionLayer & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cell::OnLayerChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhysX::Editor::Cell::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PhysX__Editor__Cell.data,
    qt_meta_data_PhysX__Editor__Cell,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::Editor::Cell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::Editor::Cell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__Editor__Cell.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PhysX::Editor::Cell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PhysX::Editor::Cell::OnLayerChanged(AzPhysics::CollisionGroups::Id _t1, const AzPhysics::CollisionLayer & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PhysX__Editor__CollisionGroupsWidget_t {
    QByteArrayData data[5];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__Editor__CollisionGroupsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__Editor__CollisionGroupsWidget_t qt_meta_stringdata_PhysX__Editor__CollisionGroupsWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PhysX::Editor::CollisionGroup..."
QT_MOC_LITERAL(1, 37, 14), // "onValueChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 26), // "AzPhysics::CollisionGroups"
QT_MOC_LITERAL(4, 80, 8) // "newValue"

    },
    "PhysX::Editor::CollisionGroupsWidget\0"
    "onValueChanged\0\0AzPhysics::CollisionGroups\0"
    "newValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__Editor__CollisionGroupsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void PhysX::Editor::CollisionGroupsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CollisionGroupsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onValueChanged((*reinterpret_cast< const AzPhysics::CollisionGroups(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CollisionGroupsWidget::*)(const AzPhysics::CollisionGroups & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CollisionGroupsWidget::onValueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhysX::Editor::CollisionGroupsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PhysX__Editor__CollisionGroupsWidget.data,
    qt_meta_data_PhysX__Editor__CollisionGroupsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::Editor::CollisionGroupsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::Editor::CollisionGroupsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__Editor__CollisionGroupsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PhysX::Editor::CollisionGroupsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PhysX::Editor::CollisionGroupsWidget::onValueChanged(const AzPhysics::CollisionGroups & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
