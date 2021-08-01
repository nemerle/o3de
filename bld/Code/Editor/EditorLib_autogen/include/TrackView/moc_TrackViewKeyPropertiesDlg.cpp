/****************************************************************************
** Meta object code from reading C++ file 'TrackViewKeyPropertiesDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/TrackView/TrackViewKeyPropertiesDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrackViewKeyPropertiesDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTrackViewKeyUIControls_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTrackViewKeyUIControls_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTrackViewKeyUIControls_t qt_meta_stringdata_CTrackViewKeyUIControls = {
    {
QT_MOC_LITERAL(0, 0, 23) // "CTrackViewKeyUIControls"

    },
    "CTrackViewKeyUIControls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTrackViewKeyUIControls[] = {

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

void CTrackViewKeyUIControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CTrackViewKeyUIControls::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CTrackViewKeyUIControls.data,
    qt_meta_data_CTrackViewKeyUIControls,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CTrackViewKeyUIControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTrackViewKeyUIControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTrackViewKeyUIControls.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "_i_reference_target_t"))
        return static_cast< _i_reference_target_t*>(this);
    return QObject::qt_metacast(_clname);
}

int CTrackViewKeyUIControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CTrackViewTrackPropsDlg_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTrackViewTrackPropsDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTrackViewTrackPropsDlg_t qt_meta_stringdata_CTrackViewTrackPropsDlg = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CTrackViewTrackPropsDlg"
QT_MOC_LITERAL(1, 24, 12), // "OnUpdateTime"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "CTrackViewTrackPropsDlg\0OnUpdateTime\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTrackViewTrackPropsDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CTrackViewTrackPropsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTrackViewTrackPropsDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnUpdateTime(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CTrackViewTrackPropsDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CTrackViewTrackPropsDlg.data,
    qt_meta_data_CTrackViewTrackPropsDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CTrackViewTrackPropsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTrackViewTrackPropsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTrackViewTrackPropsDlg.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CTrackViewTrackPropsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
