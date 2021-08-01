/****************************************************************************
** Meta object code from reading C++ file 'AssetProcessorManagerUnitTests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/unittests/AssetProcessorManagerUnitTests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetProcessorManagerUnitTests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_t {
    QByteArrayData data[5];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_t qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests = {
    {
QT_MOC_LITERAL(0, 0, 46), // "AssetProcessor::AssetProcesso..."
QT_MOC_LITERAL(1, 47, 24), // "Test_Emit_AssessableFile"
QT_MOC_LITERAL(2, 72, 0), // ""
QT_MOC_LITERAL(3, 73, 8), // "filePath"
QT_MOC_LITERAL(4, 82, 31) // "Test_Emit_AssessableDeletedFile"

    },
    "AssetProcessor::AssetProcessorManagerUnitTests\0"
    "Test_Emit_AssessableFile\0\0filePath\0"
    "Test_Emit_AssessableDeletedFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void AssetProcessor::AssetProcessorManagerUnitTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetProcessorManagerUnitTests *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Test_Emit_AssessableFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Test_Emit_AssessableDeletedFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetProcessorManagerUnitTests::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManagerUnitTests::Test_Emit_AssessableFile)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetProcessorManagerUnitTests::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetProcessorManagerUnitTests::Test_Emit_AssessableDeletedFile)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::AssetProcessorManagerUnitTests::staticMetaObject = { {
    QMetaObject::SuperData::link<UnitTestRun::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests.data,
    qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::AssetProcessorManagerUnitTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::AssetProcessorManagerUnitTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests.stringdata0))
        return static_cast<void*>(this);
    return UnitTestRun::qt_metacast(_clname);
}

int AssetProcessor::AssetProcessorManagerUnitTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTestRun::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AssetProcessor::AssetProcessorManagerUnitTests::Test_Emit_AssessableFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetProcessor::AssetProcessorManagerUnitTests::Test_Emit_AssessableDeletedFile(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders_t {
    QByteArrayData data[1];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders_t qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders = {
    {
QT_MOC_LITERAL(0, 0, 58) // "AssetProcessor::AssetProcesso..."

    },
    "AssetProcessor::AssetProcessorManagerUnitTests_ScanFolders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AssetProcessor::AssetProcessorManagerUnitTests_ScanFolders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::AssetProcessorManagerUnitTests_ScanFolders::staticMetaObject = { {
    QMetaObject::SuperData::link<UnitTestRun::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders.data,
    qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::AssetProcessorManagerUnitTests_ScanFolders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::AssetProcessorManagerUnitTests_ScanFolders::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_ScanFolders.stringdata0))
        return static_cast<void*>(this);
    return UnitTestRun::qt_metacast(_clname);
}

int AssetProcessor::AssetProcessorManagerUnitTests_ScanFolders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTestRun::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys_t {
    QByteArrayData data[1];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys_t qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys = {
    {
QT_MOC_LITERAL(0, 0, 54) // "AssetProcessor::AssetProcesso..."

    },
    "AssetProcessor::AssetProcessorManagerUnitTests_JobKeys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AssetProcessor::AssetProcessorManagerUnitTests_JobKeys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::AssetProcessorManagerUnitTests_JobKeys::staticMetaObject = { {
    QMetaObject::SuperData::link<UnitTestRun::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys.data,
    qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::AssetProcessorManagerUnitTests_JobKeys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::AssetProcessorManagerUnitTests_JobKeys::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobKeys.stringdata0))
        return static_cast<void*>(this);
    return UnitTestRun::qt_metacast(_clname);
}

int AssetProcessor::AssetProcessorManagerUnitTests_JobKeys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTestRun::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint_t {
    QByteArrayData data[1];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint_t qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint = {
    {
QT_MOC_LITERAL(0, 0, 74) // "AssetProcessor::AssetProcesso..."

    },
    "AssetProcessor::AssetProcessorManagerUnitTests_JobDependencies_Fingerp"
    "rint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AssetProcessor::AssetProcessorManagerUnitTests_JobDependencies_Fingerprint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessor::AssetProcessorManagerUnitTests_JobDependencies_Fingerprint::staticMetaObject = { {
    QMetaObject::SuperData::link<UnitTestRun::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint.data,
    qt_meta_data_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessor::AssetProcessorManagerUnitTests_JobDependencies_Fingerprint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessor::AssetProcessorManagerUnitTests_JobDependencies_Fingerprint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessor__AssetProcessorManagerUnitTests_JobDependencies_Fingerprint.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetProcessor::AssetBuilderInfoBus::Handler"))
        return static_cast< AssetProcessor::AssetBuilderInfoBus::Handler*>(this);
    return UnitTestRun::qt_metacast(_clname);
}

int AssetProcessor::AssetProcessorManagerUnitTests_JobDependencies_Fingerprint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTestRun::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
