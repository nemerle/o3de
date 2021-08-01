/****************************************************************************
** Meta object code from reading C++ file 'AssetImporterManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Editor/AssetImporter/AssetImporterManager/AssetImporterManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetImporterManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetImporterManager_t {
    QByteArrayData data[21];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetImporterManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetImporterManager_t qt_meta_stringdata_AssetImporterManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AssetImporterManager"
QT_MOC_LITERAL(1, 21, 18), // "StartAssetImporter"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "StopAssetImporter"
QT_MOC_LITERAL(4, 59, 6), // "reject"
QT_MOC_LITERAL(5, 66, 18), // "OnDragAndDropFiles"
QT_MOC_LITERAL(6, 85, 18), // "const QStringList*"
QT_MOC_LITERAL(7, 104, 8), // "fileList"
QT_MOC_LITERAL(8, 113, 13), // "OnBrowseFiles"
QT_MOC_LITERAL(9, 127, 27), // "OnBrowseDestinationFilePath"
QT_MOC_LITERAL(10, 155, 10), // "QLineEdit*"
QT_MOC_LITERAL(11, 166, 19), // "destinationLineEdit"
QT_MOC_LITERAL(12, 186, 11), // "OnCopyFiles"
QT_MOC_LITERAL(13, 198, 11), // "OnMoveFiles"
QT_MOC_LITERAL(14, 210, 16), // "OnOverwriteFiles"
QT_MOC_LITERAL(15, 227, 12), // "relativePath"
QT_MOC_LITERAL(16, 240, 15), // "oldAbsolutePath"
QT_MOC_LITERAL(17, 256, 15), // "OnKeepBothFiles"
QT_MOC_LITERAL(18, 272, 15), // "OnOpenLogDialog"
QT_MOC_LITERAL(19, 288, 25), // "OnSetDestinationDirectory"
QT_MOC_LITERAL(20, 314, 20) // "destinationDirectory"

    },
    "AssetImporterManager\0StartAssetImporter\0"
    "\0StopAssetImporter\0reject\0OnDragAndDropFiles\0"
    "const QStringList*\0fileList\0OnBrowseFiles\0"
    "OnBrowseDestinationFilePath\0QLineEdit*\0"
    "destinationLineEdit\0OnCopyFiles\0"
    "OnMoveFiles\0OnOverwriteFiles\0relativePath\0"
    "oldAbsolutePath\0OnKeepBothFiles\0"
    "OnOpenLogDialog\0OnSetDestinationDirectory\0"
    "destinationDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetImporterManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    2,   86,    2, 0x08 /* Private */,
      17,    2,   91,    2, 0x08 /* Private */,
      18,    0,   96,    2, 0x08 /* Private */,
      19,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   15,   16,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void AssetImporterManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetImporterManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartAssetImporter(); break;
        case 1: _t->StopAssetImporter(); break;
        case 2: _t->reject(); break;
        case 3: _t->OnDragAndDropFiles((*reinterpret_cast< const QStringList*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->OnBrowseFiles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->OnBrowseDestinationFilePath((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 6: _t->OnCopyFiles(); break;
        case 7: _t->OnMoveFiles(); break;
        case 8: { bool _r = _t->OnOverwriteFiles((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->OnKeepBothFiles((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->OnOpenLogDialog(); break;
        case 11: _t->OnSetDestinationDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetImporterManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetImporterManager::StartAssetImporter)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetImporterManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetImporterManager::StopAssetImporter)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetImporterManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetImporterManager.data,
    qt_meta_data_AssetImporterManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetImporterManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetImporterManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetImporterManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetImporterManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AssetImporterManager::StartAssetImporter()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AssetImporterManager::StopAssetImporter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
