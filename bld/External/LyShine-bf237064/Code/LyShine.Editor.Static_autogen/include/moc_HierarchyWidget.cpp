/****************************************************************************
** Meta object code from reading C++ file 'HierarchyWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/LyShine/Code/Editor/HierarchyWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HierarchyWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HierarchyWidget_t {
    QByteArrayData data[27];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HierarchyWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HierarchyWidget_t qt_meta_stringdata_HierarchyWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "HierarchyWidget"
QT_MOC_LITERAL(1, 16, 16), // "SetUserSelection"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "HierarchyItemRawPtrList*"
QT_MOC_LITERAL(4, 59, 5), // "items"
QT_MOC_LITERAL(5, 65, 40), // "editorOnlyStateChangedOnSelec..."
QT_MOC_LITERAL(6, 106, 19), // "DeleteSelectedItems"
QT_MOC_LITERAL(7, 126, 3), // "Cut"
QT_MOC_LITERAL(8, 130, 4), // "Copy"
QT_MOC_LITERAL(9, 135, 14), // "PasteAsSibling"
QT_MOC_LITERAL(10, 150, 12), // "PasteAsChild"
QT_MOC_LITERAL(11, 163, 29), // "SetEditorOnlyForSelectedItems"
QT_MOC_LITERAL(12, 193, 10), // "editorOnly"
QT_MOC_LITERAL(13, 204, 26), // "CurrentSelectionHasChanged"
QT_MOC_LITERAL(14, 231, 14), // "QItemSelection"
QT_MOC_LITERAL(15, 246, 8), // "selected"
QT_MOC_LITERAL(16, 255, 10), // "deselected"
QT_MOC_LITERAL(17, 266, 14), // "DataHasChanged"
QT_MOC_LITERAL(18, 281, 11), // "QModelIndex"
QT_MOC_LITERAL(19, 293, 7), // "topLeft"
QT_MOC_LITERAL(20, 301, 11), // "bottomRight"
QT_MOC_LITERAL(21, 313, 12), // "QVector<int>"
QT_MOC_LITERAL(22, 326, 5), // "roles"
QT_MOC_LITERAL(23, 332, 13), // "HandleItemAdd"
QT_MOC_LITERAL(24, 346, 14), // "HierarchyItem*"
QT_MOC_LITERAL(25, 361, 4), // "item"
QT_MOC_LITERAL(26, 366, 16) // "HandleItemRemove"

    },
    "HierarchyWidget\0SetUserSelection\0\0"
    "HierarchyItemRawPtrList*\0items\0"
    "editorOnlyStateChangedOnSelectedElements\0"
    "DeleteSelectedItems\0Cut\0Copy\0"
    "PasteAsSibling\0PasteAsChild\0"
    "SetEditorOnlyForSelectedItems\0editorOnly\0"
    "CurrentSelectionHasChanged\0QItemSelection\0"
    "selected\0deselected\0DataHasChanged\0"
    "QModelIndex\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0HandleItemAdd\0"
    "HierarchyItem*\0item\0HandleItemRemove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HierarchyWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      13,    2,   91,    2, 0x08 /* Private */,
      17,    3,   96,    2, 0x08 /* Private */,
      17,    2,  103,    2, 0x28 /* Private | MethodCloned */,
      23,    1,  108,    2, 0x08 /* Private */,
      26,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18, 0x80000000 | 21,   19,   20,   22,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24,   25,

       0        // eod
};

void HierarchyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HierarchyWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetUserSelection((*reinterpret_cast< HierarchyItemRawPtrList*(*)>(_a[1]))); break;
        case 1: _t->editorOnlyStateChangedOnSelectedElements(); break;
        case 2: _t->DeleteSelectedItems(); break;
        case 3: _t->Cut(); break;
        case 4: _t->Copy(); break;
        case 5: _t->PasteAsSibling(); break;
        case 6: _t->PasteAsChild(); break;
        case 7: _t->SetEditorOnlyForSelectedItems((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->CurrentSelectionHasChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 9: _t->DataHasChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 10: _t->DataHasChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->HandleItemAdd((*reinterpret_cast< HierarchyItem*(*)>(_a[1]))); break;
        case 12: _t->HandleItemRemove((*reinterpret_cast< HierarchyItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HierarchyWidget::*)(HierarchyItemRawPtrList * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HierarchyWidget::SetUserSelection)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HierarchyWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HierarchyWidget::editorOnlyStateChangedOnSelectedElements)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HierarchyWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_HierarchyWidget.data,
    qt_meta_data_HierarchyWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HierarchyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HierarchyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HierarchyWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int HierarchyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void HierarchyWidget::SetUserSelection(HierarchyItemRawPtrList * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HierarchyWidget::editorOnlyStateChangedOnSelectedElements()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
