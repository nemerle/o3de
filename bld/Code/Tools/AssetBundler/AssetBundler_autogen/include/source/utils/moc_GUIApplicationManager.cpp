/****************************************************************************
** Meta object code from reading C++ file 'GUIApplicationManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/AssetBundler/source/utils/GUIApplicationManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GUIApplicationManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetBundler__GUIApplicationManager_t {
    QByteArrayData data[15];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetBundler__GUIApplicationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetBundler__GUIApplicationManager_t qt_meta_stringdata_AssetBundler__GUIApplicationManager = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AssetBundler::GUIApplicationM..."
QT_MOC_LITERAL(1, 36, 10), // "ShowWindow"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 9), // "UpdateTab"
QT_MOC_LITERAL(4, 58, 13), // "AZStd::string"
QT_MOC_LITERAL(5, 72, 9), // "directory"
QT_MOC_LITERAL(6, 82, 11), // "UpdateFiles"
QT_MOC_LITERAL(7, 94, 21), // "AssetBundlingFileType"
QT_MOC_LITERAL(8, 116, 8), // "fileType"
QT_MOC_LITERAL(9, 125, 28), // "AZStd::vector<AZStd::string>"
QT_MOC_LITERAL(10, 154, 17), // "absoluteFilePaths"
QT_MOC_LITERAL(11, 172, 16), // "DirectoryChanged"
QT_MOC_LITERAL(12, 189, 11), // "FileChanged"
QT_MOC_LITERAL(13, 201, 4), // "path"
QT_MOC_LITERAL(14, 206, 11) // "ApplyConfig"

    },
    "AssetBundler::GUIApplicationManager\0"
    "ShowWindow\0\0UpdateTab\0AZStd::string\0"
    "directory\0UpdateFiles\0AssetBundlingFileType\0"
    "fileType\0AZStd::vector<AZStd::string>\0"
    "absoluteFilePaths\0DirectoryChanged\0"
    "FileChanged\0path\0ApplyConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetBundler__GUIApplicationManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       6,    2,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   53,    2, 0x09 /* Protected */,
      12,    1,   56,    2, 0x09 /* Protected */,
      14,    0,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void AssetBundler::GUIApplicationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUIApplicationManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowWindow(); break;
        case 1: _t->UpdateTab((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 2: _t->UpdateFiles((*reinterpret_cast< AssetBundlingFileType(*)>(_a[1])),(*reinterpret_cast< const AZStd::vector<AZStd::string>(*)>(_a[2]))); break;
        case 3: _t->DirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->FileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ApplyConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GUIApplicationManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GUIApplicationManager::ShowWindow)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GUIApplicationManager::*)(const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GUIApplicationManager::UpdateTab)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GUIApplicationManager::*)(AssetBundlingFileType , const AZStd::vector<AZStd::string> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GUIApplicationManager::UpdateFiles)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetBundler::GUIApplicationManager::staticMetaObject = { {
    QMetaObject::SuperData::link<ApplicationManager::staticMetaObject>(),
    qt_meta_stringdata_AssetBundler__GUIApplicationManager.data,
    qt_meta_data_AssetBundler__GUIApplicationManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetBundler::GUIApplicationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetBundler::GUIApplicationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetBundler__GUIApplicationManager.stringdata0))
        return static_cast<void*>(this);
    return ApplicationManager::qt_metacast(_clname);
}

int AssetBundler::GUIApplicationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ApplicationManager::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AssetBundler::GUIApplicationManager::ShowWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AssetBundler::GUIApplicationManager::UpdateTab(const AZStd::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssetBundler::GUIApplicationManager::UpdateFiles(AssetBundlingFileType _t1, const AZStd::vector<AZStd::string> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
