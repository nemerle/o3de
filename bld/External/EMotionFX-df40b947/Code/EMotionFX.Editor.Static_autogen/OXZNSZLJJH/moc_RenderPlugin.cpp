/****************************************************************************
** Meta object code from reading C++ file 'RenderPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/EMStudioSDK/Source/RenderPlugin/RenderPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__RenderPlugin_t {
    QByteArrayData data[14];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__RenderPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__RenderPlugin_t qt_meta_stringdata_EMStudio__RenderPlugin = {
    {
QT_MOC_LITERAL(0, 0, 22), // "EMStudio::RenderPlugin"
QT_MOC_LITERAL(1, 23, 18), // "SetManipulatorMode"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 30), // "RenderOptions::ManipulatorMode"
QT_MOC_LITERAL(4, 74, 4), // "mode"
QT_MOC_LITERAL(5, 79, 16), // "SetSelectionMode"
QT_MOC_LITERAL(6, 96, 18), // "SetTranslationMode"
QT_MOC_LITERAL(7, 115, 15), // "SetRotationMode"
QT_MOC_LITERAL(8, 131, 12), // "SetScaleMode"
QT_MOC_LITERAL(9, 144, 19), // "CleanEMStudioActors"
QT_MOC_LITERAL(10, 164, 17), // "VisibilityChanged"
QT_MOC_LITERAL(11, 182, 7), // "visible"
QT_MOC_LITERAL(12, 190, 19), // "LayoutButtonPressed"
QT_MOC_LITERAL(13, 210, 4) // "text"

    },
    "EMStudio::RenderPlugin\0SetManipulatorMode\0"
    "\0RenderOptions::ManipulatorMode\0mode\0"
    "SetSelectionMode\0SetTranslationMode\0"
    "SetRotationMode\0SetScaleMode\0"
    "CleanEMStudioActors\0VisibilityChanged\0"
    "visible\0LayoutButtonPressed\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__RenderPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      12,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void EMStudio::RenderPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetManipulatorMode((*reinterpret_cast< RenderOptions::ManipulatorMode(*)>(_a[1]))); break;
        case 1: _t->SetSelectionMode(); break;
        case 2: _t->SetTranslationMode(); break;
        case 3: _t->SetRotationMode(); break;
        case 4: _t->SetScaleMode(); break;
        case 5: _t->CleanEMStudioActors(); break;
        case 6: _t->VisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->LayoutButtonPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::RenderPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<DockWidgetPlugin::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__RenderPlugin.data,
    qt_meta_data_EMStudio__RenderPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::RenderPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::RenderPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__RenderPlugin.stringdata0))
        return static_cast<void*>(this);
    return DockWidgetPlugin::qt_metacast(_clname);
}

int EMStudio::RenderPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockWidgetPlugin::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
