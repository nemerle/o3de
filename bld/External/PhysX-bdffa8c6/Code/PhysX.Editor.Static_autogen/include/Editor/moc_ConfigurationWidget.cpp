/****************************************************************************
** Meta object code from reading C++ file 'ConfigurationWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Gems/PhysX/Code/Editor/ConfigurationWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigurationWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhysX__Editor__ConfigurationWidget_t {
    QByteArrayData data[9];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysX__Editor__ConfigurationWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysX__Editor__ConfigurationWidget_t qt_meta_stringdata_PhysX__Editor__ConfigurationWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PhysX::Editor::ConfigurationW..."
QT_MOC_LITERAL(1, 35, 22), // "onConfigurationChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 31), // "PhysX::PhysXSystemConfiguration"
QT_MOC_LITERAL(4, 91, 24), // "physXSystemConfiguration"
QT_MOC_LITERAL(5, 116, 32), // "PhysX::Debug::DebugConfiguration"
QT_MOC_LITERAL(6, 149, 16), // "physXDebugConfig"
QT_MOC_LITERAL(7, 166, 29), // "AzPhysics::SceneConfiguration"
QT_MOC_LITERAL(8, 196, 25) // "defaultSceneConfiguration"

    },
    "PhysX::Editor::ConfigurationWidget\0"
    "onConfigurationChanged\0\0"
    "PhysX::PhysXSystemConfiguration\0"
    "physXSystemConfiguration\0"
    "PhysX::Debug::DebugConfiguration\0"
    "physXDebugConfig\0AzPhysics::SceneConfiguration\0"
    "defaultSceneConfiguration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysX__Editor__ConfigurationWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,

       0        // eod
};

void PhysX::Editor::ConfigurationWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigurationWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onConfigurationChanged((*reinterpret_cast< const PhysX::PhysXSystemConfiguration(*)>(_a[1])),(*reinterpret_cast< const PhysX::Debug::DebugConfiguration(*)>(_a[2])),(*reinterpret_cast< const AzPhysics::SceneConfiguration(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConfigurationWidget::*)(const PhysX::PhysXSystemConfiguration & , const PhysX::Debug::DebugConfiguration & , const AzPhysics::SceneConfiguration & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigurationWidget::onConfigurationChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhysX::Editor::ConfigurationWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PhysX__Editor__ConfigurationWidget.data,
    qt_meta_data_PhysX__Editor__ConfigurationWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhysX::Editor::ConfigurationWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysX::Editor::ConfigurationWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysX__Editor__ConfigurationWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ConfigurationWindowRequestBus::Handler"))
        return static_cast< ConfigurationWindowRequestBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int PhysX::Editor::ConfigurationWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PhysX::Editor::ConfigurationWidget::onConfigurationChanged(const PhysX::PhysXSystemConfiguration & _t1, const PhysX::Debug::DebugConfiguration & _t2, const AzPhysics::SceneConfiguration & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
