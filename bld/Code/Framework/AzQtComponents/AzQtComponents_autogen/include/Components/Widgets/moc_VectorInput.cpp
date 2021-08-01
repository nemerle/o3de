/****************************************************************************
** Meta object code from reading C++ file 'VectorInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/VectorInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VectorInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__VectorElement_t {
    QByteArrayData data[11];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__VectorElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__VectorElement_t qt_meta_stringdata_AzQtComponents__VectorElement = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AzQtComponents::VectorElement"
QT_MOC_LITERAL(1, 30, 12), // "valueChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 15), // "editingFinished"
QT_MOC_LITERAL(4, 60, 14), // "onValueChanged"
QT_MOC_LITERAL(5, 75, 8), // "newValue"
QT_MOC_LITERAL(6, 84, 10), // "Coordinate"
QT_MOC_LITERAL(7, 95, 1), // "X"
QT_MOC_LITERAL(8, 97, 1), // "Y"
QT_MOC_LITERAL(9, 99, 1), // "Z"
QT_MOC_LITERAL(10, 101, 1) // "W"

    },
    "AzQtComponents::VectorElement\0"
    "valueChanged\0\0editingFinished\0"
    "onValueChanged\0newValue\0Coordinate\0X\0"
    "Y\0Z\0W"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__VectorElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    5,

 // enums: name, alias, flags, count, data
       6,    6, 0x2,    4,   41,

 // enum data: key, value
       7, uint(AzQtComponents::VectorElement::Coordinate::X),
       8, uint(AzQtComponents::VectorElement::Coordinate::Y),
       9, uint(AzQtComponents::VectorElement::Coordinate::Z),
      10, uint(AzQtComponents::VectorElement::Coordinate::W),

       0        // eod
};

void AzQtComponents::VectorElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VectorElement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->onValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VectorElement::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorElement::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VectorElement::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorElement::editingFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::VectorElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__VectorElement.data,
    qt_meta_data_AzQtComponents__VectorElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::VectorElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::VectorElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__VectorElement.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::VectorElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void AzQtComponents::VectorElement::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::VectorElement::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__VectorInput_t {
    QByteArrayData data[11];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__VectorInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__VectorInput_t qt_meta_stringdata_AzQtComponents__VectorInput = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AzQtComponents::VectorInput"
QT_MOC_LITERAL(1, 28, 12), // "valueChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "valueAtIndexChanged"
QT_MOC_LITERAL(4, 62, 12), // "elementIndex"
QT_MOC_LITERAL(5, 75, 8), // "newValue"
QT_MOC_LITERAL(6, 84, 15), // "editingFinished"
QT_MOC_LITERAL(7, 100, 18), // "GetFirstInTabOrder"
QT_MOC_LITERAL(8, 119, 8), // "QWidget*"
QT_MOC_LITERAL(9, 128, 17), // "GetLastInTabOrder"
QT_MOC_LITERAL(10, 146, 14) // "UpdateTabOrder"

    },
    "AzQtComponents::VectorInput\0valueChanged\0"
    "\0valueAtIndexChanged\0elementIndex\0"
    "newValue\0editingFinished\0GetFirstInTabOrder\0"
    "QWidget*\0GetLastInTabOrder\0UpdateTabOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__VectorInput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    2,   47,    2, 0x06 /* Public */,
       6,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   53,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    4,    5,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 8,
    0x80000000 | 8,
    QMetaType::Void,

       0        // eod
};

void AzQtComponents::VectorInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VectorInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueAtIndexChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->editingFinished(); break;
        case 3: { QWidget* _r = _t->GetFirstInTabOrder();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 4: { QWidget* _r = _t->GetLastInTabOrder();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->UpdateTabOrder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VectorInput::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorInput::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VectorInput::*)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorInput::valueAtIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VectorInput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorInput::editingFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::VectorInput::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__VectorInput.data,
    qt_meta_data_AzQtComponents__VectorInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::VectorInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::VectorInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__VectorInput.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::VectorInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void AzQtComponents::VectorInput::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::VectorInput::valueAtIndexChanged(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::VectorInput::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
