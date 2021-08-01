/****************************************************************************
** Meta object code from reading C++ file 'ComponentEditorHeader.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/ComponentEditorHeader.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComponentEditorHeader.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__ComponentEditorHeader_t {
    QByteArrayData data[6];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ComponentEditorHeader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ComponentEditorHeader_t qt_meta_stringdata_AzToolsFramework__ComponentEditorHeader = {
    {
QT_MOC_LITERAL(0, 0, 39), // "AzToolsFramework::ComponentEd..."
QT_MOC_LITERAL(1, 40, 20), // "OnContextMenuClicked"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 8), // "position"
QT_MOC_LITERAL(4, 71, 17), // "OnExpanderChanged"
QT_MOC_LITERAL(5, 89, 8) // "expanded"

    },
    "AzToolsFramework::ComponentEditorHeader\0"
    "OnContextMenuClicked\0\0position\0"
    "OnExpanderChanged\0expanded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ComponentEditorHeader[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void AzToolsFramework::ComponentEditorHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComponentEditorHeader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnContextMenuClicked((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->OnExpanderChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComponentEditorHeader::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditorHeader::OnContextMenuClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComponentEditorHeader::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditorHeader::OnExpanderChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ComponentEditorHeader::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::CardHeader::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ComponentEditorHeader.data,
    qt_meta_data_AzToolsFramework__ComponentEditorHeader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ComponentEditorHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ComponentEditorHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ComponentEditorHeader.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::CardHeader::qt_metacast(_clname);
}

int AzToolsFramework::ComponentEditorHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::CardHeader::qt_metacall(_c, _id, _a);
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
void AzToolsFramework::ComponentEditorHeader::OnContextMenuClicked(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzToolsFramework::ComponentEditorHeader::OnExpanderChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
