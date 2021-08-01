/****************************************************************************
** Meta object code from reading C++ file 'ActorJointBrowseEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/Source/Editor/ActorJointBrowseEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActorJointBrowseEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__ActorJointBrowseEdit_t {
    QByteArrayData data[16];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ActorJointBrowseEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ActorJointBrowseEdit_t qt_meta_stringdata_EMStudio__ActorJointBrowseEdit = {
    {
QT_MOC_LITERAL(0, 0, 30), // "EMStudio::ActorJointBrowseEdit"
QT_MOC_LITERAL(1, 31, 13), // "SelectionDone"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 28), // "AZStd::vector<SelectionItem>"
QT_MOC_LITERAL(4, 75, 14), // "selectedJoints"
QT_MOC_LITERAL(5, 90, 17), // "SelectionRejected"
QT_MOC_LITERAL(6, 108, 24), // "previouslySelectedJoints"
QT_MOC_LITERAL(7, 133, 16), // "SelectionChanged"
QT_MOC_LITERAL(8, 150, 21), // "OnBrowseButtonClicked"
QT_MOC_LITERAL(9, 172, 15), // "OnSelectionDone"
QT_MOC_LITERAL(10, 188, 25), // "OnSelectionDoneMCoreArray"
QT_MOC_LITERAL(11, 214, 27), // "MCore::Array<SelectionItem>"
QT_MOC_LITERAL(12, 242, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(13, 261, 19), // "OnSelectionRejected"
QT_MOC_LITERAL(14, 281, 12), // "OnTextEdited"
QT_MOC_LITERAL(15, 294, 4) // "text"

    },
    "EMStudio::ActorJointBrowseEdit\0"
    "SelectionDone\0\0AZStd::vector<SelectionItem>\0"
    "selectedJoints\0SelectionRejected\0"
    "previouslySelectedJoints\0SelectionChanged\0"
    "OnBrowseButtonClicked\0OnSelectionDone\0"
    "OnSelectionDoneMCoreArray\0"
    "MCore::Array<SelectionItem>\0"
    "OnSelectionChanged\0OnSelectionRejected\0"
    "OnTextEdited\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ActorJointBrowseEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       7,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   68,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void EMStudio::ActorJointBrowseEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActorJointBrowseEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectionDone((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 1: _t->SelectionRejected((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 2: _t->SelectionChanged((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 3: _t->OnBrowseButtonClicked(); break;
        case 4: _t->OnSelectionDone((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 5: _t->OnSelectionDoneMCoreArray((*reinterpret_cast< const MCore::Array<SelectionItem>(*)>(_a[1]))); break;
        case 6: _t->OnSelectionChanged(); break;
        case 7: _t->OnSelectionRejected(); break;
        case 8: _t->OnTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActorJointBrowseEdit::*)(const AZStd::vector<SelectionItem> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActorJointBrowseEdit::SelectionDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActorJointBrowseEdit::*)(const AZStd::vector<SelectionItem> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActorJointBrowseEdit::SelectionRejected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActorJointBrowseEdit::*)(const AZStd::vector<SelectionItem> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActorJointBrowseEdit::SelectionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ActorJointBrowseEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::BrowseEdit::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ActorJointBrowseEdit.data,
    qt_meta_data_EMStudio__ActorJointBrowseEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ActorJointBrowseEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ActorJointBrowseEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ActorJointBrowseEdit.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::BrowseEdit::qt_metacast(_clname);
}

int EMStudio::ActorJointBrowseEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::BrowseEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::ActorJointBrowseEdit::SelectionDone(const AZStd::vector<SelectionItem> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMStudio::ActorJointBrowseEdit::SelectionRejected(const AZStd::vector<SelectionItem> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EMStudio::ActorJointBrowseEdit::SelectionChanged(const AZStd::vector<SelectionItem> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
