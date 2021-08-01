/****************************************************************************
** Meta object code from reading C++ file 'CarrierDataAggregator.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Carrier/CarrierDataAggregator.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CarrierDataAggregator.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__CarrierDataAggregator_t {
    QByteArrayData data[15];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__CarrierDataAggregator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__CarrierDataAggregator_t qt_meta_stringdata_Driller__CarrierDataAggregator = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Driller::CarrierDataAggregator"
QT_MOC_LITERAL(1, 31, 12), // "ValueAtFrame"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "FrameNumberType"
QT_MOC_LITERAL(4, 61, 5), // "frame"
QT_MOC_LITERAL(5, 67, 8), // "GetColor"
QT_MOC_LITERAL(6, 76, 7), // "GetName"
QT_MOC_LITERAL(7, 84, 14), // "GetChannelName"
QT_MOC_LITERAL(8, 99, 14), // "GetDescription"
QT_MOC_LITERAL(9, 114, 10), // "GetToolTip"
QT_MOC_LITERAL(10, 125, 5), // "GetID"
QT_MOC_LITERAL(11, 131, 8), // "AZ::Uuid"
QT_MOC_LITERAL(12, 140, 16), // "DrillDownRequest"
QT_MOC_LITERAL(13, 157, 8), // "QWidget*"
QT_MOC_LITERAL(14, 166, 14) // "OptionsRequest"

    },
    "Driller::CarrierDataAggregator\0"
    "ValueAtFrame\0\0FrameNumberType\0frame\0"
    "GetColor\0GetName\0GetChannelName\0"
    "GetDescription\0GetToolTip\0GetID\0"
    "AZ::Uuid\0DrillDownRequest\0QWidget*\0"
    "OptionsRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__CarrierDataAggregator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,
      12,    1,   68,    2, 0x0a /* Public */,
      14,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Float, 0x80000000 | 3,    4,
    QMetaType::QColor,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 11,
    0x80000000 | 13, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void Driller::CarrierDataAggregator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CarrierDataAggregator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { float _r = _t->ValueAtFrame((*reinterpret_cast< FrameNumberType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 1: { QColor _r = _t->GetColor();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->GetName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->GetChannelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->GetDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->GetToolTip();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { AZ::Uuid _r = _t->GetID();
            if (_a[0]) *reinterpret_cast< AZ::Uuid*>(_a[0]) = std::move(_r); }  break;
        case 7: { QWidget* _r = _t->DrillDownRequest((*reinterpret_cast< FrameNumberType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->OptionsRequest(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::CarrierDataAggregator::staticMetaObject = { {
    QMetaObject::SuperData::link<Aggregator::staticMetaObject>(),
    qt_meta_stringdata_Driller__CarrierDataAggregator.data,
    qt_meta_data_Driller__CarrierDataAggregator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::CarrierDataAggregator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::CarrierDataAggregator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__CarrierDataAggregator.stringdata0))
        return static_cast<void*>(this);
    return Aggregator::qt_metacast(_clname);
}

int Driller::CarrierDataAggregator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Aggregator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
