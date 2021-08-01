/****************************************************************************
** Meta object code from reading C++ file 'AssetProcessorServerUnitTests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/unittests/AssetProcessorServerUnitTests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetProcessorServerUnitTests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetProcessorServerUnitTest_t {
    QByteArrayData data[7];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetProcessorServerUnitTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetProcessorServerUnitTest_t qt_meta_stringdata_AssetProcessorServerUnitTest = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AssetProcessorServerUnitTest"
QT_MOC_LITERAL(1, 29, 46), // "RunFirstPartOfUnitTestsForAss..."
QT_MOC_LITERAL(2, 76, 0), // ""
QT_MOC_LITERAL(3, 77, 34), // "AssetProcessorConnectionStres..."
QT_MOC_LITERAL(4, 112, 30), // "ConnectionErrorForNonProxyMode"
QT_MOC_LITERAL(5, 143, 6), // "connId"
QT_MOC_LITERAL(6, 150, 5) // "error"

    },
    "AssetProcessorServerUnitTest\0"
    "RunFirstPartOfUnitTestsForAssetProcessorServer\0"
    "\0AssetProcessorConnectionStressTest\0"
    "ConnectionErrorForNonProxyMode\0connId\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetProcessorServerUnitTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    2,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    5,    6,

       0        // eod
};

void AssetProcessorServerUnitTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetProcessorServerUnitTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RunFirstPartOfUnitTestsForAssetProcessorServer(); break;
        case 1: _t->AssetProcessorConnectionStressTest(); break;
        case 2: _t->ConnectionErrorForNonProxyMode((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetProcessorServerUnitTest::staticMetaObject = { {
    QMetaObject::SuperData::link<UnitTestRun::staticMetaObject>(),
    qt_meta_stringdata_AssetProcessorServerUnitTest.data,
    qt_meta_data_AssetProcessorServerUnitTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetProcessorServerUnitTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetProcessorServerUnitTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetProcessorServerUnitTest.stringdata0))
        return static_cast<void*>(this);
    return UnitTestRun::qt_metacast(_clname);
}

int AssetProcessorServerUnitTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UnitTestRun::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
