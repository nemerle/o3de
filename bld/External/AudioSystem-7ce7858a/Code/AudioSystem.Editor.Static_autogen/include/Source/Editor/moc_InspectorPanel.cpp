/****************************************************************************
** Meta object code from reading C++ file 'InspectorPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Gems/AudioSystem/Code/Source/Editor/InspectorPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InspectorPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioControls__CInspectorPanel_t {
    QByteArrayData data[13];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioControls__CInspectorPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioControls__CInspectorPanel_t qt_meta_stringdata_AudioControls__CInspectorPanel = {
    {
QT_MOC_LITERAL(0, 0, 30), // "AudioControls::CInspectorPanel"
QT_MOC_LITERAL(1, 31, 19), // "SetSelectedControls"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 11), // "ControlList"
QT_MOC_LITERAL(4, 64, 16), // "selectedControls"
QT_MOC_LITERAL(5, 81, 15), // "UpdateInspector"
QT_MOC_LITERAL(6, 97, 14), // "SetControlName"
QT_MOC_LITERAL(7, 112, 4), // "name"
QT_MOC_LITERAL(8, 117, 15), // "SetControlScope"
QT_MOC_LITERAL(9, 133, 5), // "scope"
QT_MOC_LITERAL(10, 139, 28), // "SetAutoLoadForCurrentControl"
QT_MOC_LITERAL(11, 168, 10), // "isAutoLoad"
QT_MOC_LITERAL(12, 179, 19) // "FinishedEditingName"

    },
    "AudioControls::CInspectorPanel\0"
    "SetSelectedControls\0\0ControlList\0"
    "selectedControls\0UpdateInspector\0"
    "SetControlName\0name\0SetControlScope\0"
    "scope\0SetAutoLoadForCurrentControl\0"
    "isAutoLoad\0FinishedEditingName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioControls__CInspectorPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,
      10,    1,   54,    2, 0x08 /* Private */,
      12,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

       0        // eod
};

void AudioControls::CInspectorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CInspectorPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetSelectedControls((*reinterpret_cast< const ControlList(*)>(_a[1]))); break;
        case 1: _t->UpdateInspector(); break;
        case 2: _t->SetControlName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SetControlScope((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SetAutoLoadForCurrentControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->FinishedEditingName(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioControls::CInspectorPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AudioControls__CInspectorPanel.data,
    qt_meta_data_AudioControls__CInspectorPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioControls::CInspectorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioControls::CInspectorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioControls__CInspectorPanel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::InspectorPanel"))
        return static_cast< Ui::InspectorPanel*>(this);
    if (!strcmp(_clname, "IATLControlModelListener"))
        return static_cast< IATLControlModelListener*>(this);
    return QWidget::qt_metacast(_clname);
}

int AudioControls::CInspectorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
