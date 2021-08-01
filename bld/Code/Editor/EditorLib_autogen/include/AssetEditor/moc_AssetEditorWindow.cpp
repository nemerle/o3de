/****************************************************************************
** Meta object code from reading C++ file 'AssetEditorWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/AssetEditor/AssetEditorWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetEditorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetEditorWindow_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetEditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetEditorWindow_t qt_meta_stringdata_AssetEditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AssetEditorWindow"
QT_MOC_LITERAL(1, 18, 17), // "OnAssetSaveFailed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "AZStd::string"
QT_MOC_LITERAL(4, 51, 5), // "error"
QT_MOC_LITERAL(5, 57, 13), // "OnAssetOpened"
QT_MOC_LITERAL(6, 71, 36), // "AZ::Data::Asset<AZ::Data::Ass..."
QT_MOC_LITERAL(7, 108, 5) // "asset"

    },
    "AssetEditorWindow\0OnAssetSaveFailed\0"
    "\0AZStd::string\0error\0OnAssetOpened\0"
    "AZ::Data::Asset<AZ::Data::AssetData>\0"
    "asset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetEditorWindow[] = {

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
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void AssetEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetEditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAssetSaveFailed((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 1: _t->OnAssetOpened((*reinterpret_cast< const AZ::Data::Asset<AZ::Data::AssetData>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetEditorWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AssetEditorWindow.data,
    qt_meta_data_AssetEditorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetEditorWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::AssetEditor::AssetEditorWidgetRequestsBus::Handler"))
        return static_cast< AzToolsFramework::AssetEditor::AssetEditorWidgetRequestsBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int AssetEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
