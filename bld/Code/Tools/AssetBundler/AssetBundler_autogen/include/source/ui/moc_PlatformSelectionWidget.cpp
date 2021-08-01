/****************************************************************************
** Meta object code from reading C++ file 'PlatformSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/AssetBundler/source/ui/PlatformSelectionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlatformSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetBundler__PlatformSelectionWidget_t {
    QByteArrayData data[6];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetBundler__PlatformSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetBundler__PlatformSelectionWidget_t qt_meta_stringdata_AssetBundler__PlatformSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 37), // "AssetBundler::PlatformSelecti..."
QT_MOC_LITERAL(1, 38, 17), // "PlatformsSelected"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 26), // "AzFramework::PlatformFlags"
QT_MOC_LITERAL(4, 84, 17), // "selectedPlatforms"
QT_MOC_LITERAL(5, 102, 26) // "partiallySelectedPlatforms"

    },
    "AssetBundler::PlatformSelectionWidget\0"
    "PlatformsSelected\0\0AzFramework::PlatformFlags\0"
    "selectedPlatforms\0partiallySelectedPlatforms"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetBundler__PlatformSelectionWidget[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void AssetBundler::PlatformSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlatformSelectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PlatformsSelected((*reinterpret_cast< AzFramework::PlatformFlags(*)>(_a[1])),(*reinterpret_cast< AzFramework::PlatformFlags(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlatformSelectionWidget::*)(AzFramework::PlatformFlags , AzFramework::PlatformFlags );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlatformSelectionWidget::PlatformsSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetBundler::PlatformSelectionWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AssetBundler__PlatformSelectionWidget.data,
    qt_meta_data_AssetBundler__PlatformSelectionWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AssetBundler::PlatformSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetBundler::PlatformSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetBundler__PlatformSelectionWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AssetBundler::PlatformSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AssetBundler::PlatformSelectionWidget::PlatformsSelected(AzFramework::PlatformFlags _t1, AzFramework::PlatformFlags _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
