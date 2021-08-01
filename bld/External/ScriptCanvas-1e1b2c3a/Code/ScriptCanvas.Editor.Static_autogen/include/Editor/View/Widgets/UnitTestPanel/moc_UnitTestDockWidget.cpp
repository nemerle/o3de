/****************************************************************************
** Meta object code from reading C++ file 'UnitTestDockWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/UnitTestPanel/UnitTestDockWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UnitTestDockWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__ItemButtonsDelegate_t {
    QByteArrayData data[5];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__ItemButtonsDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__ItemButtonsDelegate_t qt_meta_stringdata_ScriptCanvasEditor__ItemButtonsDelegate = {
    {
QT_MOC_LITERAL(0, 0, 39), // "ScriptCanvasEditor::ItemButto..."
QT_MOC_LITERAL(1, 40, 17), // "EditButtonClicked"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 71, 20) // "ResultsButtonClicked"

    },
    "ScriptCanvasEditor::ItemButtonsDelegate\0"
    "EditButtonClicked\0\0QModelIndex\0"
    "ResultsButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__ItemButtonsDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void ScriptCanvasEditor::ItemButtonsDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ItemButtonsDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EditButtonClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->ResultsButtonClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ItemButtonsDelegate::*)(QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemButtonsDelegate::EditButtonClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ItemButtonsDelegate::*)(QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemButtonsDelegate::ResultsButtonClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::ItemButtonsDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__ItemButtonsDelegate.data,
    qt_meta_data_ScriptCanvasEditor__ItemButtonsDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::ItemButtonsDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::ItemButtonsDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__ItemButtonsDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int ScriptCanvasEditor::ItemButtonsDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
void ScriptCanvasEditor::ItemButtonsDelegate::EditButtonClicked(QModelIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptCanvasEditor::ItemButtonsDelegate::ResultsButtonClicked(QModelIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ScriptCanvasEditor__UnitTestDockWidget_t {
    QByteArrayData data[9];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__UnitTestDockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__UnitTestDockWidget_t qt_meta_stringdata_ScriptCanvasEditor__UnitTestDockWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "ScriptCanvasEditor::UnitTestD..."
QT_MOC_LITERAL(1, 39, 22), // "OnContextMenuRequested"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 3), // "pos"
QT_MOC_LITERAL(4, 67, 18), // "OnRowDoubleClicked"
QT_MOC_LITERAL(5, 86, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 98, 5), // "index"
QT_MOC_LITERAL(7, 104, 19), // "OnEditButtonClicked"
QT_MOC_LITERAL(8, 124, 22) // "OnResultsButtonClicked"

    },
    "ScriptCanvasEditor::UnitTestDockWidget\0"
    "OnContextMenuRequested\0\0pos\0"
    "OnRowDoubleClicked\0QModelIndex\0index\0"
    "OnEditButtonClicked\0OnResultsButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__UnitTestDockWidget[] = {

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
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void ScriptCanvasEditor::UnitTestDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnitTestDockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->OnRowDoubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->OnEditButtonClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->OnResultsButtonClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::UnitTestDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::StyledDockWidget::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__UnitTestDockWidget.data,
    qt_meta_data_ScriptCanvasEditor__UnitTestDockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::UnitTestDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::UnitTestDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__UnitTestDockWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GraphCanvas::AssetEditorNotificationBus::Handler"))
        return static_cast< GraphCanvas::AssetEditorNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::EditorEvents::Bus::Handler"))
        return static_cast< AzToolsFramework::EditorEvents::Bus::Handler*>(this);
    if (!strcmp(_clname, "UnitTestWidgetNotificationBus::Handler"))
        return static_cast< UnitTestWidgetNotificationBus::Handler*>(this);
    return AzQtComponents::StyledDockWidget::qt_metacast(_clname);
}

int ScriptCanvasEditor::UnitTestDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
