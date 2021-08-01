/****************************************************************************
** Meta object code from reading C++ file 'ImageListCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/Controls/ImageListCtrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageListCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CImageListCtrl_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CImageListCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CImageListCtrl_t qt_meta_stringdata_CImageListCtrl = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CImageListCtrl"

    },
    "CImageListCtrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CImageListCtrl[] = {

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

void CImageListCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CImageListCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_CImageListCtrl.data,
    qt_meta_data_CImageListCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CImageListCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CImageListCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CImageListCtrl.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int CImageListCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QImageListDelegate_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QImageListDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QImageListDelegate_t qt_meta_stringdata_QImageListDelegate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QImageListDelegate"
QT_MOC_LITERAL(1, 19, 22), // "InvalidPixmapGenerated"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 55, 5) // "index"

    },
    "QImageListDelegate\0InvalidPixmapGenerated\0"
    "\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QImageListDelegate[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QImageListDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QImageListDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InvalidPixmapGenerated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QImageListDelegate::*)(const QModelIndex & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QImageListDelegate::InvalidPixmapGenerated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QImageListDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_QImageListDelegate.data,
    qt_meta_data_QImageListDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QImageListDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QImageListDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QImageListDelegate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemDelegate::qt_metacast(_clname);
}

int QImageListDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemDelegate::qt_metacall(_c, _id, _a);
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
void QImageListDelegate::InvalidPixmapGenerated(const QModelIndex & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< QImageListDelegate *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
