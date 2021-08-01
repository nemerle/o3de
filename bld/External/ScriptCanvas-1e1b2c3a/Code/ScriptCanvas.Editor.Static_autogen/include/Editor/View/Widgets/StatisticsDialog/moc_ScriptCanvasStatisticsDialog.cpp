/****************************************************************************
** Meta object code from reading C++ file 'ScriptCanvasStatisticsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/StatisticsDialog/ScriptCanvasStatisticsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptCanvasStatisticsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__StatisticsDialog_t {
    QByteArrayData data[13];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__StatisticsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__StatisticsDialog_t qt_meta_stringdata_ScriptCanvasEditor__StatisticsDialog = {
    {
QT_MOC_LITERAL(0, 0, 36), // "ScriptCanvasEditor::Statistic..."
QT_MOC_LITERAL(1, 37, 18), // "OnSelectionCleared"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 14), // "OnItemSelected"
QT_MOC_LITERAL(4, 72, 39), // "const GraphCanvas::GraphCanva..."
QT_MOC_LITERAL(5, 112, 8), // "treeItem"
QT_MOC_LITERAL(6, 121, 15), // "OnFilterUpdated"
QT_MOC_LITERAL(7, 137, 10), // "filterText"
QT_MOC_LITERAL(8, 148, 31), // "OnScriptCanvasAssetRowsInserted"
QT_MOC_LITERAL(9, 180, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 192, 10), // "modelIndex"
QT_MOC_LITERAL(11, 203, 5), // "first"
QT_MOC_LITERAL(12, 209, 4) // "last"

    },
    "ScriptCanvasEditor::StatisticsDialog\0"
    "OnSelectionCleared\0\0OnItemSelected\0"
    "const GraphCanvas::GraphCanvasTreeItem*\0"
    "treeItem\0OnFilterUpdated\0filterText\0"
    "OnScriptCanvasAssetRowsInserted\0"
    "QModelIndex\0modelIndex\0first\0last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__StatisticsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x0a /* Public */,
       8,    3,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   10,   11,   12,

       0        // eod
};

void ScriptCanvasEditor::StatisticsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatisticsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionCleared(); break;
        case 1: _t->OnItemSelected((*reinterpret_cast< const GraphCanvas::GraphCanvasTreeItem*(*)>(_a[1]))); break;
        case 2: _t->OnFilterUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OnScriptCanvasAssetRowsInserted((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::StatisticsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__StatisticsDialog.data,
    qt_meta_data_ScriptCanvasEditor__StatisticsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::StatisticsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::StatisticsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__StatisticsDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzFramework::AssetCatalogEventBus::Handler"))
        return static_cast< AzFramework::AssetCatalogEventBus::Handler*>(this);
    if (!strcmp(_clname, "NodePaletteModelNotificationBus::Handler"))
        return static_cast< NodePaletteModelNotificationBus::Handler*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptCanvasEditor::StatisticsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
