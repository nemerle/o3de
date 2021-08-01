/****************************************************************************
** Meta object code from reading C++ file 'MotionWindowPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/MotionWindow/MotionWindowPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionWindowPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MotionWindowPlugin_t {
    QByteArrayData data[10];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionWindowPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionWindowPlugin_t qt_meta_stringdata_EMStudio__MotionWindowPlugin = {
    {
QT_MOC_LITERAL(0, 0, 28), // "EMStudio::MotionWindowPlugin"
QT_MOC_LITERAL(1, 29, 15), // "UpdateInterface"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "UpdateMotions"
QT_MOC_LITERAL(4, 60, 17), // "VisibilityChanged"
QT_MOC_LITERAL(5, 78, 7), // "visible"
QT_MOC_LITERAL(6, 86, 12), // "OnAddMotions"
QT_MOC_LITERAL(7, 99, 14), // "OnClearMotions"
QT_MOC_LITERAL(8, 114, 15), // "OnRemoveMotions"
QT_MOC_LITERAL(9, 130, 6) // "OnSave"

    },
    "EMStudio::MotionWindowPlugin\0"
    "UpdateInterface\0\0UpdateMotions\0"
    "VisibilityChanged\0visible\0OnAddMotions\0"
    "OnClearMotions\0OnRemoveMotions\0OnSave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionWindowPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::MotionWindowPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionWindowPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateInterface(); break;
        case 1: _t->UpdateMotions(); break;
        case 2: _t->VisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnAddMotions(); break;
        case 4: _t->OnClearMotions(); break;
        case 5: _t->OnRemoveMotions(); break;
        case 6: _t->OnSave(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionWindowPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<EMStudio::DockWidgetPlugin::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionWindowPlugin.data,
    qt_meta_data_EMStudio__MotionWindowPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionWindowPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionWindowPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionWindowPlugin.stringdata0))
        return static_cast<void*>(this);
    return EMStudio::DockWidgetPlugin::qt_metacast(_clname);
}

int EMStudio::MotionWindowPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EMStudio::DockWidgetPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
