/****************************************************************************
** Meta object code from reading C++ file 'NavigateWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/NavigateWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavigateWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__NavigateWidget_t {
    QByteArrayData data[14];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NavigateWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NavigateWidget_t qt_meta_stringdata_EMStudio__NavigateWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "EMStudio::NavigateWidget"
QT_MOC_LITERAL(1, 25, 14), // "OnFocusChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 53, 13), // "newFocusIndex"
QT_MOC_LITERAL(5, 67, 14), // "newFocusParent"
QT_MOC_LITERAL(6, 82, 13), // "oldFocusIndex"
QT_MOC_LITERAL(7, 96, 14), // "oldFocusParent"
QT_MOC_LITERAL(8, 111, 19), // "OnItemDoubleClicked"
QT_MOC_LITERAL(9, 131, 16), // "targetModelIndex"
QT_MOC_LITERAL(10, 148, 18), // "OnContextMenuEvent"
QT_MOC_LITERAL(11, 167, 5), // "point"
QT_MOC_LITERAL(12, 173, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(13, 193, 4) // "text"

    },
    "EMStudio::NavigateWidget\0OnFocusChanged\0"
    "\0QModelIndex\0newFocusIndex\0newFocusParent\0"
    "oldFocusIndex\0oldFocusParent\0"
    "OnItemDoubleClicked\0targetModelIndex\0"
    "OnContextMenuEvent\0point\0OnTextFilterChanged\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NavigateWidget[] = {

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
       1,    4,   34,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,
      10,    1,   46,    2, 0x08 /* Private */,
      12,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void EMStudio::NavigateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigateWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFocusChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 1: _t->OnItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->OnContextMenuEvent((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::NavigateWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NavigateWidget.data,
    qt_meta_data_EMStudio__NavigateWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NavigateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NavigateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NavigateWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::NavigateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
