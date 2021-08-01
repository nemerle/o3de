/****************************************************************************
** Meta object code from reading C++ file 'AssetPickerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/AssetBrowser/AssetPicker/AssetPickerDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetPickerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetPickerDialog_t {
    QByteArrayData data[8];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetPickerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetPickerDialog_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetPickerDialog = {
    {
QT_MOC_LITERAL(0, 0, 49), // "AzToolsFramework::AssetBrowse..."
QT_MOC_LITERAL(1, 50, 17), // "DoubleClickedSlot"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 81, 5), // "index"
QT_MOC_LITERAL(5, 87, 20), // "SelectionChangedSlot"
QT_MOC_LITERAL(6, 108, 12), // "RestoreState"
QT_MOC_LITERAL(7, 121, 15) // "OnFilterUpdated"

    },
    "AzToolsFramework::AssetBrowser::AssetPickerDialog\0"
    "DoubleClickedSlot\0\0QModelIndex\0index\0"
    "SelectionChangedSlot\0RestoreState\0"
    "OnFilterUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__AssetPickerDialog[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::AssetBrowser::AssetPickerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetPickerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DoubleClickedSlot((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->SelectionChangedSlot(); break;
        case 2: _t->RestoreState(); break;
        case 3: _t->OnFilterUpdated(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::AssetPickerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetPickerDialog.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__AssetPickerDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::AssetPickerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::AssetPickerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetPickerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::AssetPickerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
