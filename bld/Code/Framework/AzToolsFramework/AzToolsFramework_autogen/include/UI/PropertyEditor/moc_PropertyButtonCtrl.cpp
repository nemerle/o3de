/****************************************************************************
** Meta object code from reading C++ file 'PropertyButtonCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyButtonCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyButtonCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyButtonCtrl_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyButtonCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyButtonCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyButtonCtrl = {
    {
QT_MOC_LITERAL(0, 0, 36), // "AzToolsFramework::PropertyBut..."
QT_MOC_LITERAL(1, 37, 13), // "buttonPressed"
QT_MOC_LITERAL(2, 51, 0) // ""

    },
    "AzToolsFramework::PropertyButtonCtrl\0"
    "buttonPressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyButtonCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::PropertyButtonCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyButtonCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyButtonCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyButtonCtrl::buttonPressed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyButtonCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyButtonCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyButtonCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyButtonCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyButtonCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyButtonCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyButtonCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::PropertyButtonCtrl::buttonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__ButtonHandlerCommon_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ButtonHandlerCommon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ButtonHandlerCommon_t qt_meta_stringdata_AzToolsFramework__ButtonHandlerCommon = {
    {
QT_MOC_LITERAL(0, 0, 37) // "AzToolsFramework::ButtonHandl..."

    },
    "AzToolsFramework::ButtonHandlerCommon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ButtonHandlerCommon[] = {

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

void AzToolsFramework::ButtonHandlerCommon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ButtonHandlerCommon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ButtonHandlerCommon.data,
    qt_meta_data_AzToolsFramework__ButtonHandlerCommon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ButtonHandlerCommon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ButtonHandlerCommon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ButtonHandlerCommon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::ButtonHandlerCommon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__ButtonGenericHandler_t {
    QByteArrayData data[1];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ButtonGenericHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ButtonGenericHandler_t qt_meta_stringdata_AzToolsFramework__ButtonGenericHandler = {
    {
QT_MOC_LITERAL(0, 0, 38) // "AzToolsFramework::ButtonGener..."

    },
    "AzToolsFramework::ButtonGenericHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ButtonGenericHandler[] = {

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

void AzToolsFramework::ButtonGenericHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ButtonGenericHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<ButtonHandlerCommon::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ButtonGenericHandler.data,
    qt_meta_data_AzToolsFramework__ButtonGenericHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ButtonGenericHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ButtonGenericHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ButtonGenericHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "GenericPropertyHandler<PropertyButtonCtrl>"))
        return static_cast< GenericPropertyHandler<PropertyButtonCtrl>*>(this);
    return ButtonHandlerCommon::qt_metacast(_clname);
}

int AzToolsFramework::ButtonGenericHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonHandlerCommon::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__ButtonBoolHandler_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ButtonBoolHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ButtonBoolHandler_t qt_meta_stringdata_AzToolsFramework__ButtonBoolHandler = {
    {
QT_MOC_LITERAL(0, 0, 35) // "AzToolsFramework::ButtonBoolH..."

    },
    "AzToolsFramework::ButtonBoolHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ButtonBoolHandler[] = {

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

void AzToolsFramework::ButtonBoolHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ButtonBoolHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<ButtonHandlerCommon::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ButtonBoolHandler.data,
    qt_meta_data_AzToolsFramework__ButtonBoolHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ButtonBoolHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ButtonBoolHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ButtonBoolHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyHandler<bool,PropertyButtonCtrl>"))
        return static_cast< PropertyHandler<bool,PropertyButtonCtrl>*>(this);
    return ButtonHandlerCommon::qt_metacast(_clname);
}

int AzToolsFramework::ButtonBoolHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonHandlerCommon::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__ButtonStringHandler_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ButtonStringHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ButtonStringHandler_t qt_meta_stringdata_AzToolsFramework__ButtonStringHandler = {
    {
QT_MOC_LITERAL(0, 0, 37) // "AzToolsFramework::ButtonStrin..."

    },
    "AzToolsFramework::ButtonStringHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ButtonStringHandler[] = {

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

void AzToolsFramework::ButtonStringHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ButtonStringHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<ButtonHandlerCommon::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ButtonStringHandler.data,
    qt_meta_data_AzToolsFramework__ButtonStringHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ButtonStringHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ButtonStringHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ButtonStringHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyHandler<AZStd::string,PropertyButtonCtrl>"))
        return static_cast< PropertyHandler<AZStd::string,PropertyButtonCtrl>*>(this);
    return ButtonHandlerCommon::qt_metacast(_clname);
}

int AzToolsFramework::ButtonStringHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ButtonHandlerCommon::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
