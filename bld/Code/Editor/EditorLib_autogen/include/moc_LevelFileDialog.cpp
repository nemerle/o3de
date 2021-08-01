/****************************************************************************
** Meta object code from reading C++ file 'LevelFileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/LevelFileDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LevelFileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CLevelFileDialog_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLevelFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLevelFileDialog_t qt_meta_stringdata_CLevelFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CLevelFileDialog"
QT_MOC_LITERAL(1, 17, 4), // "OnOK"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "OnCancel"
QT_MOC_LITERAL(4, 32, 22), // "OnTreeSelectionChanged"
QT_MOC_LITERAL(5, 55, 11), // "OnNewFolder"
QT_MOC_LITERAL(6, 67, 15), // "OnFilterChanged"
QT_MOC_LITERAL(7, 83, 13) // "OnNameChanged"

    },
    "CLevelFileDialog\0OnOK\0\0OnCancel\0"
    "OnTreeSelectionChanged\0OnNewFolder\0"
    "OnFilterChanged\0OnNameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLevelFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CLevelFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CLevelFileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOK(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnTreeSelectionChanged(); break;
        case 3: _t->OnNewFolder(); break;
        case 4: _t->OnFilterChanged(); break;
        case 5: _t->OnNameChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CLevelFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLevelFileDialog.data,
    qt_meta_data_CLevelFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CLevelFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLevelFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLevelFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CLevelFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
