/****************************************************************************
** Meta object code from reading C++ file 'FavoriteDataModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Gems/SliceFavorites/Code/Source/FavoriteDataModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FavoriteDataModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SliceFavorites__FavoriteDataModel_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SliceFavorites__FavoriteDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SliceFavorites__FavoriteDataModel_t qt_meta_stringdata_SliceFavorites__FavoriteDataModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "SliceFavorites::FavoriteDataM..."
QT_MOC_LITERAL(1, 34, 16), // "DataModelChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 11), // "ExpandIndex"
QT_MOC_LITERAL(4, 64, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 76, 5), // "index"
QT_MOC_LITERAL(6, 82, 8), // "expanded"
QT_MOC_LITERAL(7, 91, 14), // "DisplayWarning"
QT_MOC_LITERAL(8, 106, 5), // "title"
QT_MOC_LITERAL(9, 112, 7), // "message"
QT_MOC_LITERAL(10, 120, 20) // "ProcessRemovedAssets"

    },
    "SliceFavorites::FavoriteDataModel\0"
    "DataModelChanged\0\0ExpandIndex\0QModelIndex\0"
    "index\0expanded\0DisplayWarning\0title\0"
    "message\0ProcessRemovedAssets"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliceFavorites__FavoriteDataModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    2,   35,    2, 0x06 /* Public */,
       7,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SliceFavorites::FavoriteDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FavoriteDataModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DataModelChanged(); break;
        case 1: _t->ExpandIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->DisplayWarning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->ProcessRemovedAssets(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FavoriteDataModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FavoriteDataModel::DataModelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FavoriteDataModel::*)(const QModelIndex & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FavoriteDataModel::ExpandIndex)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FavoriteDataModel::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FavoriteDataModel::DisplayWarning)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SliceFavorites::FavoriteDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_SliceFavorites__FavoriteDataModel.data,
    qt_meta_data_SliceFavorites__FavoriteDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SliceFavorites::FavoriteDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliceFavorites::FavoriteDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SliceFavorites__FavoriteDataModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int SliceFavorites::FavoriteDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
void SliceFavorites::FavoriteDataModel::DataModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SliceFavorites::FavoriteDataModel::ExpandIndex(const QModelIndex & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SliceFavorites::FavoriteDataModel::DisplayWarning(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
