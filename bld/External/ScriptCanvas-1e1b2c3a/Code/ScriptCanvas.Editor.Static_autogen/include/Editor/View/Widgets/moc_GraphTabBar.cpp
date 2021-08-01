/****************************************************************************
** Meta object code from reading C++ file 'GraphTabBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/ScriptCanvas/Code/Editor/View/Widgets/GraphTabBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphTabBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasEditor__Widget__GraphTabBar_t {
    QByteArrayData data[11];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasEditor__Widget__GraphTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasEditor__Widget__GraphTabBar_t qt_meta_stringdata_ScriptCanvasEditor__Widget__GraphTabBar = {
    {
QT_MOC_LITERAL(0, 0, 39), // "ScriptCanvasEditor::Widget::G..."
QT_MOC_LITERAL(1, 40, 11), // "TabInserted"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 5), // "index"
QT_MOC_LITERAL(4, 59, 10), // "TabRemoved"
QT_MOC_LITERAL(5, 70, 16), // "TabCloseNoButton"
QT_MOC_LITERAL(6, 87, 7), // "SaveTab"
QT_MOC_LITERAL(7, 95, 18), // "CloseAllTabsSignal"
QT_MOC_LITERAL(8, 114, 21), // "CloseAllTabsButSignal"
QT_MOC_LITERAL(9, 136, 19), // "CopyPathToClipboard"
QT_MOC_LITERAL(10, 156, 24) // "OnActiveFileStateChanged"

    },
    "ScriptCanvasEditor::Widget::GraphTabBar\0"
    "TabInserted\0\0index\0TabRemoved\0"
    "TabCloseNoButton\0SaveTab\0CloseAllTabsSignal\0"
    "CloseAllTabsButSignal\0CopyPathToClipboard\0"
    "OnActiveFileStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasEditor__Widget__GraphTabBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    0,   66,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,
       9,    1,   70,    2, 0x06 /* Public */,
      10,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void ScriptCanvasEditor::Widget::GraphTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TabInserted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->TabRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->TabCloseNoButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SaveTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->CloseAllTabsSignal(); break;
        case 5: _t->CloseAllTabsButSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->CopyPathToClipboard((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnActiveFileStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::TabInserted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::TabRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::TabCloseNoButton)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::SaveTab)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GraphTabBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::CloseAllTabsSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GraphTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::CloseAllTabsButSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GraphTabBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::CopyPathToClipboard)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GraphTabBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphTabBar::OnActiveFileStateChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasEditor::Widget::GraphTabBar::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::TabBar::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasEditor__Widget__GraphTabBar.data,
    qt_meta_data_ScriptCanvasEditor__Widget__GraphTabBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasEditor::Widget::GraphTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasEditor::Widget::GraphTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasEditor__Widget__GraphTabBar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MemoryAssetNotificationBus::MultiHandler"))
        return static_cast< MemoryAssetNotificationBus::MultiHandler*>(this);
    return AzQtComponents::TabBar::qt_metacast(_clname);
}

int ScriptCanvasEditor::Widget::GraphTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::TabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ScriptCanvasEditor::Widget::GraphTabBar::TabInserted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptCanvasEditor::Widget::GraphTabBar::TabRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScriptCanvasEditor::Widget::GraphTabBar::TabCloseNoButton(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScriptCanvasEditor::Widget::GraphTabBar::SaveTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ScriptCanvasEditor::Widget::GraphTabBar::CloseAllTabsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ScriptCanvasEditor::Widget::GraphTabBar::CloseAllTabsButSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ScriptCanvasEditor::Widget::GraphTabBar::CopyPathToClipboard(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ScriptCanvasEditor::Widget::GraphTabBar::OnActiveFileStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
