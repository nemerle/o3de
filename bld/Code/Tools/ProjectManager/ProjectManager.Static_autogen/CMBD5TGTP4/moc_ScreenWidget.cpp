/****************************************************************************
** Meta object code from reading C++ file 'ScreenWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/ProjectManager/Source/ScreenWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_O3DE__ProjectManager__ScreenWidget_t {
    QByteArrayData data[12];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O3DE__ProjectManager__ScreenWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O3DE__ProjectManager__ScreenWidget_t qt_meta_stringdata_O3DE__ProjectManager__ScreenWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "O3DE::ProjectManager::ScreenW..."
QT_MOC_LITERAL(1, 35, 19), // "ChangeScreenRequest"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 20), // "ProjectManagerScreen"
QT_MOC_LITERAL(4, 77, 6), // "screen"
QT_MOC_LITERAL(5, 84, 25), // "GotoPreviousScreenRequest"
QT_MOC_LITERAL(6, 110, 18), // "ResetScreenRequest"
QT_MOC_LITERAL(7, 129, 20), // "NotifyCurrentProject"
QT_MOC_LITERAL(8, 150, 11), // "projectPath"
QT_MOC_LITERAL(9, 162, 18), // "NotifyBuildProject"
QT_MOC_LITERAL(10, 181, 11), // "ProjectInfo"
QT_MOC_LITERAL(11, 193, 11) // "projectInfo"

    },
    "O3DE::ProjectManager::ScreenWidget\0"
    "ChangeScreenRequest\0\0ProjectManagerScreen\0"
    "screen\0GotoPreviousScreenRequest\0"
    "ResetScreenRequest\0NotifyCurrentProject\0"
    "projectPath\0NotifyBuildProject\0"
    "ProjectInfo\0projectInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O3DE__ProjectManager__ScreenWidget[] = {

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
       6,    1,   43,    2, 0x06 /* Public */,
       7,    1,   46,    2, 0x06 /* Public */,
       9,    1,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void O3DE::ProjectManager::ScreenWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangeScreenRequest((*reinterpret_cast< ProjectManagerScreen(*)>(_a[1]))); break;
        case 1: _t->GotoPreviousScreenRequest(); break;
        case 2: _t->ResetScreenRequest((*reinterpret_cast< ProjectManagerScreen(*)>(_a[1]))); break;
        case 3: _t->NotifyCurrentProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->NotifyBuildProject((*reinterpret_cast< const ProjectInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScreenWidget::*)(ProjectManagerScreen );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenWidget::ChangeScreenRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScreenWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenWidget::GotoPreviousScreenRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScreenWidget::*)(ProjectManagerScreen );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenWidget::ResetScreenRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScreenWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenWidget::NotifyCurrentProject)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScreenWidget::*)(const ProjectInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenWidget::NotifyBuildProject)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject O3DE::ProjectManager::ScreenWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_O3DE__ProjectManager__ScreenWidget.data,
    qt_meta_data_O3DE__ProjectManager__ScreenWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *O3DE::ProjectManager::ScreenWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O3DE::ProjectManager::ScreenWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_O3DE__ProjectManager__ScreenWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int O3DE::ProjectManager::ScreenWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void O3DE::ProjectManager::ScreenWidget::ChangeScreenRequest(ProjectManagerScreen _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void O3DE::ProjectManager::ScreenWidget::GotoPreviousScreenRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void O3DE::ProjectManager::ScreenWidget::ResetScreenRequest(ProjectManagerScreen _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void O3DE::ProjectManager::ScreenWidget::NotifyCurrentProject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void O3DE::ProjectManager::ScreenWidget::NotifyBuildProject(const ProjectInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
