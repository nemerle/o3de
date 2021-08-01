/****************************************************************************
** Meta object code from reading C++ file 'BookmarkDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/GraphCanvas/Code/StaticLib/GraphCanvas/Widgets/Bookmarks/BookmarkDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookmarkDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphCanvas__BookmarkDockWidget_t {
    QByteArrayData data[10];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__BookmarkDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__BookmarkDockWidget_t qt_meta_stringdata_GraphCanvas__BookmarkDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "GraphCanvas::BookmarkDockWidget"
QT_MOC_LITERAL(1, 32, 16), // "OnCreateBookmark"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "OnDeleteBookmark"
QT_MOC_LITERAL(4, 67, 22), // "OnContextMenuRequested"
QT_MOC_LITERAL(5, 90, 3), // "pos"
QT_MOC_LITERAL(6, 94, 16), // "SelectionChanged"
QT_MOC_LITERAL(7, 111, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 126, 8), // "selected"
QT_MOC_LITERAL(9, 135, 10) // "deselected"

    },
    "GraphCanvas::BookmarkDockWidget\0"
    "OnCreateBookmark\0\0OnDeleteBookmark\0"
    "OnContextMenuRequested\0pos\0SelectionChanged\0"
    "QItemSelection\0selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__BookmarkDockWidget[] = {

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
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       6,    2,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,

       0        // eod
};

void GraphCanvas::BookmarkDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BookmarkDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnCreateBookmark(); break;
        case 1: _t->OnDeleteBookmark(); break;
        case 2: _t->OnContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::BookmarkDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::StyledDockWidget::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__BookmarkDockWidget.data,
    qt_meta_data_GraphCanvas__BookmarkDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::BookmarkDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::BookmarkDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__BookmarkDockWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BookmarkTableRequestBus::Handler"))
        return static_cast< BookmarkTableRequestBus::Handler*>(this);
    if (!strcmp(_clname, "GraphCanvas::SceneNotificationBus::Handler"))
        return static_cast< GraphCanvas::SceneNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "AssetEditorNotificationBus::Handler"))
        return static_cast< AssetEditorNotificationBus::Handler*>(this);
    return AzQtComponents::StyledDockWidget::qt_metacast(_clname);
}

int GraphCanvas::BookmarkDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::StyledDockWidget::qt_metacall(_c, _id, _a);
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
