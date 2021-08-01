/****************************************************************************
** Meta object code from reading C++ file 'MotionSetMotionIdHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/MotionSetMotionIdHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionSetMotionIdHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__MotionSetMotionIdPicker_t {
    QByteArrayData data[6];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__MotionSetMotionIdPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__MotionSetMotionIdPicker_t qt_meta_stringdata_EMotionFX__MotionSetMotionIdPicker = {
    {
QT_MOC_LITERAL(0, 0, 34), // "EMotionFX::MotionSetMotionIdP..."
QT_MOC_LITERAL(1, 35, 16), // "SelectionChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 13), // "OnPickClicked"
QT_MOC_LITERAL(4, 67, 18), // "OnPickDialogAccept"
QT_MOC_LITERAL(5, 86, 18) // "OnPickDialogReject"

    },
    "EMotionFX::MotionSetMotionIdPicker\0"
    "SelectionChanged\0\0OnPickClicked\0"
    "OnPickDialogAccept\0OnPickDialogReject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__MotionSetMotionIdPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::MotionSetMotionIdPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionSetMotionIdPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionChanged(); break;
        case 1: _t->OnPickClicked(); break;
        case 2: _t->OnPickDialogAccept(); break;
        case 3: _t->OnPickDialogReject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotionSetMotionIdPicker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionSetMotionIdPicker::SelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::MotionSetMotionIdPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__MotionSetMotionIdPicker.data,
    qt_meta_data_EMotionFX__MotionSetMotionIdPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::MotionSetMotionIdPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::MotionSetMotionIdPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__MotionSetMotionIdPicker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IRandomMotionSelectionDataContainer"))
        return static_cast< IRandomMotionSelectionDataContainer*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::MotionSetMotionIdPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void EMotionFX::MotionSetMotionIdPicker::SelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EMotionFX__MotionIdRandomSelectionWeightsHandler_t {
    QByteArrayData data[1];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__MotionIdRandomSelectionWeightsHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__MotionIdRandomSelectionWeightsHandler_t qt_meta_stringdata_EMotionFX__MotionIdRandomSelectionWeightsHandler = {
    {
QT_MOC_LITERAL(0, 0, 48) // "EMotionFX::MotionIdRandomSele..."

    },
    "EMotionFX::MotionIdRandomSelectionWeightsHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__MotionIdRandomSelectionWeightsHandler[] = {

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

void EMotionFX::MotionIdRandomSelectionWeightsHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::MotionIdRandomSelectionWeightsHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__MotionIdRandomSelectionWeightsHandler.data,
    qt_meta_data_EMotionFX__MotionIdRandomSelectionWeightsHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::MotionIdRandomSelectionWeightsHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::MotionIdRandomSelectionWeightsHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__MotionIdRandomSelectionWeightsHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::pair<AZStd::string,float>>,MotionSetMotionIdPicker>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::pair<AZStd::string,float>>,MotionSetMotionIdPicker>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::MotionIdRandomSelectionWeightsHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__MotionSetMultiMotionIdHandler_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__MotionSetMultiMotionIdHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__MotionSetMultiMotionIdHandler_t qt_meta_stringdata_EMotionFX__MotionSetMultiMotionIdHandler = {
    {
QT_MOC_LITERAL(0, 0, 40) // "EMotionFX::MotionSetMultiMoti..."

    },
    "EMotionFX::MotionSetMultiMotionIdHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__MotionSetMultiMotionIdHandler[] = {

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

void EMotionFX::MotionSetMultiMotionIdHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::MotionSetMultiMotionIdHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__MotionSetMultiMotionIdHandler.data,
    qt_meta_data_EMotionFX__MotionSetMultiMotionIdHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::MotionSetMultiMotionIdHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::MotionSetMultiMotionIdHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__MotionSetMultiMotionIdHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,MotionSetMotionIdPicker>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::vector<AZStd::string>,MotionSetMotionIdPicker>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::MotionSetMultiMotionIdHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
