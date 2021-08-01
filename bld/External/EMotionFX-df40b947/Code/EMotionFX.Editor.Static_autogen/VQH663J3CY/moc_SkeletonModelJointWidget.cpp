/****************************************************************************
** Meta object code from reading C++ file 'SkeletonModelJointWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/SkeletonModelJointWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SkeletonModelJointWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMotionFX__SkeletonModelJointWidget_t {
    QByteArrayData data[13];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMotionFX__SkeletonModelJointWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMotionFX__SkeletonModelJointWidget_t qt_meta_stringdata_EMotionFX__SkeletonModelJointWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "EMotionFX::SkeletonModelJoint..."
QT_MOC_LITERAL(1, 36, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 71, 8), // "selected"
QT_MOC_LITERAL(5, 80, 10), // "deselected"
QT_MOC_LITERAL(6, 91, 13), // "OnDataChanged"
QT_MOC_LITERAL(7, 105, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 117, 7), // "topLeft"
QT_MOC_LITERAL(9, 125, 11), // "bottomRight"
QT_MOC_LITERAL(10, 137, 12), // "QVector<int>"
QT_MOC_LITERAL(11, 150, 5), // "roles"
QT_MOC_LITERAL(12, 156, 12) // "OnModelReset"

    },
    "EMotionFX::SkeletonModelJointWidget\0"
    "OnSelectionChanged\0\0QItemSelection\0"
    "selected\0deselected\0OnDataChanged\0"
    "QModelIndex\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0OnModelReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMotionFX__SkeletonModelJointWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       6,    3,   34,    2, 0x0a /* Public */,
      12,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Void,

       0        // eod
};

void EMotionFX::SkeletonModelJointWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SkeletonModelJointWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->OnDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 2: _t->OnModelReset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMotionFX::SkeletonModelJointWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMotionFX__SkeletonModelJointWidget.data,
    qt_meta_data_EMotionFX__SkeletonModelJointWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMotionFX::SkeletonModelJointWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMotionFX::SkeletonModelJointWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMotionFX__SkeletonModelJointWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMotionFX::SkeletonModelJointWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
