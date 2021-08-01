/****************************************************************************
** Meta object code from reading C++ file 'BlendGraphViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/BlendGraphViewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlendGraphViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__BlendGraphViewWidget_t {
    QByteArrayData data[18];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__BlendGraphViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__BlendGraphViewWidget_t qt_meta_stringdata_EMStudio__BlendGraphViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "EMStudio::BlendGraphViewWidget"
QT_MOC_LITERAL(1, 31, 14), // "OnFocusChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 59, 13), // "newFocusIndex"
QT_MOC_LITERAL(5, 73, 14), // "newFocusParent"
QT_MOC_LITERAL(6, 88, 13), // "oldFocusIndex"
QT_MOC_LITERAL(7, 102, 14), // "oldFocusParent"
QT_MOC_LITERAL(8, 117, 17), // "OnCreateAnimGraph"
QT_MOC_LITERAL(9, 135, 14), // "NavigateToRoot"
QT_MOC_LITERAL(10, 150, 20), // "ToggleNavigationPane"
QT_MOC_LITERAL(11, 171, 12), // "ZoomSelected"
QT_MOC_LITERAL(12, 184, 9), // "ZoomToAll"
QT_MOC_LITERAL(13, 194, 15), // "OnActivateState"
QT_MOC_LITERAL(14, 210, 19), // "OnDisplayPlaySpeeds"
QT_MOC_LITERAL(15, 230, 22), // "OnDisplayGlobalWeights"
QT_MOC_LITERAL(16, 253, 19), // "OnDisplaySyncStatus"
QT_MOC_LITERAL(17, 273, 22) // "OnDisplayPlayPositions"

    },
    "EMStudio::BlendGraphViewWidget\0"
    "OnFocusChanged\0\0QModelIndex\0newFocusIndex\0"
    "newFocusParent\0oldFocusIndex\0"
    "oldFocusParent\0OnCreateAnimGraph\0"
    "NavigateToRoot\0ToggleNavigationPane\0"
    "ZoomSelected\0ZoomToAll\0OnActivateState\0"
    "OnDisplayPlaySpeeds\0OnDisplayGlobalWeights\0"
    "OnDisplaySyncStatus\0OnDisplayPlayPositions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__BlendGraphViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   69,    2, 0x0a /* Public */,
       8,    0,   78,    2, 0x0a /* Public */,
       9,    0,   79,    2, 0x0a /* Public */,
      10,    0,   80,    2, 0x0a /* Public */,
      11,    0,   81,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    0,   83,    2, 0x0a /* Public */,
      14,    0,   84,    2, 0x0a /* Public */,
      15,    0,   85,    2, 0x0a /* Public */,
      16,    0,   86,    2, 0x0a /* Public */,
      17,    0,   87,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::BlendGraphViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlendGraphViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFocusChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 1: _t->OnCreateAnimGraph(); break;
        case 2: _t->NavigateToRoot(); break;
        case 3: _t->ToggleNavigationPane(); break;
        case 4: _t->ZoomSelected(); break;
        case 5: _t->ZoomToAll(); break;
        case 6: _t->OnActivateState(); break;
        case 7: _t->OnDisplayPlaySpeeds(); break;
        case 8: _t->OnDisplayGlobalWeights(); break;
        case 9: _t->OnDisplaySyncStatus(); break;
        case 10: _t->OnDisplayPlayPositions(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::BlendGraphViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__BlendGraphViewWidget.data,
    qt_meta_data_EMStudio__BlendGraphViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::BlendGraphViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::BlendGraphViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__BlendGraphViewWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EMotionFX::ActorEditorRequestBus::Handler"))
        return static_cast< EMotionFX::ActorEditorRequestBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::BlendGraphViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
