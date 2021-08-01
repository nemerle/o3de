/****************************************************************************
** Meta object code from reading C++ file 'SliderCombo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/SliderCombo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SliderCombo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__SliderCombo_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SliderCombo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SliderCombo_t qt_meta_stringdata_AzQtComponents__SliderCombo = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AzQtComponents::SliderCombo"
QT_MOC_LITERAL(1, 28, 12), // "valueChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "editingFinished"
QT_MOC_LITERAL(4, 58, 13), // "updateSpinBox"
QT_MOC_LITERAL(5, 72, 12), // "updateSlider"
QT_MOC_LITERAL(6, 85, 7), // "minimum"
QT_MOC_LITERAL(7, 93, 7), // "maximum"
QT_MOC_LITERAL(8, 101, 11), // "softMinimum"
QT_MOC_LITERAL(9, 113, 11), // "softMaximum"
QT_MOC_LITERAL(10, 125, 5) // "value"

    },
    "AzQtComponents::SliderCombo\0valueChanged\0"
    "\0editingFinished\0updateSpinBox\0"
    "updateSlider\0minimum\0maximum\0softMinimum\0"
    "softMaximum\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SliderCombo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void AzQtComponents::SliderCombo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliderCombo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->updateSpinBox(); break;
        case 3: _t->updateSlider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliderCombo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderCombo::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SliderCombo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderCombo::editingFinished)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SliderCombo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->softMinimum(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->softMaximum(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SliderCombo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSoftMinimum(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSoftMaximum(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SliderCombo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SliderCombo.data,
    qt_meta_data_AzQtComponents__SliderCombo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SliderCombo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SliderCombo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SliderCombo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::SliderCombo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AzQtComponents::SliderCombo::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::SliderCombo::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__SliderDoubleCombo_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SliderDoubleCombo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SliderDoubleCombo_t qt_meta_stringdata_AzQtComponents__SliderDoubleCombo = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AzQtComponents::SliderDoubleC..."
QT_MOC_LITERAL(1, 34, 12), // "valueChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 15), // "editingFinished"
QT_MOC_LITERAL(4, 64, 13), // "updateSpinBox"
QT_MOC_LITERAL(5, 78, 12), // "updateSlider"
QT_MOC_LITERAL(6, 91, 7), // "minimum"
QT_MOC_LITERAL(7, 99, 7), // "maximum"
QT_MOC_LITERAL(8, 107, 8), // "numSteps"
QT_MOC_LITERAL(9, 116, 8), // "decimals"
QT_MOC_LITERAL(10, 125, 5), // "value"
QT_MOC_LITERAL(11, 131, 11), // "softMinimum"
QT_MOC_LITERAL(12, 143, 11), // "softMaximum"
QT_MOC_LITERAL(13, 155, 13) // "curveMidpoint"

    },
    "AzQtComponents::SliderDoubleCombo\0"
    "valueChanged\0\0editingFinished\0"
    "updateSpinBox\0updateSlider\0minimum\0"
    "maximum\0numSteps\0decimals\0value\0"
    "softMinimum\0softMaximum\0curveMidpoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SliderDoubleCombo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       8,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00095103,
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Double, 0x00495103,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::Double, 0x00095103,
      13, QMetaType::Double, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void AzQtComponents::SliderDoubleCombo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliderDoubleCombo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->updateSpinBox(); break;
        case 3: _t->updateSlider(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliderDoubleCombo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderDoubleCombo::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SliderDoubleCombo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderDoubleCombo::editingFinished)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SliderDoubleCombo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->numSteps(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->softMinimum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->softMaximum(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->curveMidpoint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SliderDoubleCombo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setNumSteps(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setSoftMinimum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setSoftMaximum(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setCurveMidpoint(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SliderDoubleCombo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SliderDoubleCombo.data,
    qt_meta_data_AzQtComponents__SliderDoubleCombo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SliderDoubleCombo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SliderDoubleCombo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SliderDoubleCombo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::SliderDoubleCombo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::SliderDoubleCombo::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::SliderDoubleCombo::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
