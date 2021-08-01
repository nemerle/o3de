/****************************************************************************
** Meta object code from reading C++ file 'ComponentPaletteWidget.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/ComponentPalette/ComponentPaletteWidget.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComponentPaletteWidget.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__ComponentPaletteWidget_t {
    QByteArrayData data[16];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ComponentPaletteWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ComponentPaletteWidget_t qt_meta_stringdata_AzToolsFramework__ComponentPaletteWidget = {
    {
QT_MOC_LITERAL(0, 0, 40), // "AzToolsFramework::ComponentPa..."
QT_MOC_LITERAL(1, 41, 19), // "OnAddComponentBegin"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 17), // "OnAddComponentEnd"
QT_MOC_LITERAL(4, 80, 20), // "OnAddComponentCancel"
QT_MOC_LITERAL(5, 101, 13), // "UpdateContent"
QT_MOC_LITERAL(6, 115, 17), // "QueueUpdateSearch"
QT_MOC_LITERAL(7, 133, 12), // "UpdateSearch"
QT_MOC_LITERAL(8, 146, 11), // "ClearSearch"
QT_MOC_LITERAL(9, 158, 17), // "ActivateSelection"
QT_MOC_LITERAL(10, 176, 11), // "QModelIndex"
QT_MOC_LITERAL(11, 188, 5), // "index"
QT_MOC_LITERAL(12, 194, 14), // "ExpandCategory"
QT_MOC_LITERAL(13, 209, 16), // "CollapseCategory"
QT_MOC_LITERAL(14, 226, 14), // "FocusSearchBox"
QT_MOC_LITERAL(15, 241, 18) // "FocusComponentTree"

    },
    "AzToolsFramework::ComponentPaletteWidget\0"
    "OnAddComponentBegin\0\0OnAddComponentEnd\0"
    "OnAddComponentCancel\0UpdateContent\0"
    "QueueUpdateSearch\0UpdateSearch\0"
    "ClearSearch\0ActivateSelection\0QModelIndex\0"
    "index\0ExpandCategory\0CollapseCategory\0"
    "FocusSearchBox\0FocusComponentTree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ComponentPaletteWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::ComponentPaletteWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComponentPaletteWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAddComponentBegin(); break;
        case 1: _t->OnAddComponentEnd(); break;
        case 2: _t->OnAddComponentCancel(); break;
        case 3: _t->UpdateContent(); break;
        case 4: _t->QueueUpdateSearch(); break;
        case 5: _t->UpdateSearch(); break;
        case 6: _t->ClearSearch(); break;
        case 7: _t->ActivateSelection((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->ExpandCategory((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->CollapseCategory((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->FocusSearchBox(); break;
        case 11: _t->FocusComponentTree(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComponentPaletteWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentPaletteWidget::OnAddComponentBegin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComponentPaletteWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentPaletteWidget::OnAddComponentEnd)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComponentPaletteWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentPaletteWidget::OnAddComponentCancel)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ComponentPaletteWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ComponentPaletteWidget.data,
    qt_meta_data_AzToolsFramework__ComponentPaletteWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ComponentPaletteWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ComponentPaletteWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ComponentPaletteWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzToolsFramework::ComponentPaletteWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void AzToolsFramework::ComponentPaletteWidget::OnAddComponentBegin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzToolsFramework::ComponentPaletteWidget::OnAddComponentEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzToolsFramework::ComponentPaletteWidget::OnAddComponentCancel()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
