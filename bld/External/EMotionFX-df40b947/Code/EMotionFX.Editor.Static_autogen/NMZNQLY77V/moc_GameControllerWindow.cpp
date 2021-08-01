/****************************************************************************
** Meta object code from reading C++ file 'GameControllerWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/GameControllerWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameControllerWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__GameControllerWindow_t {
    QByteArrayData data[19];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__GameControllerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__GameControllerWindow_t qt_meta_stringdata_EMStudio__GameControllerWindow = {
    {
QT_MOC_LITERAL(0, 0, 30), // "EMStudio::GameControllerWindow"
QT_MOC_LITERAL(1, 31, 24), // "OnGameControllerComboBox"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 5), // "value"
QT_MOC_LITERAL(4, 63, 23), // "OnParameterModeComboBox"
QT_MOC_LITERAL(5, 87, 14), // "OnAxisComboBox"
QT_MOC_LITERAL(6, 102, 16), // "OnPresetComboBox"
QT_MOC_LITERAL(7, 119, 23), // "OnInvertCheckBoxChanged"
QT_MOC_LITERAL(8, 143, 5), // "state"
QT_MOC_LITERAL(9, 149, 17), // "OnAddPresetButton"
QT_MOC_LITERAL(10, 167, 20), // "OnRemovePresetButton"
QT_MOC_LITERAL(11, 188, 18), // "OnPresetNameEdited"
QT_MOC_LITERAL(12, 207, 4), // "text"
QT_MOC_LITERAL(13, 212, 19), // "OnPresetNameChanged"
QT_MOC_LITERAL(14, 232, 23), // "OnDeadZoneSliderChanged"
QT_MOC_LITERAL(15, 256, 22), // "HardwareChangeDetected"
QT_MOC_LITERAL(16, 279, 20), // "OnButtonModeComboBox"
QT_MOC_LITERAL(17, 300, 25), // "OnButtonParameterComboBox"
QT_MOC_LITERAL(18, 326, 25) // "OnSelectNodeButtonClicked"

    },
    "EMStudio::GameControllerWindow\0"
    "OnGameControllerComboBox\0\0value\0"
    "OnParameterModeComboBox\0OnAxisComboBox\0"
    "OnPresetComboBox\0OnInvertCheckBoxChanged\0"
    "state\0OnAddPresetButton\0OnRemovePresetButton\0"
    "OnPresetNameEdited\0text\0OnPresetNameChanged\0"
    "OnDeadZoneSliderChanged\0HardwareChangeDetected\0"
    "OnButtonModeComboBox\0OnButtonParameterComboBox\0"
    "OnSelectNodeButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__GameControllerWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x08 /* Private */,
       4,    1,   87,    2, 0x08 /* Private */,
       5,    1,   90,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      17,    1,  112,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void EMStudio::GameControllerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameControllerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnGameControllerComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnParameterModeComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnAxisComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnPresetComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnInvertCheckBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnAddPresetButton(); break;
        case 6: _t->OnRemovePresetButton(); break;
        case 7: _t->OnPresetNameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->OnPresetNameChanged(); break;
        case 9: _t->OnDeadZoneSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->HardwareChangeDetected(); break;
        case 11: _t->OnButtonModeComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->OnButtonParameterComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->OnSelectNodeButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::GameControllerWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__GameControllerWindow.data,
    qt_meta_data_EMStudio__GameControllerWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::GameControllerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::GameControllerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__GameControllerWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::GameControllerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
