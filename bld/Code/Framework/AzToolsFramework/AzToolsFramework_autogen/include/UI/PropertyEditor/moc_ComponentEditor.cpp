/****************************************************************************
** Meta object code from reading C++ file 'ComponentEditor.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/ComponentEditor.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ComponentEditor.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__ComponentEditor_t {
    QByteArrayData data[15];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__ComponentEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__ComponentEditor_t qt_meta_stringdata_AzToolsFramework__ComponentEditor = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AzToolsFramework::ComponentEd..."
QT_MOC_LITERAL(1, 34, 26), // "OnExpansionContractionDone"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 28), // "OnDisplayComponentEditorMenu"
QT_MOC_LITERAL(4, 91, 8), // "position"
QT_MOC_LITERAL(5, 100, 25), // "OnRequestRemoveComponents"
QT_MOC_LITERAL(6, 126, 29), // "AZStd::vector<AZ::Component*>"
QT_MOC_LITERAL(7, 156, 10), // "components"
QT_MOC_LITERAL(8, 167, 26), // "OnRequestDisableComponents"
QT_MOC_LITERAL(9, 194, 27), // "OnRequestRequiredComponents"
QT_MOC_LITERAL(10, 222, 4), // "size"
QT_MOC_LITERAL(11, 227, 39), // "AZStd::vector<AZ::ComponentSe..."
QT_MOC_LITERAL(12, 267, 8), // "services"
QT_MOC_LITERAL(13, 276, 20), // "incompatibleServices"
QT_MOC_LITERAL(14, 297, 24) // "OnRequestSelectionChange"

    },
    "AzToolsFramework::ComponentEditor\0"
    "OnExpansionContractionDone\0\0"
    "OnDisplayComponentEditorMenu\0position\0"
    "OnRequestRemoveComponents\0"
    "AZStd::vector<AZ::Component*>\0components\0"
    "OnRequestDisableComponents\0"
    "OnRequestRequiredComponents\0size\0"
    "AZStd::vector<AZ::ComponentServiceType>\0"
    "services\0incompatibleServices\0"
    "OnRequestSelectionChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__ComponentEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,
       8,    1,   51,    2, 0x06 /* Public */,
       9,    4,   54,    2, 0x06 /* Public */,
      14,    1,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QPoint, QMetaType::QSize, 0x80000000 | 11, 0x80000000 | 11,    4,   10,   12,   13,
    QMetaType::Void, QMetaType::QPoint,    4,

       0        // eod
};

void AzToolsFramework::ComponentEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComponentEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnExpansionContractionDone(); break;
        case 1: _t->OnDisplayComponentEditorMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->OnRequestRemoveComponents((*reinterpret_cast< const AZStd::vector<AZ::Component*>(*)>(_a[1]))); break;
        case 3: _t->OnRequestDisableComponents((*reinterpret_cast< const AZStd::vector<AZ::Component*>(*)>(_a[1]))); break;
        case 4: _t->OnRequestRequiredComponents((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< const AZStd::vector<AZ::ComponentServiceType>(*)>(_a[3])),(*reinterpret_cast< const AZStd::vector<AZ::ComponentServiceType>(*)>(_a[4]))); break;
        case 5: _t->OnRequestSelectionChange((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComponentEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditor::OnExpansionContractionDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComponentEditor::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditor::OnDisplayComponentEditorMenu)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComponentEditor::*)(const AZStd::vector<AZ::Component*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditor::OnRequestRemoveComponents)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ComponentEditor::*)(const AZStd::vector<AZ::Component*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditor::OnRequestDisableComponents)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ComponentEditor::*)(const QPoint & , const QSize & , const AZStd::vector<AZ::ComponentServiceType> & , const AZStd::vector<AZ::ComponentServiceType> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditor::OnRequestRequiredComponents)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ComponentEditor::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComponentEditor::OnRequestSelectionChange)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::ComponentEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::Card::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__ComponentEditor.data,
    qt_meta_data_AzToolsFramework__ComponentEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::ComponentEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::ComponentEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__ComponentEditor.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::Card::qt_metacast(_clname);
}

int AzToolsFramework::ComponentEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::Card::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::ComponentEditor::OnExpansionContractionDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzToolsFramework::ComponentEditor::OnDisplayComponentEditorMenu(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzToolsFramework::ComponentEditor::OnRequestRemoveComponents(const AZStd::vector<AZ::Component*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzToolsFramework::ComponentEditor::OnRequestDisableComponents(const AZStd::vector<AZ::Component*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzToolsFramework::ComponentEditor::OnRequestRequiredComponents(const QPoint & _t1, const QSize & _t2, const AZStd::vector<AZ::ComponentServiceType> & _t3, const AZStd::vector<AZ::ComponentServiceType> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AzToolsFramework::ComponentEditor::OnRequestSelectionChange(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
