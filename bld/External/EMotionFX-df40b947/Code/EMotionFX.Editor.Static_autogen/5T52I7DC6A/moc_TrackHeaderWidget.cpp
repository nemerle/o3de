/****************************************************************************
** Meta object code from reading C++ file 'TrackHeaderWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/TimeView/TrackHeaderWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrackHeaderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__HeaderTrackWidget_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__HeaderTrackWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__HeaderTrackWidget_t qt_meta_stringdata_EMStudio__HeaderTrackWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMStudio::HeaderTrackWidget"
QT_MOC_LITERAL(1, 28, 16), // "TrackNameChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "text"
QT_MOC_LITERAL(4, 51, 7), // "trackNr"
QT_MOC_LITERAL(5, 59, 19), // "EnabledStateChanged"
QT_MOC_LITERAL(6, 79, 7), // "checked"
QT_MOC_LITERAL(7, 87, 11), // "NameChanged"
QT_MOC_LITERAL(8, 99, 10), // "NameEdited"
QT_MOC_LITERAL(9, 110, 22), // "EnabledCheckBoxChanged"
QT_MOC_LITERAL(10, 133, 5), // "state"
QT_MOC_LITERAL(11, 139, 13), // "keyPressEvent"
QT_MOC_LITERAL(12, 153, 10), // "QKeyEvent*"
QT_MOC_LITERAL(13, 164, 5), // "event"
QT_MOC_LITERAL(14, 170, 15) // "keyReleaseEvent"

    },
    "EMStudio::HeaderTrackWidget\0"
    "TrackNameChanged\0\0text\0trackNr\0"
    "EnabledStateChanged\0checked\0NameChanged\0"
    "NameEdited\0EnabledCheckBoxChanged\0"
    "state\0keyPressEvent\0QKeyEvent*\0event\0"
    "keyReleaseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__HeaderTrackWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      11,    1,   66,    2, 0x0a /* Public */,
      14,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    6,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void EMStudio::HeaderTrackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HeaderTrackWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TrackNameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->EnabledStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->NameChanged(); break;
        case 3: _t->NameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->EnabledCheckBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HeaderTrackWidget::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeaderTrackWidget::TrackNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HeaderTrackWidget::*)(bool , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HeaderTrackWidget::EnabledStateChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::HeaderTrackWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__HeaderTrackWidget.data,
    qt_meta_data_EMStudio__HeaderTrackWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::HeaderTrackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::HeaderTrackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__HeaderTrackWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::HeaderTrackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::HeaderTrackWidget::TrackNameChanged(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMStudio::HeaderTrackWidget::EnabledStateChanged(bool _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_EMStudio__TrackHeaderWidget_t {
    QByteArrayData data[12];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__TrackHeaderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__TrackHeaderWidget_t qt_meta_stringdata_EMStudio__TrackHeaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMStudio::TrackHeaderWidget"
QT_MOC_LITERAL(1, 28, 23), // "OnAddTrackButtonClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 18), // "OnTrackNameChanged"
QT_MOC_LITERAL(4, 72, 4), // "text"
QT_MOC_LITERAL(5, 77, 7), // "trackNr"
QT_MOC_LITERAL(6, 85, 26), // "OnTrackEnabledStateChanged"
QT_MOC_LITERAL(7, 112, 7), // "enabled"
QT_MOC_LITERAL(8, 120, 23), // "OnDetailedNodesCheckBox"
QT_MOC_LITERAL(9, 144, 5), // "state"
QT_MOC_LITERAL(10, 150, 10), // "OnCheckBox"
QT_MOC_LITERAL(11, 161, 22) // "OnComboBoxIndexChanged"

    },
    "EMStudio::TrackHeaderWidget\0"
    "OnAddTrackButtonClicked\0\0OnTrackNameChanged\0"
    "text\0trackNr\0OnTrackEnabledStateChanged\0"
    "enabled\0OnDetailedNodesCheckBox\0state\0"
    "OnCheckBox\0OnComboBoxIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__TrackHeaderWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    2,   45,    2, 0x0a /* Public */,
       6,    2,   50,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
      10,    1,   58,    2, 0x0a /* Public */,
      11,    1,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,    7,    5,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void EMStudio::TrackHeaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackHeaderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAddTrackButtonClicked(); break;
        case 1: _t->OnTrackNameChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->OnTrackEnabledStateChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->OnDetailedNodesCheckBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnCheckBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnComboBoxIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::TrackHeaderWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__TrackHeaderWidget.data,
    qt_meta_data_EMStudio__TrackHeaderWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::TrackHeaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::TrackHeaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__TrackHeaderWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::TrackHeaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
