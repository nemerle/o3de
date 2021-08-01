/****************************************************************************
** Meta object code from reading C++ file 'AnimGraphTagHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/AnimGraphTagHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimGraphTagHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__AnimGraphTagSelector_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphTagSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphTagSelector_t qt_meta_stringdata_EMotionFX__AnimGraphTagSelector = {
    {
QT_MOC_LITERAL(0, 0, 31) // "EMotionFX::AnimGraphTagSelector"

    },
    "EMotionFX::AnimGraphTagSelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphTagSelector[] = {

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

void EMotionFX::AnimGraphTagSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphTagSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<TagSelector::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphTagSelector.data,
    qt_meta_data_EMotionFX__AnimGraphTagSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphTagSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphTagSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphTagSelector.stringdata0))
        return static_cast<void*>(this);
    return TagSelector::qt_metacast(_clname);
}

int EMotionFX::AnimGraphTagSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TagSelector::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__AnimGraphTagHandler_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__AnimGraphTagHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__AnimGraphTagHandler_t qt_meta_stringdata_EMotionFX__AnimGraphTagHandler = {
    {
QT_MOC_LITERAL(0, 0, 30) // "EMotionFX::AnimGraphTagHandler"

    },
    "EMotionFX::AnimGraphTagHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__AnimGraphTagHandler[] = {

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

void EMotionFX::AnimGraphTagHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::AnimGraphTagHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__AnimGraphTagHandler.data,
    qt_meta_data_EMotionFX__AnimGraphTagHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::AnimGraphTagHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::AnimGraphTagHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__AnimGraphTagHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,AnimGraphTagSelector>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,AnimGraphTagSelector>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::AnimGraphTagHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
