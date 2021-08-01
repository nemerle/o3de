/****************************************************************************
** Meta object code from reading C++ file 'SkeletonSortFilterProxyModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/SkeletonSortFilterProxyModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SkeletonSortFilterProxyModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__SkeletonSortFilterProxyModel_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SkeletonSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SkeletonSortFilterProxyModel_t qt_meta_stringdata_EMotionFX__SkeletonSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 39), // "EMotionFX::SkeletonSortFilter..."
QT_MOC_LITERAL(1, 40, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 4), // "text"
QT_MOC_LITERAL(4, 66, 19), // "OnTypeFilterChanged"
QT_MOC_LITERAL(5, 86, 36), // "AzQtComponents::SearchTypeFil..."
QT_MOC_LITERAL(6, 123, 17) // "activeTypeFilters"

    },
    "EMotionFX::SkeletonSortFilterProxyModel\0"
    "OnTextFilterChanged\0\0text\0OnTypeFilterChanged\0"
    "AzQtComponents::SearchTypeFilterList\0"
    "activeTypeFilters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SkeletonSortFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void EMotionFX::SkeletonSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SkeletonSortFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->OnTypeFilterChanged((*reinterpret_cast< const AzQtComponents::SearchTypeFilterList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SkeletonSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SkeletonSortFilterProxyModel.data,
    qt_meta_data_EMotionFX__SkeletonSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SkeletonSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SkeletonSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SkeletonSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int EMotionFX::SkeletonSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
