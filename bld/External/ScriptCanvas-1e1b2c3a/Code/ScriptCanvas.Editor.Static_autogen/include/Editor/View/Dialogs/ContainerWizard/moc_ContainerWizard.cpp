/****************************************************************************
** Meta object code from reading C++ file 'ContainerWizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Dialogs/ContainerWizard/ContainerWizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContainerWizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__ContainerWizard_t {
    QByteArrayData data[18];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__ContainerWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__ContainerWizard_t qt_meta_stringdata_ScriptCanvasEditor__ContainerWizard = {
    {
QT_MOC_LITERAL(0, 0, 35), // "ScriptCanvasEditor::Container..."
QT_MOC_LITERAL(1, 36, 15), // "ContainerPinned"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 10), // "AZ::TypeId"
QT_MOC_LITERAL(4, 64, 6), // "typeId"
QT_MOC_LITERAL(5, 71, 23), // "CreateContainerVariable"
QT_MOC_LITERAL(6, 95, 13), // "AZStd::string"
QT_MOC_LITERAL(7, 109, 12), // "variableName"
QT_MOC_LITERAL(8, 122, 14), // "ReparseDisplay"
QT_MOC_LITERAL(9, 137, 10), // "OnFinished"
QT_MOC_LITERAL(10, 148, 6), // "result"
QT_MOC_LITERAL(11, 155, 22), // "OnContainerTypeChanged"
QT_MOC_LITERAL(12, 178, 5), // "index"
QT_MOC_LITERAL(13, 184, 13), // "OnTypeChanged"
QT_MOC_LITERAL(14, 198, 31), // "OnDataTypeMenuVisibilityChanged"
QT_MOC_LITERAL(15, 230, 7), // "visible"
QT_MOC_LITERAL(16, 238, 12), // "ValidateName"
QT_MOC_LITERAL(17, 251, 7) // "newName"

    },
    "ScriptCanvasEditor::ContainerWizard\0"
    "ContainerPinned\0\0AZ::TypeId\0typeId\0"
    "CreateContainerVariable\0AZStd::string\0"
    "variableName\0ReparseDisplay\0OnFinished\0"
    "result\0OnContainerTypeChanged\0index\0"
    "OnTypeChanged\0OnDataTypeMenuVisibilityChanged\0"
    "visible\0ValidateName\0newName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__ContainerWizard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      13,    2,   69,    2, 0x0a /* Public */,
      14,    1,   74,    2, 0x0a /* Public */,
      16,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,   12,    4,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void ScriptCanvasEditor::ContainerWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContainerWizard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ContainerPinned((*reinterpret_cast< const AZ::TypeId(*)>(_a[1]))); break;
        case 1: _t->CreateContainerVariable((*reinterpret_cast< const AZStd::string(*)>(_a[1])),(*reinterpret_cast< const AZ::TypeId(*)>(_a[2]))); break;
        case 2: _t->ReparseDisplay(); break;
        case 3: _t->OnFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnContainerTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnTypeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const AZ::TypeId(*)>(_a[2]))); break;
        case 6: _t->OnDataTypeMenuVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->ValidateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContainerWizard::*)(const AZ::TypeId & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContainerWizard::ContainerPinned)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContainerWizard::*)(const AZStd::string & , const AZ::TypeId & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContainerWizard::CreateContainerVariable)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::ContainerWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__ContainerWizard.data,
    qt_meta_data_ScriptCanvasEditor__ContainerWizard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::ContainerWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::ContainerWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__ContainerWizard.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptCanvasEditor::ContainerWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ScriptCanvasEditor::ContainerWizard::ContainerPinned(const AZ::TypeId & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptCanvasEditor::ContainerWizard::CreateContainerVariable(const AZStd::string & _t1, const AZ::TypeId & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
