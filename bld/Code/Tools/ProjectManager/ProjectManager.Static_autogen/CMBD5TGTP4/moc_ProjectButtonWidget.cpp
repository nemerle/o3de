/****************************************************************************
** Meta object code from reading C++ file 'ProjectButtonWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/ProjectManager/Source/ProjectButtonWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectButtonWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_O3DE__ProjectManager__LabelButton_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O3DE__ProjectManager__LabelButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O3DE__ProjectManager__LabelButton_t qt_meta_stringdata_O3DE__ProjectManager__LabelButton = {
    {
QT_MOC_LITERAL(0, 0, 33), // "O3DE::ProjectManager::LabelBu..."
QT_MOC_LITERAL(1, 34, 9), // "triggered"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "mousePressEvent"
QT_MOC_LITERAL(4, 61, 12), // "QMouseEvent*"
QT_MOC_LITERAL(5, 74, 5), // "event"
QT_MOC_LITERAL(6, 80, 15), // "OnLinkActivated"
QT_MOC_LITERAL(7, 96, 4) // "link"

    },
    "O3DE::ProjectManager::LabelButton\0"
    "triggered\0\0mousePressEvent\0QMouseEvent*\0"
    "event\0OnLinkActivated\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O3DE__ProjectManager__LabelButton[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void O3DE::ProjectManager::LabelButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LabelButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->OnLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LabelButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LabelButton::triggered)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject O3DE::ProjectManager::LabelButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_O3DE__ProjectManager__LabelButton.data,
    qt_meta_data_O3DE__ProjectManager__LabelButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *O3DE::ProjectManager::LabelButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O3DE::ProjectManager::LabelButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_O3DE__ProjectManager__LabelButton.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int O3DE::ProjectManager::LabelButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void O3DE::ProjectManager::LabelButton::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_O3DE__ProjectManager__ProjectButton_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O3DE__ProjectManager__ProjectButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O3DE__ProjectManager__ProjectButton_t qt_meta_stringdata_O3DE__ProjectManager__ProjectButton = {
    {
QT_MOC_LITERAL(0, 0, 35), // "O3DE::ProjectManager::Project..."
QT_MOC_LITERAL(1, 36, 11), // "OpenProject"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 11), // "projectName"
QT_MOC_LITERAL(4, 61, 11), // "EditProject"
QT_MOC_LITERAL(5, 73, 11), // "CopyProject"
QT_MOC_LITERAL(6, 85, 11), // "ProjectInfo"
QT_MOC_LITERAL(7, 97, 11), // "projectInfo"
QT_MOC_LITERAL(8, 109, 13), // "RemoveProject"
QT_MOC_LITERAL(9, 123, 13), // "DeleteProject"
QT_MOC_LITERAL(10, 137, 12) // "BuildProject"

    },
    "O3DE::ProjectManager::ProjectButton\0"
    "OpenProject\0\0projectName\0EditProject\0"
    "CopyProject\0ProjectInfo\0projectInfo\0"
    "RemoveProject\0DeleteProject\0BuildProject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O3DE__ProjectManager__ProjectButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      10,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void O3DE::ProjectManager::ProjectButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->EditProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->CopyProject((*reinterpret_cast< const ProjectInfo(*)>(_a[1]))); break;
        case 3: _t->RemoveProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->DeleteProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->BuildProject((*reinterpret_cast< const ProjectInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectButton::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectButton::OpenProject)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjectButton::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectButton::EditProject)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProjectButton::*)(const ProjectInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectButton::CopyProject)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProjectButton::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectButton::RemoveProject)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProjectButton::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectButton::DeleteProject)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ProjectButton::*)(const ProjectInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectButton::BuildProject)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject O3DE::ProjectManager::ProjectButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_O3DE__ProjectManager__ProjectButton.data,
    qt_meta_data_O3DE__ProjectManager__ProjectButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *O3DE::ProjectManager::ProjectButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O3DE::ProjectManager::ProjectButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_O3DE__ProjectManager__ProjectButton.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int O3DE::ProjectManager::ProjectButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void O3DE::ProjectManager::ProjectButton::OpenProject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void O3DE::ProjectManager::ProjectButton::EditProject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void O3DE::ProjectManager::ProjectButton::CopyProject(const ProjectInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void O3DE::ProjectManager::ProjectButton::RemoveProject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void O3DE::ProjectManager::ProjectButton::DeleteProject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void O3DE::ProjectManager::ProjectButton::BuildProject(const ProjectInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
