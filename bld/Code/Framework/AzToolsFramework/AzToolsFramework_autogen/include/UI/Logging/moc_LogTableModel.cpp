/****************************************************************************
** Meta object code from reading C++ file 'LogTableModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Logging/LogTableModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogTableModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__Logging__LogTableModel_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__Logging__LogTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__Logging__LogTableModel_t qt_meta_stringdata_AzToolsFramework__Logging__LogTableModel = {
    {
QT_MOC_LITERAL(0, 0, 40) // "AzToolsFramework::Logging::Lo..."

    },
    "AzToolsFramework::Logging::LogTableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__Logging__LogTableModel[] = {

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

void AzToolsFramework::Logging::LogTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::Logging::LogTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::TableViewModel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__Logging__LogTableModel.data,
    qt_meta_data_AzToolsFramework__Logging__LogTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::Logging::LogTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::Logging::LogTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__Logging__LogTableModel.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::TableViewModel::qt_metacast(_clname);
}

int AzToolsFramework::Logging::LogTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::TableViewModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__Logging__ContextDetailsLogTableModel_t {
    QByteArrayData data[1];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__Logging__ContextDetailsLogTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__Logging__ContextDetailsLogTableModel_t qt_meta_stringdata_AzToolsFramework__Logging__ContextDetailsLogTableModel = {
    {
QT_MOC_LITERAL(0, 0, 54) // "AzToolsFramework::Logging::Co..."

    },
    "AzToolsFramework::Logging::ContextDetailsLogTableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__Logging__ContextDetailsLogTableModel[] = {

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

void AzToolsFramework::Logging::ContextDetailsLogTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::Logging::ContextDetailsLogTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::TableViewModel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__Logging__ContextDetailsLogTableModel.data,
    qt_meta_data_AzToolsFramework__Logging__ContextDetailsLogTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::Logging::ContextDetailsLogTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::Logging::ContextDetailsLogTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__Logging__ContextDetailsLogTableModel.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::TableViewModel::qt_metacast(_clname);
}

int AzToolsFramework::Logging::ContextDetailsLogTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::TableViewModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
