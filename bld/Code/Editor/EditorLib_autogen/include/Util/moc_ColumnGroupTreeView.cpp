/****************************************************************************
** Meta object code from reading C++ file 'ColumnGroupTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/Util/ColumnGroupTreeView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColumnGroupTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColumnGroupTreeView_t {
    QByteArrayData data[21];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColumnGroupTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColumnGroupTreeView_t qt_meta_stringdata_ColumnGroupTreeView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ColumnGroupTreeView"
QT_MOC_LITERAL(1, 20, 10), // "ShowGroups"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "showGroups"
QT_MOC_LITERAL(4, 43, 4), // "Sort"
QT_MOC_LITERAL(5, 48, 6), // "column"
QT_MOC_LITERAL(6, 55, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(7, 69, 5), // "order"
QT_MOC_LITERAL(8, 75, 15), // "ToggleSortOrder"
QT_MOC_LITERAL(9, 91, 8), // "AddGroup"
QT_MOC_LITERAL(10, 100, 11), // "RemoveGroup"
QT_MOC_LITERAL(11, 112, 9), // "SetGroups"
QT_MOC_LITERAL(12, 122, 12), // "QVector<int>"
QT_MOC_LITERAL(13, 135, 7), // "columns"
QT_MOC_LITERAL(14, 143, 11), // "ClearGroups"
QT_MOC_LITERAL(15, 155, 6), // "Groups"
QT_MOC_LITERAL(16, 162, 13), // "SaveOpenState"
QT_MOC_LITERAL(17, 176, 16), // "RestoreOpenState"
QT_MOC_LITERAL(18, 193, 10), // "SpanGroups"
QT_MOC_LITERAL(19, 204, 11), // "QModelIndex"
QT_MOC_LITERAL(20, 216, 5) // "index"

    },
    "ColumnGroupTreeView\0ShowGroups\0\0"
    "showGroups\0Sort\0column\0Qt::SortOrder\0"
    "order\0ToggleSortOrder\0AddGroup\0"
    "RemoveGroup\0SetGroups\0QVector<int>\0"
    "columns\0ClearGroups\0Groups\0SaveOpenState\0"
    "RestoreOpenState\0SpanGroups\0QModelIndex\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColumnGroupTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    2,   82,    2, 0x0a /* Public */,
       4,    1,   87,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   90,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x0a /* Public */,
      10,    1,   96,    2, 0x0a /* Public */,
      11,    1,   99,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    1,  106,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    0x80000000 | 12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,

       0        // eod
};

void ColumnGroupTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColumnGroupTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowGroups((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->Sort((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 2: _t->Sort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ToggleSortOrder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->AddGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->RemoveGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SetGroups((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 7: _t->ClearGroups(); break;
        case 8: { QVector<int> _r = _t->Groups();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->SaveOpenState(); break;
        case 10: _t->RestoreOpenState(); break;
        case 11: _t->SpanGroups((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->SpanGroups(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ColumnGroupTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_ColumnGroupTreeView.data,
    qt_meta_data_ColumnGroupTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColumnGroupTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColumnGroupTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColumnGroupTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int ColumnGroupTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
