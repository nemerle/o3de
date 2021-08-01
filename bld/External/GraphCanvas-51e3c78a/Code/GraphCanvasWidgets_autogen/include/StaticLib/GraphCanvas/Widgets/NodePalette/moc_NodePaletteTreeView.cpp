/****************************************************************************
** Meta object code from reading C++ file 'NodePaletteTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/GraphCanvas/Code/StaticLib/GraphCanvas/Widgets/NodePalette/NodePaletteTreeView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodePaletteTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphCanvas__NodePaletteTreeView_t {
    QByteArrayData data[5];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__NodePaletteTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__NodePaletteTreeView_t qt_meta_stringdata_GraphCanvas__NodePaletteTreeView = {
    {
QT_MOC_LITERAL(0, 0, 32), // "GraphCanvas::NodePaletteTreeView"
QT_MOC_LITERAL(1, 33, 23), // "OnTreeItemDoubleClicked"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 33), // "GraphCanvas::NodePaletteTreeI..."
QT_MOC_LITERAL(4, 92, 8) // "treeItem"

    },
    "GraphCanvas::NodePaletteTreeView\0"
    "OnTreeItemDoubleClicked\0\0"
    "GraphCanvas::NodePaletteTreeItem*\0"
    "treeItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__NodePaletteTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void GraphCanvas::NodePaletteTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodePaletteTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnTreeItemDoubleClicked((*reinterpret_cast< GraphCanvas::NodePaletteTreeItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NodePaletteTreeView::*)(GraphCanvas::NodePaletteTreeItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodePaletteTreeView::OnTreeItemDoubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::NodePaletteTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::QTreeViewWithStateSaving::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__NodePaletteTreeView.data,
    qt_meta_data_GraphCanvas__NodePaletteTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::NodePaletteTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::NodePaletteTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__NodePaletteTreeView.stringdata0))
        return static_cast<void*>(this);
    return AzToolsFramework::QTreeViewWithStateSaving::qt_metacast(_clname);
}

int GraphCanvas::NodePaletteTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::QTreeViewWithStateSaving::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GraphCanvas::NodePaletteTreeView::OnTreeItemDoubleClicked(GraphCanvas::NodePaletteTreeItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
