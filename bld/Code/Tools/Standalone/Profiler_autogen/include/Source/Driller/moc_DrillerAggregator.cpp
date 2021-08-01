/****************************************************************************
** Meta object code from reading C++ file 'DrillerAggregator.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/Driller/DrillerAggregator.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrillerAggregator.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__Aggregator_t {
    QByteArrayData data[30];
    char stringdata0[404];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__Aggregator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__Aggregator_t qt_meta_stringdata_Driller__Aggregator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Driller::Aggregator"
QT_MOC_LITERAL(1, 20, 22), // "NormalizedRangeChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "OnDataCurrentEventChanged"
QT_MOC_LITERAL(4, 70, 14), // "OnDataAddEvent"
QT_MOC_LITERAL(5, 85, 16), // "OnEventFinalized"
QT_MOC_LITERAL(6, 102, 13), // "DrillerEvent*"
QT_MOC_LITERAL(7, 116, 5), // "event"
QT_MOC_LITERAL(8, 122, 21), // "GetInspectionFileName"
QT_MOC_LITERAL(9, 144, 11), // "DataAtFrame"
QT_MOC_LITERAL(10, 156, 15), // "FrameNumberType"
QT_MOC_LITERAL(11, 172, 5), // "frame"
QT_MOC_LITERAL(12, 178, 12), // "ValueAtFrame"
QT_MOC_LITERAL(13, 191, 8), // "GetColor"
QT_MOC_LITERAL(14, 200, 14), // "GetChannelName"
QT_MOC_LITERAL(15, 215, 7), // "GetName"
QT_MOC_LITERAL(16, 223, 14), // "GetDescription"
QT_MOC_LITERAL(17, 238, 10), // "GetToolTip"
QT_MOC_LITERAL(18, 249, 16), // "GetDrillDownIcon"
QT_MOC_LITERAL(19, 266, 5), // "GetID"
QT_MOC_LITERAL(20, 272, 8), // "AZ::Uuid"
QT_MOC_LITERAL(21, 281, 16), // "DrillDownRequest"
QT_MOC_LITERAL(22, 298, 8), // "QWidget*"
QT_MOC_LITERAL(23, 307, 7), // "atFrame"
QT_MOC_LITERAL(24, 315, 14), // "OptionsRequest"
QT_MOC_LITERAL(25, 330, 18), // "ExportToCSVRequest"
QT_MOC_LITERAL(26, 349, 11), // "const char*"
QT_MOC_LITERAL(27, 361, 8), // "filename"
QT_MOC_LITERAL(28, 370, 18), // "CSVExportSettings*"
QT_MOC_LITERAL(29, 389, 14) // "exportSettings"

    },
    "Driller::Aggregator\0NormalizedRangeChanged\0"
    "\0OnDataCurrentEventChanged\0OnDataAddEvent\0"
    "OnEventFinalized\0DrillerEvent*\0event\0"
    "GetInspectionFileName\0DataAtFrame\0"
    "FrameNumberType\0frame\0ValueAtFrame\0"
    "GetColor\0GetChannelName\0GetName\0"
    "GetDescription\0GetToolTip\0GetDrillDownIcon\0"
    "GetID\0AZ::Uuid\0DrillDownRequest\0"
    "QWidget*\0atFrame\0OptionsRequest\0"
    "ExportToCSVRequest\0const char*\0filename\0"
    "CSVExportSettings*\0exportSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__Aggregator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    1,  102,    2, 0x06 /* Public */,
       8,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  106,    2, 0x0a /* Public */,
      12,    1,  109,    2, 0x0a /* Public */,
      13,    0,  112,    2, 0x0a /* Public */,
      14,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    0,  115,    2, 0x0a /* Public */,
      17,    0,  116,    2, 0x0a /* Public */,
      18,    0,  117,    2, 0x0a /* Public */,
      19,    0,  118,    2, 0x0a /* Public */,
      21,    1,  119,    2, 0x0a /* Public */,
      24,    0,  122,    2, 0x0a /* Public */,
      25,    2,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::QString,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 10,   11,
    QMetaType::Float, 0x80000000 | 10,   11,
    QMetaType::QColor,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 20,
    0x80000000 | 22, 0x80000000 | 10,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 28,   27,   29,

       0        // eod
};

void Driller::Aggregator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Aggregator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NormalizedRangeChanged(); break;
        case 1: _t->OnDataCurrentEventChanged(); break;
        case 2: _t->OnDataAddEvent(); break;
        case 3: _t->OnEventFinalized((*reinterpret_cast< DrillerEvent*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->GetInspectionFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->DataAtFrame((*reinterpret_cast< FrameNumberType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { float _r = _t->ValueAtFrame((*reinterpret_cast< FrameNumberType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 7: { QColor _r = _t->GetColor();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->GetChannelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->GetName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->GetDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->GetToolTip();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->GetDrillDownIcon();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { AZ::Uuid _r = _t->GetID();
            if (_a[0]) *reinterpret_cast< AZ::Uuid*>(_a[0]) = std::move(_r); }  break;
        case 14: { QWidget* _r = _t->DrillDownRequest((*reinterpret_cast< FrameNumberType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 15: _t->OptionsRequest(); break;
        case 16: _t->ExportToCSVRequest((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< CSVExportSettings*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Aggregator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Aggregator::NormalizedRangeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Aggregator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Aggregator::OnDataCurrentEventChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Aggregator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Aggregator::OnDataAddEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Aggregator::*)(DrillerEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Aggregator::OnEventFinalized)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = QString (Aggregator::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Aggregator::GetInspectionFileName)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::Aggregator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Driller__Aggregator.data,
    qt_meta_data_Driller__Aggregator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::Aggregator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::Aggregator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__Aggregator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Driller::DrillerMainWindowMessages::Bus::Handler"))
        return static_cast< Driller::DrillerMainWindowMessages::Bus::Handler*>(this);
    if (!strcmp(_clname, "Driller::DrillerWorkspaceWindowMessages::Bus::Handler"))
        return static_cast< Driller::DrillerWorkspaceWindowMessages::Bus::Handler*>(this);
    return QObject::qt_metacast(_clname);
}

int Driller::Aggregator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Driller::Aggregator::NormalizedRangeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Driller::Aggregator::OnDataCurrentEventChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Driller::Aggregator::OnDataAddEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Driller::Aggregator::OnEventFinalized(DrillerEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
QString Driller::Aggregator::GetInspectionFileName()const
{
    QString _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(const_cast< Driller::Aggregator *>(this), &staticMetaObject, 4, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
