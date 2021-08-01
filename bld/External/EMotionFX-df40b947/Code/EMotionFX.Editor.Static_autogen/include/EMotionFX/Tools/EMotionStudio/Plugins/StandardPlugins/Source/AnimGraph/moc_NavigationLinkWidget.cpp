/****************************************************************************
** Meta object code from reading C++ file 'NavigationLinkWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/NavigationLinkWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavigationLinkWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__NavigationLinkWidget_t {
    QByteArrayData data[16];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NavigationLinkWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NavigationLinkWidget_t qt_meta_stringdata_EMStudio__NavigationLinkWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "EMStudio::NavigationLinkWidget"
QT_MOC_LITERAL(1, 31, 14), // "OnFocusChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 59, 13), // "newFocusIndex"
QT_MOC_LITERAL(5, 73, 14), // "newFocusParent"
QT_MOC_LITERAL(6, 88, 13), // "oldFocusIndex"
QT_MOC_LITERAL(7, 102, 14), // "oldFocusParent"
QT_MOC_LITERAL(8, 117, 13), // "OnDataChanged"
QT_MOC_LITERAL(9, 131, 7), // "topLeft"
QT_MOC_LITERAL(10, 139, 11), // "bottomRight"
QT_MOC_LITERAL(11, 151, 12), // "QVector<int>"
QT_MOC_LITERAL(12, 164, 5), // "roles"
QT_MOC_LITERAL(13, 170, 24), // "OnBreadCrumbsLinkClicked"
QT_MOC_LITERAL(14, 195, 8), // "linkPath"
QT_MOC_LITERAL(15, 204, 9) // "linkIndex"

    },
    "EMStudio::NavigationLinkWidget\0"
    "OnFocusChanged\0\0QModelIndex\0newFocusIndex\0"
    "newFocusParent\0oldFocusIndex\0"
    "oldFocusParent\0OnDataChanged\0topLeft\0"
    "bottomRight\0QVector<int>\0roles\0"
    "OnBreadCrumbsLinkClicked\0linkPath\0"
    "linkIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NavigationLinkWidget[] = {

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
       1,    4,   29,    2, 0x08 /* Private */,
       8,    3,   38,    2, 0x08 /* Private */,
      13,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 11,    9,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   15,

       0        // eod
};

void EMStudio::NavigationLinkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavigationLinkWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFocusChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 1: _t->OnDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 2: _t->OnBreadCrumbsLinkClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
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

QT_INIT_METAOBJECT const QMetaObject EMStudio::NavigationLinkWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NavigationLinkWidget.data,
    qt_meta_data_EMStudio__NavigationLinkWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NavigationLinkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NavigationLinkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NavigationLinkWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::NavigationLinkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
