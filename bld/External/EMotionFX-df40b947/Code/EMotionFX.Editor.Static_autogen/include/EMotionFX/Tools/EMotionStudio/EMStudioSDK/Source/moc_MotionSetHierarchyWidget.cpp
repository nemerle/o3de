/****************************************************************************
** Meta object code from reading C++ file 'MotionSetHierarchyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/EMStudioSDK/Source/MotionSetHierarchyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionSetHierarchyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MotionSetHierarchyWidget_t {
    QByteArrayData data[13];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionSetHierarchyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionSetHierarchyWidget_t qt_meta_stringdata_EMStudio__MotionSetHierarchyWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "EMStudio::MotionSetHierarchyW..."
QT_MOC_LITERAL(1, 35, 16), // "SelectionChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 37), // "AZStd::vector<MotionSetSelect..."
QT_MOC_LITERAL(4, 91, 13), // "selectedNodes"
QT_MOC_LITERAL(5, 105, 6), // "Update"
QT_MOC_LITERAL(6, 112, 15), // "UpdateSelection"
QT_MOC_LITERAL(7, 128, 17), // "ItemDoubleClicked"
QT_MOC_LITERAL(8, 146, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 163, 4), // "item"
QT_MOC_LITERAL(10, 168, 6), // "column"
QT_MOC_LITERAL(11, 175, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(12, 195, 4) // "text"

    },
    "EMStudio::MotionSetHierarchyWidget\0"
    "SelectionChanged\0\0"
    "AZStd::vector<MotionSetSelectionItem>\0"
    "selectedNodes\0Update\0UpdateSelection\0"
    "ItemDoubleClicked\0QTreeWidgetItem*\0"
    "item\0column\0OnTextFilterChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionSetHierarchyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,
       7,    2,   44,    2, 0x0a /* Public */,
      11,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void EMStudio::MotionSetHierarchyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionSetHierarchyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionChanged((*reinterpret_cast< AZStd::vector<MotionSetSelectionItem>(*)>(_a[1]))); break;
        case 1: _t->Update(); break;
        case 2: _t->UpdateSelection(); break;
        case 3: _t->ItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotionSetHierarchyWidget::*)(AZStd::vector<MotionSetSelectionItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionSetHierarchyWidget::SelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionSetHierarchyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionSetHierarchyWidget.data,
    qt_meta_data_EMStudio__MotionSetHierarchyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionSetHierarchyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionSetHierarchyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionSetHierarchyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::MotionSetHierarchyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::MotionSetHierarchyWidget::SelectionChanged(AZStd::vector<MotionSetSelectionItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
