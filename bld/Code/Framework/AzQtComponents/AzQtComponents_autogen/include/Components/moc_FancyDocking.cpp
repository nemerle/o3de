/****************************************************************************
** Meta object code from reading C++ file 'FancyDocking.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/FancyDocking.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FancyDocking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__FancyDocking_t {
    QByteArrayData data[20];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__FancyDocking_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__FancyDocking_t qt_meta_stringdata_AzQtComponents__FancyDocking = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AzQtComponents::FancyDocking"
QT_MOC_LITERAL(1, 29, 17), // "onTabIndexPressed"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 5), // "index"
QT_MOC_LITERAL(4, 54, 17), // "onTabCountChanged"
QT_MOC_LITERAL(5, 72, 5), // "count"
QT_MOC_LITERAL(6, 78, 24), // "onCurrentTabIndexChanged"
QT_MOC_LITERAL(7, 103, 19), // "onTabWidgetInserted"
QT_MOC_LITERAL(8, 123, 8), // "QWidget*"
QT_MOC_LITERAL(9, 132, 6), // "widget"
QT_MOC_LITERAL(10, 139, 11), // "onUndockTab"
QT_MOC_LITERAL(11, 151, 21), // "onTabBarDoubleClicked"
QT_MOC_LITERAL(12, 173, 18), // "onUndockDockWidget"
QT_MOC_LITERAL(13, 192, 21), // "updateDockingGeometry"
QT_MOC_LITERAL(14, 214, 17), // "handleScreenAdded"
QT_MOC_LITERAL(15, 232, 8), // "QScreen*"
QT_MOC_LITERAL(16, 241, 6), // "screen"
QT_MOC_LITERAL(17, 248, 19), // "handleScreenRemoved"
QT_MOC_LITERAL(18, 268, 27), // "onDropZoneHoverFadeInUpdate"
QT_MOC_LITERAL(19, 296, 20) // "updateFloatingPixmap"

    },
    "AzQtComponents::FancyDocking\0"
    "onTabIndexPressed\0\0index\0onTabCountChanged\0"
    "count\0onCurrentTabIndexChanged\0"
    "onTabWidgetInserted\0QWidget*\0widget\0"
    "onUndockTab\0onTabBarDoubleClicked\0"
    "onUndockDockWidget\0updateDockingGeometry\0"
    "handleScreenAdded\0QScreen*\0screen\0"
    "handleScreenRemoved\0onDropZoneHoverFadeInUpdate\0"
    "updateFloatingPixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__FancyDocking[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
      10,    1,   86,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      17,    1,   95,    2, 0x08 /* Private */,
      18,    0,   98,    2, 0x08 /* Private */,
      19,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzQtComponents::FancyDocking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FancyDocking *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTabIndexPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onTabCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCurrentTabIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onTabWidgetInserted((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->onUndockTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onTabBarDoubleClicked(); break;
        case 6: _t->onUndockDockWidget(); break;
        case 7: _t->updateDockingGeometry(); break;
        case 8: _t->handleScreenAdded((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 9: _t->handleScreenRemoved((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 10: _t->onDropZoneHoverFadeInUpdate(); break;
        case 11: _t->updateFloatingPixmap(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::FancyDocking::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__FancyDocking.data,
    qt_meta_data_AzQtComponents__FancyDocking,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::FancyDocking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::FancyDocking::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__FancyDocking.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzQtComponents::FancyDocking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
