/****************************************************************************
** Meta object code from reading C++ file 'MotionEventsPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/MotionEvents/MotionEventsPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionEventsPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MotionEventsPlugin_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionEventsPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionEventsPlugin_t qt_meta_stringdata_EMStudio__MotionEventsPlugin = {
    {
QT_MOC_LITERAL(0, 0, 28), // "EMStudio::MotionEventsPlugin"
QT_MOC_LITERAL(1, 29, 14), // "OnColorChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "ReInit"
QT_MOC_LITERAL(4, 52, 22), // "MotionSelectionChanged"
QT_MOC_LITERAL(5, 75, 23), // "UpdateMotionEventWidget"
QT_MOC_LITERAL(6, 99, 12), // "WindowReInit"
QT_MOC_LITERAL(7, 112, 7), // "visible"
QT_MOC_LITERAL(8, 120, 20), // "OnEventPresetDropped"
QT_MOC_LITERAL(9, 141, 8), // "position"
QT_MOC_LITERAL(10, 150, 26) // "CheckIfIsPresetReadyToDrop"

    },
    "EMStudio::MotionEventsPlugin\0"
    "OnColorChanged\0\0ReInit\0MotionSelectionChanged\0"
    "UpdateMotionEventWidget\0WindowReInit\0"
    "visible\0OnEventPresetDropped\0position\0"
    "CheckIfIsPresetReadyToDrop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionEventsPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Bool,

       0        // eod
};

void EMStudio::MotionEventsPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionEventsPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnColorChanged(); break;
        case 1: _t->ReInit(); break;
        case 2: _t->MotionSelectionChanged(); break;
        case 3: _t->UpdateMotionEventWidget(); break;
        case 4: _t->WindowReInit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->OnEventPresetDropped((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: { bool _r = _t->CheckIfIsPresetReadyToDrop();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotionEventsPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionEventsPlugin::OnColorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionEventsPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<EMStudio::DockWidgetPlugin::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionEventsPlugin.data,
    qt_meta_data_EMStudio__MotionEventsPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionEventsPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionEventsPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionEventsPlugin.stringdata0))
        return static_cast<void*>(this);
    return EMStudio::DockWidgetPlugin::qt_metacast(_clname);
}

int EMStudio::MotionEventsPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void EMStudio::MotionEventsPlugin::OnColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
