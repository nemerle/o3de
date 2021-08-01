/****************************************************************************
** Meta object code from reading C++ file 'ColorComponentSliders.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/ColorPicker/ColorComponentSliders.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorComponentSliders.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__ColorComponentEdit_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__ColorComponentEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__ColorComponentEdit_t qt_meta_stringdata_AzQtComponents__ColorComponentEdit = {
    {
QT_MOC_LITERAL(0, 0, 34), // "AzQtComponents::ColorComponen..."
QT_MOC_LITERAL(1, 35, 16), // "valueChangeBegan"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 12), // "valueChanged"
QT_MOC_LITERAL(4, 66, 5), // "value"
QT_MOC_LITERAL(5, 72, 16), // "valueChangeEnded"
QT_MOC_LITERAL(6, 89, 14), // "updateGradient"
QT_MOC_LITERAL(7, 104, 16), // "spinValueChanged"
QT_MOC_LITERAL(8, 121, 18) // "sliderValueChanged"

    },
    "AzQtComponents::ColorComponentEdit\0"
    "valueChangeBegan\0\0valueChanged\0value\0"
    "valueChangeEnded\0updateGradient\0"
    "spinValueChanged\0sliderValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__ColorComponentEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void AzQtComponents::ColorComponentEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorComponentEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChangeBegan(); break;
        case 1: _t->valueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->valueChangeEnded(); break;
        case 3: _t->updateGradient(); break;
        case 4: _t->spinValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorComponentEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorComponentEdit::valueChangeBegan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorComponentEdit::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorComponentEdit::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorComponentEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorComponentEdit::valueChangeEnded)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorComponentEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorComponentEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::ColorComponentEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__ColorComponentEdit.data,
    qt_meta_data_AzQtComponents__ColorComponentEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::ColorComponentEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::ColorComponentEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__ColorComponentEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::ColorComponentEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void AzQtComponents::ColorComponentEdit::valueChangeBegan()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::ColorComponentEdit::valueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::ColorComponentEdit::valueChangeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__HSLSliders_t {
    QByteArrayData data[21];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__HSLSliders_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__HSLSliders_t qt_meta_stringdata_AzQtComponents__HSLSliders = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::HSLSliders"
QT_MOC_LITERAL(1, 27, 16), // "valueChangeBegan"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "modeChanged"
QT_MOC_LITERAL(4, 57, 4), // "Mode"
QT_MOC_LITERAL(5, 62, 4), // "mode"
QT_MOC_LITERAL(6, 67, 10), // "hueChanged"
QT_MOC_LITERAL(7, 78, 3), // "hue"
QT_MOC_LITERAL(8, 82, 17), // "saturationChanged"
QT_MOC_LITERAL(9, 100, 10), // "saturation"
QT_MOC_LITERAL(10, 111, 16), // "lightnessChanged"
QT_MOC_LITERAL(11, 128, 9), // "lightness"
QT_MOC_LITERAL(12, 138, 16), // "valueChangeEnded"
QT_MOC_LITERAL(13, 155, 7), // "setMode"
QT_MOC_LITERAL(14, 163, 6), // "setHue"
QT_MOC_LITERAL(15, 170, 13), // "setSaturation"
QT_MOC_LITERAL(16, 184, 12), // "setLightness"
QT_MOC_LITERAL(17, 197, 20), // "setDefaultLForHsMode"
QT_MOC_LITERAL(18, 218, 5), // "value"
QT_MOC_LITERAL(19, 224, 3), // "Hsl"
QT_MOC_LITERAL(20, 228, 2) // "Hs"

    },
    "AzQtComponents::HSLSliders\0valueChangeBegan\0"
    "\0modeChanged\0Mode\0mode\0hueChanged\0hue\0"
    "saturationChanged\0saturation\0"
    "lightnessChanged\0lightness\0valueChangeEnded\0"
    "setMode\0setHue\0setSaturation\0setLightness\0"
    "setDefaultLForHsMode\0value\0Hsl\0Hs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__HSLSliders[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   98, // properties
       1,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,
      10,    1,   79,    2, 0x06 /* Public */,
      12,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   83,    2, 0x0a /* Public */,
      14,    1,   86,    2, 0x0a /* Public */,
      15,    1,   89,    2, 0x0a /* Public */,
      16,    1,   92,    2, 0x0a /* Public */,
      17,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QReal,   18,

 // properties: name, type, flags
       5, 0x80000000 | 4, 0x0049510b,
       7, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,

 // enums: name, alias, flags, count, data
       4,    4, 0x2,    2,  119,

 // enum data: key, value
      19, uint(AzQtComponents::HSLSliders::Mode::Hsl),
      20, uint(AzQtComponents::HSLSliders::Mode::Hs),

       0        // eod
};

