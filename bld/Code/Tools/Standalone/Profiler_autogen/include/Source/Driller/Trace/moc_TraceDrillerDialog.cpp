/****************************************************************************
** Meta object code from reading C++ file 'TraceDrillerDialog.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../Code/Tools/Standalone/Source/Driller/Trace/TraceDrillerDialog.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TraceDrillerDialog.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__TraceDrillerDialog_t {
    QByteArrayData data[6];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__TraceDrillerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__TraceDrillerDialog_t qt_meta_stringdata_Driller__TraceDrillerDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Driller::TraceDrillerDialog"
QT_MOC_LITERAL(1, 28, 15), // "OnDataDestroyed"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 24), // "onTextChangeWindowFilter"
QT_MOC_LITERAL(4, 70, 25), // "onTextChangeMessageFilter"
QT_MOC_LITERAL(5, 96, 13) // "UpdateSummary"

    },
    "Driller::TraceDrillerDialog\0OnDataDestroyed\0"
    "\0onTextChangeWindowFilter\0"
    "onTextChangeMessageFilter\0UpdateSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__TraceDrillerDialog[] = {

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
       4,    1,   38,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void Driller::TraceDrillerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceDrillerDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDataDestroyed(); break;
        case 1: _t->onTextChangeWindowFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onTextChangeMessageFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->UpdateSummary(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::TraceDrillerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Driller__TraceDrillerDialog.data,
    qt_meta_data_Driller__TraceDrillerDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::TraceDrillerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::TraceDrillerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__TraceDrillerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Driller::TraceDrillerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_Driller__TraceDrillerLogTab_t {
    QByteArrayData data[4];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__TraceDrillerLogTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__TraceDrillerLogTab_t qt_meta_stringdata_Driller__TraceDrillerLogTab = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Driller::TraceDrillerLogTab"
QT_MOC_LITERAL(1, 28, 21), // "rowsAboutToBeInserted"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 12) // "rowsInserted"

    },
    "Driller::TraceDrillerLogTab\0"
    "rowsAboutToBeInserted\0\0rowsInserted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__TraceDrillerLogTab[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Driller::TraceDrillerLogTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceDrillerLogTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowsAboutToBeInserted(); break;
        case 1: _t->rowsInserted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Driller::TraceDrillerLogTab::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::LogPanel::BaseLogView::staticMetaObject>(),
    qt_meta_stringdata_Driller__TraceDrillerLogTab.data,
    qt_meta_data_Driller__TraceDrillerLogTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::TraceDrillerLogTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::TraceDrillerLogTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__TraceDrillerLogTab.stringdata0))
        return static_cast<void*>(this);
    return AzToolsFramework::LogPanel::BaseLogView::qt_metacast(_clname);
}

int Driller::TraceDrillerLogTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::LogPanel::BaseLogView::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Driller__TraceDrillerLogModel_t {
    QByteArrayData data[4];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__TraceDrillerLogModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__TraceDrillerLogModel_t qt_meta_stringdata_Driller__TraceDrillerLogModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Driller::TraceDrillerLogModel"
QT_MOC_LITERAL(1, 30, 25), // "OnDataCurrentEventChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 14) // "OnDataAddEvent"

    },
    "Driller::TraceDrillerLogModel\0"
    "OnDataCurrentEventChanged\0\0OnDataAddEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__TraceDrillerLogModel[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Driller::TraceDrillerLogModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceDrillerLogModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDataCurrentEventChanged(); break;
        case 1: _t->OnDataAddEvent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Driller::TraceDrillerLogModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_Driller__TraceDrillerLogModel.data,
    qt_meta_data_Driller__TraceDrillerLogModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::TraceDrillerLogModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::TraceDrillerLogModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__TraceDrillerLogModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int Driller::TraceDrillerLogModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
