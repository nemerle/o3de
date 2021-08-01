/****************************************************************************
** Meta object code from reading C++ file 'ReflectedPropertyEditor.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/ReflectedPropertyEditor.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReflectedPropertyEditor.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__ReflectedPropertyEditor_t {
    QByteArrayData data[15];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ReflectedPropertyEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ReflectedPropertyEditor_t qt_meta_stringdata_AzToolsFramework__ReflectedPropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 41), // "AzToolsFramework::ReflectedPr..."
QT_MOC_LITERAL(1, 42, 26), // "OnExpansionContractionDone"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 33), // "OnPropertyRowExpandedOrContra..."
QT_MOC_LITERAL(4, 104, 18), // "PropertyRowWidget*"
QT_MOC_LITERAL(5, 123, 6), // "widget"
QT_MOC_LITERAL(6, 130, 17), // "InstanceDataNode*"
QT_MOC_LITERAL(7, 148, 4), // "node"
QT_MOC_LITERAL(8, 153, 8), // "expanded"
QT_MOC_LITERAL(9, 162, 19), // "fromUserInteraction"
QT_MOC_LITERAL(10, 182, 9), // "DoRefresh"
QT_MOC_LITERAL(11, 192, 16), // "RecreateTabOrder"
QT_MOC_LITERAL(12, 209, 25), // "OnPropertyRowRequestClear"
QT_MOC_LITERAL(13, 235, 39), // "OnPropertyRowRequestContainer..."
QT_MOC_LITERAL(14, 275, 36) // "OnPropertyRowRequestContainer..."

    },
    "AzToolsFramework::ReflectedPropertyEditor\0"
    "OnExpansionContractionDone\0\0"
    "OnPropertyRowExpandedOrContracted\0"
    "PropertyRowWidget*\0widget\0InstanceDataNode*\0"
    "node\0expanded\0fromUserInteraction\0"
    "DoRefresh\0RecreateTabOrder\0"
    "OnPropertyRowRequestClear\0"
    "OnPropertyRowRequestContainerRemoveItem\0"
    "OnPropertyRowRequestContainerAddItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ReflectedPropertyEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    4,   50,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    2,   61,    2, 0x08 /* Private */,
      13,    2,   66,    2, 0x08 /* Private */,
      14,    2,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6, QMetaType::Bool, QMetaType::Bool,    5,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

       0        // eod
};

void AzToolsFramework::ReflectedPropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReflectedPropertyEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnExpansionContractionDone(); break;
        case 1: _t->OnPropertyRowExpandedOrContracted((*reinterpret_cast< PropertyRowWidget*(*)>(_a[1])),(*reinterpret_cast< InstanceDataNode*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->DoRefresh(); break;
        case 3: _t->RecreateTabOrder(); break;
        case 4: _t->OnPropertyRowRequestClear((*reinterpret_cast< PropertyRowWidget*(*)>(_a[1])),(*reinterpret_cast< InstanceDataNode*(*)>(_a[2]))); break;
        case 5: _t->OnPropertyRowRequestContainerRemoveItem((*reinterpret_cast< PropertyRowWidget*(*)>(_a[1])),(*reinterpret_cast< InstanceDataNode*(*)>(_a[2]))); break;
        case 6: _t->OnPropertyRowRequestContainerAddItem((*reinterpret_cast< PropertyRowWidget*(*)>(_a[1])),(*reinterpret_cast< InstanceDataNode*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReflectedPropertyEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReflectedPropertyEditor::OnExpansionContractionDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ReflectedPropertyEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ReflectedPropertyEditor.data,
    qt_meta_data_AzToolsFramework__ReflectedPropertyEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ReflectedPropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ReflectedPropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ReflectedPropertyEditor.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzToolsFramework::ReflectedPropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::ReflectedPropertyEditor::OnExpansionContractionDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
