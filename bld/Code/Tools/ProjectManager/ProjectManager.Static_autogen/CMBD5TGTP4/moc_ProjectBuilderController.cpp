/****************************************************************************
** Meta object code from reading C++ file 'ProjectBuilderController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/ProjectManager/Source/ProjectBuilderController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectBuilderController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_O3DE__ProjectManager__ProjectBuilderController_t {
    QByteArrayData data[13];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O3DE__ProjectManager__ProjectBuilderController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O3DE__ProjectManager__ProjectBuilderController_t qt_meta_stringdata_O3DE__ProjectManager__ProjectBuilderController = {
    {
QT_MOC_LITERAL(0, 0, 46), // "O3DE::ProjectManager::Project..."
QT_MOC_LITERAL(1, 47, 4), // "Done"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 7), // "success"
QT_MOC_LITERAL(4, 61, 18), // "NotifyBuildProject"
QT_MOC_LITERAL(5, 80, 11), // "ProjectInfo"
QT_MOC_LITERAL(6, 92, 11), // "projectInfo"
QT_MOC_LITERAL(7, 104, 5), // "Start"
QT_MOC_LITERAL(8, 110, 16), // "UpdateUIProgress"
QT_MOC_LITERAL(9, 127, 8), // "progress"
QT_MOC_LITERAL(10, 136, 13), // "HandleResults"
QT_MOC_LITERAL(11, 150, 6), // "result"
QT_MOC_LITERAL(12, 157, 12) // "HandleCancel"

    },
    "O3DE::ProjectManager::ProjectBuilderController\0"
    "Done\0\0success\0NotifyBuildProject\0"
    "ProjectInfo\0projectInfo\0Start\0"
    "UpdateUIProgress\0progress\0HandleResults\0"
    "result\0HandleCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O3DE__ProjectManager__ProjectBuilderController[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,
       1,    0,   52,    2, 0x26 /* Public | MethodCloned */,
       4,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   56,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
      10,    1,   60,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void O3DE::ProjectManager::ProjectBuilderController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectBuilderController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->Done(); break;
        case 2: _t->NotifyBuildProject((*reinterpret_cast< const ProjectInfo(*)>(_a[1]))); break;
        case 3: _t->Start(); break;
        case 4: _t->UpdateUIProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->HandleResults((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->HandleCancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProjectBuilderController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectBuilderController::Done)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProjectBuilderController::*)(const ProjectInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProjectBuilderController::NotifyBuildProject)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject O3DE::ProjectManager::ProjectBuilderController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_O3DE__ProjectManager__ProjectBuilderController.data,
    qt_meta_data_O3DE__ProjectManager__ProjectBuilderController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *O3DE::ProjectManager::ProjectBuilderController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O3DE::ProjectManager::ProjectBuilderController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_O3DE__ProjectManager__ProjectBuilderController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int O3DE::ProjectManager::ProjectBuilderController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void O3DE::ProjectManager::ProjectBuilderController::Done(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void O3DE::ProjectManager::ProjectBuilderController::NotifyBuildProject(const ProjectInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
