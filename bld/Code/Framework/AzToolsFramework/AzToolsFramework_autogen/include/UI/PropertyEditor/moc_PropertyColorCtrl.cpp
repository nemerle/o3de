/****************************************************************************
** Meta object code from reading C++ file 'PropertyColorCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyColorCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyColorCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyColorCtrl_t {
    QByteArrayData data[16];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyColorCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyColorCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyColorCtrl = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AzToolsFramework::PropertyCol..."
QT_MOC_LITERAL(1, 36, 12), // "valueChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "newValue"
QT_MOC_LITERAL(4, 59, 19), // "currentColorChanged"
QT_MOC_LITERAL(5, 79, 5), // "color"
QT_MOC_LITERAL(6, 85, 13), // "colorSelected"
QT_MOC_LITERAL(7, 99, 8), // "rejected"
QT_MOC_LITERAL(8, 108, 15), // "editingFinished"
QT_MOC_LITERAL(9, 124, 8), // "setValue"
QT_MOC_LITERAL(10, 133, 3), // "val"
QT_MOC_LITERAL(11, 137, 15), // "openColorDialog"
QT_MOC_LITERAL(12, 153, 10), // "onSelected"
QT_MOC_LITERAL(13, 164, 17), // "OnEditingFinished"
QT_MOC_LITERAL(14, 182, 12), // "OnTextEdited"
QT_MOC_LITERAL(15, 195, 7) // "newText"

    },
    "AzToolsFramework::PropertyColorCtrl\0"
    "valueChanged\0\0newValue\0currentColorChanged\0"
    "color\0colorSelected\0rejected\0"
    "editingFinished\0setValue\0val\0"
    "openColorDialog\0onSelected\0OnEditingFinished\0"
    "OnTextEdited\0newText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyColorCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       7,    0,   73,    2, 0x06 /* Public */,
       8,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   75,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x09 /* Protected */,
      12,    1,   79,    2, 0x09 /* Protected */,
      13,    0,   82,    2, 0x09 /* Protected */,
      14,    1,   83,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void AzToolsFramework::PropertyColorCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyColorCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->rejected(); break;
        case 4: _t->editingFinished(); break;
        case 5: _t->setValue((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 6: _t->openColorDialog(); break;
        case 7: _t->onSelected((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 8: _t->OnEditingFinished(); break;
        case 9: _t->OnTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyColorCtrl::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyColorCtrl::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyColorCtrl::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyColorCtrl::currentColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PropertyColorCtrl::*)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyColorCtrl::colorSelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PropertyColorCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyColorCtrl::rejected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PropertyColorCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyColorCtrl::editingFinished)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyColorCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyColorCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyColorCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyColorCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyColorCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyColorCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyColorCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::PropertyColorCtrl::valueChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::PropertyColorCtrl::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzToolsFramework::PropertyColorCtrl::colorSelected(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzToolsFramework::PropertyColorCtrl::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AzToolsFramework::PropertyColorCtrl::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__Vector3ColorPropertyHandler_t {
    QByteArrayData data[1];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__Vector3ColorPropertyHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__Vector3ColorPropertyHandler_t qt_meta_stringdata_AzToolsFramework__Vector3ColorPropertyHandler = {
    {
QT_MOC_LITERAL(0, 0, 45) // "AzToolsFramework::Vector3Colo..."

    },
    "AzToolsFramework::Vector3ColorPropertyHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__Vector3ColorPropertyHandler[] = {

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

void AzToolsFramework::Vector3ColorPropertyHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::Vector3ColorPropertyHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__Vector3ColorPropertyHandler.data,
    qt_meta_data_AzToolsFramework__Vector3ColorPropertyHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::Vector3ColorPropertyHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::Vector3ColorPropertyHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__Vector3ColorPropertyHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ColorHandlerCommon<AZ::Vector3>"))
        return static_cast< ColorHandlerCommon<AZ::Vector3>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::Vector3ColorPropertyHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AZColorPropertyHandler_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AZColorPropertyHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AZColorPropertyHandler_t qt_meta_stringdata_AzToolsFramework__AZColorPropertyHandler = {
    {
QT_MOC_LITERAL(0, 0, 40) // "AzToolsFramework::AZColorProp..."

    },
    "AzToolsFramework::AZColorPropertyHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AZColorPropertyHandler[] = {

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

void AzToolsFramework::AZColorPropertyHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AZColorPropertyHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AZColorPropertyHandler.data,
    qt_meta_data_AzToolsFramework__AZColorPropertyHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AZColorPropertyHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AZColorPropertyHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AZColorPropertyHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ColorHandlerCommon<AZ::Color>"))
        return static_cast< ColorHandlerCommon<AZ::Color>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::AZColorPropertyHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
