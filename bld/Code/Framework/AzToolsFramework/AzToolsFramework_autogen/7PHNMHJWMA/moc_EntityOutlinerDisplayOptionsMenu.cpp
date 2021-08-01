/****************************************************************************
** Meta object code from reading C++ file 'EntityOutlinerDisplayOptionsMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Outliner/EntityOutlinerDisplayOptionsMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityOutlinerDisplayOptionsMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__EntityOutliner__DisplayOptionsMenu_t {
    QByteArrayData data[9];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__EntityOutliner__DisplayOptionsMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__EntityOutliner__DisplayOptionsMenu_t qt_meta_stringdata_AzToolsFramework__EntityOutliner__DisplayOptionsMenu = {
    {
QT_MOC_LITERAL(0, 0, 52), // "AzToolsFramework::EntityOutli..."
QT_MOC_LITERAL(1, 53, 17), // "OnSortModeChanged"
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 15), // "DisplaySortMode"
QT_MOC_LITERAL(4, 88, 8), // "sortMode"
QT_MOC_LITERAL(5, 97, 15), // "OnOptionToggled"
QT_MOC_LITERAL(6, 113, 13), // "DisplayOption"
QT_MOC_LITERAL(7, 127, 6), // "option"
QT_MOC_LITERAL(8, 134, 7) // "enabled"

    },
    "AzToolsFramework::EntityOutliner::DisplayOptionsMenu\0"
    "OnSortModeChanged\0\0DisplaySortMode\0"
    "sortMode\0OnOptionToggled\0DisplayOption\0"
    "option\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__EntityOutliner__DisplayOptionsMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    7,    8,

       0        // eod
};

void AzToolsFramework::EntityOutliner::DisplayOptionsMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayOptionsMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSortModeChanged((*reinterpret_cast< DisplaySortMode(*)>(_a[1]))); break;
        case 1: _t->OnOptionToggled((*reinterpret_cast< DisplayOption(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisplayOptionsMenu::*)(DisplaySortMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayOptionsMenu::OnSortModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DisplayOptionsMenu::*)(DisplayOption , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayOptionsMenu::OnOptionToggled)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::EntityOutliner::DisplayOptionsMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__EntityOutliner__DisplayOptionsMenu.data,
    qt_meta_data_AzToolsFramework__EntityOutliner__DisplayOptionsMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::EntityOutliner::DisplayOptionsMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::EntityOutliner::DisplayOptionsMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__EntityOutliner__DisplayOptionsMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int AzToolsFramework::EntityOutliner::DisplayOptionsMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void AzToolsFramework::EntityOutliner::DisplayOptionsMenu::OnSortModeChanged(DisplaySortMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::EntityOutliner::DisplayOptionsMenu::OnOptionToggled(DisplayOption _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
