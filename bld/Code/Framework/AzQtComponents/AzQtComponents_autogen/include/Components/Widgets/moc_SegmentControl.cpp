/****************************************************************************
** Meta object code from reading C++ file 'SegmentControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/SegmentControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SegmentControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__SegmentControl_t {
    QByteArrayData data[21];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SegmentControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SegmentControl_t qt_meta_stringdata_AzQtComponents__SegmentControl = {
    {
QT_MOC_LITERAL(0, 0, 30), // "AzQtComponents::SegmentControl"
QT_MOC_LITERAL(1, 31, 14), // "currentChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 13), // "tabBarClicked"
QT_MOC_LITERAL(5, 67, 15), // "setCurrentIndex"
QT_MOC_LITERAL(6, 83, 16), // "setCurrentWidget"
QT_MOC_LITERAL(7, 100, 8), // "QWidget*"
QT_MOC_LITERAL(8, 109, 6), // "widget"
QT_MOC_LITERAL(9, 116, 14), // "tabOrientation"
QT_MOC_LITERAL(10, 131, 15), // "Qt::Orientation"
QT_MOC_LITERAL(11, 147, 11), // "tabPosition"
QT_MOC_LITERAL(12, 159, 27), // "SegmentControl::TabPosition"
QT_MOC_LITERAL(13, 187, 12), // "currentIndex"
QT_MOC_LITERAL(14, 200, 5), // "count"
QT_MOC_LITERAL(15, 206, 8), // "iconSize"
QT_MOC_LITERAL(16, 215, 11), // "TabPosition"
QT_MOC_LITERAL(17, 227, 5), // "North"
QT_MOC_LITERAL(18, 233, 5), // "South"
QT_MOC_LITERAL(19, 239, 4), // "West"
QT_MOC_LITERAL(20, 244, 4) // "East"

    },
    "AzQtComponents::SegmentControl\0"
    "currentChanged\0\0index\0tabBarClicked\0"
    "setCurrentIndex\0setCurrentWidget\0"
    "QWidget*\0widget\0tabOrientation\0"
    "Qt::Orientation\0tabPosition\0"
    "SegmentControl::TabPosition\0currentIndex\0"
    "count\0iconSize\0TabPosition\0North\0South\0"
    "West\0East"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SegmentControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   46, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   40,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0009510b,
      11, 0x80000000 | 12, 0x0009510b,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00095001,
      15, QMetaType::QSize, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    4,   71,

 // enum data: key, value
      17, uint(AzQtComponents::SegmentControl::North),
      18, uint(AzQtComponents::SegmentControl::South),
      19, uint(AzQtComponents::SegmentControl::West),
      20, uint(AzQtComponents::SegmentControl::East),

       0        // eod
};

void AzQtComponents::SegmentControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SegmentControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SegmentControl::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SegmentControl::currentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SegmentControl::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SegmentControl::tabBarClicked)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SegmentControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->tabOrientation(); break;
        case 1: *reinterpret_cast< SegmentControl::TabPosition*>(_v) = _t->tabPosition(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SegmentControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTabOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setTabPosition(*reinterpret_cast< SegmentControl::TabPosition*>(_v)); break;
        case 2: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SegmentControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SegmentControl.data,
    qt_meta_data_AzQtComponents__SegmentControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SegmentControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SegmentControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SegmentControl.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::SegmentControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::SegmentControl::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::SegmentControl::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
