/****************************************************************************
** Meta object code from reading C++ file 'SelectDestinationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Editor/AssetImporter/UI/SelectDestinationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectDestinationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectDestinationDialog_t {
    QByteArrayData data[18];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectDestinationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectDestinationDialog_t qt_meta_stringdata_SelectDestinationDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SelectDestinationDialog"
QT_MOC_LITERAL(1, 24, 6), // "GoBack"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "DoCopyFiles"
QT_MOC_LITERAL(4, 44, 11), // "DoMoveFiles"
QT_MOC_LITERAL(5, 56, 21), // "BrowseDestinationPath"
QT_MOC_LITERAL(6, 78, 10), // "QLineEdit*"
QT_MOC_LITERAL(7, 89, 19), // "destinationLineEdit"
QT_MOC_LITERAL(8, 109, 6), // "Cancel"
QT_MOC_LITERAL(9, 116, 23), // "UpdateImportButtonState"
QT_MOC_LITERAL(10, 140, 7), // "enabled"
QT_MOC_LITERAL(11, 148, 23), // "SetDestinationDirectory"
QT_MOC_LITERAL(12, 172, 20), // "destinationDirectory"
QT_MOC_LITERAL(13, 193, 6), // "accept"
QT_MOC_LITERAL(14, 200, 6), // "reject"
QT_MOC_LITERAL(15, 207, 11), // "ShowMessage"
QT_MOC_LITERAL(16, 219, 27), // "OnBrowseDestinationFilePath"
QT_MOC_LITERAL(17, 247, 12) // "ValidatePath"

    },
    "SelectDestinationDialog\0GoBack\0\0"
    "DoCopyFiles\0DoMoveFiles\0BrowseDestinationPath\0"
    "QLineEdit*\0destinationLineEdit\0Cancel\0"
    "UpdateImportButtonState\0enabled\0"
    "SetDestinationDirectory\0destinationDirectory\0"
    "accept\0reject\0ShowMessage\0"
    "OnBrowseDestinationFilePath\0ValidatePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectDestinationDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    1,   81,    2, 0x06 /* Public */,
      11,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   87,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      16,    0,   90,    2, 0x0a /* Public */,
      17,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectDestinationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectDestinationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GoBack(); break;
        case 1: _t->DoCopyFiles(); break;
        case 2: _t->DoMoveFiles(); break;
        case 3: _t->BrowseDestinationPath((*reinterpret_cast< QLineEdit*(*)>(_a[1]))); break;
        case 4: _t->Cancel(); break;
        case 5: _t->UpdateImportButtonState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SetDestinationDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->accept(); break;
        case 8: _t->reject(); break;
        case 9: _t->ShowMessage(); break;
        case 10: _t->OnBrowseDestinationFilePath(); break;
        case 11: _t->ValidatePath(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectDestinationDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectDestinationDialog::GoBack)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SelectDestinationDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectDestinationDialog::DoCopyFiles)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SelectDestinationDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectDestinationDialog::DoMoveFiles)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SelectDestinationDialog::*)(QLineEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectDestinationDialog::BrowseDestinationPath)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SelectDestinationDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectDestinationDialog::Cancel)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SelectDestinationDialog::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectDestinationDialog::UpdateImportButtonState)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SelectDestinationDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectDestinationDialog::SetDestinationDirectory)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelectDestinationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SelectDestinationDialog.data,
    qt_meta_data_SelectDestinationDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelectDestinationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectDestinationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectDestinationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SelectDestinationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SelectDestinationDialog::GoBack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SelectDestinationDialog::DoCopyFiles()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SelectDestinationDialog::DoMoveFiles()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SelectDestinationDialog::BrowseDestinationPath(QLineEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SelectDestinationDialog::Cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SelectDestinationDialog::UpdateImportButtonState(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SelectDestinationDialog::SetDestinationDirectory(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
