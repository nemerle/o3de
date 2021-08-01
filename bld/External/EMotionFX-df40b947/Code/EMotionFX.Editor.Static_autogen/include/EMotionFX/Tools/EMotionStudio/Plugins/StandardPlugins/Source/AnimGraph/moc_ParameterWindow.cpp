/****************************************************************************
** Meta object code from reading C++ file 'ParameterWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/ParameterWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__ParameterCreateRenameWindow_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ParameterCreateRenameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ParameterCreateRenameWindow_t qt_meta_stringdata_EMStudio__ParameterCreateRenameWindow = {
    {
QT_MOC_LITERAL(0, 0, 37), // "EMStudio::ParameterCreateRena..."
QT_MOC_LITERAL(1, 38, 15), // "NameEditChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 4) // "text"

    },
    "EMStudio::ParameterCreateRenameWindow\0"
    "NameEditChanged\0\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ParameterCreateRenameWindow[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void EMStudio::ParameterCreateRenameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterCreateRenameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NameEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ParameterCreateRenameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ParameterCreateRenameWindow.data,
    qt_meta_data_EMStudio__ParameterCreateRenameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ParameterCreateRenameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ParameterCreateRenameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ParameterCreateRenameWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::ParameterCreateRenameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_EMStudio__ParameterWindow_t {
    QByteArrayData data[34];
    char stringdata0[550];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ParameterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ParameterWindow_t qt_meta_stringdata_EMStudio__ParameterWindow = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EMStudio::ParameterWindow"
QT_MOC_LITERAL(1, 26, 26), // "OnParameterActionTriggered"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 32), // "const EMotionFX::ValueParameter*"
QT_MOC_LITERAL(4, 87, 14), // "valueParameter"
QT_MOC_LITERAL(5, 102, 20), // "UpdateParameterValue"
QT_MOC_LITERAL(6, 123, 27), // "const EMotionFX::Parameter*"
QT_MOC_LITERAL(7, 151, 9), // "parameter"
QT_MOC_LITERAL(8, 161, 22), // "OnRecorderStateChanged"
QT_MOC_LITERAL(9, 184, 18), // "OnMakeDefaultValue"
QT_MOC_LITERAL(10, 203, 14), // "OnAddParameter"
QT_MOC_LITERAL(11, 218, 10), // "OnAddGroup"
QT_MOC_LITERAL(12, 229, 16), // "OnRemoveSelected"
QT_MOC_LITERAL(13, 246, 12), // "OnEditButton"
QT_MOC_LITERAL(14, 259, 15), // "UpdateInterface"
QT_MOC_LITERAL(15, 275, 13), // "OnClearButton"
QT_MOC_LITERAL(16, 289, 16), // "OnGroupCollapsed"
QT_MOC_LITERAL(17, 306, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(18, 323, 4), // "item"
QT_MOC_LITERAL(19, 328, 15), // "OnGroupExpanded"
QT_MOC_LITERAL(20, 344, 24), // "OnGroupParameterSelected"
QT_MOC_LITERAL(21, 369, 17), // "OnMoveParameterTo"
QT_MOC_LITERAL(22, 387, 3), // "idx"
QT_MOC_LITERAL(23, 391, 6), // "parent"
QT_MOC_LITERAL(24, 398, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(25, 418, 4), // "text"
QT_MOC_LITERAL(26, 423, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(27, 442, 22), // "OnGamepadControlToggle"
QT_MOC_LITERAL(28, 465, 14), // "OnFocusChanged"
QT_MOC_LITERAL(29, 480, 11), // "QModelIndex"
QT_MOC_LITERAL(30, 492, 13), // "newFocusIndex"
QT_MOC_LITERAL(31, 506, 14), // "newFocusParent"
QT_MOC_LITERAL(32, 521, 13), // "oldFocusIndex"
QT_MOC_LITERAL(33, 535, 14) // "oldFocusParent"

    },
    "EMStudio::ParameterWindow\0"
    "OnParameterActionTriggered\0\0"
    "const EMotionFX::ValueParameter*\0"
    "valueParameter\0UpdateParameterValue\0"
    "const EMotionFX::Parameter*\0parameter\0"
    "OnRecorderStateChanged\0OnMakeDefaultValue\0"
    "OnAddParameter\0OnAddGroup\0OnRemoveSelected\0"
    "OnEditButton\0UpdateInterface\0OnClearButton\0"
    "OnGroupCollapsed\0QTreeWidgetItem*\0"
    "item\0OnGroupExpanded\0OnGroupParameterSelected\0"
    "OnMoveParameterTo\0idx\0parent\0"
    "OnTextFilterChanged\0text\0OnSelectionChanged\0"
    "OnGamepadControlToggle\0OnFocusChanged\0"
    "QModelIndex\0newFocusIndex\0newFocusParent\0"
    "oldFocusIndex\0oldFocusParent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ParameterWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  107,    2, 0x0a /* Public */,
       8,    0,  110,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x0a /* Public */,
      10,    0,  112,    2, 0x0a /* Public */,
      11,    0,  113,    2, 0x0a /* Public */,
      12,    0,  114,    2, 0x0a /* Public */,
      13,    0,  115,    2, 0x0a /* Public */,
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    1,  118,    2, 0x08 /* Private */,
      19,    1,  121,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    3,  125,    2, 0x08 /* Private */,
      24,    1,  132,    2, 0x08 /* Private */,
      26,    0,  135,    2, 0x08 /* Private */,
      27,    0,  136,    2, 0x08 /* Private */,
      28,    4,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   22,    7,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29, 0x80000000 | 29, 0x80000000 | 29,   30,   31,   32,   33,

       0        // eod
};

