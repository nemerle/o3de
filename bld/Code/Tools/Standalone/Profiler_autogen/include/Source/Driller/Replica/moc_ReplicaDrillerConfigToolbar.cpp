/****************************************************************************
** Meta object code from reading C++ file 'ReplicaDrillerConfigToolbar.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Replica/ReplicaDrillerConfigToolbar.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReplicaDrillerConfigToolbar.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__ReplicaDrillerConfigToolbar_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__ReplicaDrillerConfigToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__ReplicaDrillerConfigToolbar_t qt_meta_stringdata_Driller__ReplicaDrillerConfigToolbar = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Driller::ReplicaDrillerConfig..."
QT_MOC_LITERAL(1, 37, 12), // "hideSelected"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12), // "showSelected"
QT_MOC_LITERAL(4, 64, 7), // "hideAll"
QT_MOC_LITERAL(5, 72, 7), // "showAll"
QT_MOC_LITERAL(6, 80, 11), // "collapseAll"
QT_MOC_LITERAL(7, 92, 9) // "expandAll"

    },
    "Driller::ReplicaDrillerConfigToolbar\0"
    "hideSelected\0\0showSelected\0hideAll\0"
    "showAll\0collapseAll\0expandAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__ReplicaDrillerConfigToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Driller::ReplicaDrillerConfigToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReplicaDrillerConfigToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideSelected(); break;
        case 1: _t->showSelected(); break;
        case 2: _t->hideAll(); break;
        case 3: _t->showAll(); break;
        case 4: _t->collapseAll(); break;
        case 5: _t->expandAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReplicaDrillerConfigToolbar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplicaDrillerConfigToolbar::hideSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReplicaDrillerConfigToolbar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplicaDrillerConfigToolbar::showSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ReplicaDrillerConfigToolbar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplicaDrillerConfigToolbar::hideAll)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ReplicaDrillerConfigToolbar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplicaDrillerConfigToolbar::showAll)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ReplicaDrillerConfigToolbar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplicaDrillerConfigToolbar::collapseAll)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ReplicaDrillerConfigToolbar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplicaDrillerConfigToolbar::expandAll)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Driller::ReplicaDrillerConfigToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Driller__ReplicaDrillerConfigToolbar.data,
    qt_meta_data_Driller__ReplicaDrillerConfigToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::ReplicaDrillerConfigToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::ReplicaDrillerConfigToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__ReplicaDrillerConfigToolbar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Driller::ReplicaDrillerConfigToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Driller::ReplicaDrillerConfigToolbar::hideSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Driller::ReplicaDrillerConfigToolbar::showSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Driller::ReplicaDrillerConfigToolbar::hideAll()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Driller::ReplicaDrillerConfigToolbar::showAll()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Driller::ReplicaDrillerConfigToolbar::collapseAll()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Driller::ReplicaDrillerConfigToolbar::expandAll()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
