/****************************************************************************
** Meta object code from reading C++ file 'SegmentBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/SegmentBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SegmentBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__SegmentBar_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SegmentBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SegmentBar_t qt_meta_stringdata_AzQtComponents__SegmentBar = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::SegmentBar"
QT_MOC_LITERAL(1, 27, 14), // "currentChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "index"
QT_MOC_LITERAL(4, 49, 13), // "tabBarClicked"
QT_MOC_LITERAL(5, 63, 15), // "setCurrentIndex"
QT_MOC_LITERAL(6, 79, 11), // "orientation"
QT_MOC_LITERAL(7, 91, 15), // "Qt::Orientation"
QT_MOC_LITERAL(8, 107, 12), // "currentIndex"
QT_MOC_LITERAL(9, 120, 5), // "count"
QT_MOC_LITERAL(10, 126, 8) // "iconSize"

    },
    "AzQtComponents::SegmentBar\0currentChanged\0"
    "\0index\0tabBarClicked\0setCurrentIndex\0"
    "orientation\0Qt::Orientation\0currentIndex\0"
    "count\0iconSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SegmentBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00095001,
      10, QMetaType::QSize, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void AzQtComponents::SegmentBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SegmentBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SegmentBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SegmentBar::currentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SegmentBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SegmentBar::tabBarClicked)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SegmentBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SegmentBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SegmentBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SegmentBar.data,
    qt_meta_data_AzQtComponents__SegmentBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SegmentBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SegmentBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SegmentBar.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::SegmentBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::SegmentBar::currentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::SegmentBar::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
