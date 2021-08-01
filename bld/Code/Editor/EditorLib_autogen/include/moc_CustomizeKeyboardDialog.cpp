/****************************************************************************
** Meta object code from reading C++ file 'CustomizeKeyboardDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/CustomizeKeyboardDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomizeKeyboardDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CustomizeKeyboardDialog_t {
    QByteArrayData data[16];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomizeKeyboardDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomizeKeyboardDialog_t qt_meta_stringdata_CustomizeKeyboardDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CustomizeKeyboardDialog"
QT_MOC_LITERAL(1, 24, 23), // "CommandSelectionChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 61, 7), // "current"
QT_MOC_LITERAL(5, 69, 8), // "previous"
QT_MOC_LITERAL(6, 78, 15), // "CategoryChanged"
QT_MOC_LITERAL(7, 94, 8), // "category"
QT_MOC_LITERAL(8, 103, 19), // "DialogButtonClicked"
QT_MOC_LITERAL(9, 123, 22), // "const QAbstractButton*"
QT_MOC_LITERAL(10, 146, 6), // "button"
QT_MOC_LITERAL(11, 153, 26), // "KeySequenceEditingFinished"
QT_MOC_LITERAL(12, 180, 19), // "AssignButtonClicked"
QT_MOC_LITERAL(13, 200, 29), // "ShortcutsViewSelectionChanged"
QT_MOC_LITERAL(14, 230, 24), // "ShortcutsViewDataChanged"
QT_MOC_LITERAL(15, 255, 15) // "ShortcutRemoved"

    },
    "CustomizeKeyboardDialog\0CommandSelectionChanged\0"
    "\0QModelIndex\0current\0previous\0"
    "CategoryChanged\0category\0DialogButtonClicked\0"
    "const QAbstractButton*\0button\0"
    "KeySequenceEditingFinished\0"
    "AssignButtonClicked\0ShortcutsViewSelectionChanged\0"
    "ShortcutsViewDataChanged\0ShortcutRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomizeKeyboardDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    2,   67,    2, 0x08 /* Private */,
      14,    0,   72,    2, 0x08 /* Private */,
      15,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomizeKeyboardDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomizeKeyboardDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CommandSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->CategoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->DialogButtonClicked((*reinterpret_cast< const QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->KeySequenceEditingFinished(); break;
        case 4: _t->AssignButtonClicked(); break;
        case 5: _t->ShortcutsViewSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->ShortcutsViewDataChanged(); break;
        case 7: _t->ShortcutRemoved(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CustomizeKeyboardDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CustomizeKeyboardDialog.data,
    qt_meta_data_CustomizeKeyboardDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CustomizeKeyboardDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomizeKeyboardDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CustomizeKeyboardDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CustomizeKeyboardDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
