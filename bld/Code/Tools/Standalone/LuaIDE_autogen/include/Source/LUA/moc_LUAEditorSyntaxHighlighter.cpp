/****************************************************************************
** Meta object code from reading C++ file 'LUAEditorSyntaxHighlighter.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/LUA/LUAEditorSyntaxHighlighter.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LUAEditorSyntaxHighlighter.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LUAEditor__LUASyntaxHighlighter_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__LUASyntaxHighlighter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__LUASyntaxHighlighter_t qt_meta_stringdata_LUAEditor__LUASyntaxHighlighter = {
    {
QT_MOC_LITERAL(0, 0, 31), // "LUAEditor::LUASyntaxHighlighter"
QT_MOC_LITERAL(1, 32, 22), // "LUANamesInScopeChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 8) // "luaNames"

    },
    "LUAEditor::LUASyntaxHighlighter\0"
    "LUANamesInScopeChanged\0\0luaNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__LUASyntaxHighlighter[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

       0        // eod
};

void LUAEditor::LUASyntaxHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LUASyntaxHighlighter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LUANamesInScopeChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LUASyntaxHighlighter::*)(const QStringList & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUASyntaxHighlighter::LUANamesInScopeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::LUASyntaxHighlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__LUASyntaxHighlighter.data,
    qt_meta_data_LUAEditor__LUASyntaxHighlighter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::LUASyntaxHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::LUASyntaxHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__LUASyntaxHighlighter.stringdata0))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int LUAEditor::LUASyntaxHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
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
void LUAEditor::LUASyntaxHighlighter::LUANamesInScopeChanged(const QStringList & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< LUAEditor::LUASyntaxHighlighter *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
