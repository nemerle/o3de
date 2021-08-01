/****************************************************************************
** Meta object code from reading C++ file 'Titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Titlebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Titlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__TitleBar_t {
    QByteArrayData data[19];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__TitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__TitleBar_t qt_meta_stringdata_AzQtComponents__TitleBar = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AzQtComponents::TitleBar"
QT_MOC_LITERAL(1, 25, 12), // "undockAction"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "drawSideBordersChanged"
QT_MOC_LITERAL(4, 62, 15), // "drawSideBorders"
QT_MOC_LITERAL(5, 78, 17), // "drawSimpleChanged"
QT_MOC_LITERAL(6, 96, 10), // "drawSimple"
QT_MOC_LITERAL(7, 107, 20), // "forceInactiveChanged"
QT_MOC_LITERAL(8, 128, 13), // "forceInactive"
QT_MOC_LITERAL(9, 142, 18), // "tearEnabledChanged"
QT_MOC_LITERAL(10, 161, 11), // "tearEnabled"
QT_MOC_LITERAL(11, 173, 19), // "drawAsTabBarChanged"
QT_MOC_LITERAL(12, 193, 12), // "drawAsTabBar"
QT_MOC_LITERAL(13, 206, 26), // "windowTitleOverrideChanged"
QT_MOC_LITERAL(14, 233, 19), // "windowTitleOverride"
QT_MOC_LITERAL(15, 253, 19), // "handleButtonClicked"
QT_MOC_LITERAL(16, 273, 37), // "DockBarButton::WindowDecorati..."
QT_MOC_LITERAL(17, 311, 4), // "type"
QT_MOC_LITERAL(18, 316, 5) // "title"

    },
    "AzQtComponents::TitleBar\0undockAction\0"
    "\0drawSideBordersChanged\0drawSideBorders\0"
    "drawSimpleChanged\0drawSimple\0"
    "forceInactiveChanged\0forceInactive\0"
    "tearEnabledChanged\0tearEnabled\0"
    "drawAsTabBarChanged\0drawAsTabBar\0"
    "windowTitleOverrideChanged\0"
    "windowTitleOverride\0handleButtonClicked\0"
    "DockBarButton::WindowDecorationButton\0"
    "type\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__TitleBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       7,    1,   61,    2, 0x06 /* Public */,
       9,    1,   64,    2, 0x06 /* Public */,
      11,    1,   67,    2, 0x06 /* Public */,
      13,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   73,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495103,
       6, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00095001,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       6,
       0,

       0        // eod
};

void AzQtComponents::TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->undockAction(); break;
        case 1: _t->drawSideBordersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->drawSimpleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->forceInactiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->tearEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->drawAsTabBarChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->windowTitleOverrideChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->handleButtonClicked((*reinterpret_cast< const DockBarButton::WindowDecorationButton(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::undockAction)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::drawSideBordersChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::drawSimpleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::forceInactiveChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::tearEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::drawAsTabBarChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::windowTitleOverrideChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TitleBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->drawSideBorders(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->drawSimple(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->forceInactive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->tearEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->drawAsTabBar(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->windowTitleOverride(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TitleBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDrawSideBorders(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDrawSimple(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setForceInactive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setTearEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDrawAsTabBar(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setWindowTitleOverride(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::TitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__TitleBar.data,
    qt_meta_data_AzQtComponents__TitleBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__TitleBar.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::TitleBar::undockAction()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::TitleBar::drawSideBordersChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::TitleBar::drawSimpleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::TitleBar::forceInactiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::TitleBar::tearEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AzQtComponents::TitleBar::drawAsTabBarChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AzQtComponents::TitleBar::windowTitleOverrideChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
