/****************************************************************************
** Meta object code from reading C++ file 'GraphCanvasComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Gems/GraphCanvas/Code/Source/Widgets/GraphCanvasComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphCanvasComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxFilterProxyModel_t qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 48) // "GraphCanvas::GraphCanvasCombo..."

    },
    "GraphCanvas::GraphCanvasComboBoxFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__GraphCanvasComboBoxFilterProxyModel[] = {

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

void GraphCanvas::GraphCanvasComboBoxFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::GraphCanvasComboBoxFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxFilterProxyModel.data,
    qt_meta_data_GraphCanvas__GraphCanvasComboBoxFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::GraphCanvasComboBoxFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::GraphCanvasComboBoxFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int GraphCanvas::GraphCanvasComboBoxFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxMenu_t {
    QByteArrayData data[10];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxMenu_t qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxMenu = {
    {
QT_MOC_LITERAL(0, 0, 36), // "GraphCanvas::GraphCanvasCombo..."
QT_MOC_LITERAL(1, 37, 15), // "OnIndexSelected"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 66, 5), // "index"
QT_MOC_LITERAL(5, 72, 17), // "VisibilityChanged"
QT_MOC_LITERAL(6, 90, 10), // "visibility"
QT_MOC_LITERAL(7, 101, 10), // "CancelMenu"
QT_MOC_LITERAL(8, 112, 9), // "OnFocusIn"
QT_MOC_LITERAL(9, 122, 10) // "OnFocusOut"

    },
    "GraphCanvas::GraphCanvasComboBoxMenu\0"
    "OnIndexSelected\0\0QModelIndex\0index\0"
    "VisibilityChanged\0visibility\0CancelMenu\0"
    "OnFocusIn\0OnFocusOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__GraphCanvasComboBoxMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    0,   45,    2, 0x06 /* Public */,
       8,    0,   46,    2, 0x06 /* Public */,
       9,    0,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphCanvas::GraphCanvasComboBoxMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphCanvasComboBoxMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnIndexSelected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->VisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->CancelMenu(); break;
        case 3: _t->OnFocusIn(); break;
        case 4: _t->OnFocusOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphCanvasComboBoxMenu::*)(QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBoxMenu::OnIndexSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBoxMenu::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBoxMenu::VisibilityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBoxMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBoxMenu::CancelMenu)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBoxMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBoxMenu::OnFocusIn)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBoxMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBoxMenu::OnFocusOut)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::GraphCanvasComboBoxMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxMenu.data,
    qt_meta_data_GraphCanvas__GraphCanvasComboBoxMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::GraphCanvasComboBoxMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::GraphCanvasComboBoxMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__GraphCanvasComboBoxMenu.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GraphCanvas::GraphCanvasComboBoxMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GraphCanvas::GraphCanvasComboBoxMenu::OnIndexSelected(QModelIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphCanvas::GraphCanvasComboBoxMenu::VisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphCanvas::GraphCanvasComboBoxMenu::CancelMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GraphCanvas::GraphCanvasComboBoxMenu::OnFocusIn()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GraphCanvas::GraphCanvasComboBoxMenu::OnFocusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_GraphCanvas__GraphCanvasComboBox_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__GraphCanvasComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__GraphCanvasComboBox_t qt_meta_stringdata_GraphCanvas__GraphCanvasComboBox = {
    {
QT_MOC_LITERAL(0, 0, 32), // "GraphCanvas::GraphCanvasComboBox"
QT_MOC_LITERAL(1, 33, 20), // "SelectedIndexChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 67, 5), // "index"
QT_MOC_LITERAL(5, 73, 20), // "OnUserActionComplete"
QT_MOC_LITERAL(6, 94, 20), // "OnMenuAboutToDisplay"
QT_MOC_LITERAL(7, 115, 9), // "OnFocusIn"
QT_MOC_LITERAL(8, 125, 10) // "OnFocusOut"

    },
    "GraphCanvas::GraphCanvasComboBox\0"
    "SelectedIndexChanged\0\0QModelIndex\0"
    "index\0OnUserActionComplete\0"
    "OnMenuAboutToDisplay\0OnFocusIn\0"
    "OnFocusOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__GraphCanvasComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,
       7,    0,   44,    2, 0x06 /* Public */,
       8,    0,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphCanvas::GraphCanvasComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphCanvasComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectedIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->OnUserActionComplete(); break;
        case 2: _t->OnMenuAboutToDisplay(); break;
        case 3: _t->OnFocusIn(); break;
        case 4: _t->OnFocusOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphCanvasComboBox::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBox::SelectedIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBox::OnUserActionComplete)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBox::OnMenuAboutToDisplay)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBox::OnFocusIn)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GraphCanvasComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphCanvasComboBox::OnFocusOut)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::GraphCanvasComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__GraphCanvasComboBox.data,
    qt_meta_data_GraphCanvas__GraphCanvasComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::GraphCanvasComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::GraphCanvasComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__GraphCanvasComboBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ViewNotificationBus::Handler"))
        return static_cast< ViewNotificationBus::Handler*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int GraphCanvas::GraphCanvasComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GraphCanvas::GraphCanvasComboBox::SelectedIndexChanged(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphCanvas::GraphCanvasComboBox::OnUserActionComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GraphCanvas::GraphCanvasComboBox::OnMenuAboutToDisplay()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GraphCanvas::GraphCanvasComboBox::OnFocusIn()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GraphCanvas::GraphCanvasComboBox::OnFocusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
