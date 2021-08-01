/****************************************************************************
** Meta object code from reading C++ file 'GraphVariablesTableView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/VariablePanel/GraphVariablesTableView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphVariablesTableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModel_t {
    QByteArrayData data[5];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModel_t qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModel = {
    {
QT_MOC_LITERAL(0, 0, 39), // "ScriptCanvasEditor::GraphVari..."
QT_MOC_LITERAL(1, 40, 13), // "VariableAdded"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 67, 10) // "modelIndex"

    },
    "ScriptCanvasEditor::GraphVariablesModel\0"
    "VariableAdded\0\0QModelIndex\0modelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__GraphVariablesModel[] = {

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

void ScriptCanvasEditor::GraphVariablesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphVariablesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VariableAdded((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphVariablesModel::*)(QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphVariablesModel::VariableAdded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::GraphVariablesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModel.data,
    qt_meta_data_ScriptCanvasEditor__GraphVariablesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::GraphVariablesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::GraphVariablesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ScriptCanvas::GraphVariableManagerNotificationBus::Handler"))
        return static_cast< ScriptCanvas::GraphVariableManagerNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "ScriptCanvas::VariableNotificationBus::MultiHandler"))
        return static_cast< ScriptCanvas::VariableNotificationBus::MultiHandler*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int ScriptCanvasEditor::GraphVariablesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
void ScriptCanvasEditor::GraphVariablesModel::VariableAdded(QModelIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel_t qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 59) // "ScriptCanvasEditor::GraphVari..."

    },
    "ScriptCanvasEditor::GraphVariablesModelSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel[] = {

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

void ScriptCanvasEditor::GraphVariablesModelSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::GraphVariablesModelSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel.data,
    qt_meta_data_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::GraphVariablesModelSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::GraphVariablesModelSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesModelSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ScriptCanvasEditor::GraphVariablesModelSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesTableView_t {
    QByteArrayData data[18];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesTableView_t qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesTableView = {
    {
QT_MOC_LITERAL(0, 0, 43), // "ScriptCanvasEditor::GraphVari..."
QT_MOC_LITERAL(1, 44, 16), // "SelectionChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 46), // "AZStd::unordered_set<ScriptCa..."
QT_MOC_LITERAL(4, 109, 11), // "variableIds"
QT_MOC_LITERAL(5, 121, 15), // "DeleteVariables"
QT_MOC_LITERAL(6, 137, 15), // "OnVariableAdded"
QT_MOC_LITERAL(7, 153, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 165, 10), // "modelIndex"
QT_MOC_LITERAL(9, 176, 16), // "OnDeleteSelected"
QT_MOC_LITERAL(10, 193, 14), // "OnCopySelected"
QT_MOC_LITERAL(11, 208, 7), // "OnPaste"
QT_MOC_LITERAL(12, 216, 11), // "OnDuplicate"
QT_MOC_LITERAL(13, 228, 14), // "SetCycleTarget"
QT_MOC_LITERAL(14, 243, 24), // "ScriptCanvas::VariableId"
QT_MOC_LITERAL(15, 268, 10), // "variableId"
QT_MOC_LITERAL(16, 279, 28), // "CycleToNextVariableReference"
QT_MOC_LITERAL(17, 308, 32) // "CycleToPreviousVariableReference"

    },
    "ScriptCanvasEditor::GraphVariablesTableView\0"
    "SelectionChanged\0\0"
    "AZStd::unordered_set<ScriptCanvas::VariableId>\0"
    "variableIds\0DeleteVariables\0OnVariableAdded\0"
    "QModelIndex\0modelIndex\0OnDeleteSelected\0"
    "OnCopySelected\0OnPaste\0OnDuplicate\0"
    "SetCycleTarget\0ScriptCanvas::VariableId\0"
    "variableId\0CycleToNextVariableReference\0"
    "CycleToPreviousVariableReference"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__GraphVariablesTableView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   70,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,
      12,    0,   76,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,
      16,    0,   80,    2, 0x0a /* Public */,
      17,    0,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ScriptCanvasEditor::GraphVariablesTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphVariablesTableView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionChanged((*reinterpret_cast< const AZStd::unordered_set<ScriptCanvas::VariableId>(*)>(_a[1]))); break;
        case 1: _t->DeleteVariables((*reinterpret_cast< const AZStd::unordered_set<ScriptCanvas::VariableId>(*)>(_a[1]))); break;
        case 2: _t->OnVariableAdded((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->OnDeleteSelected(); break;
        case 4: _t->OnCopySelected(); break;
        case 5: _t->OnPaste(); break;
        case 6: _t->OnDuplicate(); break;
        case 7: _t->SetCycleTarget((*reinterpret_cast< ScriptCanvas::VariableId(*)>(_a[1]))); break;
        case 8: _t->CycleToNextVariableReference(); break;
        case 9: _t->CycleToPreviousVariableReference(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphVariablesTableView::*)(const AZStd::unordered_set<ScriptCanvas::VariableId> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphVariablesTableView::SelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphVariablesTableView::*)(const AZStd::unordered_set<ScriptCanvas::VariableId> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphVariablesTableView::DeleteVariables)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::GraphVariablesTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesTableView.data,
    qt_meta_data_ScriptCanvasEditor__GraphVariablesTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::GraphVariablesTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::GraphVariablesTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__GraphVariablesTableView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GraphCanvas::SceneNotificationBus::Handler"))
        return static_cast< GraphCanvas::SceneNotificationBus::Handler*>(this);
    return QTableView::qt_metacast(_clname);
}

int ScriptCanvasEditor::GraphVariablesTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ScriptCanvasEditor::GraphVariablesTableView::SelectionChanged(const AZStd::unordered_set<ScriptCanvas::VariableId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptCanvasEditor::GraphVariablesTableView::DeleteVariables(const AZStd::unordered_set<ScriptCanvas::VariableId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
