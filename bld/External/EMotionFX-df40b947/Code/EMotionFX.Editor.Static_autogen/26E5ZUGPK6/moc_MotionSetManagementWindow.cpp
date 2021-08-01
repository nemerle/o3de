/****************************************************************************
** Meta object code from reading C++ file 'MotionSetManagementWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/MotionSetsWindow/MotionSetManagementWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionSetManagementWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MotionSetManagementRenameWindow_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionSetManagementRenameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionSetManagementRenameWindow_t qt_meta_stringdata_EMStudio__MotionSetManagementRenameWindow = {
    {
QT_MOC_LITERAL(0, 0, 41), // "EMStudio::MotionSetManagement..."
QT_MOC_LITERAL(1, 42, 10), // "TextEdited"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "text"
QT_MOC_LITERAL(4, 59, 8) // "Accepted"

    },
    "EMStudio::MotionSetManagementRenameWindow\0"
    "TextEdited\0\0text\0Accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionSetManagementRenameWindow[] = {

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

void EMStudio::MotionSetManagementRenameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionSetManagementRenameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->Accepted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionSetManagementRenameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionSetManagementRenameWindow.data,
    qt_meta_data_EMStudio__MotionSetManagementRenameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionSetManagementRenameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionSetManagementRenameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionSetManagementRenameWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::MotionSetManagementRenameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_EMStudio__MotionSetManagementWindow_t {
    QByteArrayData data[13];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionSetManagementWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionSetManagementWindow_t qt_meta_stringdata_EMStudio__MotionSetManagementWindow = {
    {
QT_MOC_LITERAL(0, 0, 35), // "EMStudio::MotionSetManagement..."
QT_MOC_LITERAL(1, 36, 15), // "UpdateInterface"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 17), // "OnCreateMotionSet"
QT_MOC_LITERAL(4, 71, 26), // "OnRemoveSelectedMotionSets"
QT_MOC_LITERAL(5, 98, 25), // "OnRenameSelectedMotionSet"
QT_MOC_LITERAL(6, 124, 17), // "OnClearMotionSets"
QT_MOC_LITERAL(7, 142, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(8, 161, 6), // "OnOpen"
QT_MOC_LITERAL(9, 168, 6), // "OnSave"
QT_MOC_LITERAL(10, 175, 8), // "OnSaveAs"
QT_MOC_LITERAL(11, 184, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(12, 204, 4) // "text"

    },
    "EMStudio::MotionSetManagementWindow\0"
    "UpdateInterface\0\0OnCreateMotionSet\0"
    "OnRemoveSelectedMotionSets\0"
    "OnRenameSelectedMotionSet\0OnClearMotionSets\0"
    "OnSelectionChanged\0OnOpen\0OnSave\0"
    "OnSaveAs\0OnTextFilterChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionSetManagementWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void EMStudio::MotionSetManagementWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionSetManagementWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateInterface(); break;
        case 1: _t->OnCreateMotionSet(); break;
        case 2: _t->OnRemoveSelectedMotionSets(); break;
        case 3: _t->OnRenameSelectedMotionSet(); break;
        case 4: _t->OnClearMotionSets(); break;
        case 5: _t->OnSelectionChanged(); break;
        case 6: _t->OnOpen(); break;
        case 7: _t->OnSave(); break;
        case 8: _t->OnSaveAs(); break;
        case 9: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionSetManagementWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionSetManagementWindow.data,
    qt_meta_data_EMStudio__MotionSetManagementWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionSetManagementWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionSetManagementWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionSetManagementWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::MotionSetManagementWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
