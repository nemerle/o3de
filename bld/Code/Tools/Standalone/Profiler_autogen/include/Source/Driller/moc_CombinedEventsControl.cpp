/****************************************************************************
** Meta object code from reading C++ file 'CombinedEventsControl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/Driller/CombinedEventsControl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CombinedEventsControl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__CombinedEventsControl_t {
    QByteArrayData data[19];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__CombinedEventsControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__CombinedEventsControl_t qt_meta_stringdata_Driller__CombinedEventsControl = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Driller::CombinedEventsControl"
QT_MOC_LITERAL(1, 31, 18), // "InformOfMouseClick"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 8), // "newValue"
QT_MOC_LITERAL(4, 60, 5), // "range"
QT_MOC_LITERAL(5, 66, 9), // "modifiers"
QT_MOC_LITERAL(6, 76, 17), // "InformOfMouseMove"
QT_MOC_LITERAL(7, 94, 23), // "InfoAreaGeometryChanged"
QT_MOC_LITERAL(8, 118, 7), // "newSize"
QT_MOC_LITERAL(9, 126, 22), // "EventRequestEventFocus"
QT_MOC_LITERAL(10, 149, 15), // "EventNumberType"
QT_MOC_LITERAL(11, 165, 18), // "MouseClickInformed"
QT_MOC_LITERAL(12, 184, 17), // "MouseMoveInformed"
QT_MOC_LITERAL(13, 202, 25), // "OnEventScrubberboxChanged"
QT_MOC_LITERAL(14, 228, 16), // "SetScrubberFrame"
QT_MOC_LITERAL(15, 245, 15), // "FrameNumberType"
QT_MOC_LITERAL(16, 261, 5), // "frame"
QT_MOC_LITERAL(17, 267, 29), // "OnEventTrackRequestEventFocus"
QT_MOC_LITERAL(18, 297, 24) // "Driller::EventNumberType"

    },
    "Driller::CombinedEventsControl\0"
    "InformOfMouseClick\0\0newValue\0range\0"
    "modifiers\0InformOfMouseMove\0"
    "InfoAreaGeometryChanged\0newSize\0"
    "EventRequestEventFocus\0EventNumberType\0"
    "MouseClickInformed\0MouseMoveInformed\0"
    "OnEventScrubberboxChanged\0SetScrubberFrame\0"
    "FrameNumberType\0frame\0"
    "OnEventTrackRequestEventFocus\0"
    "Driller::EventNumberType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__CombinedEventsControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06 /* Public */,
       6,    3,   66,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
       9,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   79,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x0a /* Public */,
      17,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QSize,    8,
    QMetaType::Void, 0x80000000 | 10,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,    2,

       0        // eod
};

void Driller::CombinedEventsControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CombinedEventsControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InformOfMouseClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->InformOfMouseMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->InfoAreaGeometryChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 3: _t->EventRequestEventFocus((*reinterpret_cast< EventNumberType(*)>(_a[1]))); break;
        case 4: _t->MouseClickInformed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->MouseMoveInformed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnEventScrubberboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SetScrubberFrame((*reinterpret_cast< FrameNumberType(*)>(_a[1]))); break;
        case 8: _t->OnEventTrackRequestEventFocus((*reinterpret_cast< Driller::EventNumberType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CombinedEventsControl::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombinedEventsControl::InformOfMouseClick)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CombinedEventsControl::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombinedEventsControl::InformOfMouseMove)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CombinedEventsControl::*)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombinedEventsControl::InfoAreaGeometryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CombinedEventsControl::*)(EventNumberType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CombinedEventsControl::EventRequestEventFocus)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::CombinedEventsControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_Driller__CombinedEventsControl.data,
    qt_meta_data_Driller__CombinedEventsControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::CombinedEventsControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::CombinedEventsControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__CombinedEventsControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Driller::DrillerEventWindowMessages::Bus::Handler"))
        return static_cast< Driller::DrillerEventWindowMessages::Bus::Handler*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Driller::CombinedEventsControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Driller::CombinedEventsControl::InformOfMouseClick(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Driller::CombinedEventsControl::InformOfMouseMove(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Driller::CombinedEventsControl::InfoAreaGeometryChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Driller::CombinedEventsControl::EventRequestEventFocus(EventNumberType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_Driller__CEQDataTrack_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__CEQDataTrack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__CEQDataTrack_t qt_meta_stringdata_Driller__CEQDataTrack = {
    {
QT_MOC_LITERAL(0, 0, 21) // "Driller::CEQDataTrack"

    },
    "Driller::CEQDataTrack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__CEQDataTrack[] = {

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

void Driller::CEQDataTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Driller::CEQDataTrack::staticMetaObject = { {
    QMetaObject::SuperData::link<Racetrack::DataRacetrack::staticMetaObject>(),
    qt_meta_stringdata_Driller__CEQDataTrack.data,
    qt_meta_data_Driller__CEQDataTrack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::CEQDataTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::CEQDataTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__CEQDataTrack.stringdata0))
        return static_cast<void*>(this);
    return Racetrack::DataRacetrack::qt_metacast(_clname);
}

int Driller::CEQDataTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Racetrack::DataRacetrack::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
