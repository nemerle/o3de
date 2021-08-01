/****************************************************************************
** Meta object code from reading C++ file 'QtViewPaneManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/QtViewPaneManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtViewPaneManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DockWidget_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DockWidget_t qt_meta_stringdata_DockWidget = {
    {
QT_MOC_LITERAL(0, 0, 10) // "DockWidget"

    },
    "DockWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DockWidget[] = {

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

void DockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::StyledDockWidget::staticMetaObject>(),
    qt_meta_stringdata_DockWidget.data,
    qt_meta_data_DockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockWidget.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::StyledDockWidget::qt_metacast(_clname);
}

int DockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::StyledDockWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtViewPaneManager_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtViewPaneManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtViewPaneManager_t qt_meta_stringdata_QtViewPaneManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QtViewPaneManager"
QT_MOC_LITERAL(1, 18, 19), // "savedLayoutsChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "layoutReset"
QT_MOC_LITERAL(4, 51, 15), // "viewPaneCreated"
QT_MOC_LITERAL(5, 67, 17), // "const QtViewPane*"
QT_MOC_LITERAL(6, 85, 4), // "pane"
QT_MOC_LITERAL(7, 90, 22) // "registeredPanesChanged"

    },
    "QtViewPaneManager\0savedLayoutsChanged\0"
    "\0layoutReset\0viewPaneCreated\0"
    "const QtViewPane*\0pane\0registeredPanesChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtViewPaneManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       7,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void QtViewPaneManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtViewPaneManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savedLayoutsChanged(); break;
        case 1: _t->layoutReset(); break;
        case 2: _t->viewPaneCreated((*reinterpret_cast< const QtViewPane*(*)>(_a[1]))); break;
        case 3: _t->registeredPanesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtViewPaneManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtViewPaneManager::savedLayoutsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtViewPaneManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtViewPaneManager::layoutReset)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QtViewPaneManager::*)(const QtViewPane * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtViewPaneManager::viewPaneCreated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QtViewPaneManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtViewPaneManager::registeredPanesChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtViewPaneManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtViewPaneManager.data,
    qt_meta_data_QtViewPaneManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtViewPaneManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtViewPaneManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtViewPaneManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtViewPaneManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QtViewPaneManager::savedLayoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtViewPaneManager::layoutReset()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtViewPaneManager::viewPaneCreated(const QtViewPane * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtViewPaneManager::registeredPanesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
