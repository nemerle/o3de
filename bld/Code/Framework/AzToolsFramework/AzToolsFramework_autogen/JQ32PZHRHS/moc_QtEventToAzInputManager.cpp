/****************************************************************************
** Meta object code from reading C++ file 'QtEventToAzInputManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/Input/QtEventToAzInputManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtEventToAzInputManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__QtEventToAzInputMapper_t {
    QByteArrayData data[7];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__QtEventToAzInputMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__QtEventToAzInputMapper_t qt_meta_stringdata_AzToolsFramework__QtEventToAzInputMapper = {
    {
QT_MOC_LITERAL(0, 0, 40), // "AzToolsFramework::QtEventToAz..."
QT_MOC_LITERAL(1, 41, 19), // "InputChannelUpdated"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 32), // "const AzFramework::InputChannel*"
QT_MOC_LITERAL(4, 95, 7), // "channel"
QT_MOC_LITERAL(5, 103, 7), // "QEvent*"
QT_MOC_LITERAL(6, 111, 5) // "event"

    },
    "AzToolsFramework::QtEventToAzInputMapper\0"
    "InputChannelUpdated\0\0"
    "const AzFramework::InputChannel*\0"
    "channel\0QEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__QtEventToAzInputMapper[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void AzToolsFramework::QtEventToAzInputMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtEventToAzInputMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InputChannelUpdated((*reinterpret_cast< const AzFramework::InputChannel*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtEventToAzInputMapper::*)(const AzFramework::InputChannel * , QEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtEventToAzInputMapper::InputChannelUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::QtEventToAzInputMapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__QtEventToAzInputMapper.data,
    qt_meta_data_AzToolsFramework__QtEventToAzInputMapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::QtEventToAzInputMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::QtEventToAzInputMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__QtEventToAzInputMapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::QtEventToAzInputMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void AzToolsFramework::QtEventToAzInputMapper::InputChannelUpdated(const AzFramework::InputChannel * _t1, QEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
