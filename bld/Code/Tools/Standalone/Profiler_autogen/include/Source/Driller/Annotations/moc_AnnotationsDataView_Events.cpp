/****************************************************************************
** Meta object code from reading C++ file 'AnnotationsDataView_Events.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Annotations/AnnotationsDataView_Events.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnnotationsDataView_Events.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__AnnotationsDataView_Events_t {
    QByteArrayData data[11];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__AnnotationsDataView_Events_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__AnnotationsDataView_Events_t qt_meta_stringdata_Driller__AnnotationsDataView_Events = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Driller::AnnotationsDataView_..."
QT_MOC_LITERAL(1, 36, 27), // "InformOfMouseOverAnnotation"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 10), // "Annotation"
QT_MOC_LITERAL(4, 76, 10), // "annotation"
QT_MOC_LITERAL(5, 87, 23), // "InformOfClickAnnotation"
QT_MOC_LITERAL(6, 111, 17), // "OnAxisInvalidated"
QT_MOC_LITERAL(7, 129, 15), // "OnAxisDestroyed"
QT_MOC_LITERAL(8, 145, 21), // "OnScrubberFrameUpdate"
QT_MOC_LITERAL(9, 167, 15), // "FrameNumberType"
QT_MOC_LITERAL(10, 183, 14) // "newFrameNumber"

    },
    "Driller::AnnotationsDataView_Events\0"
    "InformOfMouseOverAnnotation\0\0Annotation\0"
    "annotation\0InformOfClickAnnotation\0"
    "OnAxisInvalidated\0OnAxisDestroyed\0"
    "OnScrubberFrameUpdate\0FrameNumberType\0"
    "newFrameNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__AnnotationsDataView_Events[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x0a /* Public */,
       7,    0,   46,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void Driller::AnnotationsDataView_Events::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnnotationsDataView_Events *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InformOfMouseOverAnnotation((*reinterpret_cast< const Annotation(*)>(_a[1]))); break;
        case 1: _t->InformOfClickAnnotation((*reinterpret_cast< const Annotation(*)>(_a[1]))); break;
        case 2: _t->OnAxisInvalidated(); break;
        case 3: _t->OnAxisDestroyed(); break;
        case 4: _t->OnScrubberFrameUpdate((*reinterpret_cast< FrameNumberType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnnotationsDataView_Events::*)(const Annotation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotationsDataView_Events::InformOfMouseOverAnnotation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnnotationsDataView_Events::*)(const Annotation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotationsDataView_Events::InformOfClickAnnotation)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::AnnotationsDataView_Events::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Driller__AnnotationsDataView_Events.data,
    qt_meta_data_Driller__AnnotationsDataView_Events,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::AnnotationsDataView_Events::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::AnnotationsDataView_Events::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__AnnotationsDataView_Events.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Driller::AnnotationsDataView_Events::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Driller::AnnotationsDataView_Events::InformOfMouseOverAnnotation(const Annotation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Driller::AnnotationsDataView_Events::InformOfClickAnnotation(const Annotation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
