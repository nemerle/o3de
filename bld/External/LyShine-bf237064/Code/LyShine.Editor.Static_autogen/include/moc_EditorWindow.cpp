/****************************************************************************
** Meta object code from reading C++ file 'EditorWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/LyShine/Code/Editor/EditorWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditorWindow_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorWindow_t qt_meta_stringdata_EditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EditorWindow"
QT_MOC_LITERAL(1, 13, 17), // "EditorModeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "UiEditorMode"
QT_MOC_LITERAL(4, 45, 4), // "mode"
QT_MOC_LITERAL(5, 50, 27), // "SignalCoordinateSystemCycle"
QT_MOC_LITERAL(6, 78, 22), // "SignalSnapToGridToggle"
QT_MOC_LITERAL(7, 101, 27), // "RestoreEditorWindowSettings"
QT_MOC_LITERAL(8, 129, 12), // "CleanChanged"
QT_MOC_LITERAL(9, 142, 5) // "clean"

    },
    "EditorWindow\0EditorModeChanged\0\0"
    "UiEditorMode\0mode\0SignalCoordinateSystemCycle\0"
    "SignalSnapToGridToggle\0"
    "RestoreEditorWindowSettings\0CleanChanged\0"
    "clean"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x0a /* Public */,
       8,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void EditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EditorModeChanged((*reinterpret_cast< UiEditorMode(*)>(_a[1]))); break;
        case 1: _t->SignalCoordinateSystemCycle(); break;
        case 2: _t->SignalSnapToGridToggle(); break;
        case 3: _t->RestoreEditorWindowSettings(); break;
        case 4: _t->CleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorWindow::*)(UiEditorMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorWindow::EditorModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditorWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorWindow::SignalCoordinateSystemCycle)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EditorWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorWindow::SignalSnapToGridToggle)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditorWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_EditorWindow.data,
    qt_meta_data_EditorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditorWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IEditorNotifyListener"))
        return static_cast< IEditorNotifyListener*>(this);
    if (!strcmp(_clname, "UiEditorDLLBus::Handler"))
        return static_cast< UiEditorDLLBus::Handler*>(this);
    if (!strcmp(_clname, "UiEditorChangeNotificationBus::Handler"))
        return static_cast< UiEditorChangeNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "UiEditorInternalRequestBus::Handler"))
        return static_cast< UiEditorInternalRequestBus::Handler*>(this);
    if (!strcmp(_clname, "UiEditorInternalNotificationBus::Handler"))
        return static_cast< UiEditorInternalNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::AssetBrowser::AssetBrowserModelNotificationBus::Handler"))
        return static_cast< AzToolsFramework::AssetBrowser::AssetBrowserModelNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "UiEditorEntityContextNotificationBus::Handler"))
        return static_cast< UiEditorEntityContextNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::EditorEvents::Bus::Handler"))
        return static_cast< AzToolsFramework::EditorEvents::Bus::Handler*>(this);
    if (!strcmp(_clname, "FontNotificationBus::Handler"))
        return static_cast< FontNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "AZ::Debug::TraceMessageBus::Handler"))
        return static_cast< AZ::Debug::TraceMessageBus::Handler*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EditorWindow::EditorModeChanged(UiEditorMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EditorWindow::SignalCoordinateSystemCycle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EditorWindow::SignalSnapToGridToggle()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
