/****************************************************************************
** Meta object code from reading C++ file 'VariablePaletteTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/VariablePanel/VariablePaletteTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VariablePaletteTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__VariablePaletteTableView_t {
    QByteArrayData data[14];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__VariablePaletteTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__VariablePaletteTableView_t qt_meta_stringdata_ScriptCanvasEditor__VariablePaletteTableView = {
    {
QT_MOC_LITERAL(0, 0, 44), // "ScriptCanvasEditor::VariableP..."
QT_MOC_LITERAL(1, 45, 14), // "CreateVariable"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 24), // "ScriptCanvas::Data::Type"
QT_MOC_LITERAL(4, 86, 12), // "variableType"
QT_MOC_LITERAL(5, 99, 19), // "CreateNamedVariable"
QT_MOC_LITERAL(6, 119, 13), // "AZStd::string"
QT_MOC_LITERAL(7, 133, 12), // "variableName"
QT_MOC_LITERAL(8, 146, 9), // "OnClicked"
QT_MOC_LITERAL(9, 156, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 168, 10), // "modelIndex"
QT_MOC_LITERAL(11, 179, 17), // "OnContainerPinned"
QT_MOC_LITERAL(12, 197, 10), // "AZ::TypeId"
QT_MOC_LITERAL(13, 208, 6) // "typeId"

    },
    "ScriptCanvasEditor::VariablePaletteTableView\0"
    "CreateVariable\0\0ScriptCanvas::Data::Type\0"
    "variableType\0CreateNamedVariable\0"
    "AZStd::string\0variableName\0OnClicked\0"
    "QModelIndex\0modelIndex\0OnContainerPinned\0"
    "AZ::TypeId\0typeId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__VariablePaletteTableView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   42,    2, 0x0a /* Public */,
      11,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void ScriptCanvasEditor::VariablePaletteTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VariablePaletteTableView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CreateVariable((*reinterpret_cast< const ScriptCanvas::Data::Type(*)>(_a[1]))); break;
        case 1: _t->CreateNamedVariable((*reinterpret_cast< const AZStd::string(*)>(_a[1])),(*reinterpret_cast< const ScriptCanvas::Data::Type(*)>(_a[2]))); break;
        case 2: _t->OnClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->OnContainerPinned((*reinterpret_cast< const AZ::TypeId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VariablePaletteTableView::*)(const ScriptCanvas::Data::Type & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePaletteTableView::CreateVariable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VariablePaletteTableView::*)(const AZStd::string & , const ScriptCanvas::Data::Type & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VariablePaletteTableView::CreateNamedVariable)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::VariablePaletteTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__VariablePaletteTableView.data,
    qt_meta_data_ScriptCanvasEditor__VariablePaletteTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::VariablePaletteTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::VariablePaletteTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__VariablePaletteTableView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int ScriptCanvasEditor::VariablePaletteTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
void ScriptCanvasEditor::VariablePaletteTableView::CreateVariable(const ScriptCanvas::Data::Type & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptCanvasEditor::VariablePaletteTableView::CreateNamedVariable(const AZStd::string & _t1, const ScriptCanvas::Data::Type & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
