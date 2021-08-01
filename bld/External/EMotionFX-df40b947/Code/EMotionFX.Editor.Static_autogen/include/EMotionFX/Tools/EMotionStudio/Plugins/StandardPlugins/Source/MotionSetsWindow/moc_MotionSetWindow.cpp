/****************************************************************************
** Meta object code from reading C++ file 'MotionSetWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/MotionSetsWindow/MotionSetWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MotionSetWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__RenameMotionEntryWindow_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__RenameMotionEntryWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__RenameMotionEntryWindow_t qt_meta_stringdata_EMStudio__RenameMotionEntryWindow = {
    {
QT_MOC_LITERAL(0, 0, 33), // "EMStudio::RenameMotionEntryWi..."
QT_MOC_LITERAL(1, 34, 10), // "TextEdited"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 4), // "text"
QT_MOC_LITERAL(4, 51, 8) // "Accepted"

    },
    "EMStudio::RenameMotionEntryWindow\0"
    "TextEdited\0\0text\0Accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__RenameMotionEntryWindow[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void EMStudio::RenameMotionEntryWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenameMotionEntryWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->Accepted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::RenameMotionEntryWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__RenameMotionEntryWindow.data,
    qt_meta_data_EMStudio__RenameMotionEntryWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::RenameMotionEntryWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::RenameMotionEntryWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__RenameMotionEntryWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::RenameMotionEntryWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_EMStudio__MotionEditStringIDWindow_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionEditStringIDWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionEditStringIDWindow_t qt_meta_stringdata_EMStudio__MotionEditStringIDWindow = {
    {
QT_MOC_LITERAL(0, 0, 34), // "EMStudio::MotionEditStringIDW..."
QT_MOC_LITERAL(1, 35, 8), // "Accepted"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "StringABChanged"
QT_MOC_LITERAL(4, 61, 4), // "text"
QT_MOC_LITERAL(5, 66, 19), // "CurrentIndexChanged"
QT_MOC_LITERAL(6, 86, 5) // "index"

    },
    "EMStudio::MotionEditStringIDWindow\0"
    "Accepted\0\0StringABChanged\0text\0"
    "CurrentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionEditStringIDWindow[] = {

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
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void EMStudio::MotionEditStringIDWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionEditStringIDWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Accepted(); break;
        case 1: _t->StringABChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->CurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionEditStringIDWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionEditStringIDWindow.data,
    qt_meta_data_EMStudio__MotionEditStringIDWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionEditStringIDWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionEditStringIDWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionEditStringIDWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::MotionEditStringIDWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_EMStudio__MotionSetTableWidget_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionSetTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionSetTableWidget_t qt_meta_stringdata_EMStudio__MotionSetTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 30) // "EMStudio::MotionSetTableWidget"

    },
    "EMStudio::MotionSetTableWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionSetTableWidget[] = {

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

void EMStudio::MotionSetTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionSetTableWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionSetTableWidget.data,
    qt_meta_data_EMStudio__MotionSetTableWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionSetTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionSetTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionSetTableWidget.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int EMStudio::MotionSetTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMStudio__MotionSetWindow_t {
    QByteArrayData data[23];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MotionSetWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MotionSetWindow_t qt_meta_stringdata_EMStudio__MotionSetWindow = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EMStudio::MotionSetWindow"
QT_MOC_LITERAL(1, 26, 22), // "MotionSelectionChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 15), // "UpdateInterface"
QT_MOC_LITERAL(4, 66, 13), // "OnAddNewEntry"
QT_MOC_LITERAL(5, 80, 13), // "OnLoadEntries"
QT_MOC_LITERAL(6, 94, 15), // "OnRemoveMotions"
QT_MOC_LITERAL(7, 110, 11), // "RenameEntry"
QT_MOC_LITERAL(8, 122, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 140, 4), // "item"
QT_MOC_LITERAL(10, 145, 13), // "OnRenameEntry"
QT_MOC_LITERAL(11, 159, 17), // "OnUnassignMotions"
QT_MOC_LITERAL(12, 177, 14), // "OnCopyMotionID"
QT_MOC_LITERAL(13, 192, 14), // "OnClearMotions"
QT_MOC_LITERAL(14, 207, 12), // "OnEditButton"
QT_MOC_LITERAL(15, 220, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(16, 240, 4), // "text"
QT_MOC_LITERAL(17, 245, 20), // "OnEntryDoubleClicked"
QT_MOC_LITERAL(18, 266, 9), // "dropEvent"
QT_MOC_LITERAL(19, 276, 11), // "QDropEvent*"
QT_MOC_LITERAL(20, 288, 5), // "event"
QT_MOC_LITERAL(21, 294, 14), // "dragEnterEvent"
QT_MOC_LITERAL(22, 309, 16) // "QDragEnterEvent*"

    },
    "EMStudio::MotionSetWindow\0"
    "MotionSelectionChanged\0\0UpdateInterface\0"
    "OnAddNewEntry\0OnLoadEntries\0OnRemoveMotions\0"
    "RenameEntry\0QTableWidgetItem*\0item\0"
    "OnRenameEntry\0OnUnassignMotions\0"
    "OnCopyMotionID\0OnClearMotions\0"
    "OnEditButton\0OnTextFilterChanged\0text\0"
    "OnEntryDoubleClicked\0dropEvent\0"
    "QDropEvent*\0event\0dragEnterEvent\0"
    "QDragEnterEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MotionSetWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    1,   94,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    1,  102,    2, 0x0a /* Public */,
      17,    1,  105,    2, 0x0a /* Public */,
      18,    1,  108,    2, 0x0a /* Public */,
      21,    1,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,

       0        // eod
};

void EMStudio::MotionSetWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MotionSetWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MotionSelectionChanged(); break;
        case 1: _t->UpdateInterface(); break;
        case 2: _t->OnAddNewEntry(); break;
        case 3: _t->OnLoadEntries(); break;
        case 4: _t->OnRemoveMotions(); break;
        case 5: _t->RenameEntry((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->OnRenameEntry(); break;
        case 7: _t->OnUnassignMotions(); break;
        case 8: _t->OnCopyMotionID(); break;
        case 9: _t->OnClearMotions(); break;
        case 10: _t->OnEditButton(); break;
        case 11: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->OnEntryDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 14: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MotionSetWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MotionSetWindow::MotionSelectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MotionSetWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MotionSetWindow.data,
    qt_meta_data_EMStudio__MotionSetWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MotionSetWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MotionSetWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MotionSetWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::MotionSetWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::MotionSetWindow::MotionSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
