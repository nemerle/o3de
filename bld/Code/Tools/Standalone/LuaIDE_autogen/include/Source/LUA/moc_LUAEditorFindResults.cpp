/****************************************************************************
** Meta object code from reading C++ file 'LUAEditorFindResults.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/LUA/LUAEditorFindResults.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LUAEditorFindResults.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LUAEditor__FindResultsHighlighter_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__FindResultsHighlighter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__FindResultsHighlighter_t qt_meta_stringdata_LUAEditor__FindResultsHighlighter = {
    {
QT_MOC_LITERAL(0, 0, 33) // "LUAEditor::FindResultsHighlig..."

    },
    "LUAEditor::FindResultsHighlighter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__FindResultsHighlighter[] = {

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

void LUAEditor::FindResultsHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::FindResultsHighlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__FindResultsHighlighter.data,
    qt_meta_data_LUAEditor__FindResultsHighlighter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::FindResultsHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::FindResultsHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__FindResultsHighlighter.stringdata0))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int LUAEditor::FindResultsHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LUAEditor__FindResults_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__FindResults_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__FindResults_t qt_meta_stringdata_LUAEditor__FindResults = {
    {
QT_MOC_LITERAL(0, 0, 22), // "LUAEditor::FindResults"
QT_MOC_LITERAL(1, 23, 14), // "ResultSelected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "FindResultsBlockInfo"
QT_MOC_LITERAL(4, 60, 6), // "result"
QT_MOC_LITERAL(5, 67, 20), // "OnBlockDoubleClicked"
QT_MOC_LITERAL(6, 88, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 101, 5), // "event"
QT_MOC_LITERAL(8, 107, 10), // "QTextBlock"
QT_MOC_LITERAL(9, 118, 5) // "block"

    },
    "LUAEditor::FindResults\0ResultSelected\0"
    "\0FindResultsBlockInfo\0result\0"
    "OnBlockDoubleClicked\0QMouseEvent*\0"
    "event\0QTextBlock\0block"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__FindResults[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,

       0        // eod
};

void LUAEditor::FindResults::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindResults *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ResultSelected((*reinterpret_cast< const FindResultsBlockInfo(*)>(_a[1]))); break;
        case 1: _t->OnBlockDoubleClicked((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindResults::*)(const FindResultsBlockInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindResults::ResultSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::FindResults::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__FindResults.data,
    qt_meta_data_LUAEditor__FindResults,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::FindResults::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::FindResults::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__FindResults.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LUAEditor::FindResults::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void LUAEditor::FindResults::ResultSelected(const FindResultsBlockInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
