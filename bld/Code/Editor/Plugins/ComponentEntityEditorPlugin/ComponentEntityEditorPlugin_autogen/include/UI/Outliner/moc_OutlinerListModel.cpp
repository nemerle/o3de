/****************************************************************************
** Meta object code from reading C++ file 'OutlinerListModel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Editor/Plugins/ComponentEntityEditorPlugin/UI/Outliner/OutlinerListModel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OutlinerListModel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutlinerListModel_t {
    QByteArrayData data[27];
    char stringdata0[414];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutlinerListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutlinerListModel_t qt_meta_stringdata_OutlinerListModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OutlinerListModel"
QT_MOC_LITERAL(1, 18, 12), // "ExpandEntity"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "AZ::EntityId"
QT_MOC_LITERAL(4, 45, 8), // "entityId"
QT_MOC_LITERAL(5, 54, 6), // "expand"
QT_MOC_LITERAL(6, 61, 12), // "SelectEntity"
QT_MOC_LITERAL(7, 74, 6), // "select"
QT_MOC_LITERAL(8, 81, 22), // "EnableSelectionUpdates"
QT_MOC_LITERAL(9, 104, 6), // "enable"
QT_MOC_LITERAL(10, 111, 11), // "ResetFilter"
QT_MOC_LITERAL(11, 123, 13), // "ReapplyFilter"
QT_MOC_LITERAL(12, 137, 19), // "SearchStringChanged"
QT_MOC_LITERAL(13, 157, 13), // "AZStd::string"
QT_MOC_LITERAL(14, 171, 6), // "filter"
QT_MOC_LITERAL(15, 178, 19), // "SearchFilterChanged"
QT_MOC_LITERAL(16, 198, 33), // "AZStd::vector<ComponentTypeVa..."
QT_MOC_LITERAL(17, 232, 16), // "componentFilters"
QT_MOC_LITERAL(18, 249, 16), // "OnEntityExpanded"
QT_MOC_LITERAL(19, 266, 17), // "OnEntityCollapsed"
QT_MOC_LITERAL(20, 284, 19), // "CanReparentEntities"
QT_MOC_LITERAL(21, 304, 11), // "newParentId"
QT_MOC_LITERAL(22, 316, 30), // "AzToolsFramework::EntityIdList"
QT_MOC_LITERAL(23, 347, 17), // "selectedEntityIds"
QT_MOC_LITERAL(24, 365, 16), // "ReparentEntities"
QT_MOC_LITERAL(25, 382, 14), // "beforeEntityId"
QT_MOC_LITERAL(26, 397, 16) // "InvalidateFilter"

    },
    "OutlinerListModel\0ExpandEntity\0\0"
    "AZ::EntityId\0entityId\0expand\0SelectEntity\0"
    "select\0EnableSelectionUpdates\0enable\0"
    "ResetFilter\0ReapplyFilter\0SearchStringChanged\0"
    "AZStd::string\0filter\0SearchFilterChanged\0"
    "AZStd::vector<ComponentTypeValue>\0"
    "componentFilters\0OnEntityExpanded\0"
    "OnEntityCollapsed\0CanReparentEntities\0"
    "newParentId\0AzToolsFramework::EntityIdList\0"
    "selectedEntityIds\0ReparentEntities\0"
    "beforeEntityId\0InvalidateFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutlinerListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       6,    2,   84,    2, 0x06 /* Public */,
       8,    1,   89,    2, 0x06 /* Public */,
      10,    0,   92,    2, 0x06 /* Public */,
      11,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   94,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,
      18,    1,  100,    2, 0x0a /* Public */,
      19,    1,  103,    2, 0x0a /* Public */,
      20,    2,  106,    2, 0x0a /* Public */,
      24,    3,  111,    2, 0x0a /* Public */,
      24,    2,  118,    2, 0x2a /* Public | MethodCloned */,
      26,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 22, 0x80000000 | 3,   21,   23,   25,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void,

       0        // eod
};

void OutlinerListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OutlinerListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ExpandEntity((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->SelectEntity((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->EnableSelectionUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->ResetFilter(); break;
        case 4: _t->ReapplyFilter(); break;
        case 5: _t->SearchStringChanged((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 6: _t->SearchFilterChanged((*reinterpret_cast< const AZStd::vector<ComponentTypeValue>(*)>(_a[1]))); break;
        case 7: _t->OnEntityExpanded((*reinterpret_cast< const AZ::EntityId(*)>(_a[1]))); break;
        case 8: _t->OnEntityCollapsed((*reinterpret_cast< const AZ::EntityId(*)>(_a[1]))); break;
        case 9: { bool _r = _t->CanReparentEntities((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< const AzToolsFramework::EntityIdList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->ReparentEntities((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< const AzToolsFramework::EntityIdList(*)>(_a[2])),(*reinterpret_cast< const AZ::EntityId(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->ReparentEntities((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< const AzToolsFramework::EntityIdList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->InvalidateFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OutlinerListModel::*)(const AZ::EntityId & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutlinerListModel::ExpandEntity)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OutlinerListModel::*)(const AZ::EntityId & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutlinerListModel::SelectEntity)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OutlinerListModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutlinerListModel::EnableSelectionUpdates)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OutlinerListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutlinerListModel::ResetFilter)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OutlinerListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutlinerListModel::ReapplyFilter)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OutlinerListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_OutlinerListModel.data,
    qt_meta_data_OutlinerListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OutlinerListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlinerListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutlinerListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int OutlinerListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void OutlinerListModel::ExpandEntity(const AZ::EntityId & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OutlinerListModel::SelectEntity(const AZ::EntityId & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OutlinerListModel::EnableSelectionUpdates(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OutlinerListModel::ResetFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OutlinerListModel::ReapplyFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_OutlinerCheckBox_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutlinerCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutlinerCheckBox_t qt_meta_stringdata_OutlinerCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 16) // "OutlinerCheckBox"

    },
    "OutlinerCheckBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutlinerCheckBox[] = {

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

void OutlinerCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OutlinerCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_OutlinerCheckBox.data,
    qt_meta_data_OutlinerCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OutlinerCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlinerCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutlinerCheckBox.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int OutlinerCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
