/****************************************************************************
** Meta object code from reading C++ file 'PropertyRowWidget.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyRowWidget.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyRowWidget.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyRowWidget_t {
    QByteArrayData data[22];
    char stringdata0[436];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyRowWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyRowWidget_t qt_meta_stringdata_AzToolsFramework__PropertyRowWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AzToolsFramework::PropertyRow..."
QT_MOC_LITERAL(1, 36, 26), // "onUserExpandedOrContracted"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 17), // "InstanceDataNode*"
QT_MOC_LITERAL(4, 82, 4), // "node"
QT_MOC_LITERAL(5, 87, 8), // "expanded"
QT_MOC_LITERAL(6, 96, 25), // "onRequestedContainerClear"
QT_MOC_LITERAL(7, 122, 33), // "onRequestedContainerElementRe..."
QT_MOC_LITERAL(8, 156, 23), // "onRequestedContainerAdd"
QT_MOC_LITERAL(9, 180, 22), // "onRequestedContextMenu"
QT_MOC_LITERAL(10, 203, 5), // "point"
QT_MOC_LITERAL(11, 209, 20), // "onRequestedSelection"
QT_MOC_LITERAL(12, 230, 24), // "OnClickedExpansionButton"
QT_MOC_LITERAL(13, 255, 25), // "OnClickedAddElementButton"
QT_MOC_LITERAL(14, 281, 28), // "OnClickedRemoveElementButton"
QT_MOC_LITERAL(15, 310, 29), // "OnClickedClearContainerButton"
QT_MOC_LITERAL(16, 340, 22), // "OnContextMenuRequested"
QT_MOC_LITERAL(17, 363, 12), // "hasChildRows"
QT_MOC_LITERAL(18, 376, 10), // "isTopLevel"
QT_MOC_LITERAL(19, 387, 8), // "getLevel"
QT_MOC_LITERAL(20, 396, 14), // "canBeReordered"
QT_MOC_LITERAL(21, 411, 24) // "appendDefaultLabelToName"

    },
    "AzToolsFramework::PropertyRowWidget\0"
    "onUserExpandedOrContracted\0\0"
    "InstanceDataNode*\0node\0expanded\0"
    "onRequestedContainerClear\0"
    "onRequestedContainerElementRemove\0"
    "onRequestedContainerAdd\0onRequestedContextMenu\0"
    "point\0onRequestedSelection\0"
    "OnClickedExpansionButton\0"
    "OnClickedAddElementButton\0"
    "OnClickedRemoveElementButton\0"
    "OnClickedClearContainerButton\0"
    "OnContextMenuRequested\0hasChildRows\0"
    "isTopLevel\0getLevel\0canBeReordered\0"
    "appendDefaultLabelToName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyRowWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,
       9,    2,   83,    2, 0x06 /* Public */,
      11,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    4,   10,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00095001,
      18, QMetaType::Bool, 0x00095001,
      19, QMetaType::Int, 0x00095001,
      20, QMetaType::Bool, 0x00095001,
      21, QMetaType::Bool, 0x00095003,

       0        // eod
};

void AzToolsFramework::PropertyRowWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyRowWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUserExpandedOrContracted((*reinterpret_cast< InstanceDataNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->onRequestedContainerClear((*reinterpret_cast< InstanceDataNode*(*)>(_a[1]))); break;
        case 2: _t->onRequestedContainerElementRemove((*reinterpret_cast< InstanceDataNode*(*)>(_a[1]))); break;
        case 3: _t->onRequestedContainerAdd((*reinterpret_cast< InstanceDataNode*(*)>(_a[1]))); break;
        case 4: _t->onRequestedContextMenu((*reinterpret_cast< InstanceDataNode*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 5: _t->onRequestedSelection((*reinterpret_cast< InstanceDataNode*(*)>(_a[1]))); break;
        case 6: _t->OnClickedExpansionButton(); break;
        case 7: _t->OnClickedAddElementButton(); break;
        case 8: _t->OnClickedRemoveElementButton(); break;
        case 9: _t->OnClickedClearContainerButton(); break;
        case 10: _t->OnContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyRowWidget::*)(InstanceDataNode * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyRowWidget::onUserExpandedOrContracted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyRowWidget::*)(InstanceDataNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyRowWidget::onRequestedContainerClear)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PropertyRowWidget::*)(InstanceDataNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyRowWidget::onRequestedContainerElementRemove)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PropertyRowWidget::*)(InstanceDataNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyRowWidget::onRequestedContainerAdd)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PropertyRowWidget::*)(InstanceDataNode * , const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyRowWidget::onRequestedContextMenu)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PropertyRowWidget::*)(InstanceDataNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyRowWidget::onRequestedSelection)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyRowWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->HasChildRows(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->IsTopLevel(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->GetLevel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->CanBeReordered(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->GetAppendDefaultLabelToName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyRowWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->AppendDefaultLabelToName(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyRowWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyRowWidget.data,
    qt_meta_data_AzToolsFramework__PropertyRowWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyRowWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyRowWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyRowWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzToolsFramework::PropertyRowWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzToolsFramework::PropertyRowWidget::onUserExpandedOrContracted(InstanceDataNode * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::PropertyRowWidget::onRequestedContainerClear(InstanceDataNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzToolsFramework::PropertyRowWidget::onRequestedContainerElementRemove(InstanceDataNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzToolsFramework::PropertyRowWidget::onRequestedContainerAdd(InstanceDataNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzToolsFramework::PropertyRowWidget::onRequestedContextMenu(InstanceDataNode * _t1, const QPoint & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AzToolsFramework::PropertyRowWidget::onRequestedSelection(InstanceDataNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
