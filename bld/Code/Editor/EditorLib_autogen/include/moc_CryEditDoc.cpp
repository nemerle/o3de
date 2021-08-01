/****************************************************************************
** Meta object code from reading C++ file 'CryEditDoc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/CryEditDoc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CryEditDoc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CCryEditDoc_t {
    QByteArrayData data[5];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CCryEditDoc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CCryEditDoc_t qt_meta_stringdata_CCryEditDoc = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CCryEditDoc"
QT_MOC_LITERAL(1, 12, 0), // ""
QT_MOC_LITERAL(2, 13, 8), // "modified"
QT_MOC_LITERAL(3, 22, 8), // "pathName"
QT_MOC_LITERAL(4, 31, 5) // "title"

    },
    "CCryEditDoc\0\0modified\0pathName\0title"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CCryEditDoc[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   15, // properties
       0,    0, // enums/sets
       1,   24, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1,

 // properties: name, type, flags
       2, QMetaType::Bool, 0x00095003,
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::QString, 0x00095003,

 // constructors: name, argc, parameters, tag, flags
       0,    0,   14,    1, 0x0e /* Public */,

       0        // eod
};

void CCryEditDoc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { CCryEditDoc *_r = new CCryEditDoc();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CCryEditDoc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->IsModified(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->GetLevelPathName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->GetTitle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CCryEditDoc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetModifiedFlag(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->SetPathName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->SetTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject CCryEditDoc::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CCryEditDoc.data,
    qt_meta_data_CCryEditDoc,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CCryEditDoc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CCryEditDoc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CCryEditDoc.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::SliceEditorEntityOwnershipServiceNotificationBus::Handler"))
        return static_cast< AzToolsFramework::SliceEditorEntityOwnershipServiceNotificationBus::Handler*>(this);
    return QObject::qt_metacast(_clname);
}

int CCryEditDoc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
