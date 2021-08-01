/****************************************************************************
** Meta object code from reading C++ file 'FindEntityWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/LyShine/Code/Editor/FindEntityWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FindEntityWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindEntityWidget_t {
    QByteArrayData data[18];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindEntityWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindEntityWidget_t qt_meta_stringdata_FindEntityWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FindEntityWidget"
QT_MOC_LITERAL(1, 17, 10), // "OnFinished"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 27), // "AZStd::vector<AZ::EntityId>"
QT_MOC_LITERAL(4, 57, 16), // "selectedEntities"
QT_MOC_LITERAL(5, 74, 10), // "OnCanceled"
QT_MOC_LITERAL(6, 85, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(7, 104, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 119, 14), // "OnItemDblClick"
QT_MOC_LITERAL(9, 134, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 146, 5), // "index"
QT_MOC_LITERAL(11, 152, 19), // "OnSearchTextChanged"
QT_MOC_LITERAL(12, 172, 16), // "activeTextFilter"
QT_MOC_LITERAL(13, 189, 15), // "OnFilterChanged"
QT_MOC_LITERAL(14, 205, 36), // "AzQtComponents::SearchTypeFil..."
QT_MOC_LITERAL(15, 242, 17), // "activeTypeFilters"
QT_MOC_LITERAL(16, 260, 15), // "OnSelectClicked"
QT_MOC_LITERAL(17, 276, 15) // "OnCancelClicked"

    },
    "FindEntityWidget\0OnFinished\0\0"
    "AZStd::vector<AZ::EntityId>\0"
    "selectedEntities\0OnCanceled\0"
    "OnSelectionChanged\0QItemSelection\0"
    "OnItemDblClick\0QModelIndex\0index\0"
    "OnSearchTextChanged\0activeTextFilter\0"
    "OnFilterChanged\0AzQtComponents::SearchTypeFilterList\0"
    "activeTypeFilters\0OnSelectClicked\0"
    "OnCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindEntityWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   58,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,
      16,    0,   72,    2, 0x08 /* Private */,
      17,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    2,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindEntityWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindEntityWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFinished((*reinterpret_cast< AZStd::vector<AZ::EntityId>(*)>(_a[1]))); break;
        case 1: _t->OnCanceled(); break;
        case 2: _t->OnSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->OnItemDblClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->OnSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->OnFilterChanged((*reinterpret_cast< const AzQtComponents::SearchTypeFilterList(*)>(_a[1]))); break;
        case 6: _t->OnSelectClicked(); break;
        case 7: _t->OnCancelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindEntityWidget::*)(AZStd::vector<AZ::EntityId> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindEntityWidget::OnFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FindEntityWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindEntityWidget::OnCanceled)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindEntityWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FindEntityWidget.data,
    qt_meta_data_FindEntityWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FindEntityWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindEntityWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindEntityWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FindEntityWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FindEntityWidget::OnFinished(AZStd::vector<AZ::EntityId> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FindEntityWidget::OnCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
