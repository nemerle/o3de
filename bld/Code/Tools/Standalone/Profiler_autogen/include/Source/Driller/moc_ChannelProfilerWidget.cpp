/****************************************************************************
** Meta object code from reading C++ file 'ChannelProfilerWidget.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/Driller/ChannelProfilerWidget.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChannelProfilerWidget.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__ChannelProfilerWidget_t {
    QByteArrayData data[24];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__ChannelProfilerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__ChannelProfilerWidget_t qt_meta_stringdata_Driller__ChannelProfilerWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Driller::ChannelProfilerWidget"
QT_MOC_LITERAL(1, 31, 19), // "OnActivationChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 22), // "ChannelProfilerWidget*"
QT_MOC_LITERAL(4, 75, 9), // "activated"
QT_MOC_LITERAL(5, 85, 16), // "DrillDownRequest"
QT_MOC_LITERAL(6, 102, 8), // "QWidget*"
QT_MOC_LITERAL(7, 111, 15), // "FrameNumberType"
QT_MOC_LITERAL(8, 127, 7), // "atFrame"
QT_MOC_LITERAL(9, 135, 18), // "ExportToCSVRequest"
QT_MOC_LITERAL(10, 154, 11), // "const char*"
QT_MOC_LITERAL(11, 166, 8), // "filename"
QT_MOC_LITERAL(12, 175, 18), // "CSVExportSettings*"
QT_MOC_LITERAL(13, 194, 15), // "customizeWidget"
QT_MOC_LITERAL(14, 210, 21), // "OnSuccessfulDrillDown"
QT_MOC_LITERAL(15, 232, 6), // "widget"
QT_MOC_LITERAL(16, 239, 19), // "OnActivationToggled"
QT_MOC_LITERAL(17, 259, 14), // "SetCaptureMode"
QT_MOC_LITERAL(18, 274, 11), // "CaptureMode"
QT_MOC_LITERAL(19, 286, 4), // "mode"
QT_MOC_LITERAL(20, 291, 11), // "OnDrillDown"
QT_MOC_LITERAL(21, 303, 16), // "OnDrillDestroyed"
QT_MOC_LITERAL(22, 320, 5), // "drill"
QT_MOC_LITERAL(23, 326, 13) // "OnExportToCSV"

    },
    "Driller::ChannelProfilerWidget\0"
    "OnActivationChanged\0\0ChannelProfilerWidget*\0"
    "activated\0DrillDownRequest\0QWidget*\0"
    "FrameNumberType\0atFrame\0ExportToCSVRequest\0"
    "const char*\0filename\0CSVExportSettings*\0"
    "customizeWidget\0OnSuccessfulDrillDown\0"
    "widget\0OnActivationToggled\0SetCaptureMode\0"
    "CaptureMode\0mode\0OnDrillDown\0"
    "OnDrillDestroyed\0drill\0OnExportToCSV"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__ChannelProfilerWidget[] = {

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
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,
       9,    2,   67,    2, 0x06 /* Public */,
      14,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   75,    2, 0x0a /* Public */,
      17,    1,   76,    2, 0x0a /* Public */,
      20,    0,   79,    2, 0x0a /* Public */,
      21,    1,   80,    2, 0x0a /* Public */,
      23,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    4,
    0x80000000 | 6, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 6,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   22,
    QMetaType::Void,

       0        // eod
};

void Driller::ChannelProfilerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChannelProfilerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnActivationChanged((*reinterpret_cast< ChannelProfilerWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: { QWidget* _r = _t->DrillDownRequest((*reinterpret_cast< FrameNumberType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = std::move(_r); }  break;
        case 2: _t->ExportToCSVRequest((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< CSVExportSettings*(*)>(_a[2]))); break;
        case 3: _t->OnSuccessfulDrillDown((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 4: _t->OnActivationToggled(); break;
        case 5: _t->SetCaptureMode((*reinterpret_cast< CaptureMode(*)>(_a[1]))); break;
        case 6: _t->OnDrillDown(); break;
        case 7: _t->OnDrillDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->OnExportToCSV(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ChannelProfilerWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChannelProfilerWidget::*)(ChannelProfilerWidget * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelProfilerWidget::OnActivationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = QWidget * (ChannelProfilerWidget::*)(FrameNumberType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelProfilerWidget::DrillDownRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChannelProfilerWidget::*)(const char * , CSVExportSettings * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelProfilerWidget::ExportToCSVRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChannelProfilerWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChannelProfilerWidget::OnSuccessfulDrillDown)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::ChannelProfilerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Driller__ChannelProfilerWidget.data,
    qt_meta_data_Driller__ChannelProfilerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::ChannelProfilerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::ChannelProfilerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__ChannelProfilerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Driller::ChannelProfilerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Driller::ChannelProfilerWidget::OnActivationChanged(ChannelProfilerWidget * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
QWidget * Driller::ChannelProfilerWidget::DrillDownRequest(FrameNumberType _t1)
{
    QWidget* _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void Driller::ChannelProfilerWidget::ExportToCSVRequest(const char * _t1, CSVExportSettings * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Driller::ChannelProfilerWidget::OnSuccessfulDrillDown(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
