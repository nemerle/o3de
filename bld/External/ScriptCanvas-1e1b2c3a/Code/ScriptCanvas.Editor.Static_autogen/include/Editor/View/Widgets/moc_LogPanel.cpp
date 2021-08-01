/****************************************************************************
** Meta object code from reading C++ file 'LogPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/LogPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanel_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanel_t qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanel = {
    {
QT_MOC_LITERAL(0, 0, 36) // "ScriptCanvasEditor::Widget::L..."

    },
    "ScriptCanvasEditor::Widget::LogPanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__Widget__LogPanel[] = {

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

void ScriptCanvasEditor::Widget::LogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::Widget::LogPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::LogPanel::BaseLogPanel::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanel.data,
    qt_meta_data_ScriptCanvasEditor__Widget__LogPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::Widget::LogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::Widget::LogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ScriptCanvasEditor::GeneralGraphEventBus::Handler"))
        return static_cast< ScriptCanvasEditor::GeneralGraphEventBus::Handler*>(this);
    return AzToolsFramework::LogPanel::BaseLogPanel::qt_metacast(_clname);
}

int ScriptCanvasEditor::Widget::LogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::LogPanel::BaseLogPanel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanelWidget_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanelWidget_t qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanelWidget = {
    {
QT_MOC_LITERAL(0, 0, 42) // "ScriptCanvasEditor::Widget::L..."

    },
    "ScriptCanvasEditor::Widget::LogPanelWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__Widget__LogPanelWidget[] = {

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

void ScriptCanvasEditor::Widget::LogPanelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::Widget::LogPanelWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::StyledDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanelWidget.data,
    qt_meta_data_ScriptCanvasEditor__Widget__LogPanelWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::Widget::LogPanelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::Widget::LogPanelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__Widget__LogPanelWidget.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::StyledDockWidget::qt_metacast(_clname);
}

int ScriptCanvasEditor::Widget::LogPanelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::StyledDockWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ScriptCanvasEditor__Widget__LogTab_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__Widget__LogTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__Widget__LogTab_t qt_meta_stringdata_ScriptCanvasEditor__Widget__LogTab = {
    {
QT_MOC_LITERAL(0, 0, 34), // "ScriptCanvasEditor::Widget::L..."
QT_MOC_LITERAL(1, 35, 13), // "DrainMessages"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5) // "Clear"

    },
    "ScriptCanvasEditor::Widget::LogTab\0"
    "DrainMessages\0\0Clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__Widget__LogTab[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScriptCanvasEditor::Widget::LogTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DrainMessages(); break;
        case 1: _t->Clear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::Widget::LogTab::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::LogPanel::BaseLogView::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__Widget__LogTab.data,
    qt_meta_data_ScriptCanvasEditor__Widget__LogTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::Widget::LogTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::Widget::LogTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__Widget__LogTab.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ScriptCanvas::LogNotificationBus::Handler"))
        return static_cast< ScriptCanvas::LogNotificationBus::Handler*>(this);
    return AzToolsFramework::LogPanel::BaseLogView::qt_metacast(_clname);
}

int ScriptCanvasEditor::Widget::LogTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::LogPanel::BaseLogView::qt_metacall(_c, _id, _a);
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
