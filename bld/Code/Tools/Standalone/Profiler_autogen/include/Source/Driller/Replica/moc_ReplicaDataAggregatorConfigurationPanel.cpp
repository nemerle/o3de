/****************************************************************************
** Meta object code from reading C++ file 'ReplicaDataAggregatorConfigurationPanel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Replica/ReplicaDataAggregatorConfigurationPanel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReplicaDataAggregatorConfigurationPanel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__ReplicaDataAggregatorConfigurationPanel_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__ReplicaDataAggregatorConfigurationPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__ReplicaDataAggregatorConfigurationPanel_t qt_meta_stringdata_Driller__ReplicaDataAggregatorConfigurationPanel = {
    {
QT_MOC_LITERAL(0, 0, 48), // "Driller::ReplicaDataAggregato..."
QT_MOC_LITERAL(1, 49, 15), // "OnBudgetChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 6), // "budget"
QT_MOC_LITERAL(4, 73, 13), // "OnTypeChanged"
QT_MOC_LITERAL(5, 87, 4), // "type"
QT_MOC_LITERAL(6, 92, 12), // "OnFPSChanged"
QT_MOC_LITERAL(7, 105, 3), // "fps"
QT_MOC_LITERAL(8, 109, 9) // "OnTimeout"

    },
    "Driller::ReplicaDataAggregatorConfigurationPanel\0"
    "OnBudgetChanged\0\0budget\0OnTypeChanged\0"
    "type\0OnFPSChanged\0fps\0OnTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__ReplicaDataAggregatorConfigurationPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void Driller::ReplicaDataAggregatorConfigurationPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReplicaDataAggregatorConfigurationPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBudgetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->OnFPSChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnTimeout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::ReplicaDataAggregatorConfigurationPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<ChannelConfigurationWidget::staticMetaObject>(),
    qt_meta_stringdata_Driller__ReplicaDataAggregatorConfigurationPanel.data,
    qt_meta_data_Driller__ReplicaDataAggregatorConfigurationPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::ReplicaDataAggregatorConfigurationPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::ReplicaDataAggregatorConfigurationPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__ReplicaDataAggregatorConfigurationPanel.stringdata0))
        return static_cast<void*>(this);
    return ChannelConfigurationWidget::qt_metacast(_clname);
}

int Driller::ReplicaDataAggregatorConfigurationPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChannelConfigurationWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
