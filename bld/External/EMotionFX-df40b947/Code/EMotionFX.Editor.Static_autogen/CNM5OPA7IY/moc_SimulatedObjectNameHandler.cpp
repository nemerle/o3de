/****************************************************************************
** Meta object code from reading C++ file 'SimulatedObjectNameHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/SimulatedObjectNameHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimulatedObjectNameHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__SimulatedObjectNameLineEdit_t {
    QByteArrayData data[1];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SimulatedObjectNameLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SimulatedObjectNameLineEdit_t qt_meta_stringdata_EMotionFX__SimulatedObjectNameLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 38) // "EMotionFX::SimulatedObjectNam..."

    },
    "EMotionFX::SimulatedObjectNameLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SimulatedObjectNameLineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EMotionFX::SimulatedObjectNameLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SimulatedObjectNameLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<EMStudio::LineEditValidatable::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SimulatedObjectNameLineEdit.data,
    qt_meta_data_EMotionFX__SimulatedObjectNameLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SimulatedObjectNameLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SimulatedObjectNameLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SimulatedObjectNameLineEdit.stringdata0))
        return static_cast<void*>(this);
    return EMStudio::LineEditValidatable::qt_metacast(_clname);
}

int EMotionFX::SimulatedObjectNameLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EMStudio::LineEditValidatable::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__SimulatedObjectNameHandler_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SimulatedObjectNameHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SimulatedObjectNameHandler_t qt_meta_stringdata_EMotionFX__SimulatedObjectNameHandler = {
    {
QT_MOC_LITERAL(0, 0, 37) // "EMotionFX::SimulatedObjectNam..."

    },
    "EMotionFX::SimulatedObjectNameHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SimulatedObjectNameHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EMotionFX::SimulatedObjectNameHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SimulatedObjectNameHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SimulatedObjectNameHandler.data,
    qt_meta_data_EMotionFX__SimulatedObjectNameHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SimulatedObjectNameHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SimulatedObjectNameHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SimulatedObjectNameHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::string,SimulatedObjectNameLineEdit>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::string,SimulatedObjectNameLineEdit>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::SimulatedObjectNameHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
