/****************************************************************************
** Meta object code from reading C++ file 'LUAEditorPlainTextEdit.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/LUA/LUAEditorPlainTextEdit.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LUAEditorPlainTextEdit.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LUAEditor__LUAEditorPlainTextEdit_t {
    QByteArrayData data[10];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__LUAEditorPlainTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__LUAEditorPlainTextEdit_t qt_meta_stringdata_LUAEditor__LUAEditorPlainTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 33), // "LUAEditor::LUAEditorPlainText..."
QT_MOC_LITERAL(1, 34, 12), // "FocusChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 7), // "focused"
QT_MOC_LITERAL(4, 56, 6), // "ZoomIn"
QT_MOC_LITERAL(5, 63, 7), // "ZoomOut"
QT_MOC_LITERAL(6, 71, 19), // "OnScopeNamesUpdated"
QT_MOC_LITERAL(7, 91, 10), // "scopeNames"
QT_MOC_LITERAL(8, 102, 18), // "CompletionSelected"
QT_MOC_LITERAL(9, 121, 4) // "text"

    },
    "LUAEditor::LUAEditorPlainTextEdit\0"
    "FocusChanged\0\0focused\0ZoomIn\0ZoomOut\0"
    "OnScopeNamesUpdated\0scopeNames\0"
    "CompletionSelected\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__LUAEditorPlainTextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void LUAEditor::LUAEditorPlainTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LUAEditorPlainTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FocusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ZoomIn(); break;
        case 2: _t->ZoomOut(); break;
        case 3: _t->OnScopeNamesUpdated((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->CompletionSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LUAEditorPlainTextEdit::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAEditorPlainTextEdit::FocusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LUAEditorPlainTextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAEditorPlainTextEdit::ZoomIn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LUAEditorPlainTextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAEditorPlainTextEdit::ZoomOut)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::LUAEditorPlainTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::PlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__LUAEditorPlainTextEdit.data,
    qt_meta_data_LUAEditor__LUAEditorPlainTextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::LUAEditorPlainTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::LUAEditorPlainTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__LUAEditorPlainTextEdit.stringdata0))
        return static_cast<void*>(this);
    return AzToolsFramework::PlainTextEdit::qt_metacast(_clname);
}

int LUAEditor::LUAEditorPlainTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::PlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LUAEditor::LUAEditorPlainTextEdit::FocusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LUAEditor::LUAEditorPlainTextEdit::ZoomIn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LUAEditor::LUAEditorPlainTextEdit::ZoomOut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
