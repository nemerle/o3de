/****************************************************************************
** Meta object code from reading C++ file 'AssetBundlerTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/AssetBundler/source/ui/AssetBundlerTabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetBundlerTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetBundler__AssetBundlerTabWidget_t {
    QByteArrayData data[10];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetBundler__AssetBundlerTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetBundler__AssetBundlerTabWidget_t qt_meta_stringdata_AssetBundler__AssetBundlerTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AssetBundler::AssetBundlerTab..."
QT_MOC_LITERAL(1, 36, 11), // "OnUpdateTab"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 13), // "AZStd::string"
QT_MOC_LITERAL(4, 63, 4), // "path"
QT_MOC_LITERAL(5, 68, 13), // "OnUpdateFiles"
QT_MOC_LITERAL(6, 82, 21), // "AssetBundlingFileType"
QT_MOC_LITERAL(7, 104, 8), // "fileType"
QT_MOC_LITERAL(8, 113, 28), // "AZStd::vector<AZStd::string>"
QT_MOC_LITERAL(9, 142, 17) // "absoluteFilePaths"

    },
    "AssetBundler::AssetBundlerTabWidget\0"
    "OnUpdateTab\0\0AZStd::string\0path\0"
    "OnUpdateFiles\0AssetBundlingFileType\0"
    "fileType\0AZStd::vector<AZStd::string>\0"
    "absoluteFilePaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetBundler__AssetBundlerTabWidget[] = {

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
       5,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,

       0        // eod
};

void AssetBundler::AssetBundlerTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetBundlerTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnUpdateTab((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 1: _t->OnUpdateFiles((*reinterpret_cast< AssetBundlingFileType(*)>(_a[1])),(*reinterpret_cast< const AZStd::vector<AZStd::string>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetBundler::AssetBundlerTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AssetBundler__AssetBundlerTabWidget.data,
    qt_meta_data_AssetBundler__AssetBundlerTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetBundler::AssetBundlerTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetBundler::AssetBundlerTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetBundler__AssetBundlerTabWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AssetBundler::AssetBundlerTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
