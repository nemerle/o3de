/****************************************************************************
** Meta object code from reading C++ file 'ColorHexEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/ColorPicker/ColorHexEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorHexEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__ColorHexEdit_t {
    QByteArrayData data[20];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__ColorHexEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__ColorHexEdit_t qt_meta_stringdata_AzQtComponents__ColorHexEdit = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AzQtComponents::ColorHexEdit"
QT_MOC_LITERAL(1, 29, 10), // "redChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 3), // "red"
QT_MOC_LITERAL(4, 45, 12), // "greenChanged"
QT_MOC_LITERAL(5, 58, 5), // "green"
QT_MOC_LITERAL(6, 64, 11), // "blueChanged"
QT_MOC_LITERAL(7, 76, 4), // "blue"
QT_MOC_LITERAL(8, 81, 12), // "alphaChanged"
QT_MOC_LITERAL(9, 94, 5), // "alpha"
QT_MOC_LITERAL(10, 100, 16), // "valueChangeBegan"
QT_MOC_LITERAL(11, 117, 16), // "valueChangeEnded"
QT_MOC_LITERAL(12, 134, 6), // "setRed"
QT_MOC_LITERAL(13, 141, 8), // "setGreen"
QT_MOC_LITERAL(14, 150, 7), // "setBlue"
QT_MOC_LITERAL(15, 158, 8), // "setAlpha"
QT_MOC_LITERAL(16, 167, 12), // "setEditAlpha"
QT_MOC_LITERAL(17, 180, 9), // "editAlpha"
QT_MOC_LITERAL(18, 190, 11), // "textChanged"
QT_MOC_LITERAL(19, 202, 4) // "text"

    },
    "AzQtComponents::ColorHexEdit\0redChanged\0"
    "\0red\0greenChanged\0green\0blueChanged\0"
    "blue\0alphaChanged\0alpha\0valueChangeBegan\0"
    "valueChangeEnded\0setRed\0setGreen\0"
    "setBlue\0setAlpha\0setEditAlpha\0editAlpha\0"
    "textChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__ColorHexEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    0,   86,    2, 0x06 /* Public */,
      11,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   88,    2, 0x0a /* Public */,
      13,    1,   91,    2, 0x0a /* Public */,
      14,    1,   94,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,
      16,    1,  100,    2, 0x0a /* Public */,
      18,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString,   19,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void AzQtComponents::ColorHexEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorHexEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->redChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->greenChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->blueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->alphaChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->valueChangeBegan(); break;
        case 5: _t->valueChangeEnded(); break;
        case 6: _t->setRed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setGreen((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setBlue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setAlpha((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->setEditAlpha((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorHexEdit::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorHexEdit::redChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorHexEdit::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorHexEdit::greenChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorHexEdit::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorHexEdit::blueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ColorHexEdit::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorHexEdit::alphaChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ColorHexEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorHexEdit::valueChangeBegan)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ColorHexEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorHexEdit::valueChangeEnded)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorHexEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->red(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->green(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->blue(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->alpha(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorHexEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRed(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setGreen(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setBlue(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setAlpha(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::ColorHexEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__ColorHexEdit.data,
    qt_meta_data_AzQtComponents__ColorHexEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::ColorHexEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::ColorHexEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__ColorHexEdit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::ColorHexEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void AzQtComponents::ColorHexEdit::redChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::ColorHexEdit::greenChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::ColorHexEdit::blueChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::ColorHexEdit::alphaChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::ColorHexEdit::valueChangeBegan()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AzQtComponents::ColorHexEdit::valueChangeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
