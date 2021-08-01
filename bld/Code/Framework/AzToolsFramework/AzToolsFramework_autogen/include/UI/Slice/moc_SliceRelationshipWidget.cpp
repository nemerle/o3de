/****************************************************************************
** Meta object code from reading C++ file 'SliceRelationshipWidget.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Slice/SliceRelationshipWidget.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SliceRelationshipWidget.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__SliceRelationshipWidget_t {
    QByteArrayData data[8];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__SliceRelationshipWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__SliceRelationshipWidget_t qt_meta_stringdata_AzToolsFramework__SliceRelationshipWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "AzToolsFramework::SliceRelati..."
QT_MOC_LITERAL(1, 42, 15), // "OnBrowseClicked"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 23), // "OnInspectSelectedEntity"
QT_MOC_LITERAL(4, 83, 23), // "OnSliceAssetDrilledDown"
QT_MOC_LITERAL(5, 107, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 124, 4), // "item"
QT_MOC_LITERAL(7, 129, 6) // "column"

    },
    "AzToolsFramework::SliceRelationshipWidget\0"
    "OnBrowseClicked\0\0OnInspectSelectedEntity\0"
    "OnSliceAssetDrilledDown\0QTreeWidgetItem*\0"
    "item\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__SliceRelationshipWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    2,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,

       0        // eod
};

void AzToolsFramework::SliceRelationshipWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliceRelationshipWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBrowseClicked(); break;
        case 1: _t->OnInspectSelectedEntity(); break;
        case 2: _t->OnSliceAssetDrilledDown((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::SliceRelationshipWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__SliceRelationshipWidget.data,
    qt_meta_data_AzToolsFramework__SliceRelationshipWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::SliceRelationshipWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::SliceRelationshipWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__SliceRelationshipWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::SliceRelationshipWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
