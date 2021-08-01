/****************************************************************************
** Meta object code from reading C++ file 'EntityPropertyEditor.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/EntityPropertyEditor.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityPropertyEditor.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__EntityPropertyEditor_t {
    QByteArrayData data[25];
    char stringdata0[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__EntityPropertyEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__EntityPropertyEditor_t qt_meta_stringdata_AzToolsFramework__EntityPropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 38), // "AzToolsFramework::EntityPrope..."
QT_MOC_LITERAL(1, 39, 25), // "SelectedEntityNameChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 12), // "AZ::EntityId"
QT_MOC_LITERAL(4, 79, 8), // "entityId"
QT_MOC_LITERAL(5, 88, 13), // "AZStd::string"
QT_MOC_LITERAL(6, 102, 4), // "name"
QT_MOC_LITERAL(7, 107, 25), // "OnPropertyRefreshRequired"
QT_MOC_LITERAL(8, 133, 14), // "UpdateContents"
QT_MOC_LITERAL(9, 148, 14), // "OnAddComponent"
QT_MOC_LITERAL(10, 163, 19), // "OnEntityNameChanged"
QT_MOC_LITERAL(11, 183, 20), // "ScrollToNewComponent"
QT_MOC_LITERAL(12, 204, 25), // "QueueScrollToNewComponent"
QT_MOC_LITERAL(13, 230, 15), // "OnStatusChanged"
QT_MOC_LITERAL(14, 246, 5), // "index"
QT_MOC_LITERAL(15, 252, 19), // "OnSearchContextMenu"
QT_MOC_LITERAL(16, 272, 3), // "pos"
QT_MOC_LITERAL(17, 276, 19), // "BuildEntityIconMenu"
QT_MOC_LITERAL(18, 296, 19), // "OnSearchTextChanged"
QT_MOC_LITERAL(19, 316, 17), // "ClearSearchFilter"
QT_MOC_LITERAL(20, 334, 19), // "OpenPinnedInspector"
QT_MOC_LITERAL(21, 354, 44), // "SelectedEntitiesAreFromSameSo..."
QT_MOC_LITERAL(22, 399, 21), // "GetSelectedEntityById"
QT_MOC_LITERAL(23, 421, 11), // "AZ::Entity*"
QT_MOC_LITERAL(24, 433, 13) // "AZ::EntityId&"

    },
    "AzToolsFramework::EntityPropertyEditor\0"
    "SelectedEntityNameChanged\0\0AZ::EntityId\0"
    "entityId\0AZStd::string\0name\0"
    "OnPropertyRefreshRequired\0UpdateContents\0"
    "OnAddComponent\0OnEntityNameChanged\0"
    "ScrollToNewComponent\0QueueScrollToNewComponent\0"
    "OnStatusChanged\0index\0OnSearchContextMenu\0"
    "pos\0BuildEntityIconMenu\0OnSearchTextChanged\0"
    "ClearSearchFilter\0OpenPinnedInspector\0"
    "SelectedEntitiesAreFromSameSourceSliceEntity\0"
    "GetSelectedEntityById\0AZ::Entity*\0"
    "AZ::EntityId&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__EntityPropertyEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,
      19,    0,  108,    2, 0x08 /* Private */,
      20,    0,  109,    2, 0x08 /* Private */,
      21,    0,  110,    2, 0x08 /* Private */,
      22,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    0x80000000 | 23, 0x80000000 | 24,    4,

       0        // eod
};

void AzToolsFramework::EntityPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EntityPropertyEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectedEntityNameChanged((*reinterpret_cast< const AZ::EntityId(*)>(_a[1])),(*reinterpret_cast< const AZStd::string(*)>(_a[2]))); break;
        case 1: _t->OnPropertyRefreshRequired(); break;
        case 2: _t->UpdateContents(); break;
        case 3: _t->OnAddComponent(); break;
        case 4: _t->OnEntityNameChanged(); break;
        case 5: _t->ScrollToNewComponent(); break;
        case 6: _t->QueueScrollToNewComponent(); break;
        case 7: _t->OnStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->OnSearchContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->BuildEntityIconMenu(); break;
        case 10: _t->OnSearchTextChanged(); break;
        case 11: _t->ClearSearchFilter(); break;
        case 12: _t->OpenPinnedInspector(); break;
        case 13: { bool _r = _t->SelectedEntitiesAreFromSameSourceSliceEntity();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { AZ::Entity* _r = _t->GetSelectedEntityById((*reinterpret_cast< AZ::EntityId(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AZ::Entity**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EntityPropertyEditor::*)(const AZ::EntityId & , const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityPropertyEditor::SelectedEntityNameChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::EntityPropertyEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__EntityPropertyEditor.data,
    qt_meta_data_AzToolsFramework__EntityPropertyEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::EntityPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::EntityPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__EntityPropertyEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IPropertyEditorNotify"))
        return static_cast< IPropertyEditorNotify*>(this);
    if (!strcmp(_clname, "AzToolsFramework::EditorEntityContextNotificationBus::Handler"))
        return static_cast< AzToolsFramework::EditorEntityContextNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::EntityPropertyEditorRequestBus::Handler"))
        return static_cast< AzToolsFramework::EntityPropertyEditorRequestBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyEditorEntityChangeNotificationBus::MultiHandler"))
        return static_cast< AzToolsFramework::PropertyEditorEntityChangeNotificationBus::MultiHandler*>(this);
    if (!strcmp(_clname, "EditorInspectorComponentNotificationBus::MultiHandler"))
        return static_cast< EditorInspectorComponentNotificationBus::MultiHandler*>(this);
    if (!strcmp(_clname, "AZ::EntitySystemBus::Handler"))
        return static_cast< AZ::EntitySystemBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::EntityPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::EntityPropertyEditor::SelectedEntityNameChanged(const AZ::EntityId & _t1, const AZStd::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StatusComboBox_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusComboBox_t qt_meta_stringdata_StatusComboBox = {
    {
QT_MOC_LITERAL(0, 0, 14) // "StatusComboBox"

    },
    "StatusComboBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusComboBox[] = {

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

void StatusComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatusComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_StatusComboBox.data,
    qt_meta_data_StatusComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int StatusComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
