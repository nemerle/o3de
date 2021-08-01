/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/ui/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "ShowWindow"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 30), // "SyncAllowedListAndRejectedList"
QT_MOC_LITERAL(4, 54, 11), // "allowedList"
QT_MOC_LITERAL(5, 66, 12), // "rejectedList"
QT_MOC_LITERAL(6, 79, 27), // "FirstTimeAddedToRejctedList"
QT_MOC_LITERAL(7, 107, 9), // "ipAddress"
QT_MOC_LITERAL(8, 117, 17), // "SaveLogPanelState"
QT_MOC_LITERAL(9, 135, 29), // "OnAssetProcessorStatusChanged"
QT_MOC_LITERAL(10, 165, 41), // "AssetProcessor::AssetProcesso..."
QT_MOC_LITERAL(11, 207, 5), // "entry"
QT_MOC_LITERAL(12, 213, 21), // "OnRescanButtonClicked"
QT_MOC_LITERAL(13, 235, 14), // "HighlightAsset"
QT_MOC_LITERAL(14, 250, 9), // "assetPath"
QT_MOC_LITERAL(15, 260, 16), // "OnAssetTabChange"
QT_MOC_LITERAL(16, 277, 5), // "index"
QT_MOC_LITERAL(17, 283, 11) // "ApplyConfig"

    },
    "MainWindow\0ShowWindow\0\0"
    "SyncAllowedListAndRejectedList\0"
    "allowedList\0rejectedList\0"
    "FirstTimeAddedToRejctedList\0ipAddress\0"
    "SaveLogPanelState\0OnAssetProcessorStatusChanged\0"
    "AssetProcessor::AssetProcessorStatusEntry\0"
    "entry\0OnRescanButtonClicked\0HighlightAsset\0"
    "assetPath\0OnAssetTabChange\0index\0"
    "ApplyConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    2,   60,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       8,    0,   68,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x0a /* Public */,
      13,    1,   73,    2, 0x0a /* Public */,
      15,    1,   76,    2, 0x0a /* Public */,
      17,    0,   79,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowWindow(); break;
        case 1: _t->SyncAllowedListAndRejectedList((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 2: _t->FirstTimeAddedToRejctedList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SaveLogPanelState(); break;
        case 4: _t->OnAssetProcessorStatusChanged((*reinterpret_cast< const AssetProcessor::AssetProcessorStatusEntry(*)>(_a[1]))); break;
        case 5: _t->OnRescanButtonClicked(); break;
        case 6: _t->HighlightAsset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->OnAssetTabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->ApplyConfig(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
