/****************************************************************************
** Meta object code from reading C++ file 'MotionEventPresetsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/MotionEvents/MotionEventPresetsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionEventPresetsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MotionEventPresetsWidget_t {
    QByteArrayData data[15];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionEventPresetsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionEventPresetsWidget_t qt_meta_stringdata_EMStudio__MotionEventPresetsWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "EMStudio::MotionEventPresetsW..."
QT_MOC_LITERAL(1, 35, 6), // "ReInit"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 20), // "AddMotionEventPreset"
QT_MOC_LITERAL(4, 64, 32), // "RemoveSelectedMotionEventPresets"
QT_MOC_LITERAL(5, 97, 23), // "RemoveMotionEventPreset"
QT_MOC_LITERAL(6, 121, 6), // "uint32"
QT_MOC_LITERAL(7, 128, 5), // "index"
QT_MOC_LITERAL(8, 134, 29), // "ClearMotionEventPresetsButton"
QT_MOC_LITERAL(9, 164, 11), // "SavePresets"
QT_MOC_LITERAL(10, 176, 14), // "showSaveDialog"
QT_MOC_LITERAL(11, 191, 14), // "SaveWithDialog"
QT_MOC_LITERAL(12, 206, 11), // "LoadPresets"
QT_MOC_LITERAL(13, 218, 10), // "showDialog"
QT_MOC_LITERAL(14, 229, 16) // "SelectionChanged"

    },
    "EMStudio::MotionEventPresetsWidget\0"
    "ReInit\0\0AddMotionEventPreset\0"
    "RemoveSelectedMotionEventPresets\0"
    "RemoveMotionEventPreset\0uint32\0index\0"
    "ClearMotionEventPresetsButton\0SavePresets\0"
    "showSaveDialog\0SaveWithDialog\0LoadPresets\0"
    "showDialog\0SelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionEventPresetsWidget[] = {

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
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
       9,    0,   79,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
      12,    0,   84,    2, 0x2a /* Public | MethodCloned */,
      14,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::MotionEventPresetsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionEventPresetsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReInit(); break;
        case 1: _t->AddMotionEventPreset(); break;
        case 2: _t->RemoveSelectedMotionEventPresets(); break;
        case 3: _t->RemoveMotionEventPreset((*reinterpret_cast< uint32(*)>(_a[1]))); break;
        case 4: _t->ClearMotionEventPresetsButton(); break;
        case 5: _t->SavePresets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SavePresets(); break;
        case 7: _t->SaveWithDialog(); break;
        case 8: _t->LoadPresets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->LoadPresets(); break;
        case 10: _t->SelectionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionEventPresetsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionEventPresetsWidget.data,
    qt_meta_data_EMStudio__MotionEventPresetsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionEventPresetsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionEventPresetsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionEventPresetsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::MotionEventPresetsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
