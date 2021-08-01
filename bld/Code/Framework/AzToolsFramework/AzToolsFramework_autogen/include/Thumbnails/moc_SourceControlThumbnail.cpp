/****************************************************************************
** Meta object code from reading C++ file 'SourceControlThumbnail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/Thumbnails/SourceControlThumbnail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SourceControlThumbnail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey_t {
    QByteArrayData data[1];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey_t qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey = {
    {
QT_MOC_LITERAL(0, 0, 56) // "AzToolsFramework::Thumbnailer..."

    },
    "AzToolsFramework::Thumbnailer::SourceControlThumbnailKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey[] = {

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

void AzToolsFramework::Thumbnailer::SourceControlThumbnailKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::Thumbnailer::SourceControlThumbnailKey::staticMetaObject = { {
    QMetaObject::SuperData::link<ThumbnailKey::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey.data,
    qt_meta_data_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::Thumbnailer::SourceControlThumbnailKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::Thumbnailer::SourceControlThumbnailKey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnailKey.stringdata0))
        return static_cast<void*>(this);
    return ThumbnailKey::qt_metacast(_clname);
}

int AzToolsFramework::Thumbnailer::SourceControlThumbnailKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThumbnailKey::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnail_t {
    QByteArrayData data[3];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnail_t qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnail = {
    {
QT_MOC_LITERAL(0, 0, 53), // "AzToolsFramework::Thumbnailer..."
QT_MOC_LITERAL(1, 54, 6), // "Update"
QT_MOC_LITERAL(2, 61, 0) // ""

    },
    "AzToolsFramework::Thumbnailer::SourceControlThumbnail\0"
    "Update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__Thumbnailer__SourceControlThumbnail[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::Thumbnailer::SourceControlThumbnail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceControlThumbnail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::Thumbnailer::SourceControlThumbnail::staticMetaObject = { {
    QMetaObject::SuperData::link<Thumbnail::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnail.data,
    qt_meta_data_AzToolsFramework__Thumbnailer__SourceControlThumbnail,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::Thumbnailer::SourceControlThumbnail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::Thumbnailer::SourceControlThumbnail::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__Thumbnailer__SourceControlThumbnail.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SourceControlThumbnailRequestBus::Handler"))
        return static_cast< SourceControlThumbnailRequestBus::Handler*>(this);
    return Thumbnail::qt_metacast(_clname);
}

int AzToolsFramework::Thumbnailer::SourceControlThumbnail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Thumbnail::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
