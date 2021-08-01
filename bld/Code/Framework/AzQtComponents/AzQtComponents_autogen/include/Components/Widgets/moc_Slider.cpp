/****************************************************************************
** Meta object code from reading C++ file 'Slider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/Slider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Slider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__CustomSlider_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__CustomSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__CustomSlider_t qt_meta_stringdata_AzQtComponents__CustomSlider = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AzQtComponents::CustomSlider"
QT_MOC_LITERAL(1, 29, 10), // "moveSlider"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6) // "moving"

    },
    "AzQtComponents::CustomSlider\0moveSlider\0"
    "\0moving"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__CustomSlider[] = {

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
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void AzQtComponents::CustomSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveSlider((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomSlider::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomSlider::moveSlider)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::CustomSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QSlider::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__CustomSlider.data,
    qt_meta_data_AzQtComponents__CustomSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::CustomSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::CustomSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__CustomSlider.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int AzQtComponents::CustomSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
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
void AzQtComponents::CustomSlider::moveSlider(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzQtComponents__Slider_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__Slider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__Slider_t qt_meta_stringdata_AzQtComponents__Slider = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AzQtComponents::Slider"
QT_MOC_LITERAL(1, 23, 13), // "sliderPressed"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "sliderMoved"
QT_MOC_LITERAL(4, 50, 8), // "position"
QT_MOC_LITERAL(5, 59, 14), // "sliderReleased"
QT_MOC_LITERAL(6, 74, 15), // "actionTriggered"
QT_MOC_LITERAL(7, 90, 6), // "action"
QT_MOC_LITERAL(8, 97, 11), // "orientation"
QT_MOC_LITERAL(9, 109, 15), // "Qt::Orientation"
QT_MOC_LITERAL(10, 125, 14), // "toolTipOffsetX"
QT_MOC_LITERAL(11, 140, 14) // "toolTipOffsetY"

    },
    "AzQtComponents::Slider\0sliderPressed\0"
    "\0sliderMoved\0position\0sliderReleased\0"
    "actionTriggered\0action\0orientation\0"
    "Qt::Orientation\0toolTipOffsetX\0"
    "toolTipOffsetY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__Slider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0009510b,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Int, 0x00095103,

       0        // eod
};

void AzQtComponents::Slider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Slider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderPressed(); break;
        case 1: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliderReleased(); break;
        case 3: _t->actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Slider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::sliderPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Slider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::sliderMoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Slider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::sliderReleased)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Slider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Slider::actionTriggered)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Slider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->toolTipOffsetX(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->toolTipOffsetY(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Slider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setToolTipOffsetX(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setToolTipOffsetY(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::Slider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__Slider.data,
    qt_meta_data_AzQtComponents__Slider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::Slider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::Slider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__Slider.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::Slider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::Slider::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::Slider::sliderMoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::Slider::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AzQtComponents::Slider::actionTriggered(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_AzQtComponents__SliderInt_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SliderInt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SliderInt_t qt_meta_stringdata_AzQtComponents__SliderInt = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AzQtComponents::SliderInt"
QT_MOC_LITERAL(1, 26, 12), // "valueChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "value"
QT_MOC_LITERAL(4, 46, 12), // "rangeChanged"
QT_MOC_LITERAL(5, 59, 3), // "min"
QT_MOC_LITERAL(6, 63, 3), // "max"
QT_MOC_LITERAL(7, 67, 7), // "minimum"
QT_MOC_LITERAL(8, 75, 7) // "maximum"

    },
    "AzQtComponents::SliderInt\0valueChanged\0"
    "\0value\0rangeChanged\0min\0max\0minimum\0"
    "maximum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SliderInt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       3, QMetaType::Int, 0x00595103,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void AzQtComponents::SliderInt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliderInt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliderInt::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderInt::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SliderInt::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderInt::rangeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SliderInt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SliderInt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SliderInt::staticMetaObject = { {
    QMetaObject::SuperData::link<Slider::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SliderInt.data,
    qt_meta_data_AzQtComponents__SliderInt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SliderInt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SliderInt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SliderInt.stringdata0))
        return static_cast<void*>(this);
    return Slider::qt_metacast(_clname);
}

int AzQtComponents::SliderInt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Slider::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::SliderInt::valueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::SliderInt::rangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AzQtComponents__SliderDouble_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SliderDouble_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SliderDouble_t qt_meta_stringdata_AzQtComponents__SliderDouble = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AzQtComponents::SliderDouble"
QT_MOC_LITERAL(1, 29, 12), // "valueChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "value"
QT_MOC_LITERAL(4, 49, 12), // "rangeChanged"
QT_MOC_LITERAL(5, 62, 3), // "min"
QT_MOC_LITERAL(6, 66, 3), // "max"
QT_MOC_LITERAL(7, 70, 8), // "numSteps"
QT_MOC_LITERAL(8, 79, 7), // "minimum"
QT_MOC_LITERAL(9, 87, 7), // "maximum"
QT_MOC_LITERAL(10, 95, 8), // "decimals"
QT_MOC_LITERAL(11, 104, 13) // "curveMidpoint"

    },
    "AzQtComponents::SliderDouble\0valueChanged\0"
    "\0value\0rangeChanged\0min\0max\0numSteps\0"
    "minimum\0maximum\0decimals\0curveMidpoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SliderDouble[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    3,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int,    5,    6,    7,

 // properties: name, type, flags
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::Double, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       3, QMetaType::Double, 0x00595103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Double, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void AzQtComponents::SliderDouble::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliderDouble *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliderDouble::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderDouble::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SliderDouble::*)(double , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderDouble::rangeChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SliderDouble *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->numSteps(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->curveMidpoint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SliderDouble *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setNumSteps(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setCurveMidpoint(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SliderDouble::staticMetaObject = { {
    QMetaObject::SuperData::link<Slider::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SliderDouble.data,
    qt_meta_data_AzQtComponents__SliderDouble,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SliderDouble::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SliderDouble::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SliderDouble.stringdata0))
        return static_cast<void*>(this);
    return Slider::qt_metacast(_clname);
}

int AzQtComponents::SliderDouble::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Slider::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::SliderDouble::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::SliderDouble::rangeChanged(double _t1, double _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
