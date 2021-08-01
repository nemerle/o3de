/****************************************************************************
** Meta object code from reading C++ file 'ColorPicker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/ColorPicker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorPicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__ColorPicker_t {
    QByteArrayData data[15];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__ColorPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__ColorPicker_t qt_meta_stringdata_AzQtComponents__ColorPicker = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AzQtComponents::ColorPicker"
QT_MOC_LITERAL(1, 28, 20), // "selectedColorChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 9), // "AZ::Color"
QT_MOC_LITERAL(4, 60, 5), // "color"
QT_MOC_LITERAL(5, 66, 19), // "currentColorChanged"
QT_MOC_LITERAL(6, 86, 16), // "setSelectedColor"
QT_MOC_LITERAL(7, 103, 15), // "setCurrentColor"
QT_MOC_LITERAL(8, 119, 13), // "importPalette"
QT_MOC_LITERAL(9, 133, 10), // "newPalette"
QT_MOC_LITERAL(10, 144, 26), // "removePaletteCardRequested"
QT_MOC_LITERAL(11, 171, 27), // "QSharedPointer<PaletteCard>"
QT_MOC_LITERAL(12, 199, 4), // "card"
QT_MOC_LITERAL(13, 204, 13), // "selectedColor"
QT_MOC_LITERAL(14, 218, 12) // "currentColor"

    },
    "AzQtComponents::ColorPicker\0"
    "selectedColorChanged\0\0AZ::Color\0color\0"
    "currentColorChanged\0setSelectedColor\0"
    "setCurrentColor\0importPalette\0newPalette\0"
    "removePaletteCardRequested\0"
    "QSharedPointer<PaletteCard>\0card\0"
    "selectedColor\0currentColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__ColorPicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

 // properties: name, type, flags
      13, 0x80000000 | 3, 0x0059510b,
      14, 0x80000000 | 3, 0x0059510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void AzQtComponents::ColorPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedColorChanged((*reinterpret_cast< const AZ::Color(*)>(_a[1]))); break;
        case 1: _t->currentColorChanged((*reinterpret_cast< const AZ::Color(*)>(_a[1]))); break;
        case 2: _t->setSelectedColor((*reinterpret_cast< const AZ::Color(*)>(_a[1]))); break;
        case 3: _t->setCurrentColor((*reinterpret_cast< const AZ::Color(*)>(_a[1]))); break;
        case 4: _t->importPalette(); break;
        case 5: _t->newPalette(); break;
        case 6: _t->removePaletteCardRequested((*reinterpret_cast< QSharedPointer<PaletteCard>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorPicker::*)(const AZ::Color & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::selectedColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorPicker::*)(const AZ::Color & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorPicker::currentColorChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AZ::Color*>(_v) = _t->selectedColor(); break;
        case 1: *reinterpret_cast< AZ::Color*>(_v) = _t->currentColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectedColor(*reinterpret_cast< AZ::Color*>(_v)); break;
        case 1: _t->setCurrentColor(*reinterpret_cast< AZ::Color*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::ColorPicker::staticMetaObject = { {
    QMetaObject::SuperData::link<LogicalTabOrderingWidget<StyledDialog>::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__ColorPicker.data,
    qt_meta_data_AzQtComponents__ColorPicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::ColorPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::ColorPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__ColorPicker.stringdata0))
        return static_cast<void*>(this);
    return LogicalTabOrderingWidget<StyledDialog>::qt_metacast(_clname);
}

int AzQtComponents::ColorPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogicalTabOrderingWidget<StyledDialog>::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::ColorPicker::selectedColorChanged(const AZ::Color & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::ColorPicker::currentColorChanged(const AZ::Color & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
