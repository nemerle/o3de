/****************************************************************************
** Meta object code from reading C++ file 'UIFramework.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/LegacyFramework/UIFramework.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UIFramework.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__QTickBusTicker_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__QTickBusTicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__QTickBusTicker_t qt_meta_stringdata_AzToolsFramework__QTickBusTicker = {
    {
QT_MOC_LITERAL(0, 0, 32), // "AzToolsFramework::QTickBusTicker"
QT_MOC_LITERAL(1, 33, 8), // "finished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "doTick"
QT_MOC_LITERAL(4, 50, 7), // "process"
QT_MOC_LITERAL(5, 58, 6) // "cancel"

    },
    "AzToolsFramework::QTickBusTicker\0"
    "finished\0\0doTick\0process\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__QTickBusTicker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::QTickBusTicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTickBusTicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->doTick(); break;
        case 2: _t->process(); break;
        case 3: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTickBusTicker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTickBusTicker::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTickBusTicker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTickBusTicker::doTick)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::QTickBusTicker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__QTickBusTicker.data,
    qt_meta_data_AzToolsFramework__QTickBusTicker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::QTickBusTicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::QTickBusTicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__QTickBusTicker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::QTickBusTicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AzToolsFramework::QTickBusTicker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzToolsFramework::QTickBusTicker::doTick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__Framework_t {
    QByteArrayData data[13];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__Framework_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__Framework_t qt_meta_stringdata_AzToolsFramework__Framework = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AzToolsFramework::Framework"
QT_MOC_LITERAL(1, 28, 14), // "performBusTick"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 25), // "BootStrapRemainingSystems"
QT_MOC_LITERAL(4, 70, 17), // "onActionDestroyed"
QT_MOC_LITERAL(5, 88, 7), // "pObject"
QT_MOC_LITERAL(6, 96, 19), // "CheckForReadyToQuit"
QT_MOC_LITERAL(7, 116, 17), // "OnMenuPreferences"
QT_MOC_LITERAL(8, 134, 10), // "OnMenuQuit"
QT_MOC_LITERAL(9, 145, 21), // "OnShowWindowTriggered"
QT_MOC_LITERAL(10, 167, 8), // "QAction*"
QT_MOC_LITERAL(11, 176, 6), // "action"
QT_MOC_LITERAL(12, 183, 22) // "UserWantsToQuitProcess"

    },
    "AzToolsFramework::Framework\0performBusTick\0"
    "\0BootStrapRemainingSystems\0onActionDestroyed\0"
    "pObject\0CheckForReadyToQuit\0"
    "OnMenuPreferences\0OnMenuQuit\0"
    "OnShowWindowTriggered\0QAction*\0action\0"
    "UserWantsToQuitProcess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__Framework[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::Framework::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Framework *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->performBusTick(); break;
        case 1: _t->BootStrapRemainingSystems(); break;
        case 2: _t->onActionDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->CheckForReadyToQuit(); break;
        case 4: _t->OnMenuPreferences(); break;
        case 5: _t->OnMenuQuit(); break;
        case 6: _t->OnShowWindowTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->UserWantsToQuitProcess(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::Framework::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__Framework.data,
    qt_meta_data_AzToolsFramework__Framework,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::Framework::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::Framework::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__Framework.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AZ::Component"))
        return static_cast< AZ::Component*>(this);
    if (!strcmp(_clname, "FrameworkMessages::Handler"))
        return static_cast< FrameworkMessages::Handler*>(this);
    if (!strcmp(_clname, "LegacyFramework::CoreMessageBus::Handler"))
        return static_cast< LegacyFramework::CoreMessageBus::Handler*>(this);
    if (!strcmp(_clname, "AZ::SystemTickBus::Handler"))
        return static_cast< AZ::SystemTickBus::Handler*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::Framework::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__AZPreferencesView_t {
    QByteArrayData data[4];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AZPreferencesView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AZPreferencesView_t qt_meta_stringdata_AzToolsFramework__AZPreferencesView = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AzToolsFramework::AZPreferenc..."
QT_MOC_LITERAL(1, 36, 15), // "OnDoubleClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 11) // "QModelIndex"

    },
    "AzToolsFramework::AZPreferencesView\0"
    "OnDoubleClicked\0\0QModelIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AZPreferencesView[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void AzToolsFramework::AZPreferencesView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AZPreferencesView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AZPreferencesView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AZPreferencesView.data,
    qt_meta_data_AzToolsFramework__AZPreferencesView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AZPreferencesView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AZPreferencesView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AZPreferencesView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int AzToolsFramework::AZPreferencesView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AzToolsFramework__AZPreferencesDataModel_t {
    QByteArrayData data[1];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AZPreferencesDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AZPreferencesDataModel_t qt_meta_stringdata_AzToolsFramework__AZPreferencesDataModel = {
    {
QT_MOC_LITERAL(0, 0, 40) // "AzToolsFramework::AZPreferenc..."

    },
    "AzToolsFramework::AZPreferencesDataModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AZPreferencesDataModel[] = {

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

void AzToolsFramework::AZPreferencesDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AZPreferencesDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AZPreferencesDataModel.data,
    qt_meta_data_AzToolsFramework__AZPreferencesDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AZPreferencesDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AZPreferencesDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AZPreferencesDataModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int AzToolsFramework::AZPreferencesDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
