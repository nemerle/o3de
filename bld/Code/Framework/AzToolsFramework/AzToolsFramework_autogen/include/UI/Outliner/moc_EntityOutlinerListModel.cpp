/****************************************************************************
** Meta object code from reading C++ file 'EntityOutlinerListModel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Outliner/EntityOutlinerListModel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityOutlinerListModel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__EntityOutlinerListModel_t {
    QByteArrayData data[27];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__EntityOutlinerListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__EntityOutlinerListModel_t qt_meta_stringdata_AzToolsFramework__EntityOutlinerListModel = {
    {
QT_MOC_LITERAL(0, 0, 41), // "AzToolsFramework::EntityOutli..."
QT_MOC_LITERAL(1, 42, 12), // "ExpandEntity"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 12), // "AZ::EntityId"
QT_MOC_LITERAL(4, 69, 8), // "entityId"
QT_MOC_LITERAL(5, 78, 6), // "expand"
QT_MOC_LITERAL(6, 85, 12), // "SelectEntity"
QT_MOC_LITERAL(7, 98, 6), // "select"
QT_MOC_LITERAL(8, 105, 22), // "EnableSelectionUpdates"
QT_MOC_LITERAL(9, 128, 6), // "enable"
QT_MOC_LITERAL(10, 135, 11), // "ResetFilter"
QT_MOC_LITERAL(11, 147, 13), // "ReapplyFilter"
QT_MOC_LITERAL(12, 161, 19), // "SearchStringChanged"
QT_MOC_LITERAL(13, 181, 13), // "AZStd::string"
QT_MOC_LITERAL(14, 195, 6), // "filter"
QT_MOC_LITERAL(15, 202, 19), // "SearchFilterChanged"
QT_MOC_LITERAL(16, 222, 33), // "AZStd::vector<ComponentTypeVa..."
QT_MOC_LITERAL(17, 256, 16), // "componentFilters"
QT_MOC_LITERAL(18, 273, 16), // "OnEntityExpanded"
QT_MOC_LITERAL(19, 290, 17), // "OnEntityCollapsed"
QT_MOC_LITERAL(20, 308, 19), // "CanReparentEntities"
QT_MOC_LITERAL(21, 328, 11), // "newParentId"
QT_MOC_LITERAL(22, 340, 12), // "EntityIdList"
QT_MOC_LITERAL(23, 353, 17), // "selectedEntityIds"
QT_MOC_LITERAL(24, 371, 16), // "ReparentEntities"
QT_MOC_LITERAL(25, 388, 14), // "beforeEntityId"
QT_MOC_LITERAL(26, 403, 16) // "InvalidateFilter"

    },
    "AzToolsFramework::EntityOutlinerListModel\0"
    "ExpandEntity\0\0AZ::EntityId\0entityId\0"
    "expand\0SelectEntity\0select\0"
    "EnableSelectionUpdates\0enable\0ResetFilter\0"
    "ReapplyFilter\0SearchStringChanged\0"
    "AZStd::string\0filter\0SearchFilterChanged\0"
    "AZStd::vector<ComponentTypeValue>\0"
    "componentFilters\0OnEntityExpanded\0"
    "OnEntityCollapsed\0CanReparentEntities\0"
    "newParentId\0EntityIdList\0selectedEntityIds\0"
    "ReparentEntities\0beforeEntityId\0"
    "InvalidateFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__EntityOutlinerListModel[] = {

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

void AzToolsFramework::EntityOutlinerListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EntityOutlinerListModel *>(_o);
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
        case 9: { bool _r = _t->CanReparentEntities((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< const EntityIdList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->ReparentEntities((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< const EntityIdList(*)>(_a[2])),(*reinterpret_cast< const AZ::EntityId(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->ReparentEntities((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< const EntityIdList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->InvalidateFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EntityOutlinerListModel::*)(const AZ::EntityId & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityOutlinerListModel::ExpandEntity)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EntityOutlinerListModel::*)(const AZ::EntityId & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityOutlinerListModel::SelectEntity)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EntityOutlinerListModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityOutlinerListModel::EnableSelectionUpdates)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EntityOutlinerListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityOutlinerListModel::ResetFilter)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EntityOutlinerListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityOutlinerListModel::ReapplyFilter)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::EntityOutlinerListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__EntityOutlinerListModel.data,
    qt_meta_data_AzToolsFramework__EntityOutlinerListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::EntityOutlinerListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::EntityOutlinerListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__EntityOutlinerListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int AzToolsFramework::EntityOutlinerListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AzToolsFramework::EntityOutlinerListModel::ExpandEntity(const AZ::EntityId & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::EntityOutlinerListModel::SelectEntity(const AZ::EntityId & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzToolsFramework::EntityOutlinerListModel::EnableSelectionUpdates(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzToolsFramework::EntityOutlinerListModel::ResetFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AzToolsFramework::EntityOutlinerListModel::ReapplyFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__EntityOutlinerCheckBox_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__EntityOutlinerCheckBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__EntityOutlinerCheckBox_t qt_meta_stringdata_AzToolsFramework__EntityOutlinerCheckBox = {
    {
QT_MOC_LITERAL(0, 0, 40) // "AzToolsFramework::EntityOutli..."

    },
    "AzToolsFramework::EntityOutlinerCheckBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__EntityOutlinerCheckBox[] = {

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

void AzToolsFramework::EntityOutlinerCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::EntityOutlinerCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__EntityOutlinerCheckBox.data,
    qt_meta_data_AzToolsFramework__EntityOutlinerCheckBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::EntityOutlinerCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::EntityOutlinerCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__EntityOutlinerCheckBox.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int AzToolsFramework::EntityOutlinerCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
