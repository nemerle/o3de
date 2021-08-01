/****************************************************************************
** Meta object code from reading C++ file 'CardHeader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/CardHeader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CardHeader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__CardHeader_t {
    QByteArrayData data[13];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__CardHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__CardHeader_t qt_meta_stringdata_AzQtComponents__CardHeader = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::CardHeader"
QT_MOC_LITERAL(1, 27, 20), // "contextMenuRequested"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "position"
QT_MOC_LITERAL(4, 58, 15), // "expanderChanged"
QT_MOC_LITERAL(5, 74, 8), // "expanded"
QT_MOC_LITERAL(6, 83, 14), // "warningChanged"
QT_MOC_LITERAL(7, 98, 7), // "warning"
QT_MOC_LITERAL(8, 106, 15), // "readOnlyChanged"
QT_MOC_LITERAL(9, 122, 8), // "readOnly"
QT_MOC_LITERAL(10, 131, 22), // "contentModifiedChanged"
QT_MOC_LITERAL(11, 154, 8), // "modified"
QT_MOC_LITERAL(12, 163, 15) // "contentModified"

    },
    "AzQtComponents::CardHeader\0"
    "contextMenuRequested\0\0position\0"
    "expanderChanged\0expanded\0warningChanged\0"
    "warning\0readOnlyChanged\0readOnly\0"
    "contentModifiedChanged\0modified\0"
    "contentModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__CardHeader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,
      10,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       4,

       0        // eod
};

void AzQtComponents::CardHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CardHeader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->expanderChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->warningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->readOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->contentModifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CardHeader::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CardHeader::contextMenuRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CardHeader::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CardHeader::expanderChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CardHeader::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CardHeader::warningChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CardHeader::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CardHeader::readOnlyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CardHeader::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CardHeader::contentModifiedChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CardHeader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isWarning(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isContentModified(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CardHeader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWarning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setContentModified(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::CardHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__CardHeader.data,
    qt_meta_data_AzQtComponents__CardHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::CardHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::CardHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__CardHeader.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::CardHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void AzQtComponents::CardHeader::contextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::CardHeader::expanderChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::CardHeader::warningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::CardHeader::readOnlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::CardHeader::contentModifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
