/****************************************************************************
** Meta object code from reading C++ file 'ConstructPresetDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/GraphCanvas/Code/StaticLib/GraphCanvas/Widgets/ConstructPresetDialog/ConstructPresetDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConstructPresetDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphCanvas__ConstructPresetsTableModel_t {
    QByteArrayData data[4];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__ConstructPresetsTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__ConstructPresetsTableModel_t qt_meta_stringdata_GraphCanvas__ConstructPresetsTableModel = {
    {
QT_MOC_LITERAL(0, 0, 39), // "GraphCanvas::ConstructPresets..."
QT_MOC_LITERAL(1, 40, 25), // "OnPresetModificationBegin"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 23) // "OnPresetModificationEnd"

    },
    "GraphCanvas::ConstructPresetsTableModel\0"
    "OnPresetModificationBegin\0\0"
    "OnPresetModificationEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__ConstructPresetsTableModel[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphCanvas::ConstructPresetsTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConstructPresetsTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPresetModificationBegin(); break;
        case 1: _t->OnPresetModificationEnd(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConstructPresetsTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConstructPresetsTableModel::OnPresetModificationBegin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConstructPresetsTableModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConstructPresetsTableModel::OnPresetModificationEnd)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::ConstructPresetsTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__ConstructPresetsTableModel.data,
    qt_meta_data_GraphCanvas__ConstructPresetsTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::ConstructPresetsTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::ConstructPresetsTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__ConstructPresetsTableModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetEditorSettingsNotificationBus::Handler"))
        return static_cast< AssetEditorSettingsNotificationBus::Handler*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int GraphCanvas::ConstructPresetsTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
void GraphCanvas::ConstructPresetsTableModel::OnPresetModificationBegin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GraphCanvas::ConstructPresetsTableModel::OnPresetModificationEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
