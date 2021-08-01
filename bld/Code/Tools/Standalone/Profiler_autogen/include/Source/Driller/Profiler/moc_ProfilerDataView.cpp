/****************************************************************************
** Meta object code from reading C++ file 'ProfilerDataView.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Profiler/ProfilerDataView.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProfilerDataView.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__ProfilerDataView_t {
    QByteArrayData data[11];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__ProfilerDataView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__ProfilerDataView_t qt_meta_stringdata_Driller__ProfilerDataView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Driller::ProfilerDataView"
QT_MOC_LITERAL(1, 26, 15), // "OnDataDestroyed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "OnChartTypeMenu"
QT_MOC_LITERAL(4, 59, 8), // "fromMenu"
QT_MOC_LITERAL(5, 68, 17), // "OnChartLengthMenu"
QT_MOC_LITERAL(6, 86, 20), // "OnThreadSelectorMenu"
QT_MOC_LITERAL(7, 107, 7), // "AZ::u64"
QT_MOC_LITERAL(8, 115, 2), // "id"
QT_MOC_LITERAL(9, 118, 27), // "OnThreadSelectorButtonClick"
QT_MOC_LITERAL(10, 146, 13) // "OnSanityCheck"

    },
    "Driller::ProfilerDataView\0OnDataDestroyed\0"
    "\0OnChartTypeMenu\0fromMenu\0OnChartLengthMenu\0"
    "OnThreadSelectorMenu\0AZ::u64\0id\0"
    "OnThreadSelectorButtonClick\0OnSanityCheck"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__ProfilerDataView[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       3,    1,   61,    2, 0x0a /* Public */,
       5,    0,   64,    2, 0x0a /* Public */,
       5,    1,   65,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       6,    2,   69,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    4,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Driller::ProfilerDataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProfilerDataView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDataDestroyed(); break;
        case 1: _t->OnChartTypeMenu(); break;
        case 2: _t->OnChartTypeMenu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->OnChartLengthMenu(); break;
        case 4: _t->OnChartLengthMenu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->OnThreadSelectorMenu(); break;
        case 6: _t->OnThreadSelectorMenu((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< AZ::u64(*)>(_a[2]))); break;
        case 7: _t->OnThreadSelectorButtonClick(); break;
        case 8: _t->OnSanityCheck(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::ProfilerDataView::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Driller__ProfilerDataView.data,
    qt_meta_data_Driller__ProfilerDataView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::ProfilerDataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::ProfilerDataView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__ProfilerDataView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Driller::DrillerMainWindowMessages::Bus::Handler"))
        return static_cast< Driller::DrillerMainWindowMessages::Bus::Handler*>(this);
    if (!strcmp(_clname, "Driller::DrillerEventWindowMessages::Bus::Handler"))
        return static_cast< Driller::DrillerEventWindowMessages::Bus::Handler*>(this);
    return QDialog::qt_metacast(_clname);
}

int Driller::ProfilerDataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
