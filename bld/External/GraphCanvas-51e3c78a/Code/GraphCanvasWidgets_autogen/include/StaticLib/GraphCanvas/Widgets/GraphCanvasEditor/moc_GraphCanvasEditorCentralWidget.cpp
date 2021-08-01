/****************************************************************************
** Meta object code from reading C++ file 'GraphCanvasEditorCentralWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/GraphCanvas/Code/StaticLib/GraphCanvas/Widgets/GraphCanvasEditor/GraphCanvasEditorCentralWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphCanvasEditorCentralWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphCanvas__GraphCanvasEditorEmptyDockWidget_t {
    QByteArrayData data[1];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__GraphCanvasEditorEmptyDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__GraphCanvasEditorEmptyDockWidget_t qt_meta_stringdata_GraphCanvas__GraphCanvasEditorEmptyDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 45) // "GraphCanvas::GraphCanvasEdito..."

    },
    "GraphCanvas::GraphCanvasEditorEmptyDockWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__GraphCanvasEditorEmptyDockWidget[] = {

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

void GraphCanvas::GraphCanvasEditorEmptyDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::GraphCanvasEditorEmptyDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__GraphCanvasEditorEmptyDockWidget.data,
    qt_meta_data_GraphCanvas__GraphCanvasEditorEmptyDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::GraphCanvasEditorEmptyDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::GraphCanvasEditorEmptyDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__GraphCanvasEditorEmptyDockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int GraphCanvas::GraphCanvasEditorEmptyDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GraphCanvas__AssetEditorCentralDockWindow_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__AssetEditorCentralDockWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__AssetEditorCentralDockWindow_t qt_meta_stringdata_GraphCanvas__AssetEditorCentralDockWindow = {
    {
QT_MOC_LITERAL(0, 0, 41), // "GraphCanvas::AssetEditorCentr..."
QT_MOC_LITERAL(1, 42, 15), // "OnEditorClosing"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 17), // "EditorDockWidget*"
QT_MOC_LITERAL(4, 77, 10), // "dockWidget"
QT_MOC_LITERAL(5, 88, 29), // "HandleTabWidgetCurrentChanged"
QT_MOC_LITERAL(6, 118, 5) // "index"

    },
    "GraphCanvas::AssetEditorCentralDockWindow\0"
    "OnEditorClosing\0\0EditorDockWidget*\0"
    "dockWidget\0HandleTabWidgetCurrentChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__AssetEditorCentralDockWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void GraphCanvas::AssetEditorCentralDockWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetEditorCentralDockWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnEditorClosing((*reinterpret_cast< EditorDockWidget*(*)>(_a[1]))); break;
        case 1: _t->HandleTabWidgetCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetEditorCentralDockWindow::*)(EditorDockWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetEditorCentralDockWindow::OnEditorClosing)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::AssetEditorCentralDockWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::DockMainWindow::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__AssetEditorCentralDockWindow.data,
    qt_meta_data_GraphCanvas__AssetEditorCentralDockWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::AssetEditorCentralDockWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::AssetEditorCentralDockWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__AssetEditorCentralDockWindow.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::DockMainWindow::qt_metacast(_clname);
}

int GraphCanvas::AssetEditorCentralDockWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::DockMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GraphCanvas::AssetEditorCentralDockWindow::OnEditorClosing(EditorDockWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