void AzQtComponents::HSLSliders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HSLSliders *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChangeBegan(); break;
        case 1: _t->modeChanged((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 2: _t->hueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->saturationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->lightnessChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->valueChangeEnded(); break;
        case 6: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 7: _t->setHue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setSaturation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setLightness((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->setDefaultLForHsMode((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HSLSliders::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSLSliders::valueChangeBegan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HSLSliders::*)(Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSLSliders::modeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HSLSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSLSliders::hueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HSLSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSLSliders::saturationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HSLSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSLSliders::lightnessChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HSLSliders::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSLSliders::valueChangeEnded)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HSLSliders *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->hue(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->saturation(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->lightness(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HSLSliders *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 1: _t->setHue(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setSaturation(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setLightness(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::HSLSliders::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__HSLSliders.data,
    qt_meta_data_AzQtComponents__HSLSliders,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::HSLSliders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::HSLSliders::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__HSLSliders.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::HSLSliders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void AzQtComponents::HSLSliders::valueChangeBegan()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::HSLSliders::modeChanged(Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::HSLSliders::hueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::HSLSliders::saturationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::HSLSliders::lightnessChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AzQtComponents::HSLSliders::valueChangeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__HSVSliders_t {
    QByteArrayData data[20];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__HSVSliders_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__HSVSliders_t qt_meta_stringdata_AzQtComponents__HSVSliders = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::HSVSliders"
QT_MOC_LITERAL(1, 27, 16), // "valueChangeBegan"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "modeChanged"
QT_MOC_LITERAL(4, 57, 4), // "Mode"
QT_MOC_LITERAL(5, 62, 4), // "mode"
QT_MOC_LITERAL(6, 67, 10), // "hueChanged"
QT_MOC_LITERAL(7, 78, 3), // "hue"
QT_MOC_LITERAL(8, 82, 17), // "saturationChanged"
QT_MOC_LITERAL(9, 100, 10), // "saturation"
QT_MOC_LITERAL(10, 111, 12), // "valueChanged"
QT_MOC_LITERAL(11, 124, 5), // "value"
QT_MOC_LITERAL(12, 130, 16), // "valueChangeEnded"
QT_MOC_LITERAL(13, 147, 7), // "setMode"
QT_MOC_LITERAL(14, 155, 6), // "setHue"
QT_MOC_LITERAL(15, 162, 13), // "setSaturation"
QT_MOC_LITERAL(16, 176, 8), // "setValue"
QT_MOC_LITERAL(17, 185, 20), // "setDefaultVForHsMode"
QT_MOC_LITERAL(18, 206, 3), // "Hsv"
QT_MOC_LITERAL(19, 210, 2) // "Hs"

    },
    "AzQtComponents::HSVSliders\0valueChangeBegan\0"
    "\0modeChanged\0Mode\0mode\0hueChanged\0hue\0"
    "saturationChanged\0saturation\0valueChanged\0"
    "value\0valueChangeEnded\0setMode\0setHue\0"
    "setSaturation\0setValue\0setDefaultVForHsMode\0"
    "Hsv\0Hs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__HSVSliders[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   98, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,
      10,    1,   79,    2, 0x06 /* Public */,
      12,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   83,    2, 0x0a /* Public */,
      14,    1,   86,    2, 0x0a /* Public */,
      15,    1,   89,    2, 0x0a /* Public */,
      16,    1,   92,    2, 0x0a /* Public */,
      17,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QReal,   11,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       4,

 // enums: name, alias, flags, count, data
       4,    4, 0x2,    2,  115,

 // enum data: key, value
      18, uint(AzQtComponents::HSVSliders::Mode::Hsv),
      19, uint(AzQtComponents::HSVSliders::Mode::Hs),

       0        // eod
};

void AzQtComponents::HSVSliders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HSVSliders *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChangeBegan(); break;
        case 1: _t->modeChanged((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 2: _t->hueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->saturationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->valueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->valueChangeEnded(); break;
        case 6: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 7: _t->setHue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setSaturation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setValue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->setDefaultVForHsMode((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HSVSliders::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSVSliders::valueChangeBegan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HSVSliders::*)(Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSVSliders::modeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HSVSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSVSliders::hueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HSVSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSVSliders::saturationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (HSVSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSVSliders::valueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (HSVSliders::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HSVSliders::valueChangeEnded)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<HSVSliders *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->hue(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->saturation(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<HSVSliders *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHue(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSaturation(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::HSVSliders::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__HSVSliders.data,
    qt_meta_data_AzQtComponents__HSVSliders,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::HSVSliders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::HSVSliders::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__HSVSliders.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::HSVSliders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void AzQtComponents::HSVSliders::valueChangeBegan()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::HSVSliders::modeChanged(Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::HSVSliders::hueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::HSVSliders::saturationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::HSVSliders::valueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AzQtComponents::HSVSliders::valueChangeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__RGBSliders_t {
    QByteArrayData data[13];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__RGBSliders_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__RGBSliders_t qt_meta_stringdata_AzQtComponents__RGBSliders = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::RGBSliders"
QT_MOC_LITERAL(1, 27, 16), // "valueChangeBegan"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "redChanged"
QT_MOC_LITERAL(4, 56, 3), // "red"
QT_MOC_LITERAL(5, 60, 12), // "greenChanged"
QT_MOC_LITERAL(6, 73, 5), // "green"
QT_MOC_LITERAL(7, 79, 11), // "blueChanged"
QT_MOC_LITERAL(8, 91, 4), // "blue"
QT_MOC_LITERAL(9, 96, 16), // "valueChangeEnded"
QT_MOC_LITERAL(10, 113, 6), // "setRed"
QT_MOC_LITERAL(11, 120, 8), // "setGreen"
QT_MOC_LITERAL(12, 129, 7) // "setBlue"

    },
    "AzQtComponents::RGBSliders\0valueChangeBegan\0"
    "\0redChanged\0red\0greenChanged\0green\0"
    "blueChanged\0blue\0valueChangeEnded\0"
    "setRed\0setGreen\0setBlue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__RGBSliders[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       7,    1,   61,    2, 0x06 /* Public */,
       9,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   65,    2, 0x0a /* Public */,
      11,    1,   68,    2, 0x0a /* Public */,
      12,    1,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    4,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    4,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QReal,    8,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00495103,
       6, QMetaType::QReal, 0x00495103,
       8, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,

       0        // eod
};

void AzQtComponents::RGBSliders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RGBSliders *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChangeBegan(); break;
        case 1: _t->redChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->greenChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->blueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->valueChangeEnded(); break;
        case 5: _t->setRed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setGreen((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setBlue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RGBSliders::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RGBSliders::valueChangeBegan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RGBSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RGBSliders::redChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RGBSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RGBSliders::greenChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RGBSliders::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RGBSliders::blueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RGBSliders::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RGBSliders::valueChangeEnded)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RGBSliders *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->red(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->green(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->blue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RGBSliders *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRed(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setGreen(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setBlue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::RGBSliders::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__RGBSliders.data,
    qt_meta_data_AzQtComponents__RGBSliders,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::RGBSliders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::RGBSliders::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__RGBSliders.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::RGBSliders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void AzQtComponents::RGBSliders::valueChangeBegan()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::RGBSliders::redChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::RGBSliders::greenChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::RGBSliders::blueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::RGBSliders::valueChangeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
