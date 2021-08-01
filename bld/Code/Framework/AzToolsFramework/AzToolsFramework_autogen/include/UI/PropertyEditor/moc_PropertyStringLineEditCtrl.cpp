/****************************************************************************
** Meta object code from reading C++ file 'PropertyStringLineEditCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyStringLineEditCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyStringLineEditCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyStringLineEditCtrl_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyStringLineEditCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyStringLineEditCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyStringLineEditCtrl = {
    {
QT_MOC_LITERAL(0, 0, 44), // "AzToolsFramework::PropertyStr..."
QT_MOC_LITERAL(1, 45, 12), // "valueChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 14), // "AZStd::string&"
QT_MOC_LITERAL(4, 74, 8), // "newValue"
QT_MOC_LITERAL(5, 83, 8), // "setValue"
QT_MOC_LITERAL(6, 92, 3), // "val"
QT_MOC_LITERAL(7, 96, 9), // "setMaxLen"
QT_MOC_LITERAL(8, 106, 6), // "maxLen"
QT_MOC_LITERAL(9, 113, 26), // "onChildLineEditValueChange"
QT_MOC_LITERAL(10, 140, 5) // "value"

    },
    "AzToolsFramework::PropertyStringLineEditCtrl\0"
    "valueChanged\0\0AZStd::string&\0newValue\0"
    "setValue\0val\0setMaxLen\0maxLen\0"
    "onChildLineEditValueChange\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyStringLineEditCtrl[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void AzToolsFramework::PropertyStringLineEditCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyStringLineEditCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< AZStd::string(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< AZStd::string(*)>(_a[1]))); break;
        case 2: _t->setMaxLen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onChildLineEditValueChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyStringLineEditCtrl::*)(AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyStringLineEditCtrl::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyStringLineEditCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyStringLineEditCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyStringLineEditCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyStringLineEditCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyStringLineEditCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyStringLineEditCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyStringLineEditCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AzToolsFramework::PropertyStringLineEditCtrl::valueChanged(AZStd::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzToolsFramework__StringPropertyLineEditHandler_t {
    QByteArrayData data[1];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__StringPropertyLineEditHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__StringPropertyLineEditHandler_t qt_meta_stringdata_AzToolsFramework__StringPropertyLineEditHandler = {
    {
QT_MOC_LITERAL(0, 0, 47) // "AzToolsFramework::StringPrope..."

    },
    "AzToolsFramework::StringPropertyLineEditHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__StringPropertyLineEditHandler[] = {

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

void AzToolsFramework::StringPropertyLineEditHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::StringPropertyLineEditHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__StringPropertyLineEditHandler.data,
    qt_meta_data_AzToolsFramework__StringPropertyLineEditHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::StringPropertyLineEditHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::StringPropertyLineEditHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__StringPropertyLineEditHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyHandler<AZStd::string,PropertyStringLineEditCtrl>"))
        return static_cast< PropertyHandler<AZStd::string,PropertyStringLineEditCtrl>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::StringPropertyLineEditHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
