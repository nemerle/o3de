/****************************************************************************
** Meta object code from reading C++ file 'TrackViewNodes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/TrackView/TrackViewNodes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrackViewNodes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTrackViewNodesCtrl_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTrackViewNodesCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTrackViewNodesCtrl_t qt_meta_stringdata_CTrackViewNodesCtrl = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CTrackViewNodesCtrl"
QT_MOC_LITERAL(1, 20, 10), // "OnNMRclick"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "pos"
QT_MOC_LITERAL(4, 36, 14), // "OnItemExpanded"
QT_MOC_LITERAL(5, 51, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 68, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(7, 87, 14), // "OnItemDblClick"
QT_MOC_LITERAL(8, 102, 4), // "item"
QT_MOC_LITERAL(9, 107, 14), // "OnFilterChange"
QT_MOC_LITERAL(10, 122, 4) // "text"

    },
    "CTrackViewNodesCtrl\0OnNMRclick\0\0pos\0"
    "OnItemExpanded\0QTreeWidgetItem*\0"
    "OnSelectionChanged\0OnItemDblClick\0"
    "item\0OnFilterChange\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTrackViewNodesCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    2,   46,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    8,    2,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void CTrackViewNodesCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTrackViewNodesCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnNMRclick((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->OnItemExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->OnSelectionChanged(); break;
        case 3: _t->OnItemDblClick((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->OnFilterChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CTrackViewNodesCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CTrackViewNodesCtrl.data,
    qt_meta_data_CTrackViewNodesCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CTrackViewNodesCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTrackViewNodesCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTrackViewNodesCtrl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ITrackViewSequenceListener"))
        return static_cast< ITrackViewSequenceListener*>(this);
    if (!strcmp(_clname, "IUndoManagerListener"))
        return static_cast< IUndoManagerListener*>(this);
    return QWidget::qt_metacast(_clname);
}

int CTrackViewNodesCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
