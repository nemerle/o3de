/****************************************************************************
** Meta object code from reading C++ file 'VariableDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/VariablePanel/VariableDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VariableDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__VariableDockWidget_t {
    QByteArrayData data[19];
    char stringdata0[391];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__VariableDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__VariableDockWidget_t qt_meta_stringdata_ScriptCanvasEditor__VariableDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "ScriptCanvasEditor::VariableD..."
QT_MOC_LITERAL(1, 39, 26), // "OnVariableSelectionChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 27), // "AZStd::vector<AZ::EntityId>"
QT_MOC_LITERAL(4, 95, 11), // "variableIds"
QT_MOC_LITERAL(5, 107, 16), // "OnCreateVariable"
QT_MOC_LITERAL(6, 124, 24), // "ScriptCanvas::Data::Type"
QT_MOC_LITERAL(7, 149, 7), // "varType"
QT_MOC_LITERAL(8, 157, 21), // "OnCreateNamedVariable"
QT_MOC_LITERAL(9, 179, 13), // "AZStd::string"
QT_MOC_LITERAL(10, 193, 12), // "variableName"
QT_MOC_LITERAL(11, 206, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(12, 225, 46), // "AZStd::unordered_set<ScriptCa..."
QT_MOC_LITERAL(13, 272, 19), // "OnDuplicateVariable"
QT_MOC_LITERAL(14, 292, 24), // "ScriptCanvas::VariableId"
QT_MOC_LITERAL(15, 317, 10), // "variableId"
QT_MOC_LITERAL(16, 328, 17), // "OnDeleteVariables"
QT_MOC_LITERAL(17, 346, 20), // "OnHighlightVariables"
QT_MOC_LITERAL(18, 367, 23) // "OnRemoveUnusedVariables"

    },
    "ScriptCanvasEditor::VariableDockWidget\0"
    "OnVariableSelectionChanged\0\0"
    "AZStd::vector<AZ::EntityId>\0variableIds\0"
    "OnCreateVariable\0ScriptCanvas::Data::Type\0"
    "varType\0OnCreateNamedVariable\0"
    "AZStd::string\0variableName\0"
    "OnSelectionChanged\0"
    "AZStd::unordered_set<ScriptCanvas::VariableId>\0"
    "OnDuplicateVariable\0ScriptCanvas::VariableId\0"
    "variableId\0OnDeleteVariables\0"
    "OnHighlightVariables\0OnRemoveUnusedVariables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__VariableDockWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       8,    2,   60,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,
      13,    1,   68,    2, 0x0a /* Public */,
      16,    1,   71,    2, 0x0a /* Public */,
      17,    1,   74,    2, 0x0a /* Public */,
      18,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 6,   10,    7,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void,

       0        // eod
};

void ScriptCanvasEditor::VariableDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VariableDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnVariableSelectionChanged((*reinterpret_cast< const AZStd::vector<AZ::EntityId>(*)>(_a[1]))); break;
        case 1: _t->OnCreateVariable((*reinterpret_cast< ScriptCanvas::Data::Type(*)>(_a[1]))); break;
        case 2: _t->OnCreateNamedVariable((*reinterpret_cast< const AZStd::string(*)>(_a[1])),(*reinterpret_cast< ScriptCanvas::Data::Type(*)>(_a[2]))); break;
        case 3: _t->OnSelectionChanged((*reinterpret_cast< const AZStd::unordered_set<ScriptCanvas::VariableId>(*)>(_a[1]))); break;
        case 4: _t->OnDuplicateVariable((*reinterpret_cast< const ScriptCanvas::VariableId(*)>(_a[1]))); break;
        case 5: _t->OnDeleteVariables((*reinterpret_cast< const AZStd::unordered_set<ScriptCanvas::VariableId>(*)>(_a[1]))); break;
        case 6: _t->OnHighlightVariables((*reinterpret_cast< const AZStd::unordered_set<ScriptCanvas::VariableId>(*)>(_a[1]))); break;
        case 7: _t->OnRemoveUnusedVariables(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VariableDockWidget::*)(const AZStd::vector<AZ::EntityId> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariableDockWidget::OnVariableSelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::VariableDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::StyledDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__VariableDockWidget.data,
    qt_meta_data_ScriptCanvasEditor__VariableDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::VariableDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::VariableDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__VariableDockWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GraphCanvas::AssetEditorNotificationBus::Handler"))
        return static_cast< GraphCanvas::AssetEditorNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::EditorEvents::Bus::Handler"))
        return static_cast< AzToolsFramework::EditorEvents::Bus::Handler*>(this);
    if (!strcmp(_clname, "VariableAutomationRequestBus::Handler"))
        return static_cast< VariableAutomationRequestBus::Handler*>(this);
    return AzQtComponents::StyledDockWidget::qt_metacast(_clname);
}

int ScriptCanvasEditor::VariableDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::StyledDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ScriptCanvasEditor::VariableDockWidget::OnVariableSelectionChanged(const AZStd::vector<AZ::EntityId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
