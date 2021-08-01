/****************************************************************************
** Meta object code from reading C++ file 'VectorEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/VectorEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VectorEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__VectorEditElement_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__VectorEditElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__VectorEditElement_t qt_meta_stringdata_AzQtComponents__VectorEditElement = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AzQtComponents::VectorEditEle..."
QT_MOC_LITERAL(1, 34, 12), // "valueChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "Flavor"
QT_MOC_LITERAL(4, 55, 5), // "Plain"
QT_MOC_LITERAL(5, 61, 11), // "Information"
QT_MOC_LITERAL(6, 73, 8), // "Question"
QT_MOC_LITERAL(7, 82, 7), // "Invalid"
QT_MOC_LITERAL(8, 90, 5) // "Valid"

    },
    "AzQtComponents::VectorEditElement\0"
    "valueChanged\0\0Flavor\0Plain\0Information\0"
    "Question\0Invalid\0Valid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__VectorEditElement[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    5,   25,

 // enum data: key, value
       4, uint(AzQtComponents::VectorEditElement::Plain),
       5, uint(AzQtComponents::VectorEditElement::Information),
       6, uint(AzQtComponents::VectorEditElement::Question),
       7, uint(AzQtComponents::VectorEditElement::Invalid),
       8, uint(AzQtComponents::VectorEditElement::Valid),

       0        // eod
};

void AzQtComponents::VectorEditElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VectorEditElement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VectorEditElement::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorEditElement::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::VectorEditElement::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__VectorEditElement.data,
    qt_meta_data_AzQtComponents__VectorEditElement,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::VectorEditElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::VectorEditElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__VectorEditElement.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::VectorEditElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void AzQtComponents::VectorEditElement::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__VectorEdit_t {
    QByteArrayData data[15];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__VectorEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__VectorEdit_t qt_meta_stringdata_AzQtComponents__VectorEdit = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::VectorEdit"
QT_MOC_LITERAL(1, 27, 13), // "vectorChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "flavorChanged"
QT_MOC_LITERAL(4, 56, 9), // "setVector"
QT_MOC_LITERAL(5, 66, 3), // "vec"
QT_MOC_LITERAL(6, 70, 6), // "xValue"
QT_MOC_LITERAL(7, 77, 6), // "yValue"
QT_MOC_LITERAL(8, 84, 6), // "zValue"
QT_MOC_LITERAL(9, 91, 4), // "setX"
QT_MOC_LITERAL(10, 96, 4), // "setY"
QT_MOC_LITERAL(11, 101, 4), // "setZ"
QT_MOC_LITERAL(12, 106, 6), // "vector"
QT_MOC_LITERAL(13, 113, 6), // "flavor"
QT_MOC_LITERAL(14, 120, 41) // "AzQtComponents::VectorEditEle..."

    },
    "AzQtComponents::VectorEdit\0vectorChanged\0"
    "\0flavorChanged\0setVector\0vec\0xValue\0"
    "yValue\0zValue\0setX\0setY\0setZ\0vector\0"
    "flavor\0AzQtComponents::VectorEditElement::Flavor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__VectorEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   51,    2, 0x0a /* Public */,
       4,    3,   54,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVector3D,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    8,

 // properties: name, type, flags
      12, QMetaType::QVector3D, 0x00495103,
      13, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void AzQtComponents::VectorEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VectorEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vectorChanged(); break;
        case 1: _t->flavorChanged(); break;
        case 2: _t->setVector((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 3: _t->setVector((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 4: _t->setX((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setY((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VectorEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorEdit::vectorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VectorEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VectorEdit::flavorChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VectorEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->vector(); break;
        case 1: *reinterpret_cast< AzQtComponents::VectorEditElement::Flavor*>(_v) = _t->flavor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VectorEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVector(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setFlavor(*reinterpret_cast< AzQtComponents::VectorEditElement::Flavor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_AzQtComponents__VectorEdit[] = {
    QMetaObject::SuperData::link<AzQtComponents::VectorEditElement::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::VectorEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__VectorEdit.data,
    qt_meta_data_AzQtComponents__VectorEdit,
    qt_static_metacall,
    qt_meta_extradata_AzQtComponents__VectorEdit,
    nullptr
} };


const QMetaObject *AzQtComponents::VectorEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::VectorEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__VectorEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::VectorEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::VectorEdit::vectorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::VectorEdit::flavorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
