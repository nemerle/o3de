/****************************************************************************
** Meta object code from reading C++ file 'EntityOutlinerWidget.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Outliner/EntityOutlinerWidget.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityOutlinerWidget.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__EntityOutlinerWidget_t {
    QByteArrayData data[18];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__EntityOutlinerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__EntityOutlinerWidget_t qt_meta_stringdata_AzToolsFramework__EntityOutlinerWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "AzToolsFramework::EntityOutli..."
QT_MOC_LITERAL(1, 39, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 74, 21), // "OnOpenTreeContextMenu"
QT_MOC_LITERAL(5, 96, 3), // "pos"
QT_MOC_LITERAL(6, 100, 19), // "OnSearchTextChanged"
QT_MOC_LITERAL(7, 120, 16), // "activeTextFilter"
QT_MOC_LITERAL(8, 137, 15), // "OnFilterChanged"
QT_MOC_LITERAL(9, 153, 36), // "AzQtComponents::SearchTypeFil..."
QT_MOC_LITERAL(10, 190, 17), // "activeTypeFilters"
QT_MOC_LITERAL(11, 208, 17), // "OnSortModeChanged"
QT_MOC_LITERAL(12, 226, 31), // "EntityOutliner::DisplaySortMode"
QT_MOC_LITERAL(13, 258, 8), // "sortMode"
QT_MOC_LITERAL(14, 267, 22), // "OnDisplayOptionChanged"
QT_MOC_LITERAL(15, 290, 29), // "EntityOutliner::DisplayOption"
QT_MOC_LITERAL(16, 320, 13), // "displayOption"
QT_MOC_LITERAL(17, 334, 6) // "enable"

    },
    "AzToolsFramework::EntityOutlinerWidget\0"
    "OnSelectionChanged\0\0QItemSelection\0"
    "OnOpenTreeContextMenu\0pos\0OnSearchTextChanged\0"
    "activeTextFilter\0OnFilterChanged\0"
    "AzQtComponents::SearchTypeFilterList\0"
    "activeTypeFilters\0OnSortModeChanged\0"
    "EntityOutliner::DisplaySortMode\0"
    "sortMode\0OnDisplayOptionChanged\0"
    "EntityOutliner::DisplayOption\0"
    "displayOption\0enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__EntityOutlinerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       4,    1,   49,    2, 0x08 /* Private */,
       6,    1,   52,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,
      11,    1,   58,    2, 0x08 /* Private */,
      14,    2,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Bool,   16,   17,

       0        // eod
};

void AzToolsFramework::EntityOutlinerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EntityOutlinerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->OnOpenTreeContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->OnSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OnFilterChanged((*reinterpret_cast< const AzQtComponents::SearchTypeFilterList(*)>(_a[1]))); break;
        case 4: _t->OnSortModeChanged((*reinterpret_cast< EntityOutliner::DisplaySortMode(*)>(_a[1]))); break;
        case 5: _t->OnDisplayOptionChanged((*reinterpret_cast< EntityOutliner::DisplayOption(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::EntityOutlinerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__EntityOutlinerWidget.data,
    qt_meta_data_AzToolsFramework__EntityOutlinerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::EntityOutlinerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::EntityOutlinerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__EntityOutlinerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::EntityOutlinerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
