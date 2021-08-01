/****************************************************************************
** Meta object code from reading C++ file 'BrowseEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/Widgets/BrowseEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BrowseEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__BrowseEdit_t {
    QByteArrayData data[12];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__BrowseEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__BrowseEdit_t qt_meta_stringdata_AzQtComponents__BrowseEdit = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AzQtComponents::BrowseEdit"
QT_MOC_LITERAL(1, 27, 23), // "attachedButtonTriggered"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 15), // "editingFinished"
QT_MOC_LITERAL(4, 68, 13), // "returnPressed"
QT_MOC_LITERAL(5, 82, 11), // "textChanged"
QT_MOC_LITERAL(6, 94, 4), // "text"
QT_MOC_LITERAL(7, 99, 10), // "textEdited"
QT_MOC_LITERAL(8, 110, 25), // "hasAcceptableInputChanged"
QT_MOC_LITERAL(9, 136, 10), // "acceptable"
QT_MOC_LITERAL(10, 147, 13), // "onTextChanged"
QT_MOC_LITERAL(11, 161, 15) // "acceptableInput"

    },
    "AzQtComponents::BrowseEdit\0"
    "attachedButtonTriggered\0\0editingFinished\0"
    "returnPressed\0textChanged\0text\0"
    "textEdited\0hasAcceptableInputChanged\0"
    "acceptable\0onTextChanged\0acceptableInput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__BrowseEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       5,

       0        // eod
};

void AzQtComponents::BrowseEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowseEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attachedButtonTriggered(); break;
        case 1: _t->editingFinished(); break;
        case 2: _t->returnPressed(); break;
        case 3: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->hasAcceptableInputChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BrowseEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseEdit::attachedButtonTriggered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BrowseEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseEdit::editingFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BrowseEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseEdit::returnPressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BrowseEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseEdit::textChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BrowseEdit::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseEdit::textEdited)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BrowseEdit::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BrowseEdit::hasAcceptableInputChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BrowseEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasAcceptableInput(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::BrowseEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__BrowseEdit.data,
    qt_meta_data_AzQtComponents__BrowseEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::BrowseEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::BrowseEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__BrowseEdit.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::BrowseEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::BrowseEdit::attachedButtonTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::BrowseEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AzQtComponents::BrowseEdit::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AzQtComponents::BrowseEdit::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::BrowseEdit::textEdited(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AzQtComponents::BrowseEdit::hasAcceptableInputChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
