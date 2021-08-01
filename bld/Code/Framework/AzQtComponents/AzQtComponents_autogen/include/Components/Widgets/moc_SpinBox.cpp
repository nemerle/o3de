/****************************************************************************
** Meta object code from reading C++ file 'SpinBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/SpinBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpinBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__SpinBox_t {
    QByteArrayData data[18];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SpinBox_t qt_meta_stringdata_AzQtComponents__SpinBox = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AzQtComponents::SpinBox"
QT_MOC_LITERAL(1, 24, 16), // "valueChangeBegan"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "valueChangeEnded"
QT_MOC_LITERAL(4, 59, 19), // "globalUndoTriggered"
QT_MOC_LITERAL(5, 79, 19), // "globalRedoTriggered"
QT_MOC_LITERAL(6, 99, 12), // "cutTriggered"
QT_MOC_LITERAL(7, 112, 13), // "copyTriggered"
QT_MOC_LITERAL(8, 126, 14), // "pasteTriggered"
QT_MOC_LITERAL(9, 141, 15), // "deleteTriggered"
QT_MOC_LITERAL(10, 157, 22), // "contextMenuAboutToShow"
QT_MOC_LITERAL(11, 180, 6), // "QMenu*"
QT_MOC_LITERAL(12, 187, 4), // "menu"
QT_MOC_LITERAL(13, 192, 8), // "QAction*"
QT_MOC_LITERAL(14, 201, 10), // "undoAction"
QT_MOC_LITERAL(15, 212, 10), // "redoAction"
QT_MOC_LITERAL(16, 223, 13), // "undoAvailable"
QT_MOC_LITERAL(17, 237, 13) // "redoAvailable"

    },
    "AzQtComponents::SpinBox\0valueChangeBegan\0"
    "\0valueChangeEnded\0globalUndoTriggered\0"
    "globalRedoTriggered\0cutTriggered\0"
    "copyTriggered\0pasteTriggered\0"
    "deleteTriggered\0contextMenuAboutToShow\0"
    "QMenu*\0menu\0QAction*\0undoAction\0"
    "redoAction\0undoAvailable\0redoAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,
      10,    3,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 13,   12,   14,   15,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00095001,
      17, QMetaType::Bool, 0x00095001,

       0        // eod
};

void AzQtComponents::SpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChangeBegan(); break;
        case 1: _t->valueChangeEnded(); break;
        case 2: _t->globalUndoTriggered(); break;
        case 3: _t->globalRedoTriggered(); break;
        case 4: _t->cutTriggered(); break;
        case 5: _t->copyTriggered(); break;
        case 6: _t->pasteTriggered(); break;
        case 7: _t->deleteTriggered(); break;
        case 8: _t->contextMenuAboutToShow((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])),(*reinterpret_cast< QAction*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::valueChangeBegan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::valueChangeEnded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::globalUndoTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::globalRedoTriggered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::cutTriggered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::copyTriggered)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::pasteTriggered)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::deleteTriggered)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SpinBox::*)(QMenu * , QAction * , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::contextMenuAboutToShow)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isUndoAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isRedoAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SpinBox.data,
    qt_meta_data_AzQtComponents__SpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SpinBox.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int AzQtComponents::SpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void AzQtComponents::SpinBox::valueChangeBegan()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::SpinBox::valueChangeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzQtComponents::SpinBox::globalUndoTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AzQtComponents::SpinBox::globalRedoTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AzQtComponents::SpinBox::cutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AzQtComponents::SpinBox::copyTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AzQtComponents::SpinBox::pasteTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AzQtComponents::SpinBox::deleteTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void AzQtComponents::SpinBox::contextMenuAboutToShow(QMenu * _t1, QAction * _t2, QAction * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_AzQtComponents__DoubleSpinBox_t {
    QByteArrayData data[23];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__DoubleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__DoubleSpinBox_t qt_meta_stringdata_AzQtComponents__DoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AzQtComponents::DoubleSpinBox"
QT_MOC_LITERAL(1, 30, 16), // "valueChangeBegan"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "valueChangeEnded"
QT_MOC_LITERAL(4, 65, 19), // "globalUndoTriggered"
QT_MOC_LITERAL(5, 85, 19), // "globalRedoTriggered"
QT_MOC_LITERAL(6, 105, 12), // "cutTriggered"
QT_MOC_LITERAL(7, 118, 13), // "copyTriggered"
QT_MOC_LITERAL(8, 132, 14), // "pasteTriggered"
QT_MOC_LITERAL(9, 147, 15), // "deleteTriggered"
QT_MOC_LITERAL(10, 163, 22), // "contextMenuAboutToShow"
QT_MOC_LITERAL(11, 186, 6), // "QMenu*"
QT_MOC_LITERAL(12, 193, 4), // "menu"
QT_MOC_LITERAL(13, 198, 8), // "QAction*"
QT_MOC_LITERAL(14, 207, 10), // "undoAction"
QT_MOC_LITERAL(15, 218, 10), // "redoAction"
QT_MOC_LITERAL(16, 229, 13), // "undoAvailable"
QT_MOC_LITERAL(17, 243, 13), // "redoAvailable"
QT_MOC_LITERAL(18, 257, 7), // "options"
QT_MOC_LITERAL(19, 265, 7), // "Options"
QT_MOC_LITERAL(20, 273, 15), // "displayDecimals"
QT_MOC_LITERAL(21, 289, 6), // "Option"
QT_MOC_LITERAL(22, 296, 29) // "SHOW_ONE_DECIMAL_PLACE_ALWAYS"

    },
    "AzQtComponents::DoubleSpinBox\0"
    "valueChangeBegan\0\0valueChangeEnded\0"
    "globalUndoTriggered\0globalRedoTriggered\0"
    "cutTriggered\0copyTriggered\0pasteTriggered\0"
    "deleteTriggered\0contextMenuAboutToShow\0"
    "QMenu*\0menu\0QAction*\0undoAction\0"
    "redoAction\0undoAvailable\0redoAvailable\0"
    "options\0Options\0displayDecimals\0Option\0"
    "SHOW_ONE_DECIMAL_PLACE_ALWAYS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__DoubleSpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   74, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,
      10,    3,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 13,   12,   14,   15,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00095001,
      17, QMetaType::Bool, 0x00095001,
      18, 0x80000000 | 19, 0x0009510b,
      20, QMetaType::Int, 0x00095103,

 // enums: name, alias, flags, count, data
      19,   21, 0x1,    1,   91,

 // enum data: key, value
      22, uint(AzQtComponents::DoubleSpinBox::SHOW_ONE_DECIMAL_PLACE_ALWAYS),

       0        // eod
};

void AzQtComponents::DoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChangeBegan(); break;
        case 1: _t->valueChangeEnded(); break;
        case 2: _t->globalUndoTriggered(); break;
        case 3: _t->globalRedoTriggered(); break;
        case 4: _t->cutTriggered(); break;
        case 5: _t->copyTriggered(); break;
        case 6: _t->pasteTriggered(); break;
        case 7: _t->deleteTriggered(); break;
        case 8: _t->contextMenuAboutToShow((*reinterpret_cast< QMenu*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])),(*reinterpret_cast< QAction*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::valueChangeBegan)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::valueChangeEnded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::globalUndoTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::globalRedoTriggered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::cutTriggered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::copyTriggered)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::pasteTriggered)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::deleteTriggered)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DoubleSpinBox::*)(QMenu * , QAction * , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DoubleSpinBox::contextMenuAboutToShow)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isUndoAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isRedoAvailable(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->options()); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->displayDecimals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: _t->setDisplayDecimals(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::DoubleSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDoubleSpinBox::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__DoubleSpinBox.data,
    qt_meta_data_AzQtComponents__DoubleSpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::DoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::DoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__DoubleSpinBox.stringdata0))
        return static_cast<void*>(this);
    return QDoubleSpinBox::qt_metacast(_clname);
}

int AzQtComponents::DoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void AzQtComponents::DoubleSpinBox::valueChangeBegan()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::DoubleSpinBox::valueChangeEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzQtComponents::DoubleSpinBox::globalUndoTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AzQtComponents::DoubleSpinBox::globalRedoTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AzQtComponents::DoubleSpinBox::cutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AzQtComponents::DoubleSpinBox::copyTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AzQtComponents::DoubleSpinBox::pasteTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AzQtComponents::DoubleSpinBox::deleteTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void AzQtComponents::DoubleSpinBox::contextMenuAboutToShow(QMenu * _t1, QAction * _t2, QAction * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_AzQtComponents__internal__SpinBoxLineEdit_t {
    QByteArrayData data[9];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__internal__SpinBoxLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__internal__SpinBoxLineEdit_t qt_meta_stringdata_AzQtComponents__internal__SpinBoxLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 41), // "AzQtComponents::internal::Spi..."
QT_MOC_LITERAL(1, 42, 19), // "globalUndoTriggered"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 19), // "globalRedoTriggered"
QT_MOC_LITERAL(4, 83, 18), // "selectAllTriggered"
QT_MOC_LITERAL(5, 102, 12), // "cutTriggered"
QT_MOC_LITERAL(6, 115, 13), // "copyTriggered"
QT_MOC_LITERAL(7, 129, 14), // "pasteTriggered"
QT_MOC_LITERAL(8, 144, 15) // "deleteTriggered"

    },
    "AzQtComponents::internal::SpinBoxLineEdit\0"
    "globalUndoTriggered\0\0globalRedoTriggered\0"
    "selectAllTriggered\0cutTriggered\0"
    "copyTriggered\0pasteTriggered\0"
    "deleteTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__internal__SpinBoxLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzQtComponents::internal::SpinBoxLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpinBoxLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->globalUndoTriggered(); break;
        case 1: _t->globalRedoTriggered(); break;
        case 2: _t->selectAllTriggered(); break;
        case 3: _t->cutTriggered(); break;
        case 4: _t->copyTriggered(); break;
        case 5: _t->pasteTriggered(); break;
        case 6: _t->deleteTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpinBoxLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBoxLineEdit::globalUndoTriggered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpinBoxLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBoxLineEdit::globalRedoTriggered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SpinBoxLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBoxLineEdit::selectAllTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SpinBoxLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBoxLineEdit::cutTriggered)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SpinBoxLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBoxLineEdit::copyTriggered)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SpinBoxLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBoxLineEdit::pasteTriggered)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SpinBoxLineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBoxLineEdit::deleteTriggered)) {
                *result = 6;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::internal::SpinBoxLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__internal__SpinBoxLineEdit.data,
    qt_meta_data_AzQtComponents__internal__SpinBoxLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::internal::SpinBoxLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::internal::SpinBoxLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__internal__SpinBoxLineEdit.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int AzQtComponents::internal::SpinBoxLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void AzQtComponents::internal::SpinBoxLineEdit::globalUndoTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::internal::SpinBoxLineEdit::globalRedoTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzQtComponents::internal::SpinBoxLineEdit::selectAllTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AzQtComponents::internal::SpinBoxLineEdit::cutTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AzQtComponents::internal::SpinBoxLineEdit::copyTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AzQtComponents::internal::SpinBoxLineEdit::pasteTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AzQtComponents::internal::SpinBoxLineEdit::deleteTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
