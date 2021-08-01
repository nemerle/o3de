/****************************************************************************
** Meta object code from reading C++ file 'Filter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/AssetBrowser/Search/Filter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Filter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter_t {
    QByteArrayData data[3];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter = {
    {
QT_MOC_LITERAL(0, 0, 55), // "AzToolsFramework::AssetBrowse..."
QT_MOC_LITERAL(1, 56, 13), // "updatedSignal"
QT_MOC_LITERAL(2, 70, 0) // ""

    },
    "AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter\0"
    "updatedSignal\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetBrowserEntryFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatedSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetBrowserEntryFilter::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetBrowserEntryFilter::updatedSignal)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserEntryFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter::updatedSignal()const
{
    QMetaObject::activate(const_cast< AzToolsFramework::AssetBrowser::AssetBrowserEntryFilter *>(this), &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__StringFilter_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__StringFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__StringFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__StringFilter = {
    {
QT_MOC_LITERAL(0, 0, 44) // "AzToolsFramework::AssetBrowse..."

    },
    "AzToolsFramework::AssetBrowser::StringFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__StringFilter[] = {

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

void AzToolsFramework::AssetBrowser::StringFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::StringFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetBrowserEntryFilter::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__StringFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__StringFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::StringFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::StringFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__StringFilter.stringdata0))
        return static_cast<void*>(this);
    return AssetBrowserEntryFilter::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::StringFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetBrowserEntryFilter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetTypeFilter_t {
    QByteArrayData data[1];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetTypeFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetTypeFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetTypeFilter = {
    {
QT_MOC_LITERAL(0, 0, 47) // "AzToolsFramework::AssetBrowse..."

    },
    "AzToolsFramework::AssetBrowser::AssetTypeFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__AssetTypeFilter[] = {

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

void AzToolsFramework::AssetBrowser::AssetTypeFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::AssetTypeFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetBrowserEntryFilter::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetTypeFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__AssetTypeFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::AssetTypeFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::AssetTypeFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetTypeFilter.stringdata0))
        return static_cast<void*>(this);
    return AssetBrowserEntryFilter::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::AssetTypeFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetBrowserEntryFilter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetGroupFilter_t {
    QByteArrayData data[1];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetGroupFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetGroupFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetGroupFilter = {
    {
QT_MOC_LITERAL(0, 0, 48) // "AzToolsFramework::AssetBrowse..."

    },
    "AzToolsFramework::AssetBrowser::AssetGroupFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__AssetGroupFilter[] = {

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

void AzToolsFramework::AssetBrowser::AssetGroupFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::AssetGroupFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetBrowserEntryFilter::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetGroupFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__AssetGroupFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::AssetGroupFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::AssetGroupFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetGroupFilter.stringdata0))
        return static_cast<void*>(this);
    return AssetBrowserEntryFilter::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::AssetGroupFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetBrowserEntryFilter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__EntryTypeFilter_t {
    QByteArrayData data[1];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__EntryTypeFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__EntryTypeFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__EntryTypeFilter = {
    {
QT_MOC_LITERAL(0, 0, 47) // "AzToolsFramework::AssetBrowse..."

    },
    "AzToolsFramework::AssetBrowser::EntryTypeFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__EntryTypeFilter[] = {

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

void AzToolsFramework::AssetBrowser::EntryTypeFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::EntryTypeFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetBrowserEntryFilter::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__EntryTypeFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__EntryTypeFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::EntryTypeFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::EntryTypeFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__EntryTypeFilter.stringdata0))
        return static_cast<void*>(this);
    return AssetBrowserEntryFilter::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::EntryTypeFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetBrowserEntryFilter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__CompositeFilter_t {
    QByteArrayData data[1];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__CompositeFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__CompositeFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__CompositeFilter = {
    {
QT_MOC_LITERAL(0, 0, 47) // "AzToolsFramework::AssetBrowse..."

    },
    "AzToolsFramework::AssetBrowser::CompositeFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__CompositeFilter[] = {

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

void AzToolsFramework::AssetBrowser::CompositeFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::CompositeFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetBrowserEntryFilter::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__CompositeFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__CompositeFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::CompositeFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::CompositeFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__CompositeFilter.stringdata0))
        return static_cast<void*>(this);
    return AssetBrowserEntryFilter::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::CompositeFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetBrowserEntryFilter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__InverseFilter_t {
    QByteArrayData data[1];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__InverseFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__InverseFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__InverseFilter = {
    {
QT_MOC_LITERAL(0, 0, 45) // "AzToolsFramework::AssetBrowse..."

    },
    "AzToolsFramework::AssetBrowser::InverseFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__InverseFilter[] = {

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

void AzToolsFramework::AssetBrowser::InverseFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::InverseFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetBrowserEntryFilter::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__InverseFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__InverseFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::InverseFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::InverseFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__InverseFilter.stringdata0))
        return static_cast<void*>(this);
    return AssetBrowserEntryFilter::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::InverseFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetBrowserEntryFilter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__CleanerProductsFilter_t {
    QByteArrayData data[1];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__CleanerProductsFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__CleanerProductsFilter_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__CleanerProductsFilter = {
    {
QT_MOC_LITERAL(0, 0, 53) // "AzToolsFramework::AssetBrowse..."

    },
    "AzToolsFramework::AssetBrowser::CleanerProductsFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__CleanerProductsFilter[] = {

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

void AzToolsFramework::AssetBrowser::CleanerProductsFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::CleanerProductsFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetBrowserEntryFilter::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__CleanerProductsFilter.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__CleanerProductsFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::CleanerProductsFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::CleanerProductsFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__CleanerProductsFilter.stringdata0))
        return static_cast<void*>(this);
    return AssetBrowserEntryFilter::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::CleanerProductsFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetBrowserEntryFilter::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
