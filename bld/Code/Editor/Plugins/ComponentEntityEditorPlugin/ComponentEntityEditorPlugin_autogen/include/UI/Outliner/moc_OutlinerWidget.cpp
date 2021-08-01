/****************************************************************************
** Meta object code from reading C++ file 'OutlinerWidget.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Editor/Plugins/ComponentEntityEditorPlugin/UI/Outliner/OutlinerWidget.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OutlinerWidget.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutlinerWidget_t {
    QByteArrayData data[16];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutlinerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutlinerWidget_t qt_meta_stringdata_OutlinerWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OutlinerWidget"
QT_MOC_LITERAL(1, 15, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 50, 19), // "OnSearchTextChanged"
QT_MOC_LITERAL(5, 70, 16), // "activeTextFilter"
QT_MOC_LITERAL(6, 87, 15), // "OnFilterChanged"
QT_MOC_LITERAL(7, 103, 36), // "AzQtComponents::SearchTypeFil..."
QT_MOC_LITERAL(8, 140, 17), // "activeTypeFilters"
QT_MOC_LITERAL(9, 158, 17), // "OnSortModeChanged"
QT_MOC_LITERAL(10, 176, 31), // "EntityOutliner::DisplaySortMode"
QT_MOC_LITERAL(11, 208, 8), // "sortMode"
QT_MOC_LITERAL(12, 217, 22), // "OnDisplayOptionChanged"
QT_MOC_LITERAL(13, 240, 29), // "EntityOutliner::DisplayOption"
QT_MOC_LITERAL(14, 270, 13), // "displayOption"
QT_MOC_LITERAL(15, 284, 6) // "enable"

    },
    "OutlinerWidget\0OnSelectionChanged\0\0"
    "QItemSelection\0OnSearchTextChanged\0"
    "activeTextFilter\0OnFilterChanged\0"
    "AzQtComponents::SearchTypeFilterList\0"
    "activeTypeFilters\0OnSortModeChanged\0"
    "EntityOutliner::DisplaySortMode\0"
    "sortMode\0OnDisplayOptionChanged\0"
    "EntityOutliner::DisplayOption\0"
    "displayOption\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutlinerWidget[] = {

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
       1,    2,   39,    2, 0x08 /* Private */,
       4,    1,   44,    2, 0x08 /* Private */,
       6,    1,   47,    2, 0x08 /* Private */,
       9,    1,   50,    2, 0x08 /* Private */,
      12,    2,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,   14,   15,

       0        // eod
};

void OutlinerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OutlinerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->OnSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnFilterChanged((*reinterpret_cast< const AzQtComponents::SearchTypeFilterList(*)>(_a[1]))); break;
        case 3: _t->OnSortModeChanged((*reinterpret_cast< EntityOutliner::DisplaySortMode(*)>(_a[1]))); break;
        case 4: _t->OnDisplayOptionChanged((*reinterpret_cast< EntityOutliner::DisplayOption(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OutlinerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OutlinerWidget.data,
    qt_meta_data_OutlinerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OutlinerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutlinerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutlinerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OutlinerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
