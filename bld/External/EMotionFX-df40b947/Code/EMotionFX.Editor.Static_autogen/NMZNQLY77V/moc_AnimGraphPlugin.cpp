/****************************************************************************
** Meta object code from reading C++ file 'AnimGraphPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/AnimGraphPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimGraphPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__AnimGraphPlugin_t {
    QByteArrayData data[17];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__AnimGraphPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__AnimGraphPlugin_t qt_meta_stringdata_EMStudio__AnimGraphPlugin = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EMStudio::AnimGraphPlugin"
QT_MOC_LITERAL(1, 26, 19), // "ActionFilterChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10), // "OnFileOpen"
QT_MOC_LITERAL(4, 58, 10), // "OnFileSave"
QT_MOC_LITERAL(5, 69, 12), // "OnFileSaveAs"
QT_MOC_LITERAL(6, 82, 38), // "OnDoubleClickedRecorderNodeHi..."
QT_MOC_LITERAL(7, 121, 39), // "EMotionFX::Recorder::ActorIns..."
QT_MOC_LITERAL(8, 161, 17), // "actorInstanceData"
QT_MOC_LITERAL(9, 179, 37), // "EMotionFX::Recorder::NodeHist..."
QT_MOC_LITERAL(10, 217, 11), // "historyItem"
QT_MOC_LITERAL(11, 229, 32), // "OnClickedRecorderNodeHistoryItem"
QT_MOC_LITERAL(12, 262, 22), // "UpdateWindowVisibility"
QT_MOC_LITERAL(13, 285, 21), // "EDockWindowOptionFlag"
QT_MOC_LITERAL(14, 307, 6), // "option"
QT_MOC_LITERAL(15, 314, 7), // "checked"
QT_MOC_LITERAL(16, 322, 29) // "UpdateWindowActionsCheckState"

    },
    "EMStudio::AnimGraphPlugin\0ActionFilterChanged\0"
    "\0OnFileOpen\0OnFileSave\0OnFileSaveAs\0"
    "OnDoubleClickedRecorderNodeHistoryItem\0"
    "EMotionFX::Recorder::ActorInstanceData*\0"
    "actorInstanceData\0"
    "EMotionFX::Recorder::NodeHistoryItem*\0"
    "historyItem\0OnClickedRecorderNodeHistoryItem\0"
    "UpdateWindowVisibility\0EDockWindowOptionFlag\0"
    "option\0checked\0UpdateWindowActionsCheckState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__AnimGraphPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    2,   58,    2, 0x0a /* Public */,
      11,    2,   63,    2, 0x0a /* Public */,
      12,    2,   68,    2, 0x08 /* Private */,
      16,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,   14,   15,
    QMetaType::Void,

       0        // eod
};

void EMStudio::AnimGraphPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnimGraphPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActionFilterChanged(); break;
        case 1: _t->OnFileOpen(); break;
        case 2: _t->OnFileSave(); break;
        case 3: _t->OnFileSaveAs(); break;
        case 4: _t->OnDoubleClickedRecorderNodeHistoryItem((*reinterpret_cast< EMotionFX::Recorder::ActorInstanceData*(*)>(_a[1])),(*reinterpret_cast< EMotionFX::Recorder::NodeHistoryItem*(*)>(_a[2]))); break;
        case 5: _t->OnClickedRecorderNodeHistoryItem((*reinterpret_cast< EMotionFX::Recorder::ActorInstanceData*(*)>(_a[1])),(*reinterpret_cast< EMotionFX::Recorder::NodeHistoryItem*(*)>(_a[2]))); break;
        case 6: _t->UpdateWindowVisibility((*reinterpret_cast< EDockWindowOptionFlag(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->UpdateWindowActionsCheckState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimGraphPlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimGraphPlugin::ActionFilterChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::AnimGraphPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<EMStudio::DockWidgetPlugin::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__AnimGraphPlugin.data,
    qt_meta_data_EMStudio__AnimGraphPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::AnimGraphPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::AnimGraphPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__AnimGraphPlugin.stringdata0))
        return static_cast<void*>(this);
    return EMStudio::DockWidgetPlugin::qt_metacast(_clname);
}

int EMStudio::AnimGraphPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EMStudio::DockWidgetPlugin::qt_metacall(_c, _id, _a);
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
void EMStudio::AnimGraphPlugin::ActionFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
