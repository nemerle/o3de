/****************************************************************************
** Meta object code from reading C++ file 'RenderViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/EMStudioSDK/Source/RenderPlugin/RenderViewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__RenderViewWidget_t {
    QByteArrayData data[18];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__RenderViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__RenderViewWidget_t qt_meta_stringdata_EMStudio__RenderViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "EMStudio::RenderViewWidget"
QT_MOC_LITERAL(1, 27, 9), // "OnOptions"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "OnOrbitCamera"
QT_MOC_LITERAL(4, 52, 19), // "OnFirstPersonCamera"
QT_MOC_LITERAL(5, 72, 18), // "OnOrthoFrontCamera"
QT_MOC_LITERAL(6, 91, 17), // "OnOrthoBackCamera"
QT_MOC_LITERAL(7, 109, 17), // "OnOrthoLeftCamera"
QT_MOC_LITERAL(8, 127, 18), // "OnOrthoRightCamera"
QT_MOC_LITERAL(9, 146, 16), // "OnOrthoTopCamera"
QT_MOC_LITERAL(10, 163, 19), // "OnOrthoBottomCamera"
QT_MOC_LITERAL(11, 183, 13), // "OnResetCamera"
QT_MOC_LITERAL(12, 197, 10), // "flightTime"
QT_MOC_LITERAL(13, 208, 14), // "OnShowSelected"
QT_MOC_LITERAL(14, 223, 17), // "OnShowEntireScene"
QT_MOC_LITERAL(15, 241, 17), // "OnFollowCharacter"
QT_MOC_LITERAL(16, 259, 7), // "OnReset"
QT_MOC_LITERAL(17, 267, 15) // "UpdateInterface"

    },
    "EMStudio::RenderViewWidget\0OnOptions\0"
    "\0OnOrbitCamera\0OnFirstPersonCamera\0"
    "OnOrthoFrontCamera\0OnOrthoBackCamera\0"
    "OnOrthoLeftCamera\0OnOrthoRightCamera\0"
    "OnOrthoTopCamera\0OnOrthoBottomCamera\0"
    "OnResetCamera\0flightTime\0OnShowSelected\0"
    "OnShowEntireScene\0OnFollowCharacter\0"
    "OnReset\0UpdateInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__RenderViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    1,  103,    2, 0x0a /* Public */,
      11,    0,  106,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    0,  108,    2, 0x0a /* Public */,
      15,    0,  109,    2, 0x0a /* Public */,
      16,    0,  110,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::RenderViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenderViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOptions(); break;
        case 1: _t->OnOrbitCamera(); break;
        case 2: _t->OnFirstPersonCamera(); break;
        case 3: _t->OnOrthoFrontCamera(); break;
        case 4: _t->OnOrthoBackCamera(); break;
        case 5: _t->OnOrthoLeftCamera(); break;
        case 6: _t->OnOrthoRightCamera(); break;
        case 7: _t->OnOrthoTopCamera(); break;
        case 8: _t->OnOrthoBottomCamera(); break;
        case 9: _t->OnResetCamera((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->OnResetCamera(); break;
        case 11: _t->OnShowSelected(); break;
        case 12: _t->OnShowEntireScene(); break;
        case 13: _t->OnFollowCharacter(); break;
        case 14: _t->OnReset(); break;
        case 15: _t->UpdateInterface(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::RenderViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__RenderViewWidget.data,
    qt_meta_data_EMStudio__RenderViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::RenderViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::RenderViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__RenderViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::RenderViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
