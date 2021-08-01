/****************************************************************************
** Meta object code from reading C++ file 'NodeGroupManagementWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/NodeGroups/NodeGroupManagementWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeGroupManagementWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__NodeGroupManagementRenameWindow_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NodeGroupManagementRenameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NodeGroupManagementRenameWindow_t qt_meta_stringdata_EMStudio__NodeGroupManagementRenameWindow = {
    {
QT_MOC_LITERAL(0, 0, 41), // "EMStudio::NodeGroupManagement..."
QT_MOC_LITERAL(1, 42, 10), // "TextEdited"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "text"
QT_MOC_LITERAL(4, 59, 8) // "Accepted"

    },
    "EMStudio::NodeGroupManagementRenameWindow\0"
    "TextEdited\0\0text\0Accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NodeGroupManagementRenameWindow[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void EMStudio::NodeGroupManagementRenameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeGroupManagementRenameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->Accepted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::NodeGroupManagementRenameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NodeGroupManagementRenameWindow.data,
    qt_meta_data_EMStudio__NodeGroupManagementRenameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NodeGroupManagementRenameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NodeGroupManagementRenameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NodeGroupManagementRenameWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::NodeGroupManagementRenameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_EMStudio__NodeGroupManagementWidget_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NodeGroupManagementWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NodeGroupManagementWidget_t qt_meta_stringdata_EMStudio__NodeGroupManagementWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "EMStudio::NodeGroupManagement..."
QT_MOC_LITERAL(1, 36, 12), // "AddNodeGroup"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 23), // "RemoveSelectedNodeGroup"
QT_MOC_LITERAL(4, 74, 23), // "RenameSelectedNodeGroup"
QT_MOC_LITERAL(5, 98, 15), // "ClearNodeGroups"
QT_MOC_LITERAL(6, 114, 15), // "UpdateInterface"
QT_MOC_LITERAL(7, 130, 21), // "UpdateNodeGroupWidget"
QT_MOC_LITERAL(8, 152, 15), // "checkboxClicked"
QT_MOC_LITERAL(9, 168, 7) // "checked"

    },
    "EMStudio::NodeGroupManagementWidget\0"
    "AddNodeGroup\0\0RemoveSelectedNodeGroup\0"
    "RenameSelectedNodeGroup\0ClearNodeGroups\0"
    "UpdateInterface\0UpdateNodeGroupWidget\0"
    "checkboxClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NodeGroupManagementWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void EMStudio::NodeGroupManagementWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeGroupManagementWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddNodeGroup(); break;
        case 1: _t->RemoveSelectedNodeGroup(); break;
        case 2: _t->RenameSelectedNodeGroup(); break;
        case 3: _t->ClearNodeGroups(); break;
        case 4: _t->UpdateInterface(); break;
        case 5: _t->UpdateNodeGroupWidget(); break;
        case 6: _t->checkboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::NodeGroupManagementWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NodeGroupManagementWidget.data,
    qt_meta_data_EMStudio__NodeGroupManagementWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NodeGroupManagementWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NodeGroupManagementWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NodeGroupManagementWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::NodeGroupManagementWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
