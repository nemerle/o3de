/****************************************************************************
** Meta object code from reading C++ file 'StyledLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/StyledLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StyledLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__StyledLineEdit_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__StyledLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__StyledLineEdit_t qt_meta_stringdata_AzQtComponents__StyledLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 30), // "AzQtComponents::StyledLineEdit"
QT_MOC_LITERAL(1, 31, 13), // "flavorChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "onFocus"
QT_MOC_LITERAL(4, 54, 10), // "onFocusOut"
QT_MOC_LITERAL(5, 65, 6), // "flavor"
QT_MOC_LITERAL(6, 72, 6), // "Flavor"
QT_MOC_LITERAL(7, 79, 5), // "Plain"
QT_MOC_LITERAL(8, 85, 11), // "Information"
QT_MOC_LITERAL(9, 97, 8), // "Question"
QT_MOC_LITERAL(10, 106, 7), // "Invalid"
QT_MOC_LITERAL(11, 114, 5), // "Valid"
QT_MOC_LITERAL(12, 120, 11) // "FlavorCount"

    },
    "AzQtComponents::StyledLineEdit\0"
    "flavorChanged\0\0onFocus\0onFocusOut\0"
    "flavor\0Flavor\0Plain\0Information\0"
    "Question\0Invalid\0Valid\0FlavorCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__StyledLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   32, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    6,   41,

 // enum data: key, value
       7, uint(AzQtComponents::StyledLineEdit::Plain),
       8, uint(AzQtComponents::StyledLineEdit::Information),
       9, uint(AzQtComponents::StyledLineEdit::Question),
      10, uint(AzQtComponents::StyledLineEdit::Invalid),
      11, uint(AzQtComponents::StyledLineEdit::Valid),
      12, uint(AzQtComponents::StyledLineEdit::FlavorCount),

       0        // eod
};

void AzQtComponents::StyledLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StyledLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flavorChanged(); break;
        case 1: _t->onFocus(); break;
        case 2: _t->onFocusOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StyledLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StyledLineEdit::flavorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StyledLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StyledLineEdit::onFocus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StyledLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StyledLineEdit::onFocusOut)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StyledLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Flavor*>(_v) = _t->flavor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StyledLineEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlavor(*reinterpret_cast< Flavor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::StyledLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__StyledLineEdit.data,
    qt_meta_data_AzQtComponents__StyledLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::StyledLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::StyledLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__StyledLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int AzQtComponents::StyledLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
void AzQtComponents::StyledLineEdit::flavorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::StyledLineEdit::onFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzQtComponents::StyledLineEdit::onFocusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
