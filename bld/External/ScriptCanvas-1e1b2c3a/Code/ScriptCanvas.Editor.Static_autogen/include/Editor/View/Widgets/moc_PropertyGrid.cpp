/****************************************************************************
** Meta object code from reading C++ file 'PropertyGrid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/PropertyGrid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyGrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__Widget__PropertyGrid_t {
    QByteArrayData data[13];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__Widget__PropertyGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__Widget__PropertyGrid_t qt_meta_stringdata_ScriptCanvasEditor__Widget__PropertyGrid = {
    {
QT_MOC_LITERAL(0, 0, 40), // "ScriptCanvasEditor::Widget::P..."
QT_MOC_LITERAL(1, 41, 14), // "UpdateContents"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 27), // "AZStd::vector<AZ::EntityId>"
QT_MOC_LITERAL(4, 85, 17), // "selectedEntityIds"
QT_MOC_LITERAL(5, 103, 19), // "OnEndpointConnected"
QT_MOC_LITERAL(6, 123, 22), // "ScriptCanvas::Endpoint"
QT_MOC_LITERAL(7, 146, 14), // "targetEndpoint"
QT_MOC_LITERAL(8, 161, 22), // "OnEndpointDisconnected"
QT_MOC_LITERAL(9, 184, 26), // "OnEndpointConvertedToValue"
QT_MOC_LITERAL(10, 211, 30), // "OnEndpointConvertedToReference"
QT_MOC_LITERAL(11, 242, 24), // "UpdateEndpointVisibility"
QT_MOC_LITERAL(12, 267, 8) // "endpoint"

    },
    "ScriptCanvasEditor::Widget::PropertyGrid\0"
    "UpdateContents\0\0AZStd::vector<AZ::EntityId>\0"
    "selectedEntityIds\0OnEndpointConnected\0"
    "ScriptCanvas::Endpoint\0targetEndpoint\0"
    "OnEndpointDisconnected\0"
    "OnEndpointConvertedToValue\0"
    "OnEndpointConvertedToReference\0"
    "UpdateEndpointVisibility\0endpoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__Widget__PropertyGrid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       8,    1,   50,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,
      10,    0,   54,    2, 0x08 /* Private */,
      11,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   12,

       0        // eod
};

void ScriptCanvasEditor::Widget::PropertyGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateContents((*reinterpret_cast< const AZStd::vector<AZ::EntityId>(*)>(_a[1]))); break;
        case 1: _t->OnEndpointConnected((*reinterpret_cast< const ScriptCanvas::Endpoint(*)>(_a[1]))); break;
        case 2: _t->OnEndpointDisconnected((*reinterpret_cast< const ScriptCanvas::Endpoint(*)>(_a[1]))); break;
        case 3: _t->OnEndpointConvertedToValue(); break;
        case 4: _t->OnEndpointConvertedToReference(); break;
        case 5: _t->UpdateEndpointVisibility((*reinterpret_cast< const ScriptCanvas::Endpoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::Widget::PropertyGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::StyledDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__Widget__PropertyGrid.data,
    qt_meta_data_ScriptCanvasEditor__Widget__PropertyGrid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::Widget::PropertyGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::Widget::PropertyGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__Widget__PropertyGrid.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::IPropertyEditorNotify"))
        return static_cast< AzToolsFramework::IPropertyEditorNotify*>(this);
    if (!strcmp(_clname, "PropertyGridRequestBus::Handler"))
        return static_cast< PropertyGridRequestBus::Handler*>(this);
    if (!strcmp(_clname, "ScriptCanvas::EndpointNotificationBus::MultiHandler"))
        return static_cast< ScriptCanvas::EndpointNotificationBus::MultiHandler*>(this);
    if (!strcmp(_clname, "ScriptCanvas::NodeNotificationsBus::MultiHandler"))
        return static_cast< ScriptCanvas::NodeNotificationsBus::MultiHandler*>(this);
    if (!strcmp(_clname, "GraphCanvas::GraphCanvasPropertyInterfaceNotificationBus::MultiHandler"))
        return static_cast< GraphCanvas::GraphCanvasPropertyInterfaceNotificationBus::MultiHandler*>(this);
    return AzQtComponents::StyledDockWidget::qt_metacast(_clname);
}

int ScriptCanvasEditor::Widget::PropertyGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::StyledDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
