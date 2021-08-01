/****************************************************************************
** Meta object code from reading C++ file 'NodePaletteSortFilterProxyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../Gems/GraphCanvas/Code/StaticLib/GraphCanvas/Widgets/NodePalette/Model/NodePaletteSortFilterProxyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodePaletteSortFilterProxyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphCanvas__NodePaletteAutoCompleteModel_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__NodePaletteAutoCompleteModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__NodePaletteAutoCompleteModel_t qt_meta_stringdata_GraphCanvas__NodePaletteAutoCompleteModel = {
    {
QT_MOC_LITERAL(0, 0, 41) // "GraphCanvas::NodePaletteAutoC..."

    },
    "GraphCanvas::NodePaletteAutoCompleteModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__NodePaletteAutoCompleteModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GraphCanvas::NodePaletteAutoCompleteModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::NodePaletteAutoCompleteModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__NodePaletteAutoCompleteModel.data,
    qt_meta_data_GraphCanvas__NodePaletteAutoCompleteModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::NodePaletteAutoCompleteModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::NodePaletteAutoCompleteModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__NodePaletteAutoCompleteModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int GraphCanvas::NodePaletteAutoCompleteModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GraphCanvas__NodePaletteSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__NodePaletteSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__NodePaletteSortFilterProxyModel_t qt_meta_stringdata_GraphCanvas__NodePaletteSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 44) // "GraphCanvas::NodePaletteSortF..."

    },
    "GraphCanvas::NodePaletteSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__NodePaletteSortFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GraphCanvas::NodePaletteSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::NodePaletteSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__NodePaletteSortFilterProxyModel.data,
    qt_meta_data_GraphCanvas__NodePaletteSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::NodePaletteSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::NodePaletteSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__NodePaletteSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int GraphCanvas::NodePaletteSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
