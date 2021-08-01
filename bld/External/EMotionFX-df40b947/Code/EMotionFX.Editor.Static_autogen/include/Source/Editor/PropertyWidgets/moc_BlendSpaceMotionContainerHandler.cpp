/****************************************************************************
** Meta object code from reading C++ file 'BlendSpaceMotionContainerHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Gems/EMotionFX/Code/Source/Editor/PropertyWidgets/BlendSpaceMotionContainerHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BlendSpaceMotionContainerHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerWidget_t {
    QByteArrayData data[17];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerWidget_t qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "EMotionFX::BlendSpaceMotionCo..."
QT_MOC_LITERAL(1, 43, 14), // "MotionsChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 20), // "FindWidgetByMotionId"
QT_MOC_LITERAL(4, 80, 23), // "BlendSpaceMotionWidget*"
QT_MOC_LITERAL(5, 104, 13), // "AZStd::string"
QT_MOC_LITERAL(6, 118, 8), // "motionId"
QT_MOC_LITERAL(7, 127, 10), // "FindWidget"
QT_MOC_LITERAL(8, 138, 6), // "object"
QT_MOC_LITERAL(9, 145, 11), // "OnAddMotion"
QT_MOC_LITERAL(10, 157, 14), // "OnRemoveMotion"
QT_MOC_LITERAL(11, 172, 39), // "const BlendSpaceNode::BlendSp..."
QT_MOC_LITERAL(12, 212, 6), // "motion"
QT_MOC_LITERAL(13, 219, 17), // "OnRestorePosition"
QT_MOC_LITERAL(14, 237, 18), // "OnPositionXChanged"
QT_MOC_LITERAL(15, 256, 5), // "value"
QT_MOC_LITERAL(16, 262, 18) // "OnPositionYChanged"

    },
    "EMotionFX::BlendSpaceMotionContainerWidget\0"
    "MotionsChanged\0\0FindWidgetByMotionId\0"
    "BlendSpaceMotionWidget*\0AZStd::string\0"
    "motionId\0FindWidget\0object\0OnAddMotion\0"
    "OnRemoveMotion\0const BlendSpaceNode::BlendSpaceMotion*\0"
    "motion\0OnRestorePosition\0OnPositionXChanged\0"
    "value\0OnPositionYChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendSpaceMotionContainerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x09 /* Protected */,
       7,    1,   58,    2, 0x09 /* Protected */,
       9,    0,   61,    2, 0x09 /* Protected */,
      10,    1,   62,    2, 0x09 /* Protected */,
      13,    0,   65,    2, 0x09 /* Protected */,
      14,    1,   66,    2, 0x09 /* Protected */,
      16,    1,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 4, 0x80000000 | 5,    6,
    0x80000000 | 4, QMetaType::QObjectStar,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   15,

       0        // eod
};

void EMotionFX::BlendSpaceMotionContainerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlendSpaceMotionContainerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MotionsChanged(); break;
        case 1: { BlendSpaceMotionWidget* _r = _t->FindWidgetByMotionId((*reinterpret_cast< const AZStd::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BlendSpaceMotionWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: { BlendSpaceMotionWidget* _r = _t->FindWidget((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BlendSpaceMotionWidget**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->OnAddMotion(); break;
        case 4: _t->OnRemoveMotion((*reinterpret_cast< const BlendSpaceNode::BlendSpaceMotion*(*)>(_a[1]))); break;
        case 5: _t->OnRestorePosition(); break;
        case 6: _t->OnPositionXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnPositionYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BlendSpaceMotionContainerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BlendSpaceMotionContainerWidget::MotionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendSpaceMotionContainerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerWidget.data,
    qt_meta_data_EMotionFX__BlendSpaceMotionContainerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendSpaceMotionContainerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendSpaceMotionContainerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::BlendSpaceMotionContainerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void EMotionFX::BlendSpaceMotionContainerWidget::MotionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerHandler_t {
    QByteArrayData data[1];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerHandler_t qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerHandler = {
    {
QT_MOC_LITERAL(0, 0, 43) // "EMotionFX::BlendSpaceMotionCo..."

    },
    "EMotionFX::BlendSpaceMotionContainerHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__BlendSpaceMotionContainerHandler[] = {

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

void EMotionFX::BlendSpaceMotionContainerHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::BlendSpaceMotionContainerHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerHandler.data,
    qt_meta_data_EMotionFX__BlendSpaceMotionContainerHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::BlendSpaceMotionContainerHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::BlendSpaceMotionContainerHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__BlendSpaceMotionContainerHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::PropertyHandler<AZStd::vector<BlendSpaceNode::BlendSpaceMotion>,BlendSpaceMotionContainerWidget>"))
        return static_cast< AzToolsFramework::PropertyHandler<AZStd::vector<BlendSpaceNode::BlendSpaceMotion>,BlendSpaceMotionContainerWidget>*>(this);
    return QObject::qt_metacast(_clname);
}

int EMotionFX::BlendSpaceMotionContainerHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
