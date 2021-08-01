/****************************************************************************
** Meta object code from reading C++ file 'MorphTargetEditWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/MorphTargetsWindow/MorphTargetEditWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MorphTargetEditWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MorphTargetEditWindow_t {
    QByteArrayData data[7];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MorphTargetEditWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MorphTargetEditWindow_t qt_meta_stringdata_EMStudio__MorphTargetEditWindow = {
    {
QT_MOC_LITERAL(0, 0, 31), // "EMStudio::MorphTargetEditWindow"
QT_MOC_LITERAL(1, 32, 8), // "Accepted"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "MorphTargetRangeMinValueChanged"
QT_MOC_LITERAL(4, 74, 5), // "value"
QT_MOC_LITERAL(5, 80, 31), // "MorphTargetRangeMaxValueChanged"
QT_MOC_LITERAL(6, 112, 24) // "EditPhonemeButtonClicked"

    },
    "EMStudio::MorphTargetEditWindow\0"
    "Accepted\0\0MorphTargetRangeMinValueChanged\0"
    "value\0MorphTargetRangeMaxValueChanged\0"
    "EditPhonemeButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MorphTargetEditWindow[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,

       0        // eod
};

void EMStudio::MorphTargetEditWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MorphTargetEditWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Accepted(); break;
        case 1: _t->MorphTargetRangeMinValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->MorphTargetRangeMaxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->EditPhonemeButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MorphTargetEditWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MorphTargetEditWindow.data,
    qt_meta_data_EMStudio__MorphTargetEditWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MorphTargetEditWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MorphTargetEditWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MorphTargetEditWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::MorphTargetEditWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
