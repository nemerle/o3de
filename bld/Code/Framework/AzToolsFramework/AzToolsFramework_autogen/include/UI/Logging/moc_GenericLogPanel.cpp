/****************************************************************************
** Meta object code from reading C++ file 'GenericLogPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Logging/GenericLogPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GenericLogPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogPanel_t {
    QByteArrayData data[3];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogPanel_t qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogPanel = {
    {
QT_MOC_LITERAL(0, 0, 43), // "AzToolsFramework::LogPanel::G..."
QT_MOC_LITERAL(1, 44, 16), // "CommitAddedLines"
QT_MOC_LITERAL(2, 61, 0) // ""

    },
    "AzToolsFramework::LogPanel::GenericLogPanel\0"
    "CommitAddedLines\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__GenericLogPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::LogPanel::GenericLogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GenericLogPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CommitAddedLines(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::GenericLogPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseLogPanel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogPanel.data,
    qt_meta_data_AzToolsFramework__LogPanel__GenericLogPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::GenericLogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::GenericLogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogPanel.stringdata0))
        return static_cast<void*>(this);
    return BaseLogPanel::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::GenericLogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseLogPanel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogTab_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogTab_t qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogTab = {
    {
QT_MOC_LITERAL(0, 0, 41) // "AzToolsFramework::LogPanel::G..."

    },
    "AzToolsFramework::LogPanel::GenericLogTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__GenericLogTab[] = {

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

void AzToolsFramework::LogPanel::GenericLogTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::GenericLogTab::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseLogView::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogTab.data,
    qt_meta_data_AzToolsFramework__LogPanel__GenericLogTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::GenericLogTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::GenericLogTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__GenericLogTab.stringdata0))
        return static_cast<void*>(this);
    return BaseLogView::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::GenericLogTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseLogView::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
