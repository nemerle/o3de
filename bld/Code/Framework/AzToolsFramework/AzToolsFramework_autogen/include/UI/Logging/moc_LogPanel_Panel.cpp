/****************************************************************************
** Meta object code from reading C++ file 'LogPanel_Panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Logging/LogPanel_Panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogPanel_Panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogPanel_t {
    QByteArrayData data[11];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogPanel_t qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogPanel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "AzToolsFramework::LogPanel::B..."
QT_MOC_LITERAL(1, 41, 9), // "TabsReset"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 15), // "onLinkActivated"
QT_MOC_LITERAL(4, 68, 4), // "link"
QT_MOC_LITERAL(5, 73, 11), // "onTabClosed"
QT_MOC_LITERAL(6, 85, 8), // "whichTab"
QT_MOC_LITERAL(7, 94, 12), // "onAddClicked"
QT_MOC_LITERAL(8, 107, 7), // "checked"
QT_MOC_LITERAL(9, 115, 14), // "onResetClicked"
QT_MOC_LITERAL(10, 130, 16) // "onCopyAllClicked"

    },
    "AzToolsFramework::LogPanel::BaseLogPanel\0"
    "TabsReset\0\0onLinkActivated\0link\0"
    "onTabClosed\0whichTab\0onAddClicked\0"
    "checked\0onResetClicked\0onCopyAllClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__BaseLogPanel[] = {

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

void AzToolsFramework::LogPanel::BaseLogPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaseLogPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TabsReset(); break;
        case 1: _t->onLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onTabClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onAddClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onResetClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onCopyAllClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BaseLogPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseLogPanel::TabsReset)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BaseLogPanel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseLogPanel::onLinkActivated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::BaseLogPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogPanel.data,
    qt_meta_data_AzToolsFramework__LogPanel__BaseLogPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::BaseLogPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::BaseLogPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::BaseLogPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void AzToolsFramework::LogPanel::BaseLogPanel::TabsReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzToolsFramework::LogPanel::BaseLogPanel::onLinkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AzToolsFramework__LogPanel__RingBufferLogDataModel_t {
    QByteArrayData data[1];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__RingBufferLogDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__RingBufferLogDataModel_t qt_meta_stringdata_AzToolsFramework__LogPanel__RingBufferLogDataModel = {
    {
QT_MOC_LITERAL(0, 0, 50) // "AzToolsFramework::LogPanel::R..."

    },
    "AzToolsFramework::LogPanel::RingBufferLogDataModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__RingBufferLogDataModel[] = {

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

void AzToolsFramework::LogPanel::RingBufferLogDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::RingBufferLogDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__RingBufferLogDataModel.data,
    qt_meta_data_AzToolsFramework__LogPanel__RingBufferLogDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::RingBufferLogDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::RingBufferLogDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__RingBufferLogDataModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::RingBufferLogDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__LogPanel__ListLogDataModel_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__ListLogDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__ListLogDataModel_t qt_meta_stringdata_AzToolsFramework__LogPanel__ListLogDataModel = {
    {
QT_MOC_LITERAL(0, 0, 44) // "AzToolsFramework::LogPanel::L..."

    },
    "AzToolsFramework::LogPanel::ListLogDataModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__ListLogDataModel[] = {

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

void AzToolsFramework::LogPanel::ListLogDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::ListLogDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__ListLogDataModel.data,
    qt_meta_data_AzToolsFramework__LogPanel__ListLogDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::ListLogDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::ListLogDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__ListLogDataModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::ListLogDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelLayout_t {
    QByteArrayData data[1];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelLayout_t qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelLayout = {
    {
QT_MOC_LITERAL(0, 0, 42) // "AzToolsFramework::LogPanel::L..."

    },
    "AzToolsFramework::LogPanel::LogPanelLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__LogPanelLayout[] = {

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

void AzToolsFramework::LogPanel::LogPanelLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::LogPanelLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QLayout::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelLayout.data,
    qt_meta_data_AzToolsFramework__LogPanel__LogPanelLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::LogPanelLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::LogPanelLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelLayout.stringdata0))
        return static_cast<void*>(this);
    return QLayout::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::LogPanelLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelItemDelegate_t {
    QByteArrayData data[4];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelItemDelegate_t qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 48), // "AzToolsFramework::LogPanel::L..."
QT_MOC_LITERAL(1, 49, 15), // "onLinkActivated"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 4) // "link"

    },
    "AzToolsFramework::LogPanel::LogPanelItemDelegate\0"
    "onLinkActivated\0\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__LogPanelItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void AzToolsFramework::LogPanel::LogPanelItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogPanelItemDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogPanelItemDelegate::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogPanelItemDelegate::onLinkActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::LogPanelItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelItemDelegate.data,
    qt_meta_data_AzToolsFramework__LogPanel__LogPanelItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::LogPanelItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::LogPanelItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__LogPanelItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::LogPanelItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AzToolsFramework::LogPanel::LogPanelItemDelegate::onLinkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
