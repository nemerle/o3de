/****************************************************************************
** Meta object code from reading C++ file 'KeyboardShortcutsWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/EMStudioSDK/Source/KeyboardShortcutsWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyboardShortcutsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__ShortcutReceiverDialog_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ShortcutReceiverDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ShortcutReceiverDialog_t qt_meta_stringdata_EMStudio__ShortcutReceiverDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "EMStudio::ShortcutReceiverDialog"
QT_MOC_LITERAL(1, 33, 14), // "ResetToDefault"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "EMStudio::ShortcutReceiverDialog\0"
    "ResetToDefault\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ShortcutReceiverDialog[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void EMStudio::ShortcutReceiverDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutReceiverDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ResetToDefault(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ShortcutReceiverDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ShortcutReceiverDialog.data,
    qt_meta_data_EMStudio__ShortcutReceiverDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ShortcutReceiverDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ShortcutReceiverDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ShortcutReceiverDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::ShortcutReceiverDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_EMStudio__KeyboardShortcutsWindow_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__KeyboardShortcutsWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__KeyboardShortcutsWindow_t qt_meta_stringdata_EMStudio__KeyboardShortcutsWindow = {
    {
QT_MOC_LITERAL(0, 0, 33), // "EMStudio::KeyboardShortcutsWi..."
QT_MOC_LITERAL(1, 34, 23), // "OnGroupSelectionChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 16), // "OnShortcutChange"
QT_MOC_LITERAL(4, 76, 3), // "row"
QT_MOC_LITERAL(5, 80, 6), // "column"
QT_MOC_LITERAL(6, 87, 16), // "OnResetToDefault"
QT_MOC_LITERAL(7, 104, 14) // "OnAssignNewKey"

    },
    "EMStudio::KeyboardShortcutsWindow\0"
    "OnGroupSelectionChanged\0\0OnShortcutChange\0"
    "row\0column\0OnResetToDefault\0OnAssignNewKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__KeyboardShortcutsWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    2,   35,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::KeyboardShortcutsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KeyboardShortcutsWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnGroupSelectionChanged(); break;
        case 1: _t->OnShortcutChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->OnResetToDefault(); break;
        case 3: _t->OnAssignNewKey(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::KeyboardShortcutsWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__KeyboardShortcutsWindow.data,
    qt_meta_data_EMStudio__KeyboardShortcutsWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::KeyboardShortcutsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::KeyboardShortcutsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__KeyboardShortcutsWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::KeyboardShortcutsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