void EMStudio::ParameterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnParameterActionTriggered((*reinterpret_cast< const EMotionFX::ValueParameter*(*)>(_a[1]))); break;
        case 1: _t->UpdateParameterValue((*reinterpret_cast< const EMotionFX::Parameter*(*)>(_a[1]))); break;
        case 2: _t->OnRecorderStateChanged(); break;
        case 3: _t->OnMakeDefaultValue(); break;
        case 4: _t->OnAddParameter(); break;
        case 5: _t->OnAddGroup(); break;
        case 6: _t->OnRemoveSelected(); break;
        case 7: _t->OnEditButton(); break;
        case 8: _t->UpdateInterface(); break;
        case 9: _t->OnClearButton(); break;
        case 10: _t->OnGroupCollapsed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->OnGroupExpanded((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->OnGroupParameterSelected(); break;
        case 13: _t->OnMoveParameterTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->OnSelectionChanged(); break;
        case 16: _t->OnGamepadControlToggle(); break;
        case 17: _t->OnFocusChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterWindow::*)(const EMotionFX::ValueParameter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterWindow::OnParameterActionTriggered)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ParameterWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ParameterWindow.data,
    qt_meta_data_EMStudio__ParameterWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ParameterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ParameterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ParameterWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EMotionFX::AnimGraphNotificationBus::Handler"))
        return static_cast< EMotionFX::AnimGraphNotificationBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::ParameterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::ParameterWindow::OnParameterActionTriggered(const EMotionFX::ValueParameter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EMStudio__ParameterWindowTreeWidget_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ParameterWindowTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ParameterWindowTreeWidget_t qt_meta_stringdata_EMStudio__ParameterWindowTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 35), // "EMStudio::ParameterWindowTree..."
QT_MOC_LITERAL(1, 36, 14), // "ParameterMoved"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 3), // "idx"
QT_MOC_LITERAL(4, 56, 9), // "parameter"
QT_MOC_LITERAL(5, 66, 6), // "parent"
QT_MOC_LITERAL(6, 73, 9) // "DragEnded"

    },
    "EMStudio::ParameterWindowTreeWidget\0"
    "ParameterMoved\0\0idx\0parameter\0parent\0"
    "DragEnded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ParameterWindowTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       6,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void EMStudio::ParameterWindowTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterWindowTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ParameterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->DragEnded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterWindowTreeWidget::*)(int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterWindowTreeWidget::ParameterMoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParameterWindowTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterWindowTreeWidget::DragEnded)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ParameterWindowTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ParameterWindowTreeWidget.data,
    qt_meta_data_EMStudio__ParameterWindowTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ParameterWindowTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ParameterWindowTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ParameterWindowTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int EMStudio::ParameterWindowTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EMStudio::ParameterWindowTreeWidget::ParameterMoved(int _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMStudio::ParameterWindowTreeWidget::DragEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
