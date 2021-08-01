/****************************************************************************
** Meta object code from reading C++ file 'MemoryDataView.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Memory/MemoryDataView.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MemoryDataView.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__MemoryAxisFormatter_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__MemoryAxisFormatter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__MemoryAxisFormatter_t qt_meta_stringdata_Driller__MemoryAxisFormatter = {
    {
QT_MOC_LITERAL(0, 0, 28) // "Driller::MemoryAxisFormatter"

    },
    "Driller::MemoryAxisFormatter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__MemoryAxisFormatter[] = {

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

void Driller::MemoryAxisFormatter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Driller::MemoryAxisFormatter::staticMetaObject = { {
    QMetaObject::SuperData::link<Charts::QAbstractAxisFormatter::staticMetaObject>(),
    qt_meta_stringdata_Driller__MemoryAxisFormatter.data,
    qt_meta_data_Driller__MemoryAxisFormatter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::MemoryAxisFormatter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::MemoryAxisFormatter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__MemoryAxisFormatter.stringdata0))
        return static_cast<void*>(this);
    return Charts::QAbstractAxisFormatter::qt_metacast(_clname);
}

int Driller::MemoryAxisFormatter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Charts::QAbstractAxisFormatter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Driller__MemoryDataView_t {
    QByteArrayData data[24];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__MemoryDataView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__MemoryDataView_t qt_meta_stringdata_Driller__MemoryDataView = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Driller::MemoryDataView"
QT_MOC_LITERAL(1, 24, 22), // "EventRequestEventFocus"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "AZ::s64"
QT_MOC_LITERAL(4, 56, 15), // "OnDataDestroyed"
QT_MOC_LITERAL(5, 72, 10), // "OnViewFull"
QT_MOC_LITERAL(6, 83, 16), // "OnCheckLockRight"
QT_MOC_LITERAL(7, 100, 5), // "state"
QT_MOC_LITERAL(8, 106, 26), // "onMouseLeftDownDomainValue"
QT_MOC_LITERAL(9, 133, 11), // "domainValue"
QT_MOC_LITERAL(10, 145, 26), // "onMouseLeftDragDomainValue"
QT_MOC_LITERAL(11, 172, 20), // "onMouseOverDataPoint"
QT_MOC_LITERAL(12, 193, 9), // "channelID"
QT_MOC_LITERAL(13, 203, 7), // "AZ::u64"
QT_MOC_LITERAL(14, 211, 8), // "sampleID"
QT_MOC_LITERAL(15, 220, 16), // "primaryAxisValue"
QT_MOC_LITERAL(16, 237, 18), // "dependentAxisValue"
QT_MOC_LITERAL(17, 256, 18), // "onMouseOverNothing"
QT_MOC_LITERAL(18, 275, 14), // "OnFilterButton"
QT_MOC_LITERAL(19, 290, 20), // "OnFilterSelectorMenu"
QT_MOC_LITERAL(20, 311, 8), // "fromMenu"
QT_MOC_LITERAL(21, 320, 2), // "id"
QT_MOC_LITERAL(22, 323, 16), // "OnFrameRangeMenu"
QT_MOC_LITERAL(23, 340, 16) // "OnAutoZoomChange"

    },
    "Driller::MemoryDataView\0EventRequestEventFocus\0"
    "\0AZ::s64\0OnDataDestroyed\0OnViewFull\0"
    "OnCheckLockRight\0state\0"
    "onMouseLeftDownDomainValue\0domainValue\0"
    "onMouseLeftDragDomainValue\0"
    "onMouseOverDataPoint\0channelID\0AZ::u64\0"
    "sampleID\0primaryAxisValue\0dependentAxisValue\0"
    "onMouseOverNothing\0OnFilterButton\0"
    "OnFilterSelectorMenu\0fromMenu\0id\0"
    "OnFrameRangeMenu\0OnAutoZoomChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__MemoryDataView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   82,    2, 0x0a /* Public */,
       5,    0,   83,    2, 0x0a /* Public */,
       6,    1,   84,    2, 0x0a /* Public */,
       8,    1,   87,    2, 0x0a /* Public */,
      10,    1,   90,    2, 0x0a /* Public */,
      11,    4,   93,    2, 0x0a /* Public */,
      17,    2,  102,    2, 0x0a /* Public */,
      18,    0,  107,    2, 0x0a /* Public */,
      19,    0,  108,    2, 0x0a /* Public */,
      19,    2,  109,    2, 0x0a /* Public */,
      22,    0,  114,    2, 0x0a /* Public */,
      23,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13, QMetaType::Float, QMetaType::Float,   12,   14,   15,   16,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Driller::MemoryDataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MemoryDataView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EventRequestEventFocus((*reinterpret_cast< AZ::s64(*)>(_a[1]))); break;
        case 1: _t->OnDataDestroyed(); break;
        case 2: _t->OnViewFull(); break;
        case 3: _t->OnCheckLockRight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onMouseLeftDownDomainValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->onMouseLeftDragDomainValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->onMouseOverDataPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< AZ::u64(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 7: _t->onMouseOverNothing((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->OnFilterButton(); break;
        case 9: _t->OnFilterSelectorMenu(); break;
        case 10: _t->OnFilterSelectorMenu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< AZ::u64(*)>(_a[2]))); break;
        case 11: _t->OnFrameRangeMenu(); break;
        case 12: _t->OnAutoZoomChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MemoryDataView::*)(AZ::s64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MemoryDataView::EventRequestEventFocus)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::MemoryDataView::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Driller__MemoryDataView.data,
    qt_meta_data_Driller__MemoryDataView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::MemoryDataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::MemoryDataView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__MemoryDataView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Driller::DrillerMainWindowMessages::Bus::Handler"))
        return static_cast< Driller::DrillerMainWindowMessages::Bus::Handler*>(this);
    if (!strcmp(_clname, "Driller::DrillerEventWindowMessages::Bus::Handler"))
        return static_cast< Driller::DrillerEventWindowMessages::Bus::Handler*>(this);
    return QDialog::qt_metacast(_clname);
}

int Driller::MemoryDataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Driller::MemoryDataView::EventRequestEventFocus(AZ::s64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
