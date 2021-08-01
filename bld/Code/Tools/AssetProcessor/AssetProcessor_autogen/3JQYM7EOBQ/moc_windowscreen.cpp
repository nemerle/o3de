/****************************************************************************
** Meta object code from reading C++ file 'windowscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/AssetProcessor/native/utilities/windowscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowScreen_t {
    QByteArrayData data[19];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowScreen_t qt_meta_stringdata_WindowScreen = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WindowScreen"
QT_MOC_LITERAL(1, 13, 16), // "positionXChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "positionYChanged"
QT_MOC_LITERAL(4, 48, 12), // "widthChanged"
QT_MOC_LITERAL(5, 61, 13), // "heightChanged"
QT_MOC_LITERAL(6, 75, 18), // "windowStateChanged"
QT_MOC_LITERAL(7, 94, 12), // "loadSettings"
QT_MOC_LITERAL(8, 107, 5), // "width"
QT_MOC_LITERAL(9, 113, 6), // "heigth"
QT_MOC_LITERAL(10, 120, 12), // "minimumWidth"
QT_MOC_LITERAL(11, 133, 13), // "minimumHeight"
QT_MOC_LITERAL(12, 147, 12), // "saveSettings"
QT_MOC_LITERAL(13, 160, 9), // "positionX"
QT_MOC_LITERAL(14, 170, 9), // "positionY"
QT_MOC_LITERAL(15, 180, 6), // "height"
QT_MOC_LITERAL(16, 187, 11), // "windowState"
QT_MOC_LITERAL(17, 199, 19), // "QWindow::Visibility"
QT_MOC_LITERAL(18, 219, 10) // "windowName"

    },
    "WindowScreen\0positionXChanged\0\0"
    "positionYChanged\0widthChanged\0"
    "heightChanged\0windowStateChanged\0"
    "loadSettings\0width\0heigth\0minimumWidth\0"
    "minimumHeight\0saveSettings\0positionX\0"
    "positionY\0height\0windowState\0"
    "QWindow::Visibility\0windowName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    4,   54,    2, 0x02 /* Public */,
      12,    0,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,
      16, 0x80000000 | 17, 0x0049510b,
      18, QMetaType::QString, 0x00095103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       0,

       0        // eod
};

void WindowScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WindowScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionXChanged(); break;
        case 1: _t->positionYChanged(); break;
        case 2: _t->widthChanged(); break;
        case 3: _t->heightChanged(); break;
        case 4: _t->windowStateChanged(); break;
        case 5: _t->loadSettings((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->saveSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScreen::positionXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WindowScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScreen::positionYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WindowScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScreen::widthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WindowScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScreen::heightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WindowScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScreen::windowStateChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WindowScreen *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->positionX(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->positionY(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< QWindow::Visibility*>(_v) = _t->windowState(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->windowName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WindowScreen *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPositionX(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setPositionY(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setWindowState(*reinterpret_cast< QWindow::Visibility*>(_v)); break;
        case 5: _t->setWindowName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WindowScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WindowScreen.data,
    qt_meta_data_WindowScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WindowScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowScreen.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WindowScreen::positionXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WindowScreen::positionYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WindowScreen::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WindowScreen::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WindowScreen::windowStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
