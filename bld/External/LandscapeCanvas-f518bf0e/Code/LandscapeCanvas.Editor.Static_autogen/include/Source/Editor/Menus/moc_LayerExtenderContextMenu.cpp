/****************************************************************************
** Meta object code from reading C++ file 'LayerExtenderContextMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/LandscapeCanvas/Code/Source/Editor/Menus/LayerExtenderContextMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerExtenderContextMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LandscapeCanvasEditor__LayerExtenderContextMenu_t {
    QByteArrayData data[3];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LandscapeCanvasEditor__LayerExtenderContextMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LandscapeCanvasEditor__LayerExtenderContextMenu_t qt_meta_stringdata_LandscapeCanvasEditor__LayerExtenderContextMenu = {
    {
QT_MOC_LITERAL(0, 0, 47), // "LandscapeCanvasEditor::LayerE..."
QT_MOC_LITERAL(1, 48, 12), // "SetupDisplay"
QT_MOC_LITERAL(2, 61, 0) // ""

    },
    "LandscapeCanvasEditor::LayerExtenderContextMenu\0"
    "SetupDisplay\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LandscapeCanvasEditor__LayerExtenderContextMenu[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LandscapeCanvasEditor::LayerExtenderContextMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerExtenderContextMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetupDisplay(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LandscapeCanvasEditor::LayerExtenderContextMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<GraphCanvas::EditorContextMenu::staticMetaObject>(),
    qt_meta_stringdata_LandscapeCanvasEditor__LayerExtenderContextMenu.data,
    qt_meta_data_LandscapeCanvasEditor__LayerExtenderContextMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LandscapeCanvasEditor::LayerExtenderContextMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LandscapeCanvasEditor::LayerExtenderContextMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LandscapeCanvasEditor__LayerExtenderContextMenu.stringdata0))
        return static_cast<void*>(this);
    return GraphCanvas::EditorContextMenu::qt_metacast(_clname);
}

int LandscapeCanvasEditor::LayerExtenderContextMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphCanvas::EditorContextMenu::qt_metacall(_c, _id, _a);
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
