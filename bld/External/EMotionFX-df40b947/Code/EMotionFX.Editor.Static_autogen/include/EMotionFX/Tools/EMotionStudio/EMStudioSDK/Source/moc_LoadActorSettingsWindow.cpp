/****************************************************************************
** Meta object code from reading C++ file 'LoadActorSettingsWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/EMStudioSDK/Source/LoadActorSettingsWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoadActorSettingsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__LoadActorSettingsWindow_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__LoadActorSettingsWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__LoadActorSettingsWindow_t qt_meta_stringdata_EMStudio__LoadActorSettingsWindow = {
    {
QT_MOC_LITERAL(0, 0, 33), // "EMStudio::LoadActorSettingsWi..."
QT_MOC_LITERAL(1, 34, 8), // "Accepted"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 17), // "LoadMeshesClicked"
QT_MOC_LITERAL(4, 62, 7), // "checked"
QT_MOC_LITERAL(5, 70, 23) // "LoadSkinningInfoClicked"

    },
    "EMStudio::LoadActorSettingsWindow\0"
    "Accepted\0\0LoadMeshesClicked\0checked\0"
    "LoadSkinningInfoClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__LoadActorSettingsWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void EMStudio::LoadActorSettingsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadActorSettingsWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Accepted(); break;
        case 1: _t->LoadMeshesClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->LoadSkinningInfoClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::LoadActorSettingsWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__LoadActorSettingsWindow.data,
    qt_meta_data_EMStudio__LoadActorSettingsWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::LoadActorSettingsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::LoadActorSettingsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__LoadActorSettingsWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::LoadActorSettingsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
