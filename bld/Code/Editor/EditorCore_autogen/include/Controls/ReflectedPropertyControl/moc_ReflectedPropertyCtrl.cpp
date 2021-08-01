/****************************************************************************
** Meta object code from reading C++ file 'ReflectedPropertyCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Editor/Controls/ReflectedPropertyControl/ReflectedPropertyCtrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReflectedPropertyCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReflectedPropertyControl_t {
    QByteArrayData data[21];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReflectedPropertyControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReflectedPropertyControl_t qt_meta_stringdata_ReflectedPropertyControl = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ReflectedPropertyControl"
QT_MOC_LITERAL(1, 25, 15), // "CopyAllSections"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "PasteAllSections"
QT_MOC_LITERAL(4, 59, 14), // "InvalidateCtrl"
QT_MOC_LITERAL(5, 74, 6), // "queued"
QT_MOC_LITERAL(6, 81, 11), // "RebuildCtrl"
QT_MOC_LITERAL(7, 93, 8), // "SetTitle"
QT_MOC_LITERAL(8, 102, 5), // "title"
QT_MOC_LITERAL(9, 108, 6), // "OnCopy"
QT_MOC_LITERAL(10, 115, 31), // "QVector<ReflectedPropertyItem*>"
QT_MOC_LITERAL(11, 147, 5), // "items"
QT_MOC_LITERAL(12, 153, 12), // "bRecursively"
QT_MOC_LITERAL(13, 166, 9), // "OnCopyAll"
QT_MOC_LITERAL(14, 176, 10), // "XmlNodeRef"
QT_MOC_LITERAL(15, 187, 4), // "node"
QT_MOC_LITERAL(16, 192, 7), // "OnPaste"
QT_MOC_LITERAL(17, 200, 16), // "DoUpdateCallback"
QT_MOC_LITERAL(18, 217, 10), // "IVariable*"
QT_MOC_LITERAL(19, 228, 3), // "var"
QT_MOC_LITERAL(20, 232, 22) // "DoUpdateObjectCallback"

    },
    "ReflectedPropertyControl\0CopyAllSections\0"
    "\0PasteAllSections\0InvalidateCtrl\0"
    "queued\0RebuildCtrl\0SetTitle\0title\0"
    "OnCopy\0QVector<ReflectedPropertyItem*>\0"
    "items\0bRecursively\0OnCopyAll\0XmlNodeRef\0"
    "node\0OnPaste\0DoUpdateCallback\0IVariable*\0"
    "var\0DoUpdateObjectCallback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReflectedPropertyControl[] = {

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
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   81,    2, 0x0a /* Public */,
       4,    0,   84,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   85,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   89,    2, 0x0a /* Public */,
       9,    2,   92,    2, 0x0a /* Public */,
      13,    0,   97,    2, 0x0a /* Public */,
      13,    1,   98,    2, 0x0a /* Public */,
      16,    0,  101,    2, 0x0a /* Public */,
      17,    1,  102,    2, 0x08 /* Private */,
      20,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void ReflectedPropertyControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReflectedPropertyControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CopyAllSections(); break;
        case 1: _t->PasteAllSections(); break;
        case 2: _t->InvalidateCtrl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->InvalidateCtrl(); break;
        case 4: _t->RebuildCtrl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->RebuildCtrl(); break;
        case 6: _t->SetTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->OnCopy((*reinterpret_cast< QVector<ReflectedPropertyItem*>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->OnCopyAll(); break;
        case 9: _t->OnCopyAll((*reinterpret_cast< XmlNodeRef(*)>(_a[1]))); break;
        case 10: _t->OnPaste(); break;
        case 11: _t->DoUpdateCallback((*reinterpret_cast< IVariable*(*)>(_a[1]))); break;
        case 12: _t->DoUpdateObjectCallback((*reinterpret_cast< IVariable*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReflectedPropertyControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReflectedPropertyControl::CopyAllSections)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ReflectedPropertyControl::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReflectedPropertyControl::PasteAllSections)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReflectedPropertyControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ReflectedPropertyControl.data,
    qt_meta_data_ReflectedPropertyControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReflectedPropertyControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReflectedPropertyControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReflectedPropertyControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::IPropertyEditorNotify"))
        return static_cast< AzToolsFramework::IPropertyEditorNotify*>(this);
    return QWidget::qt_metacast(_clname);
}

int ReflectedPropertyControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void ReflectedPropertyControl::CopyAllSections()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ReflectedPropertyControl::PasteAllSections()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_TwoColumnPropertyControl_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TwoColumnPropertyControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TwoColumnPropertyControl_t qt_meta_stringdata_TwoColumnPropertyControl = {
    {
QT_MOC_LITERAL(0, 0, 24) // "TwoColumnPropertyControl"

    },
    "TwoColumnPropertyControl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TwoColumnPropertyControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TwoColumnPropertyControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TwoColumnPropertyControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TwoColumnPropertyControl.data,
    qt_meta_data_TwoColumnPropertyControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TwoColumnPropertyControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TwoColumnPropertyControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TwoColumnPropertyControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TwoColumnPropertyControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PropertyCard_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyCard_t qt_meta_stringdata_PropertyCard = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PropertyCard"
QT_MOC_LITERAL(1, 13, 26), // "OnExpansionContractionDone"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "PropertyCard\0OnExpansionContractionDone\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyCard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void PropertyCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnExpansionContractionDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyCard::OnExpansionContractionDone)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PropertyCard::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_PropertyCard.data,
    qt_meta_data_PropertyCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyCard.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PropertyCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PropertyCard::OnExpansionContractionDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
