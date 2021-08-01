/****************************************************************************
** Meta object code from reading C++ file 'EBusHandlerActionMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Windows/EBusHandlerActionMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EBusHandlerActionMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionSourceModel_t {
    QByteArrayData data[1];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionSourceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionSourceModel_t qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionSourceModel = {
    {
QT_MOC_LITERAL(0, 0, 48) // "ScriptCanvasEditor::EBusHandl..."

    },
    "ScriptCanvasEditor::EBusHandlerActionSourceModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__EBusHandlerActionSourceModel[] = {

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

void ScriptCanvasEditor::EBusHandlerActionSourceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::EBusHandlerActionSourceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionSourceModel.data,
    qt_meta_data_ScriptCanvasEditor__EBusHandlerActionSourceModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::EBusHandlerActionSourceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::EBusHandlerActionSourceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionSourceModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ScriptCanvasEditor::EBusHandlerActionSourceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel_t {
    QByteArrayData data[4];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel_t qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 53), // "ScriptCanvasEditor::EBusHandl..."
QT_MOC_LITERAL(1, 54, 15), // "OnFilterChanged"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 4) // "text"

    },
    "ScriptCanvasEditor::EBusHandlerActionFilterProxyModel\0"
    "OnFilterChanged\0\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void ScriptCanvasEditor::EBusHandlerActionFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EBusHandlerActionFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::EBusHandlerActionFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel.data,
    qt_meta_data_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::EBusHandlerActionFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::EBusHandlerActionFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ScriptCanvasEditor::EBusHandlerActionFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionMenu_t {
    QByteArrayData data[6];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionMenu_t qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionMenu = {
    {
QT_MOC_LITERAL(0, 0, 41), // "ScriptCanvasEditor::EBusHandl..."
QT_MOC_LITERAL(1, 42, 11), // "ResetFilter"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 11), // "ItemClicked"
QT_MOC_LITERAL(4, 67, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 79, 10) // "modelIndex"

    },
    "ScriptCanvasEditor::EBusHandlerActionMenu\0"
    "ResetFilter\0\0ItemClicked\0QModelIndex\0"
    "modelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__EBusHandlerActionMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void ScriptCanvasEditor::EBusHandlerActionMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EBusHandlerActionMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ResetFilter(); break;
        case 1: _t->ItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::EBusHandlerActionMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionMenu.data,
    qt_meta_data_ScriptCanvasEditor__EBusHandlerActionMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::EBusHandlerActionMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::EBusHandlerActionMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__EBusHandlerActionMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int ScriptCanvasEditor::EBusHandlerActionMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
