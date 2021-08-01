/****************************************************************************
** Meta object code from reading C++ file 'NodeGroupWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/NodeGroupWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeGroupWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__NodeGroupRenameWindow_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NodeGroupRenameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NodeGroupRenameWindow_t qt_meta_stringdata_EMStudio__NodeGroupRenameWindow = {
    {
QT_MOC_LITERAL(0, 0, 31), // "EMStudio::NodeGroupRenameWindow"
QT_MOC_LITERAL(1, 32, 10), // "TextEdited"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "text"
QT_MOC_LITERAL(4, 49, 8) // "Accepted"

    },
    "EMStudio::NodeGroupRenameWindow\0"
    "TextEdited\0\0text\0Accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NodeGroupRenameWindow[] = {

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

void EMStudio::NodeGroupRenameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeGroupRenameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->Accepted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::NodeGroupRenameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NodeGroupRenameWindow.data,
    qt_meta_data_EMStudio__NodeGroupRenameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NodeGroupRenameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NodeGroupRenameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NodeGroupRenameWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::NodeGroupRenameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_EMStudio__NodeGroupWindow_t {
    QByteArrayData data[18];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NodeGroupWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NodeGroupWindow_t qt_meta_stringdata_EMStudio__NodeGroupWindow = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EMStudio::NodeGroupWindow"
QT_MOC_LITERAL(1, 26, 14), // "OnAddNodeGroup"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 22), // "OnRemoveSelectedGroups"
QT_MOC_LITERAL(4, 65, 25), // "OnRenameSelectedNodeGroup"
QT_MOC_LITERAL(5, 91, 17), // "OnClearNodeGroups"
QT_MOC_LITERAL(6, 109, 11), // "OnIsVisible"
QT_MOC_LITERAL(7, 121, 5), // "state"
QT_MOC_LITERAL(8, 127, 3), // "row"
QT_MOC_LITERAL(9, 131, 14), // "OnColorChanged"
QT_MOC_LITERAL(10, 146, 9), // "AZ::Color"
QT_MOC_LITERAL(11, 156, 5), // "color"
QT_MOC_LITERAL(12, 162, 13), // "OnItemChanged"
QT_MOC_LITERAL(13, 176, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(14, 194, 4), // "item"
QT_MOC_LITERAL(15, 199, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(16, 219, 4), // "text"
QT_MOC_LITERAL(17, 224, 15) // "UpdateInterface"

    },
    "EMStudio::NodeGroupWindow\0OnAddNodeGroup\0"
    "\0OnRemoveSelectedGroups\0"
    "OnRenameSelectedNodeGroup\0OnClearNodeGroups\0"
    "OnIsVisible\0state\0row\0OnColorChanged\0"
    "AZ::Color\0color\0OnItemChanged\0"
    "QTableWidgetItem*\0item\0OnTextFilterChanged\0"
    "text\0UpdateInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NodeGroupWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    2,   63,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,
      15,    1,   74,    2, 0x08 /* Private */,
      17,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void EMStudio::NodeGroupWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeGroupWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAddNodeGroup(); break;
        case 1: _t->OnRemoveSelectedGroups(); break;
        case 2: _t->OnRenameSelectedNodeGroup(); break;
        case 3: _t->OnClearNodeGroups(); break;
        case 4: _t->OnIsVisible((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OnColorChanged((*reinterpret_cast< const AZ::Color(*)>(_a[1]))); break;
        case 6: _t->OnItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->UpdateInterface(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::NodeGroupWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NodeGroupWindow.data,
    qt_meta_data_EMStudio__NodeGroupWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NodeGroupWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NodeGroupWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NodeGroupWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::NodeGroupWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
