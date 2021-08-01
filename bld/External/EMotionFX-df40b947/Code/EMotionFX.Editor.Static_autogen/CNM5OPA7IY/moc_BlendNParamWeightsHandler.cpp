/****************************************************************************
** Meta object code from reading C++ file 'BlendNParamWeightsHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/BlendNParamWeightsHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlendNParamWeightsHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__BlendNParamWeightElementWidget_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendNParamWeightElementWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendNParamWeightElementWidget_t qt_meta_stringdata_EMotionFX__BlendNParamWeightElementWidget = {
    {
QT_MOC_LITERAL(0, 0, 41), // "EMotionFX::BlendNParamWeightE..."
QT_MOC_LITERAL(1, 42, 11), // "DataChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 31), // "BlendNParamWeightElementWidget*"
QT_MOC_LITERAL(4, 87, 11), // "childWidget"
QT_MOC_LITERAL(5, 99, 19), // "OnWeightRangeEdited"
QT_MOC_LITERAL(6, 119, 5) // "value"

    },
    "EMotionFX::BlendNParamWeightElementWidget\0"
    "DataChanged\0\0BlendNParamWeightElementWidget*\0"
    "childWidget\0OnWeightRangeEdited\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendNParamWeightElementWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,

       0        // eod
};

void EMotionFX::BlendNParamWeightElementWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlendNParamWeightElementWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DataChanged((*reinterpret_cast< BlendNParamWeightElementWidget*(*)>(_a[1]))); break;
        case 1: _t->OnWeightRangeEdited((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BlendNParamWeightElementWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BlendNParamWeightElementWidget::*)(BlendNParamWeightElementWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlendNParamWeightElementWidget::DataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendNParamWeightElementWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendNParamWeightElementWidget.data,
    qt_meta_data_EMotionFX__BlendNParamWeightElementWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendNParamWeightElementWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendNParamWeightElementWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendNParamWeightElementWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::BlendNParamWeightElementWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EMotionFX::BlendNParamWeightElementWidget::DataChanged(BlendNParamWeightElementWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EMotionFX__BlendNParamWeightContainerWidget_t {
    QByteArrayData data[6];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendNParamWeightContainerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendNParamWeightContainerWidget_t qt_meta_stringdata_EMotionFX__BlendNParamWeightContainerWidget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "EMotionFX::BlendNParamWeightC..."
QT_MOC_LITERAL(1, 44, 11), // "DataChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 30), // "HandleOnChildWidgetDataChanged"
QT_MOC_LITERAL(4, 88, 31), // "BlendNParamWeightElementWidget*"
QT_MOC_LITERAL(5, 120, 13) // "elementWidget"

    },
    "EMotionFX::BlendNParamWeightContainerWidget\0"
    "DataChanged\0\0HandleOnChildWidgetDataChanged\0"
    "BlendNParamWeightElementWidget*\0"
    "elementWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendNParamWeightContainerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void EMotionFX::BlendNParamWeightContainerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlendNParamWeightContainerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DataChanged(); break;
        case 1: _t->HandleOnChildWidgetDataChanged((*reinterpret_cast< BlendNParamWeightElementWidget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BlendNParamWeightElementWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BlendNParamWeightContainerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlendNParamWeightContainerWidget::DataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendNParamWeightContainerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendNParamWeightContainerWidget.data,
    qt_meta_data_EMotionFX__BlendNParamWeightContainerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendNParamWeightContainerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendNParamWeightContainerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendNParamWeightContainerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::BlendNParamWeightContainerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EMotionFX::BlendNParamWeightContainerWidget::DataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EMotionFX__BlendNParamWeightElementHandler_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendNParamWeightElementHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendNParamWeightElementHandler_t qt_meta_stringdata_EMotionFX__BlendNParamWeightElementHandler = {
    {
QT_MOC_LITERAL(0, 0, 42) // "EMotionFX::BlendNParamWeightE..."

    },
    "EMotionFX::BlendNParamWeightElementHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendNParamWeightElementHandler[] = {

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

void EMotionFX::BlendNParamWeightElementHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendNParamWeightElementHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendNParamWeightElementHandler.data,
    qt_meta_data_EMotionFX__BlendNParamWeightElementHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendNParamWeightElementHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendNParamWeightElementHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendNParamWeightElementHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<BlendNParamWeight,BlendNParamWeightElementWidget>"))
        return static_cast< AzToolsFramework::PropertyHandler<BlendNParamWeight,BlendNParamWeightElementWidget>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::BlendNParamWeightElementHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMotionFX__BlendNParamWeightsHandler_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendNParamWeightsHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendNParamWeightsHandler_t qt_meta_stringdata_EMotionFX__BlendNParamWeightsHandler = {
    {
QT_MOC_LITERAL(0, 0, 36) // "EMotionFX::BlendNParamWeights..."

    },
    "EMotionFX::BlendNParamWeightsHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendNParamWeightsHandler[] = {

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

void EMotionFX::BlendNParamWeightsHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendNParamWeightsHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendNParamWeightsHandler.data,
    qt_meta_data_EMotionFX__BlendNParamWeightsHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendNParamWeightsHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendNParamWeightsHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendNParamWeightsHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::vector<BlendNParamWeight>,BlendNParamWeightContainerWidget>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::vector<BlendNParamWeight>,BlendNParamWeightContainerWidget>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::BlendNParamWeightsHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
