/****************************************************************************
** Meta object code from reading C++ file 'StyledLogPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Logging/StyledLogPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StyledLogPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogPanel_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogPanel_t qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogPanel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "AzToolsFramework::LogPanel::S..."
QT_MOC_LITERAL(1, 43, 9), // "TabsReset"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 15), // "onLinkActivated"
QT_MOC_LITERAL(4, 70, 4), // "link"
QT_MOC_LITERAL(5, 75, 23), // "onTabCloseButtonPressed"
QT_MOC_LITERAL(6, 99, 8), // "whichTab"
QT_MOC_LITERAL(7, 108, 14), // "onAddTriggered"
QT_MOC_LITERAL(8, 123, 7), // "checked"
QT_MOC_LITERAL(9, 131, 16), // "onResetTriggered"
QT_MOC_LITERAL(10, 148, 18) // "onCopyAllTriggered"

    },
    "AzToolsFramework::LogPanel::StyledLogPanel\0"
    "TabsReset\0\0onLinkActivated\0link\0"
    "onTabCloseButtonPressed\0whichTab\0"
    "onAddTriggered\0checked\0onResetTriggered\0"
    "onCopyAllTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__StyledLogPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       9,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::LogPanel::StyledLogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StyledLogPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TabsReset(); break;
        case 1: _t->onLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onTabCloseButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onAddTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onResetTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onCopyAllTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StyledLogPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StyledLogPanel::TabsReset)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StyledLogPanel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StyledLogPanel::onLinkActivated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::StyledLogPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::TabWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogPanel.data,
    qt_meta_data_AzToolsFramework__LogPanel__StyledLogPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::StyledLogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::StyledLogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogPanel.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::TabWidget::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::StyledLogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::TabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::LogPanel::StyledLogPanel::TabsReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzToolsFramework::LogPanel::StyledLogPanel::onLinkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogTab_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogTab_t qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogTab = {
    {
QT_MOC_LITERAL(0, 0, 40), // "AzToolsFramework::LogPanel::S..."
QT_MOC_LITERAL(1, 41, 15), // "onLinkActivated"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 4), // "link"
QT_MOC_LITERAL(4, 63, 7), // "CopyAll"
QT_MOC_LITERAL(5, 71, 12) // "CopySelected"

    },
    "AzToolsFramework::LogPanel::StyledLogTab\0"
    "onLinkActivated\0\0link\0CopyAll\0"
    "CopySelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__StyledLogTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::LogPanel::StyledLogTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StyledLogTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->CopyAll(); break;
        case 2: _t->CopySelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StyledLogTab::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StyledLogTab::onLinkActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::StyledLogTab::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::TableView::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogTab.data,
    qt_meta_data_AzToolsFramework__LogPanel__StyledLogTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::StyledLogTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::StyledLogTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__StyledLogTab.stringdata0))
        return static_cast<void*>(this);
    return AzQtComponents::TableView::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::StyledLogTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::TableView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AzToolsFramework::LogPanel::StyledLogTab::onLinkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
