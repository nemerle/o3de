/****************************************************************************
** Meta object code from reading C++ file 'AnnotationHeaderView.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Annotations/AnnotationHeaderView.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnnotationHeaderView.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__AnnotationHeaderView_t {
    QByteArrayData data[8];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__AnnotationHeaderView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__AnnotationHeaderView_t qt_meta_stringdata_Driller__AnnotationHeaderView = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Driller::AnnotationHeaderView"
QT_MOC_LITERAL(1, 30, 14), // "OnOptionsClick"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 27), // "InformOfMouseOverAnnotation"
QT_MOC_LITERAL(4, 74, 10), // "Annotation"
QT_MOC_LITERAL(5, 85, 10), // "annotation"
QT_MOC_LITERAL(6, 96, 23), // "InformOfClickAnnotation"
QT_MOC_LITERAL(7, 120, 11) // "RefreshView"

    },
    "Driller::AnnotationHeaderView\0"
    "OnOptionsClick\0\0InformOfMouseOverAnnotation\0"
    "Annotation\0annotation\0InformOfClickAnnotation\0"
    "RefreshView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__AnnotationHeaderView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       6,    1,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Driller::AnnotationHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnnotationHeaderView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOptionsClick(); break;
        case 1: _t->InformOfMouseOverAnnotation((*reinterpret_cast< const Annotation(*)>(_a[1]))); break;
        case 2: _t->InformOfClickAnnotation((*reinterpret_cast< const Annotation(*)>(_a[1]))); break;
        case 3: _t->RefreshView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnnotationHeaderView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotationHeaderView::OnOptionsClick)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnnotationHeaderView::*)(const Annotation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotationHeaderView::InformOfMouseOverAnnotation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AnnotationHeaderView::*)(const Annotation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnnotationHeaderView::InformOfClickAnnotation)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::AnnotationHeaderView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Driller__AnnotationHeaderView.data,
    qt_meta_data_Driller__AnnotationHeaderView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::AnnotationHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::AnnotationHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__AnnotationHeaderView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Driller::AnnotationHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Driller::AnnotationHeaderView::OnOptionsClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Driller::AnnotationHeaderView::InformOfMouseOverAnnotation(const Annotation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Driller::AnnotationHeaderView::InformOfClickAnnotation(const Annotation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
