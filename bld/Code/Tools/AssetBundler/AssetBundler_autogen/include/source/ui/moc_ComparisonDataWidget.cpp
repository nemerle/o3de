/****************************************************************************
** Meta object code from reading C++ file 'ComparisonDataWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/AssetBundler/source/ui/ComparisonDataWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComparisonDataWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetBundler__ComparisonDataWidget_t {
    QByteArrayData data[6];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetBundler__ComparisonDataWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetBundler__ComparisonDataWidget_t qt_meta_stringdata_AssetBundler__ComparisonDataWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "AssetBundler::ComparisonDataW..."
QT_MOC_LITERAL(1, 35, 21), // "comparisonDataChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 30), // "comparisonDataTokenNameChanged"
QT_MOC_LITERAL(4, 89, 6), // "size_t"
QT_MOC_LITERAL(5, 96, 19) // "comparisonDataIndex"

    },
    "AssetBundler::ComparisonDataWidget\0"
    "comparisonDataChanged\0\0"
    "comparisonDataTokenNameChanged\0size_t\0"
    "comparisonDataIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetBundler__ComparisonDataWidget[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void AssetBundler::ComparisonDataWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComparisonDataWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comparisonDataChanged(); break;
        case 1: _t->comparisonDataTokenNameChanged((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComparisonDataWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComparisonDataWidget::comparisonDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComparisonDataWidget::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComparisonDataWidget::comparisonDataTokenNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetBundler::ComparisonDataWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AssetBundler__ComparisonDataWidget.data,
    qt_meta_data_AssetBundler__ComparisonDataWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetBundler::ComparisonDataWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetBundler::ComparisonDataWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetBundler__ComparisonDataWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AssetBundler::ComparisonDataWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void AssetBundler::ComparisonDataWidget::comparisonDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AssetBundler::ComparisonDataWidget::comparisonDataTokenNameChanged(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AssetBundler__MouseWheelEventFilter_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetBundler__MouseWheelEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetBundler__MouseWheelEventFilter_t qt_meta_stringdata_AssetBundler__MouseWheelEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 35) // "AssetBundler::MouseWheelEvent..."

    },
    "AssetBundler::MouseWheelEventFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetBundler__MouseWheelEventFilter[] = {

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

void AssetBundler::MouseWheelEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AssetBundler::MouseWheelEventFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AssetBundler__MouseWheelEventFilter.data,
    qt_meta_data_AssetBundler__MouseWheelEventFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetBundler::MouseWheelEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetBundler::MouseWheelEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetBundler__MouseWheelEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetBundler::MouseWheelEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AssetBundler__ComparisonDataCard_t {
    QByteArrayData data[7];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetBundler__ComparisonDataCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetBundler__ComparisonDataCard_t qt_meta_stringdata_AssetBundler__ComparisonDataCard = {
    {
QT_MOC_LITERAL(0, 0, 32), // "AssetBundler::ComparisonDataCard"
QT_MOC_LITERAL(1, 33, 38), // "comparisonDataCardContextMenu..."
QT_MOC_LITERAL(2, 72, 0), // ""
QT_MOC_LITERAL(3, 73, 6), // "size_t"
QT_MOC_LITERAL(4, 80, 19), // "comparisonDataIndex"
QT_MOC_LITERAL(5, 100, 8), // "position"
QT_MOC_LITERAL(6, 109, 22) // "OnContextMenuRequested"

    },
    "AssetBundler::ComparisonDataCard\0"
    "comparisonDataCardContextMenuRequested\0"
    "\0size_t\0comparisonDataIndex\0position\0"
    "OnContextMenuRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetBundler__ComparisonDataCard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    5,

       0        // eod
};

void AssetBundler::ComparisonDataCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComparisonDataCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comparisonDataCardContextMenuRequested((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 1: _t->OnContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComparisonDataCard::*)(size_t , const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComparisonDataCard::comparisonDataCardContextMenuRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetBundler::ComparisonDataCard::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::Card::staticMetaObject>(),
    qt_meta_stringdata_AssetBundler__ComparisonDataCard.data,
    qt_meta_data_AssetBundler__ComparisonDataCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetBundler::ComparisonDataCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetBundler::ComparisonDataCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetBundler__ComparisonDataCard.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::Card::qt_metacast(_clname);
}

int AssetBundler::ComparisonDataCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::Card::qt_metacall(_c, _id, _a);
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
void AssetBundler::ComparisonDataCard::comparisonDataCardContextMenuRequested(size_t _t1, const QPoint & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
