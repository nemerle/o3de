/****************************************************************************
** Meta object code from reading C++ file 'LineEditValidatable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/LineEditValidatable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LineEditValidatable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__LineEditValidatable_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__LineEditValidatable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__LineEditValidatable_t qt_meta_stringdata_EMStudio__LineEditValidatable = {
    {
QT_MOC_LITERAL(0, 0, 29), // "EMStudio::LineEditValidatable"
QT_MOC_LITERAL(1, 30, 19), // "TextEditingFinished"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 11), // "TextChanged"
QT_MOC_LITERAL(4, 63, 13), // "OnTextChanged"
QT_MOC_LITERAL(5, 77, 17) // "OnEditingFinished"

    },
    "EMStudio::LineEditValidatable\0"
    "TextEditingFinished\0\0TextChanged\0"
    "OnTextChanged\0OnEditingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__LineEditValidatable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::LineEditValidatable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineEditValidatable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextEditingFinished(); break;
        case 1: _t->TextChanged(); break;
        case 2: _t->OnTextChanged(); break;
        case 3: _t->OnEditingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LineEditValidatable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LineEditValidatable::TextEditingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LineEditValidatable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LineEditValidatable::TextChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::LineEditValidatable::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__LineEditValidatable.data,
    qt_meta_data_EMStudio__LineEditValidatable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::LineEditValidatable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::LineEditValidatable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__LineEditValidatable.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int EMStudio::LineEditValidatable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::LineEditValidatable::TextEditingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EMStudio::LineEditValidatable::TextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
