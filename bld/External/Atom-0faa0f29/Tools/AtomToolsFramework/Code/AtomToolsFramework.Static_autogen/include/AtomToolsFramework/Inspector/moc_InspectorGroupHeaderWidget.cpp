/****************************************************************************
** Meta object code from reading C++ file 'InspectorGroupHeaderWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/Atom/Tools/AtomToolsFramework/Code/Include/AtomToolsFramework/Inspector/InspectorGroupHeaderWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InspectorGroupHeaderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AtomToolsFramework__InspectorGroupHeaderWidget_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AtomToolsFramework__InspectorGroupHeaderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AtomToolsFramework__InspectorGroupHeaderWidget_t qt_meta_stringdata_AtomToolsFramework__InspectorGroupHeaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "AtomToolsFramework::Inspector..."
QT_MOC_LITERAL(1, 47, 7), // "clicked"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 69, 5), // "event"
QT_MOC_LITERAL(5, 75, 8), // "expanded"
QT_MOC_LITERAL(6, 84, 9) // "collapsed"

    },
    "AtomToolsFramework::InspectorGroupHeaderWidget\0"
    "clicked\0\0QMouseEvent*\0event\0expanded\0"
    "collapsed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AtomToolsFramework__InspectorGroupHeaderWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,
       6,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AtomToolsFramework::InspectorGroupHeaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InspectorGroupHeaderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->expanded(); break;
        case 2: _t->collapsed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InspectorGroupHeaderWidget::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectorGroupHeaderWidget::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InspectorGroupHeaderWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectorGroupHeaderWidget::expanded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InspectorGroupHeaderWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InspectorGroupHeaderWidget::collapsed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AtomToolsFramework::InspectorGroupHeaderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::ExtendedLabel::staticMetaObject>(),
    qt_meta_stringdata_AtomToolsFramework__InspectorGroupHeaderWidget.data,
    qt_meta_data_AtomToolsFramework__InspectorGroupHeaderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AtomToolsFramework::InspectorGroupHeaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AtomToolsFramework::InspectorGroupHeaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AtomToolsFramework__InspectorGroupHeaderWidget.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::ExtendedLabel::qt_metacast(_clname);
}

int AtomToolsFramework::InspectorGroupHeaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::ExtendedLabel::qt_metacall(_c, _id, _a);
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
void AtomToolsFramework::InspectorGroupHeaderWidget::clicked(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AtomToolsFramework::InspectorGroupHeaderWidget::expanded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AtomToolsFramework::InspectorGroupHeaderWidget::collapsed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
