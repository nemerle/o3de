/****************************************************************************
** Meta object code from reading C++ file 'PaletteView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/ColorPicker/PaletteView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaletteView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__Internal__AddSwatch_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__Internal__AddSwatch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__Internal__AddSwatch_t qt_meta_stringdata_AzQtComponents__Internal__AddSwatch = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AzQtComponents::Internal::Add..."
QT_MOC_LITERAL(1, 36, 7), // "clicked"
QT_MOC_LITERAL(2, 44, 0) // ""

    },
    "AzQtComponents::Internal::AddSwatch\0"
    "clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__Internal__AddSwatch[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void AzQtComponents::Internal::AddSwatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddSwatch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddSwatch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddSwatch::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::Internal::AddSwatch::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__Internal__AddSwatch.data,
    qt_meta_data_AzQtComponents__Internal__AddSwatch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::Internal::AddSwatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::Internal::AddSwatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__Internal__AddSwatch.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::Internal::AddSwatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void AzQtComponents::Internal::AddSwatch::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AzQtComponents__PaletteView_t {
    QByteArrayData data[19];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__PaletteView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__PaletteView_t qt_meta_stringdata_AzQtComponents__PaletteView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AzQtComponents::PaletteView"
QT_MOC_LITERAL(1, 28, 21), // "selectedColorsChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 18), // "QVector<AZ::Color>"
QT_MOC_LITERAL(4, 70, 14), // "selectedColors"
QT_MOC_LITERAL(5, 85, 30), // "unselectedContextMenuRequested"
QT_MOC_LITERAL(6, 116, 8), // "position"
QT_MOC_LITERAL(7, 125, 15), // "setGammaEnabled"
QT_MOC_LITERAL(8, 141, 7), // "enabled"
QT_MOC_LITERAL(9, 149, 8), // "setGamma"
QT_MOC_LITERAL(10, 158, 5), // "gamma"
QT_MOC_LITERAL(11, 164, 11), // "tryAddColor"
QT_MOC_LITERAL(12, 176, 9), // "AZ::Color"
QT_MOC_LITERAL(13, 186, 5), // "color"
QT_MOC_LITERAL(14, 192, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(15, 215, 14), // "QItemSelection"
QT_MOC_LITERAL(16, 230, 8), // "selected"
QT_MOC_LITERAL(17, 239, 10), // "deselected"
QT_MOC_LITERAL(18, 250, 12) // "gammaEnabled"

    },
    "AzQtComponents::PaletteView\0"
    "selectedColorsChanged\0\0QVector<AZ::Color>\0"
    "selectedColors\0unselectedContextMenuRequested\0"
    "position\0setGammaEnabled\0enabled\0"
    "setGamma\0gamma\0tryAddColor\0AZ::Color\0"
    "color\0handleSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "gammaEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__PaletteView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   50,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,
      11,    1,   56,    2, 0x0a /* Public */,
      14,    2,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   16,   17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,
      10, QMetaType::QReal, 0x00095103,

       0        // eod
};

void AzQtComponents::PaletteView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PaletteView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedColorsChanged((*reinterpret_cast< const QVector<AZ::Color>(*)>(_a[1]))); break;
        case 1: _t->unselectedContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->setGammaEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setGamma((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->tryAddColor((*reinterpret_cast< const AZ::Color(*)>(_a[1]))); break;
        case 5: _t->handleSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PaletteView::*)(const QVector<AZ::Color> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteView::selectedColorsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PaletteView::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PaletteView::unselectedContextMenuRequested)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PaletteView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isGammaEnabled(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->gamma(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PaletteView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGammaEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setGamma(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::PaletteView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__PaletteView.data,
    qt_meta_data_AzQtComponents__PaletteView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::PaletteView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::PaletteView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__PaletteView.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int AzQtComponents::PaletteView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
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
void AzQtComponents::PaletteView::selectedColorsChanged(const QVector<AZ::Color> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::PaletteView::unselectedContextMenuRequested(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
