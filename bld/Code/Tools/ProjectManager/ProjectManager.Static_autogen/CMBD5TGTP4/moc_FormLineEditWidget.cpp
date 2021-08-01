/****************************************************************************
** Meta object code from reading C++ file 'FormLineEditWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/ProjectManager/Source/FormLineEditWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FormLineEditWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_O3DE__ProjectManager__FormLineEditWidget_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O3DE__ProjectManager__FormLineEditWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O3DE__ProjectManager__FormLineEditWidget_t qt_meta_stringdata_O3DE__ProjectManager__FormLineEditWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "O3DE::ProjectManager::FormLin..."
QT_MOC_LITERAL(1, 41, 13), // "flavorChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 7), // "onFocus"
QT_MOC_LITERAL(4, 64, 10) // "onFocusOut"

    },
    "O3DE::ProjectManager::FormLineEditWidget\0"
    "flavorChanged\0\0onFocus\0onFocusOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O3DE__ProjectManager__FormLineEditWidget[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void O3DE::ProjectManager::FormLineEditWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormLineEditWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flavorChanged(); break;
        case 1: _t->onFocus(); break;
        case 2: _t->onFocusOut(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject O3DE::ProjectManager::FormLineEditWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_O3DE__ProjectManager__FormLineEditWidget.data,
    qt_meta_data_O3DE__ProjectManager__FormLineEditWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *O3DE::ProjectManager::FormLineEditWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O3DE::ProjectManager::FormLineEditWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_O3DE__ProjectManager__FormLineEditWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int O3DE::ProjectManager::FormLineEditWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
