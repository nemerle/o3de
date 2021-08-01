/****************************************************************************
** Meta object code from reading C++ file 'DockTabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/DockTabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockTabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__DockTabWidget_t {
    QByteArrayData data[14];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__DockTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__DockTabWidget_t qt_meta_stringdata_AzQtComponents__DockTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AzQtComponents::DockTabWidget"
QT_MOC_LITERAL(1, 30, 15), // "tabIndexPressed"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 15), // "tabCountChanged"
QT_MOC_LITERAL(5, 69, 5), // "count"
QT_MOC_LITERAL(6, 75, 17), // "tabWidgetInserted"
QT_MOC_LITERAL(7, 93, 8), // "QWidget*"
QT_MOC_LITERAL(8, 102, 6), // "widget"
QT_MOC_LITERAL(9, 109, 9), // "undockTab"
QT_MOC_LITERAL(10, 119, 19), // "tabBarDoubleClicked"
QT_MOC_LITERAL(11, 139, 23), // "handleTabCloseRequested"
QT_MOC_LITERAL(12, 163, 21), // "handleTabAboutToClose"
QT_MOC_LITERAL(13, 185, 21) // "handleTabIndexPressed"

    },
    "AzQtComponents::DockTabWidget\0"
    "tabIndexPressed\0\0index\0tabCountChanged\0"
    "count\0tabWidgetInserted\0QWidget*\0"
    "widget\0undockTab\0tabBarDoubleClicked\0"
    "handleTabCloseRequested\0handleTabAboutToClose\0"
    "handleTabIndexPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__DockTabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,
      10,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   67,    2, 0x09 /* Protected */,
      12,    0,   70,    2, 0x09 /* Protected */,
      13,    1,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void AzQtComponents::DockTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabIndexPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tabCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->tabWidgetInserted((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->undockTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->tabBarDoubleClicked(); break;
        case 5: { bool _r = _t->handleTabCloseRequested((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->handleTabAboutToClose(); break;
        case 7: _t->handleTabIndexPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DockTabWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabWidget::tabIndexPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DockTabWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabWidget::tabCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DockTabWidget::*)(QWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabWidget::tabWidgetInserted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DockTabWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabWidget::undockTab)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DockTabWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DockTabWidget::tabBarDoubleClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::DockTabWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<TabWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__DockTabWidget.data,
    qt_meta_data_AzQtComponents__DockTabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::DockTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::DockTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__DockTabWidget.stringdata0))
        return static_cast<void*>(this);
    return TabWidget::qt_metacast(_clname);
}

int AzQtComponents::DockTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void AzQtComponents::DockTabWidget::tabIndexPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::DockTabWidget::tabCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::DockTabWidget::tabWidgetInserted(QWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::DockTabWidget::undockTab(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::DockTabWidget::tabBarDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
