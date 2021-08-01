/****************************************************************************
** Meta object code from reading C++ file 'AssetImporterDragAndDropHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Editor/AssetImporter/AssetImporterManager/AssetImporterDragAndDropHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetImporterDragAndDropHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetImporterDragAndDropHandler_t {
    QByteArrayData data[6];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetImporterDragAndDropHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetImporterDragAndDropHandler_t qt_meta_stringdata_AssetImporterDragAndDropHandler = {
    {
QT_MOC_LITERAL(0, 0, 31), // "AssetImporterDragAndDropHandler"
QT_MOC_LITERAL(1, 32, 24), // "OpenAssetImporterManager"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 8), // "fileList"
QT_MOC_LITERAL(4, 67, 20), // "OnStartAssetImporter"
QT_MOC_LITERAL(5, 88, 19) // "OnStopAssetImporter"

    },
    "AssetImporterDragAndDropHandler\0"
    "OpenAssetImporterManager\0\0fileList\0"
    "OnStartAssetImporter\0OnStopAssetImporter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetImporterDragAndDropHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssetImporterDragAndDropHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetImporterDragAndDropHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenAssetImporterManager((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->OnStartAssetImporter(); break;
        case 2: _t->OnStopAssetImporter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetImporterDragAndDropHandler::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetImporterDragAndDropHandler::OpenAssetImporterManager)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetImporterDragAndDropHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetImporterDragAndDropHandler.data,
    qt_meta_data_AssetImporterDragAndDropHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetImporterDragAndDropHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetImporterDragAndDropHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetImporterDragAndDropHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzQtComponents::DragAndDropEventsBus::Handler"))
        return static_cast< AzQtComponents::DragAndDropEventsBus::Handler*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetImporterDragAndDropHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AssetImporterDragAndDropHandler::OpenAssetImporterManager(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
