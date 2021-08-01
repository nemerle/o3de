/****************************************************************************
** Meta object code from reading C++ file 'AssetBrowserTreeView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/AssetBrowser/Views/AssetBrowserTreeView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetBrowserTreeView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserTreeView_t {
    QByteArrayData data[17];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserTreeView_t qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserTreeView = {
    {
QT_MOC_LITERAL(0, 0, 52), // "AzToolsFramework::AssetBrowse..."
QT_MOC_LITERAL(1, 53, 22), // "selectionChangedSignal"
QT_MOC_LITERAL(2, 76, 0), // ""
QT_MOC_LITERAL(3, 77, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 92, 8), // "selected"
QT_MOC_LITERAL(5, 101, 10), // "deselected"
QT_MOC_LITERAL(6, 112, 17), // "ClearStringFilter"
QT_MOC_LITERAL(7, 130, 15), // "ClearTypeFilter"
QT_MOC_LITERAL(8, 146, 16), // "selectionChanged"
QT_MOC_LITERAL(9, 163, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(10, 184, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 196, 6), // "parent"
QT_MOC_LITERAL(12, 203, 5), // "start"
QT_MOC_LITERAL(13, 209, 3), // "end"
QT_MOC_LITERAL(14, 213, 13), // "OnContextMenu"
QT_MOC_LITERAL(15, 227, 5), // "point"
QT_MOC_LITERAL(16, 233, 24) // "OnUpdateSCThumbnailsList"

    },
    "AzToolsFramework::AssetBrowser::AssetBrowserTreeView\0"
    "selectionChangedSignal\0\0QItemSelection\0"
    "selected\0deselected\0ClearStringFilter\0"
    "ClearTypeFilter\0selectionChanged\0"
    "rowsAboutToBeRemoved\0QModelIndex\0"
    "parent\0start\0end\0OnContextMenu\0point\0"
    "OnUpdateSCThumbnailsList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetBrowser__AssetBrowserTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   56,    2, 0x09 /* Protected */,
       9,    3,   61,    2, 0x09 /* Protected */,
      14,    1,   68,    2, 0x08 /* Private */,
      16,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::AssetBrowser::AssetBrowserTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetBrowserTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChangedSignal((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->ClearStringFilter(); break;
        case 2: _t->ClearTypeFilter(); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->OnContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->OnUpdateSCThumbnailsList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetBrowserTreeView::*)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetBrowserTreeView::selectionChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetBrowserTreeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetBrowserTreeView::ClearStringFilter)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssetBrowserTreeView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetBrowserTreeView::ClearTypeFilter)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetBrowser::AssetBrowserTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeViewWithStateSaving::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserTreeView.data,
    qt_meta_data_AzToolsFramework__AssetBrowser__AssetBrowserTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetBrowser::AssetBrowserTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetBrowser::AssetBrowserTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetBrowser__AssetBrowserTreeView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetBrowserViewRequestBus::Handler"))
        return static_cast< AssetBrowserViewRequestBus::Handler*>(this);
    if (!strcmp(_clname, "AssetBrowserComponentNotificationBus::Handler"))
        return static_cast< AssetBrowserComponentNotificationBus::Handler*>(this);
    return QTreeViewWithStateSaving::qt_metacast(_clname);
}

int AzToolsFramework::AssetBrowser::AssetBrowserTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeViewWithStateSaving::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::AssetBrowser::AssetBrowserTreeView::selectionChangedSignal(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::AssetBrowser::AssetBrowserTreeView::ClearStringFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzToolsFramework::AssetBrowser::AssetBrowserTreeView::ClearTypeFilter()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
