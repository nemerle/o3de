/****************************************************************************
** Meta object code from reading C++ file 'PaletteCard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/ColorPicker/PaletteCard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaletteCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__PaletteCardBase_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__PaletteCardBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__PaletteCardBase_t qt_meta_stringdata_AzQtComponents__PaletteCardBase = {
    {
QT_MOC_LITERAL(0, 0, 31), // "AzQtComponents::PaletteCardBase"
QT_MOC_LITERAL(1, 32, 20), // "contextMenuRequested"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 8), // "position"
QT_MOC_LITERAL(4, 63, 7), // "palette"
QT_MOC_LITERAL(5, 71, 23) // "QSharedPointer<Palette>"

    },
    "AzQtComponents::PaletteCardBase\0"
    "contextMenuRequested\0\0position\0palette\0"
    "QSharedPointer<Palette>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__PaletteCardBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00095009,

       0        // eod
};

void AzQtComponents::PaletteCardBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteCardBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteCardBase::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCardBase::contextMenuRequested)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteCardBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSharedPointer<Palette>*>(_v) = _t->palette(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::PaletteCardBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__PaletteCardBase.data,
    qt_meta_data_AzQtComponents__PaletteCardBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::PaletteCardBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::PaletteCardBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__PaletteCardBase.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::PaletteCardBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AzQtComponents::PaletteCardBase::contextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzQtComponents__PaletteCard_t {
    QByteArrayData data[10];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__PaletteCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__PaletteCard_t qt_meta_stringdata_AzQtComponents__PaletteCard = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AzQtComponents::PaletteCard"
QT_MOC_LITERAL(1, 28, 12), // "titleChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "title"
QT_MOC_LITERAL(4, 48, 15), // "modifiedChanged"
QT_MOC_LITERAL(5, 64, 8), // "modified"
QT_MOC_LITERAL(6, 73, 13), // "removeClicked"
QT_MOC_LITERAL(7, 87, 11), // "saveClicked"
QT_MOC_LITERAL(8, 99, 13), // "saveAsClicked"
QT_MOC_LITERAL(9, 113, 18) // "handleModelChanged"

    },
    "AzQtComponents::PaletteCard\0titleChanged\0"
    "\0title\0modifiedChanged\0modified\0"
    "removeClicked\0saveClicked\0saveAsClicked\0"
    "handleModelChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__PaletteCard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void AzQtComponents::PaletteCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->modifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->removeClicked(); break;
        case 3: _t->saveClicked(); break;
        case 4: _t->saveAsClicked(); break;
        case 5: _t->handleModelChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteCard::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCard::titleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PaletteCard::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCard::modifiedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PaletteCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCard::removeClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PaletteCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCard::saveClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PaletteCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteCard::saveAsClicked)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteCard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->modified(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PaletteCard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setModified(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::PaletteCard::staticMetaObject = { {
    QMetaObject::SuperData::link<PaletteCardBase::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__PaletteCard.data,
    qt_meta_data_AzQtComponents__PaletteCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::PaletteCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::PaletteCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__PaletteCard.stringdata0))
        return static_cast<void*>(this);
    return PaletteCardBase::qt_metacast(_clname);
}

int AzQtComponents::PaletteCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaletteCardBase::qt_metacall(_c, _id, _a);
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
void AzQtComponents::PaletteCard::titleChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::PaletteCard::modifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::PaletteCard::removeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AzQtComponents::PaletteCard::saveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AzQtComponents::PaletteCard::saveAsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__QuickPaletteCard_t {
    QByteArrayData data[5];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__QuickPaletteCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__QuickPaletteCard_t qt_meta_stringdata_AzQtComponents__QuickPaletteCard = {
    {
QT_MOC_LITERAL(0, 0, 32), // "AzQtComponents::QuickPaletteCard"
QT_MOC_LITERAL(1, 33, 21), // "selectedColorsChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 18), // "QVector<AZ::Color>"
QT_MOC_LITERAL(4, 75, 14) // "selectedColors"

    },
    "AzQtComponents::QuickPaletteCard\0"
    "selectedColorsChanged\0\0QVector<AZ::Color>\0"
    "selectedColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__QuickPaletteCard[] = {

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
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void AzQtComponents::QuickPaletteCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuickPaletteCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedColorsChanged((*reinterpret_cast< const QVector<AZ::Color>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QuickPaletteCard::*)(const QVector<AZ::Color> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickPaletteCard::selectedColorsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::QuickPaletteCard::staticMetaObject = { {
    QMetaObject::SuperData::link<PaletteCardBase::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__QuickPaletteCard.data,
    qt_meta_data_AzQtComponents__QuickPaletteCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::QuickPaletteCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::QuickPaletteCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__QuickPaletteCard.stringdata0))
        return static_cast<void*>(this);
    return PaletteCardBase::qt_metacast(_clname);
}

int AzQtComponents::QuickPaletteCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PaletteCardBase::qt_metacall(_c, _id, _a);
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
void AzQtComponents::QuickPaletteCard::selectedColorsChanged(const QVector<AZ::Color> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
