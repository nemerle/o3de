/****************************************************************************
** Meta object code from reading C++ file 'AreaChart.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/Driller/AreaChart.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AreaChart.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AreaChart__AreaChart_t {
    QByteArrayData data[13];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AreaChart__AreaChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AreaChart__AreaChart_t qt_meta_stringdata_AreaChart__AreaChart = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AreaChart::AreaChart"
QT_MOC_LITERAL(1, 21, 15), // "InspectedSeries"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "size_t"
QT_MOC_LITERAL(4, 45, 8), // "seriesId"
QT_MOC_LITERAL(5, 54, 14), // "SelectedSeries"
QT_MOC_LITERAL(6, 69, 8), // "position"
QT_MOC_LITERAL(7, 78, 8), // "insetTop"
QT_MOC_LITERAL(8, 87, 11), // "insetBottom"
QT_MOC_LITERAL(9, 99, 9), // "insetLeft"
QT_MOC_LITERAL(10, 109, 10), // "insetRight"
QT_MOC_LITERAL(11, 120, 16), // "widgetBackground"
QT_MOC_LITERAL(12, 137, 15) // "graphBackground"

    },
    "AreaChart::AreaChart\0InspectedSeries\0"
    "\0size_t\0seriesId\0SelectedSeries\0"
    "position\0insetTop\0insetBottom\0insetLeft\0"
    "insetRight\0widgetBackground\0graphBackground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AreaChart__AreaChart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    6,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00095003,
       8, QMetaType::Int, 0x00095003,
       9, QMetaType::Int, 0x00095003,
      10, QMetaType::Int, 0x00095003,
      11, QMetaType::QColor, 0x00095003,
      12, QMetaType::QColor, 0x00095003,

       0        // eod
};

void AreaChart::AreaChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AreaChart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InspectedSeries((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->SelectedSeries((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AreaChart::*)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AreaChart::InspectedSeries)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AreaChart::*)(size_t , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AreaChart::SelectedSeries)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AreaChart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->m_insetTop; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->m_insetBottom; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->m_insetLeft; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->m_insetRight; break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->m_widgetBackground; break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->m_graphBackground; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AreaChart *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_insetTop != *reinterpret_cast< int*>(_v)) {
                _t->m_insetTop = *reinterpret_cast< int*>(_v);
            }
            break;
        case 1:
            if (_t->m_insetBottom != *reinterpret_cast< int*>(_v)) {
                _t->m_insetBottom = *reinterpret_cast< int*>(_v);
            }
            break;
        case 2:
            if (_t->m_insetLeft != *reinterpret_cast< int*>(_v)) {
                _t->m_insetLeft = *reinterpret_cast< int*>(_v);
            }
            break;
        case 3:
            if (_t->m_insetRight != *reinterpret_cast< int*>(_v)) {
                _t->m_insetRight = *reinterpret_cast< int*>(_v);
            }
            break;
        case 4:
            if (_t->m_widgetBackground != *reinterpret_cast< QColor*>(_v)) {
                _t->m_widgetBackground = *reinterpret_cast< QColor*>(_v);
            }
            break;
        case 5:
            if (_t->m_graphBackground != *reinterpret_cast< QColor*>(_v)) {
                _t->m_graphBackground = *reinterpret_cast< QColor*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AreaChart::AreaChart::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AreaChart__AreaChart.data,
    qt_meta_data_AreaChart__AreaChart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AreaChart::AreaChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AreaChart::AreaChart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AreaChart__AreaChart.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AreaChart::AreaChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AreaChart::AreaChart::InspectedSeries(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AreaChart::AreaChart::SelectedSeries(size_t _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
