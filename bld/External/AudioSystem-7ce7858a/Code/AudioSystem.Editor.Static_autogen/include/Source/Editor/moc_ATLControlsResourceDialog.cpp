/****************************************************************************
** Meta object code from reading C++ file 'ATLControlsResourceDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Gems/AudioSystem/Code/Source/Editor/ATLControlsResourceDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ATLControlsResourceDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioControls__ATLControlsDialog_t {
    QByteArrayData data[7];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioControls__ATLControlsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioControls__ATLControlsDialog_t qt_meta_stringdata_AudioControls__ATLControlsDialog = {
    {
QT_MOC_LITERAL(0, 0, 32), // "AudioControls::ATLControlsDialog"
QT_MOC_LITERAL(1, 33, 21), // "UpdateSelectedControl"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 13), // "SetTextFilter"
QT_MOC_LITERAL(4, 70, 6), // "filter"
QT_MOC_LITERAL(5, 77, 12), // "EnterPressed"
QT_MOC_LITERAL(6, 90, 11) // "StopTrigger"

    },
    "AudioControls::ATLControlsDialog\0"
    "UpdateSelectedControl\0\0SetTextFilter\0"
    "filter\0EnterPressed\0StopTrigger"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioControls__ATLControlsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AudioControls::ATLControlsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ATLControlsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateSelectedControl(); break;
        case 1: _t->SetTextFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->EnterPressed(); break;
        case 3: _t->StopTrigger(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioControls::ATLControlsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AudioControls__ATLControlsDialog.data,
    qt_meta_data_AudioControls__ATLControlsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioControls::ATLControlsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioControls::ATLControlsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioControls__ATLControlsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AudioControls::ATLControlsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
