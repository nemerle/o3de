/****************************************************************************
** Meta object code from reading C++ file 'StripChart.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/Driller/StripChart.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StripChart.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StripChart__DataStrip_t {
    QByteArrayData data[17];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StripChart__DataStrip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StripChart__DataStrip_t qt_meta_stringdata_StripChart__DataStrip = {
    {
QT_MOC_LITERAL(0, 0, 21), // "StripChart::DataStrip"
QT_MOC_LITERAL(1, 22, 20), // "onMouseOverDataPoint"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "channelID"
QT_MOC_LITERAL(4, 54, 7), // "AZ::u64"
QT_MOC_LITERAL(5, 62, 8), // "sampleID"
QT_MOC_LITERAL(6, 71, 16), // "primaryAxisValue"
QT_MOC_LITERAL(7, 88, 18), // "dependentAxisValue"
QT_MOC_LITERAL(8, 107, 18), // "onMouseOverNothing"
QT_MOC_LITERAL(9, 126, 26), // "onMouseLeftDownDomainValue"
QT_MOC_LITERAL(10, 153, 11), // "domainValue"
QT_MOC_LITERAL(11, 165, 26), // "onMouseLeftDragDomainValue"
QT_MOC_LITERAL(12, 192, 24), // "onMouseLeftUpDomainValue"
QT_MOC_LITERAL(13, 217, 11), // "ProcureData"
QT_MOC_LITERAL(14, 229, 22), // "StripChart::DataStrip*"
QT_MOC_LITERAL(15, 252, 22), // "OnDestroyAxisFormatter"
QT_MOC_LITERAL(16, 275, 10) // "pDestroyed"

    },
    "StripChart::DataStrip\0onMouseOverDataPoint\0"
    "\0channelID\0AZ::u64\0sampleID\0"
    "primaryAxisValue\0dependentAxisValue\0"
    "onMouseOverNothing\0onMouseLeftDownDomainValue\0"
    "domainValue\0onMouseLeftDragDomainValue\0"
    "onMouseLeftUpDomainValue\0ProcureData\0"
    "StripChart::DataStrip*\0OnDestroyAxisFormatter\0"
    "pDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StripChart__DataStrip[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       8,    2,   58,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,
      12,    1,   69,    2, 0x06 /* Public */,
      13,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Float, QMetaType::Float,    3,    5,    6,    7,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    6,    7,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, 0x80000000 | 14,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,   16,

       0        // eod
};

void StripChart::DataStrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataStrip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onMouseOverDataPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< AZ::u64(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 1: _t->onMouseOverNothing((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->onMouseLeftDownDomainValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->onMouseLeftDragDomainValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->onMouseLeftUpDomainValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->ProcureData((*reinterpret_cast< StripChart::DataStrip*(*)>(_a[1]))); break;
        case 6: _t->OnDestroyAxisFormatter((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StripChart::DataStrip* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataStrip::*)(int , AZ::u64 , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStrip::onMouseOverDataPoint)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataStrip::*)(float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStrip::onMouseOverNothing)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataStrip::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStrip::onMouseLeftDownDomainValue)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataStrip::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStrip::onMouseLeftDragDomainValue)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataStrip::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStrip::onMouseLeftUpDomainValue)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataStrip::*)(StripChart::DataStrip * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataStrip::ProcureData)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StripChart::DataStrip::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_StripChart__DataStrip.data,
    qt_meta_data_StripChart__DataStrip,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StripChart::DataStrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StripChart::DataStrip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StripChart__DataStrip.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StripChart::DataStrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void StripChart::DataStrip::onMouseOverDataPoint(int _t1, AZ::u64 _t2, float _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StripChart::DataStrip::onMouseOverNothing(float _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StripChart::DataStrip::onMouseLeftDownDomainValue(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StripChart::DataStrip::onMouseLeftDragDomainValue(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StripChart::DataStrip::onMouseLeftUpDomainValue(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StripChart::DataStrip::ProcureData(StripChart::DataStrip * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
