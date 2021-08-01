/****************************************************************************
** Meta object code from reading C++ file 'PropertiesWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/LyShine/Code/Editor/PropertiesWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertiesWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertiesWidget_t {
    QByteArrayData data[10];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertiesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertiesWidget_t qt_meta_stringdata_PropertiesWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PropertiesWidget"
QT_MOC_LITERAL(1, 17, 20), // "UserSelectionChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "HierarchyItemRawPtrList*"
QT_MOC_LITERAL(4, 64, 5), // "items"
QT_MOC_LITERAL(5, 70, 7), // "Refresh"
QT_MOC_LITERAL(6, 78, 50), // "AzToolsFramework::PropertyMod..."
QT_MOC_LITERAL(7, 129, 12), // "refreshLevel"
QT_MOC_LITERAL(8, 142, 15), // "const AZ::Uuid*"
QT_MOC_LITERAL(9, 158, 13) // "componentType"

    },
    "PropertiesWidget\0UserSelectionChanged\0"
    "\0HierarchyItemRawPtrList*\0items\0Refresh\0"
    "AzToolsFramework::PropertyModificationRefreshLevel\0"
    "refreshLevel\0const AZ::Uuid*\0componentType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertiesWidget[] = {

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
       5,    2,   37,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x28 /* Private | MethodCloned */,
       5,    0,   45,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void PropertiesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertiesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UserSelectionChanged((*reinterpret_cast< HierarchyItemRawPtrList*(*)>(_a[1]))); break;
        case 1: _t->Refresh((*reinterpret_cast< AzToolsFramework::PropertyModificationRefreshLevel(*)>(_a[1])),(*reinterpret_cast< const AZ::Uuid*(*)>(_a[2]))); break;
        case 2: _t->Refresh((*reinterpret_cast< AzToolsFramework::PropertyModificationRefreshLevel(*)>(_a[1]))); break;
        case 3: _t->Refresh(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PropertiesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PropertiesWidget.data,
    qt_meta_data_PropertiesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertiesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertiesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertiesWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::IPropertyEditorNotify"))
        return static_cast< AzToolsFramework::IPropertyEditorNotify*>(this);
    if (!strcmp(_clname, "AzToolsFramework::ToolsApplicationEvents::Bus::Handler"))
        return static_cast< AzToolsFramework::ToolsApplicationEvents::Bus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int PropertiesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
