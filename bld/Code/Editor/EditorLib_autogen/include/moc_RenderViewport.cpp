/****************************************************************************
** Meta object code from reading C++ file 'RenderViewport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/RenderViewport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderViewport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CRenderViewport_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CRenderViewport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CRenderViewport_t qt_meta_stringdata_CRenderViewport = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CRenderViewport"
QT_MOC_LITERAL(1, 16, 19), // "InjectFakeMouseMove"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "deltaX"
QT_MOC_LITERAL(4, 44, 6), // "deltaY"
QT_MOC_LITERAL(5, 51, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(6, 68, 7) // "buttons"

    },
    "CRenderViewport\0InjectFakeMouseMove\0"
    "\0deltaX\0deltaY\0Qt::MouseButtons\0buttons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CRenderViewport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,

       0        // eod
};

void CRenderViewport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CRenderViewport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InjectFakeMouseMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CRenderViewport::staticMetaObject = { {
    QMetaObject::SuperData::link<QtViewport::staticMetaObject>(),
    qt_meta_stringdata_CRenderViewport.data,
    qt_meta_data_CRenderViewport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CRenderViewport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CRenderViewport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CRenderViewport.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IEditorNotifyListener"))
        return static_cast< IEditorNotifyListener*>(this);
    if (!strcmp(_clname, "IUndoManagerListener"))
        return static_cast< IUndoManagerListener*>(this);
    if (!strcmp(_clname, "Camera::EditorCameraRequestBus::Handler"))
        return static_cast< Camera::EditorCameraRequestBus::Handler*>(this);
    if (!strcmp(_clname, "AzFramework::InputSystemCursorConstraintRequestBus::Handler"))
        return static_cast< AzFramework::InputSystemCursorConstraintRequestBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::ViewportInteraction::ViewportFreezeRequestBus::Handler"))
        return static_cast< AzToolsFramework::ViewportInteraction::ViewportFreezeRequestBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::ViewportInteraction::ViewportInteractionRequestBus::Handler"))
        return static_cast< AzToolsFramework::ViewportInteraction::ViewportInteractionRequestBus::Handler*>(this);
    if (!strcmp(_clname, "AzToolsFramework::ViewportInteraction::MainEditorViewportInteractionRequestBus::Handler"))
        return static_cast< AzToolsFramework::ViewportInteraction::MainEditorViewportInteractionRequestBus::Handler*>(this);
    if (!strcmp(_clname, "AzFramework::WindowRequestBus::Handler"))
        return static_cast< AzFramework::WindowRequestBus::Handler*>(this);
    return QtViewport::qt_metacast(_clname);
}

int CRenderViewport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtViewport::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
