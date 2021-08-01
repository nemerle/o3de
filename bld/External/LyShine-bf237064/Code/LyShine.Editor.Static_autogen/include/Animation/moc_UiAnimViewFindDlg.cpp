/****************************************************************************
** Meta object code from reading C++ file 'UiAnimViewFindDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Gems/LyShine/Code/Editor/Animation/UiAnimViewFindDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UiAnimViewFindDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CUiAnimViewFindDlg_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CUiAnimViewFindDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CUiAnimViewFindDlg_t qt_meta_stringdata_CUiAnimViewFindDlg = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CUiAnimViewFindDlg"
QT_MOC_LITERAL(1, 19, 4), // "OnOK"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "OnCancel"
QT_MOC_LITERAL(4, 34, 14), // "OnFilterChange"
QT_MOC_LITERAL(5, 49, 4), // "text"
QT_MOC_LITERAL(6, 54, 19) // "OnItemDoubleClicked"

    },
    "CUiAnimViewFindDlg\0OnOK\0\0OnCancel\0"
    "OnFilterChange\0text\0OnItemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CUiAnimViewFindDlg[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       6,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void CUiAnimViewFindDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CUiAnimViewFindDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOK(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnFilterChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OnItemDoubleClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CUiAnimViewFindDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CUiAnimViewFindDlg.data,
    qt_meta_data_CUiAnimViewFindDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CUiAnimViewFindDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CUiAnimViewFindDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CUiAnimViewFindDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CUiAnimViewFindDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
