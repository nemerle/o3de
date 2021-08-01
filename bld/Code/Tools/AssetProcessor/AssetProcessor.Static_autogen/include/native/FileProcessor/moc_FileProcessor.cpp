/****************************************************************************
** Meta object code from reading C++ file 'FileProcessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/AssetProcessor/native/FileProcessor/FileProcessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileProcessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__FileProcessor_t {
    QByteArrayData data[17];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__FileProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__FileProcessor_t qt_meta_stringdata_AssetProcessor__FileProcessor = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AssetProcessor::FileProcessor"
QT_MOC_LITERAL(1, 30, 11), // "ReadyToQuit"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "source"
QT_MOC_LITERAL(4, 50, 26), // "OnAssetScannerStatusChange"
QT_MOC_LITERAL(5, 77, 19), // "AssetScanningStatus"
QT_MOC_LITERAL(6, 97, 6), // "status"
QT_MOC_LITERAL(7, 104, 22), // "AssessFilesFromScanner"
QT_MOC_LITERAL(8, 127, 19), // "QSet<AssetFileInfo>"
QT_MOC_LITERAL(9, 147, 5), // "files"
QT_MOC_LITERAL(10, 153, 24), // "AssessFoldersFromScanner"
QT_MOC_LITERAL(11, 178, 7), // "folders"
QT_MOC_LITERAL(12, 186, 15), // "AssessAddedFile"
QT_MOC_LITERAL(13, 202, 8), // "fileName"
QT_MOC_LITERAL(14, 211, 17), // "AssessDeletedFile"
QT_MOC_LITERAL(15, 229, 4), // "Sync"
QT_MOC_LITERAL(16, 234, 13) // "QuitRequested"

    },
    "AssetProcessor::FileProcessor\0ReadyToQuit\0"
    "\0source\0OnAssetScannerStatusChange\0"
    "AssetScanningStatus\0status\0"
    "AssessFilesFromScanner\0QSet<AssetFileInfo>\0"
    "files\0AssessFoldersFromScanner\0folders\0"
    "AssessAddedFile\0fileName\0AssessDeletedFile\0"
    "Sync\0QuitRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__FileProcessor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,
      12,    1,   66,    2, 0x0a /* Public */,
      14,    1,   69,    2, 0x0a /* Public */,
      15,    0,   72,    2, 0x0a /* Public */,
      16,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AssetProcessor::FileProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReadyToQuit((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->OnAssetScannerStatusChange((*reinterpret_cast< AssetScanningStatus(*)>(_a[1]))); break;
        case 2: _t->AssessFilesFromScanner((*reinterpret_cast< QSet<AssetFileInfo>(*)>(_a[1]))); break;
        case 3: _t->AssessFoldersFromScanner((*reinterpret_cast< QSet<AssetFileInfo>(*)>(_a[1]))); break;
        case 4: _t->AssessAddedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->AssessDeletedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->Sync(); break;
        case 7: _t->QuitRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileProcessor::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileProcessor::ReadyToQuit)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::FileProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__FileProcessor.data,
    qt_meta_data_AssetProcessor__FileProcessor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::FileProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::FileProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__FileProcessor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetProcessor::FileProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AssetProcessor::FileProcessor::ReadyToQuit(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
