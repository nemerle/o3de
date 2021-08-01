/****************************************************************************
** Meta object code from reading C++ file 'WatchesPanel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/LUA/WatchesPanel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WatchesPanel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WatchesDataModel_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchesDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchesDataModel_t qt_meta_stringdata_WatchesDataModel = {
    {
QT_MOC_LITERAL(0, 0, 16) // "WatchesDataModel"

    },
    "WatchesDataModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchesDataModel[] = {

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

void WatchesDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WatchesDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_WatchesDataModel.data,
    qt_meta_data_WatchesDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchesDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchesDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchesDataModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int WatchesDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_DHWatchesWidget_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DHWatchesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DHWatchesWidget_t qt_meta_stringdata_DHWatchesWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DHWatchesWidget"
QT_MOC_LITERAL(1, 16, 13), // "OnItemChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "OnDoubleClicked"
QT_MOC_LITERAL(4, 47, 11) // "QModelIndex"

    },
    "DHWatchesWidget\0OnItemChanged\0\0"
    "OnDoubleClicked\0QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DHWatchesWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void DHWatchesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DHWatchesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnItemChanged(); break;
        case 1: _t->OnDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DHWatchesWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::QTreeViewWithStateSaving::staticMetaObject>(),
    qt_meta_stringdata_DHWatchesWidget.data,
    qt_meta_data_DHWatchesWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DHWatchesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DHWatchesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DHWatchesWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "LUAEditor::LUALocalsTrackerMessages::Handler"))
        return static_cast< LUAEditor::LUALocalsTrackerMessages::Handler*>(this);
    if (!strcmp(_clname, "LUAEditor::LUABreakpointTrackerMessages::Bus::Handler"))
        return static_cast< LUAEditor::LUABreakpointTrackerMessages::Bus::Handler*>(this);
    return AzToolsFramework::QTreeViewWithStateSaving::qt_metacast(_clname);
}

int DHWatchesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::QTreeViewWithStateSaving::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
