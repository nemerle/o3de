/****************************************************************************
** Meta object code from reading C++ file 'NodeHierarchyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/EMStudioSDK/Source/NodeHierarchyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeHierarchyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__NodeHierarchyWidget_t {
    QByteArrayData data[22];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__NodeHierarchyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__NodeHierarchyWidget_t qt_meta_stringdata_EMStudio__NodeHierarchyWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "EMStudio::NodeHierarchyWidget"
QT_MOC_LITERAL(1, 30, 15), // "OnSelectionDone"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 27), // "MCore::Array<SelectionItem>"
QT_MOC_LITERAL(4, 75, 13), // "selectedNodes"
QT_MOC_LITERAL(5, 89, 15), // "OnDoubleClicked"
QT_MOC_LITERAL(6, 105, 28), // "AZStd::vector<SelectionItem>"
QT_MOC_LITERAL(7, 134, 16), // "SelectionChanged"
QT_MOC_LITERAL(8, 151, 18), // "FilterStateChanged"
QT_MOC_LITERAL(9, 170, 11), // "FilterTypes"
QT_MOC_LITERAL(10, 182, 11), // "filterState"
QT_MOC_LITERAL(11, 194, 6), // "Update"
QT_MOC_LITERAL(12, 201, 15), // "UpdateSelection"
QT_MOC_LITERAL(13, 217, 17), // "ItemDoubleClicked"
QT_MOC_LITERAL(14, 235, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(15, 252, 4), // "item"
QT_MOC_LITERAL(16, 257, 6), // "column"
QT_MOC_LITERAL(17, 264, 15), // "TreeContextMenu"
QT_MOC_LITERAL(18, 280, 3), // "pos"
QT_MOC_LITERAL(19, 284, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(20, 304, 4), // "text"
QT_MOC_LITERAL(21, 309, 18) // "OnSelectionChanged"

    },
    "EMStudio::NodeHierarchyWidget\0"
    "OnSelectionDone\0\0MCore::Array<SelectionItem>\0"
    "selectedNodes\0OnDoubleClicked\0"
    "AZStd::vector<SelectionItem>\0"
    "SelectionChanged\0FilterStateChanged\0"
    "FilterTypes\0filterState\0Update\0"
    "UpdateSelection\0ItemDoubleClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "TreeContextMenu\0pos\0OnTextFilterChanged\0"
    "text\0OnSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__NodeHierarchyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       1,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       7,    0,   86,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    2,   92,    2, 0x0a /* Public */,
      17,    1,   97,    2, 0x0a /* Public */,
      19,    1,  100,    2, 0x0a /* Public */,
      21,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QPoint,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

       0        // eod
};

void EMStudio::NodeHierarchyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeHierarchyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionDone((*reinterpret_cast< MCore::Array<SelectionItem>(*)>(_a[1]))); break;
        case 1: _t->OnDoubleClicked((*reinterpret_cast< MCore::Array<SelectionItem>(*)>(_a[1]))); break;
        case 2: _t->OnSelectionDone((*reinterpret_cast< AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 3: _t->OnDoubleClicked((*reinterpret_cast< AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 4: _t->SelectionChanged(); break;
        case 5: _t->FilterStateChanged((*reinterpret_cast< const FilterTypes(*)>(_a[1]))); break;
        case 6: _t->Update(); break;
        case 7: _t->UpdateSelection(); break;
        case 8: _t->ItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->TreeContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->OnSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NodeHierarchyWidget::*)(MCore::Array<SelectionItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeHierarchyWidget::OnSelectionDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NodeHierarchyWidget::*)(MCore::Array<SelectionItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeHierarchyWidget::OnDoubleClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NodeHierarchyWidget::*)(AZStd::vector<SelectionItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeHierarchyWidget::OnSelectionDone)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NodeHierarchyWidget::*)(AZStd::vector<SelectionItem> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeHierarchyWidget::OnDoubleClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NodeHierarchyWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeHierarchyWidget::SelectionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NodeHierarchyWidget::*)(const FilterTypes & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeHierarchyWidget::FilterStateChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::NodeHierarchyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__NodeHierarchyWidget.data,
    qt_meta_data_EMStudio__NodeHierarchyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::NodeHierarchyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::NodeHierarchyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__NodeHierarchyWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::NodeHierarchyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::NodeHierarchyWidget::OnSelectionDone(MCore::Array<SelectionItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMStudio::NodeHierarchyWidget::OnDoubleClicked(MCore::Array<SelectionItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EMStudio::NodeHierarchyWidget::OnSelectionDone(AZStd::vector<SelectionItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EMStudio::NodeHierarchyWidget::OnDoubleClicked(AZStd::vector<SelectionItem> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EMStudio::NodeHierarchyWidget::SelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void EMStudio::NodeHierarchyWidget::FilterStateChanged(const FilterTypes & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
