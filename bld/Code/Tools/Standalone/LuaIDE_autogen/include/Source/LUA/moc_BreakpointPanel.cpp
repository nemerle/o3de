/****************************************************************************
** Meta object code from reading C++ file 'BreakpointPanel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/LUA/BreakpointPanel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BreakpointPanel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DHBreakpointsWidget_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DHBreakpointsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DHBreakpointsWidget_t qt_meta_stringdata_DHBreakpointsWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DHBreakpointsWidget"
QT_MOC_LITERAL(1, 20, 15), // "OnDoubleClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 49, 14), // "DeleteSelected"
QT_MOC_LITERAL(5, 64, 9) // "DeleteAll"

    },
    "DHBreakpointsWidget\0OnDoubleClicked\0"
    "\0QModelIndex\0DeleteSelected\0DeleteAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DHBreakpointsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DHBreakpointsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DHBreakpointsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->DeleteSelected(); break;
        case 2: _t->DeleteAll(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DHBreakpointsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_DHBreakpointsWidget.data,
    qt_meta_data_DHBreakpointsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DHBreakpointsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DHBreakpointsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DHBreakpointsWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "LUAEditor::LUABreakpointTrackerMessages::Bus::Handler"))
        return static_cast< LUAEditor::LUABreakpointTrackerMessages::Bus::Handler*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int DHBreakpointsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
