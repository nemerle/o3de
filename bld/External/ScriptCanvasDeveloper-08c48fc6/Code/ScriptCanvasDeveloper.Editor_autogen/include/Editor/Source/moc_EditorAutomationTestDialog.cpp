/****************************************************************************
** Meta object code from reading C++ file 'EditorAutomationTestDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Gems/ScriptCanvasDeveloper/Code/Editor/Source/EditorAutomationTestDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorAutomationTestDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptCanvasDeveloper__TestListModel_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasDeveloper__TestListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasDeveloper__TestListModel_t qt_meta_stringdata_ScriptCanvasDeveloper__TestListModel = {
    {
QT_MOC_LITERAL(0, 0, 36) // "ScriptCanvasDeveloper::TestLi..."

    },
    "ScriptCanvasDeveloper::TestListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasDeveloper__TestListModel[] = {

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

void ScriptCanvasDeveloper::TestListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasDeveloper::TestListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasDeveloper__TestListModel.data,
    qt_meta_data_ScriptCanvasDeveloper__TestListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasDeveloper::TestListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasDeveloper::TestListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasDeveloper__TestListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int ScriptCanvasDeveloper::TestListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ScriptCanvasDeveloper__EditorAutomationTestDialog_t {
    QByteArrayData data[1];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptCanvasDeveloper__EditorAutomationTestDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptCanvasDeveloper__EditorAutomationTestDialog_t qt_meta_stringdata_ScriptCanvasDeveloper__EditorAutomationTestDialog = {
    {
QT_MOC_LITERAL(0, 0, 49) // "ScriptCanvasDeveloper::Editor..."

    },
    "ScriptCanvasDeveloper::EditorAutomationTestDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptCanvasDeveloper__EditorAutomationTestDialog[] = {

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

void ScriptCanvasDeveloper::EditorAutomationTestDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScriptCanvasDeveloper::EditorAutomationTestDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ScriptCanvasDeveloper__EditorAutomationTestDialog.data,
    qt_meta_data_ScriptCanvasDeveloper__EditorAutomationTestDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScriptCanvasDeveloper::EditorAutomationTestDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptCanvasDeveloper::EditorAutomationTestDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptCanvasDeveloper__EditorAutomationTestDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AZ::SystemTickBus::Handler"))
        return static_cast< AZ::SystemTickBus::Handler*>(this);
    if (!strcmp(_clname, "EditorAutomationTestDialogRequestBus::Handler"))
        return static_cast< EditorAutomationTestDialogRequestBus::Handler*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScriptCanvasDeveloper::EditorAutomationTestDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
