/****************************************************************************
** Meta object code from reading C++ file 'AnimGraphModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/AnimGraphModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AnimGraphModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__AnimGraphModel_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__AnimGraphModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__AnimGraphModel_t qt_meta_stringdata_EMStudio__AnimGraphModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "EMStudio::AnimGraphModel"
QT_MOC_LITERAL(1, 25, 12), // "FocusChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 51, 13), // "newFocusIndex"
QT_MOC_LITERAL(5, 65, 14), // "newFocusParent"
QT_MOC_LITERAL(6, 80, 13), // "oldFocusIndex"
QT_MOC_LITERAL(7, 94, 14), // "oldFocusParent"
QT_MOC_LITERAL(8, 109, 17), // "ParametersChanged"
QT_MOC_LITERAL(9, 127, 21), // "EMotionFX::AnimGraph*"
QT_MOC_LITERAL(10, 149, 9) // "animGraph"

    },
    "EMStudio::AnimGraphModel\0FocusChanged\0"
    "\0QModelIndex\0newFocusIndex\0newFocusParent\0"
    "oldFocusIndex\0oldFocusParent\0"
    "ParametersChanged\0EMotionFX::AnimGraph*\0"
    "animGraph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__AnimGraphModel[] = {

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
       1,    4,   24,    2, 0x06 /* Public */,
       8,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void EMStudio::AnimGraphModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnimGraphModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FocusChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 1: _t->ParametersChanged((*reinterpret_cast< EMotionFX::AnimGraph*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnimGraphModel::*)(const QModelIndex & , const QModelIndex & , const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimGraphModel::FocusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnimGraphModel::*)(EMotionFX::AnimGraph * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnimGraphModel::ParametersChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::AnimGraphModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__AnimGraphModel.data,
    qt_meta_data_EMStudio__AnimGraphModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::AnimGraphModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::AnimGraphModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__AnimGraphModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int EMStudio::AnimGraphModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
void EMStudio::AnimGraphModel::FocusChanged(const QModelIndex & _t1, const QModelIndex & _t2, const QModelIndex & _t3, const QModelIndex & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMStudio::AnimGraphModel::ParametersChanged(EMotionFX::AnimGraph * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
