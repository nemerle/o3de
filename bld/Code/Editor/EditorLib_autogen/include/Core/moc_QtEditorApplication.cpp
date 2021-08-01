/****************************************************************************
** Meta object code from reading C++ file 'QtEditorApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Editor/Core/QtEditorApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtEditorApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Editor__EditorQtApplication_t {
    QByteArrayData data[8];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Editor__EditorQtApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Editor__EditorQtApplication_t qt_meta_stringdata_Editor__EditorQtApplication = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Editor::EditorQtApplication"
QT_MOC_LITERAL(1, 28, 11), // "skinChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "setIsMovingOrResizing"
QT_MOC_LITERAL(4, 63, 18), // "isMovingOrResizing"
QT_MOC_LITERAL(5, 82, 11), // "pressedKeys"
QT_MOC_LITERAL(6, 94, 9), // "QSet<int>"
QT_MOC_LITERAL(7, 104, 19) // "pressedMouseButtons"

    },
    "Editor::EditorQtApplication\0skinChanged\0"
    "\0setIsMovingOrResizing\0isMovingOrResizing\0"
    "pressedKeys\0QSet<int>\0pressedMouseButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Editor__EditorQtApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095009,
       7, QMetaType::Int, 0x00095001,

       0        // eod
};

void Editor::EditorQtApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditorQtApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->skinChanged(); break;
        case 1: _t->setIsMovingOrResizing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditorQtApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EditorQtApplication::skinChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EditorQtApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSet<int>*>(_v) = _t->pressedKeys(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->pressedMouseButtons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Editor::EditorQtApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::AzQtApplication::staticMetaObject>(),
    qt_meta_stringdata_Editor__EditorQtApplication.data,
    qt_meta_data_Editor__EditorQtApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Editor::EditorQtApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Editor::EditorQtApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Editor__EditorQtApplication.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractNativeEventFilter"))
        return static_cast< QAbstractNativeEventFilter*>(this);
    if (!strcmp(_clname, "IEditorNotifyListener"))
        return static_cast< IEditorNotifyListener*>(this);
    if (!strcmp(_clname, "AZ::UserSettingsOwnerRequestBus::Handler"))
        return static_cast< AZ::UserSettingsOwnerRequestBus::Handler*>(this);
    return AzQtComponents::AzQtApplication::qt_metacast(_clname);
}

int Editor::EditorQtApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::AzQtApplication::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Editor::EditorQtApplication::skinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
