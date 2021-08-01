/****************************************************************************
** Meta object code from reading C++ file 'ContainerTypeLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Dialogs/ContainerWizard/ContainerTypeLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContainerTypeLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeMenu_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeMenu_t qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeMenu = {
    {
QT_MOC_LITERAL(0, 0, 37), // "ScriptCanvasEditor::Container..."
QT_MOC_LITERAL(1, 38, 21), // "ContainerTypeSelected"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 10), // "AZ::TypeId"
QT_MOC_LITERAL(4, 72, 6), // "typeId"
QT_MOC_LITERAL(5, 79, 17), // "VisibilityChanged"
QT_MOC_LITERAL(6, 97, 10) // "visibility"

    },
    "ScriptCanvasEditor::ContainerTypeMenu\0"
    "ContainerTypeSelected\0\0AZ::TypeId\0"
    "typeId\0VisibilityChanged\0visibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__ContainerTypeMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void ScriptCanvasEditor::ContainerTypeMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContainerTypeMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ContainerTypeSelected((*reinterpret_cast< const AZ::TypeId(*)>(_a[1]))); break;
        case 1: _t->VisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContainerTypeMenu::*)(const AZ::TypeId & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContainerTypeMenu::ContainerTypeSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContainerTypeMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContainerTypeMenu::VisibilityChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::ContainerTypeMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeMenu.data,
    qt_meta_data_ScriptCanvasEditor__ContainerTypeMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::ContainerTypeMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::ContainerTypeMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeMenu.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptCanvasEditor::ContainerTypeMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void ScriptCanvasEditor::ContainerTypeMenu::ContainerTypeSelected(const AZ::TypeId & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptCanvasEditor::ContainerTypeMenu::VisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeLineEdit_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeLineEdit_t qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 41), // "ScriptCanvasEditor::Container..."
QT_MOC_LITERAL(1, 42, 11), // "TypeChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 5), // "index"
QT_MOC_LITERAL(4, 61, 10), // "AZ::TypeId"
QT_MOC_LITERAL(5, 72, 6), // "typeId"
QT_MOC_LITERAL(6, 79, 29), // "DataTypeMenuVisibilityChanged"
QT_MOC_LITERAL(7, 109, 7) // "visible"

    },
    "ScriptCanvasEditor::ContainerTypeLineEdit\0"
    "TypeChanged\0\0index\0AZ::TypeId\0typeId\0"
    "DataTypeMenuVisibilityChanged\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__ContainerTypeLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       6,    1,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void ScriptCanvasEditor::ContainerTypeLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ContainerTypeLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TypeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const AZ::TypeId(*)>(_a[2]))); break;
        case 1: _t->DataTypeMenuVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ContainerTypeLineEdit::*)(int , const AZ::TypeId & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContainerTypeLineEdit::TypeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ContainerTypeLineEdit::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ContainerTypeLineEdit::DataTypeMenuVisibilityChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::ContainerTypeLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeLineEdit.data,
    qt_meta_data_ScriptCanvasEditor__ContainerTypeLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::ContainerTypeLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::ContainerTypeLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__ContainerTypeLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScriptCanvasEditor::ContainerTypeLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ScriptCanvasEditor::ContainerTypeLineEdit::TypeChanged(int _t1, const AZ::TypeId & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptCanvasEditor::ContainerTypeLineEdit::DataTypeMenuVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
