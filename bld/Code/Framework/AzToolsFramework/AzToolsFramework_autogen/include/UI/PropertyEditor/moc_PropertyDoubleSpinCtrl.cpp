/****************************************************************************
** Meta object code from reading C++ file 'PropertyDoubleSpinCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyDoubleSpinCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyDoubleSpinCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyDoubleSpinCtrl_t {
    QByteArrayData data[19];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyDoubleSpinCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyDoubleSpinCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyDoubleSpinCtrl = {
    {
QT_MOC_LITERAL(0, 0, 40), // "AzToolsFramework::PropertyDou..."
QT_MOC_LITERAL(1, 41, 12), // "valueChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 8), // "newValue"
QT_MOC_LITERAL(4, 64, 15), // "editingFinished"
QT_MOC_LITERAL(5, 80, 8), // "setValue"
QT_MOC_LITERAL(6, 89, 3), // "val"
QT_MOC_LITERAL(7, 93, 10), // "setMinimum"
QT_MOC_LITERAL(8, 104, 10), // "setMaximum"
QT_MOC_LITERAL(9, 115, 7), // "setStep"
QT_MOC_LITERAL(10, 123, 13), // "setMultiplier"
QT_MOC_LITERAL(11, 137, 9), // "setPrefix"
QT_MOC_LITERAL(12, 147, 9), // "setSuffix"
QT_MOC_LITERAL(13, 157, 11), // "setDecimals"
QT_MOC_LITERAL(14, 169, 9), // "precision"
QT_MOC_LITERAL(15, 179, 18), // "setDisplayDecimals"
QT_MOC_LITERAL(16, 198, 15), // "displayDecimals"
QT_MOC_LITERAL(17, 214, 25), // "onChildSpinboxValueChange"
QT_MOC_LITERAL(18, 240, 5) // "value"

    },
    "AzToolsFramework::PropertyDoubleSpinCtrl\0"
    "valueChanged\0\0newValue\0editingFinished\0"
    "setValue\0val\0setMinimum\0setMaximum\0"
    "setStep\0setMultiplier\0setPrefix\0"
    "setSuffix\0setDecimals\0precision\0"
    "setDisplayDecimals\0displayDecimals\0"
    "onChildSpinboxValueChange\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyDoubleSpinCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   78,    2, 0x0a /* Public */,
       7,    1,   81,    2, 0x0a /* Public */,
       8,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      10,    1,   90,    2, 0x0a /* Public */,
      11,    1,   93,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      13,    1,   99,    2, 0x0a /* Public */,
      15,    1,  102,    2, 0x0a /* Public */,
      17,    1,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Double,   18,

       0        // eod
};

void AzToolsFramework::PropertyDoubleSpinCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyDoubleSpinCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setMinimum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setMaximum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setStep((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setMultiplier((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setPrefix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setSuffix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setDecimals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setDisplayDecimals((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onChildSpinboxValueChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyDoubleSpinCtrl::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyDoubleSpinCtrl::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyDoubleSpinCtrl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyDoubleSpinCtrl::editingFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyDoubleSpinCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyDoubleSpinCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyDoubleSpinCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyDoubleSpinCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyDoubleSpinCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyDoubleSpinCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyDoubleSpinCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::PropertyDoubleSpinCtrl::valueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::PropertyDoubleSpinCtrl::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__doublePropertySpinboxHandler_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__doublePropertySpinboxHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__doublePropertySpinboxHandler_t qt_meta_stringdata_AzToolsFramework__doublePropertySpinboxHandler = {
    {
QT_MOC_LITERAL(0, 0, 46) // "AzToolsFramework::doublePrope..."

    },
    "AzToolsFramework::doublePropertySpinboxHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__doublePropertySpinboxHandler[] = {

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

void AzToolsFramework::doublePropertySpinboxHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::doublePropertySpinboxHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__doublePropertySpinboxHandler.data,
    qt_meta_data_AzToolsFramework__doublePropertySpinboxHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::doublePropertySpinboxHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::doublePropertySpinboxHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__doublePropertySpinboxHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DoubleSpinBoxHandlerCommon<double>"))
        return static_cast< DoubleSpinBoxHandlerCommon<double>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::doublePropertySpinboxHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__floatPropertySpinboxHandler_t {
    QByteArrayData data[1];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__floatPropertySpinboxHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__floatPropertySpinboxHandler_t qt_meta_stringdata_AzToolsFramework__floatPropertySpinboxHandler = {
    {
QT_MOC_LITERAL(0, 0, 45) // "AzToolsFramework::floatProper..."

    },
    "AzToolsFramework::floatPropertySpinboxHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__floatPropertySpinboxHandler[] = {

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

void AzToolsFramework::floatPropertySpinboxHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::floatPropertySpinboxHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__floatPropertySpinboxHandler.data,
    qt_meta_data_AzToolsFramework__floatPropertySpinboxHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::floatPropertySpinboxHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::floatPropertySpinboxHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__floatPropertySpinboxHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DoubleSpinBoxHandlerCommon<float>"))
        return static_cast< DoubleSpinBoxHandlerCommon<float>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::floatPropertySpinboxHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
