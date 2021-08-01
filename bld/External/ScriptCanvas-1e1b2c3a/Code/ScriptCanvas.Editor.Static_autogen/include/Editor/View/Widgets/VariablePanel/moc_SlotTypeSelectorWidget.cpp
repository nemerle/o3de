/****************************************************************************
** Meta object code from reading C++ file 'SlotTypeSelectorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/VariablePanel/SlotTypeSelectorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlotTypeSelectorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__SlotTypeSelectorWidget_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__SlotTypeSelectorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__SlotTypeSelectorWidget_t qt_meta_stringdata_ScriptCanvasEditor__SlotTypeSelectorWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "ScriptCanvasEditor::SlotTypeS..."
QT_MOC_LITERAL(1, 43, 26), // "OnVariableSelectionChanged"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 27), // "AZStd::vector<AZ::EntityId>"
QT_MOC_LITERAL(4, 99, 11), // "variableIds"
QT_MOC_LITERAL(5, 111, 16), // "OnCreateVariable"
QT_MOC_LITERAL(6, 128, 24), // "ScriptCanvas::Data::Type"
QT_MOC_LITERAL(7, 153, 7) // "varType"

    },
    "ScriptCanvasEditor::SlotTypeSelectorWidget\0"
    "OnVariableSelectionChanged\0\0"
    "AZStd::vector<AZ::EntityId>\0variableIds\0"
    "OnCreateVariable\0ScriptCanvas::Data::Type\0"
    "varType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__SlotTypeSelectorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ScriptCanvasEditor::SlotTypeSelectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SlotTypeSelectorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnVariableSelectionChanged((*reinterpret_cast< const AZStd::vector<AZ::EntityId>(*)>(_a[1]))); break;
        case 1: _t->OnCreateVariable((*reinterpret_cast< ScriptCanvas::Data::Type(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SlotTypeSelectorWidget::*)(const AZStd::vector<AZ::EntityId> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlotTypeSelectorWidget::OnVariableSelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::SlotTypeSelectorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::StyledDialog::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__SlotTypeSelectorWidget.data,
    qt_meta_data_ScriptCanvasEditor__SlotTypeSelectorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::SlotTypeSelectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::SlotTypeSelectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__SlotTypeSelectorWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::EditorEvents::Bus::Handler"))
        return static_cast< AzToolsFramework::EditorEvents::Bus::Handler*>(this);
    return AzQtComponents::StyledDialog::qt_metacast(_clname);
}

int ScriptCanvasEditor::SlotTypeSelectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::StyledDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ScriptCanvasEditor::SlotTypeSelectorWidget::OnVariableSelectionChanged(const AZStd::vector<AZ::EntityId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
