/****************************************************************************
** Meta object code from reading C++ file 'AssetFolderThumbnailView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/AssetFolderThumbnailView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetFolderThumbnailView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView_t {
    QByteArrayData data[6];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView_t qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView = {
    {
QT_MOC_LITERAL(0, 0, 40), // "AzQtComponents::AssetFolderTh..."
QT_MOC_LITERAL(1, 41, 13), // "thumbnailSize"
QT_MOC_LITERAL(2, 55, 13), // "ThumbnailSize"
QT_MOC_LITERAL(3, 69, 5), // "Small"
QT_MOC_LITERAL(4, 75, 6), // "Medium"
QT_MOC_LITERAL(5, 82, 5) // "Large"

    },
    "AzQtComponents::AssetFolderThumbnailView\0"
    "thumbnailSize\0ThumbnailSize\0Small\0"
    "Medium\0Large"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__AssetFolderThumbnailView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,

 // enums: name, alias, flags, count, data
       2,    2, 0x2,    3,   22,

 // enum data: key, value
       3, uint(AzQtComponents::AssetFolderThumbnailView::ThumbnailSize::Small),
       4, uint(AzQtComponents::AssetFolderThumbnailView::ThumbnailSize::Medium),
       5, uint(AzQtComponents::AssetFolderThumbnailView::ThumbnailSize::Large),

       0        // eod
};

void AzQtComponents::AssetFolderThumbnailView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AssetFolderThumbnailView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ThumbnailSize*>(_v) = _t->thumbnailSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AssetFolderThumbnailView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThumbnailSize(*reinterpret_cast< ThumbnailSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::AssetFolderThumbnailView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView.data,
    qt_meta_data_AzQtComponents__AssetFolderThumbnailView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::AssetFolderThumbnailView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::AssetFolderThumbnailView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int AzQtComponents::AssetFolderThumbnailView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
