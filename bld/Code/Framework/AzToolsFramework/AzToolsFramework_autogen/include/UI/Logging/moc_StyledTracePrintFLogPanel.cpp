/****************************************************************************
** Meta object code from reading C++ file 'StyledTracePrintFLogPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Logging/StyledTracePrintFLogPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StyledTracePrintFLogPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel_t {
    QByteArrayData data[1];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel_t qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel = {
    {
QT_MOC_LITERAL(0, 0, 53) // "AzToolsFramework::LogPanel::S..."

    },
    "AzToolsFramework::LogPanel::StyledTracePrintFLogPanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel[] = {

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

void AzToolsFramework::LogPanel::StyledTracePrintFLogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::StyledTracePrintFLogPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<StyledLogPanel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel.data,
    qt_meta_data_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::StyledTracePrintFLogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::StyledTracePrintFLogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogPanel.stringdata0))
        return static_cast<void*>(this);
    return StyledLogPanel::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::StyledTracePrintFLogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyledLogPanel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogTab_t {
    QByteArrayData data[4];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogTab_t qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogTab = {
    {
QT_MOC_LITERAL(0, 0, 51), // "AzToolsFramework::LogPanel::S..."
QT_MOC_LITERAL(1, 52, 13), // "DrainMessages"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 5) // "Clear"

    },
    "AzToolsFramework::LogPanel::StyledTracePrintFLogTab\0"
    "DrainMessages\0\0Clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__StyledTracePrintFLogTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::LogPanel::StyledTracePrintFLogTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StyledTracePrintFLogTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DrainMessages(); break;
        case 1: _t->Clear(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::StyledTracePrintFLogTab::staticMetaObject = { {
    QMetaObject::SuperData::link<StyledLogTab::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogTab.data,
    qt_meta_data_AzToolsFramework__LogPanel__StyledTracePrintFLogTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::StyledTracePrintFLogTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::StyledTracePrintFLogTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__StyledTracePrintFLogTab.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AZ::Debug::TraceMessageBus::Handler"))
        return static_cast< AZ::Debug::TraceMessageBus::Handler*>(this);
    return StyledLogTab::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::StyledTracePrintFLogTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StyledLogTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
