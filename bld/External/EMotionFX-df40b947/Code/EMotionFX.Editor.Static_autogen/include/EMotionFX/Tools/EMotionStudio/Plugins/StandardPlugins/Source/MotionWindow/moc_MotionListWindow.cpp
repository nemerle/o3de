/****************************************************************************
** Meta object code from reading C++ file 'MotionListWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/MotionWindow/MotionListWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionListWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MotionTableWidget_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionTableWidget_t qt_meta_stringdata_EMStudio__MotionTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 27) // "EMStudio::MotionTableWidget"

    },
    "EMStudio::MotionTableWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionTableWidget[] = {

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

void EMStudio::MotionTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionTableWidget.data,
    qt_meta_data_EMStudio__MotionTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int EMStudio::MotionTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMStudio__MotionListWindow_t {
    QByteArrayData data[11];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionListWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionListWindow_t qt_meta_stringdata_EMStudio__MotionListWindow = {
    {
QT_MOC_LITERAL(0, 0, 26), // "EMStudio::MotionListWindow"
QT_MOC_LITERAL(1, 27, 22), // "MotionSelectionChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "SaveRequested"
QT_MOC_LITERAL(4, 65, 22), // "RemoveMotionsRequested"
QT_MOC_LITERAL(5, 88, 17), // "cellDoubleClicked"
QT_MOC_LITERAL(6, 106, 3), // "row"
QT_MOC_LITERAL(7, 110, 6), // "column"
QT_MOC_LITERAL(8, 117, 20), // "itemSelectionChanged"
QT_MOC_LITERAL(9, 138, 32), // "OnAddMotionsInSelectedMotionSets"
QT_MOC_LITERAL(10, 171, 19) // "OnOpenInFileBrowser"

    },
    "EMStudio::MotionListWindow\0"
    "MotionSelectionChanged\0\0SaveRequested\0"
    "RemoveMotionsRequested\0cellDoubleClicked\0"
    "row\0column\0itemSelectionChanged\0"
    "OnAddMotionsInSelectedMotionSets\0"
    "OnOpenInFileBrowser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionListWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   52,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::MotionListWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionListWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MotionSelectionChanged(); break;
        case 1: _t->SaveRequested(); break;
        case 2: _t->RemoveMotionsRequested(); break;
        case 3: _t->cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->itemSelectionChanged(); break;
        case 5: _t->OnAddMotionsInSelectedMotionSets(); break;
        case 6: _t->OnOpenInFileBrowser(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotionListWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionListWindow::MotionSelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MotionListWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionListWindow::SaveRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MotionListWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionListWindow::RemoveMotionsRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionListWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionListWindow.data,
    qt_meta_data_EMStudio__MotionListWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionListWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionListWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionListWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::MotionListWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::MotionListWindow::MotionSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EMStudio::MotionListWindow::SaveRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EMStudio::MotionListWindow::RemoveMotionsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
