/****************************************************************************
** Meta object code from reading C++ file 'ScreensCtrl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Code/Tools/ProjectManager/Source/ScreensCtrl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreensCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_O3DE__ProjectManager__ScreensCtrl_t {
    QByteArrayData data[19];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O3DE__ProjectManager__ScreensCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O3DE__ProjectManager__ScreensCtrl_t qt_meta_stringdata_O3DE__ProjectManager__ScreensCtrl = {
    {
QT_MOC_LITERAL(0, 0, 33), // "O3DE::ProjectManager::Screens..."
QT_MOC_LITERAL(1, 34, 20), // "NotifyCurrentProject"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 11), // "projectPath"
QT_MOC_LITERAL(4, 68, 18), // "NotifyBuildProject"
QT_MOC_LITERAL(5, 87, 11), // "ProjectInfo"
QT_MOC_LITERAL(6, 99, 11), // "projectInfo"
QT_MOC_LITERAL(7, 111, 14), // "ChangeToScreen"
QT_MOC_LITERAL(8, 126, 20), // "ProjectManagerScreen"
QT_MOC_LITERAL(9, 147, 6), // "screen"
QT_MOC_LITERAL(10, 154, 19), // "ForceChangeToScreen"
QT_MOC_LITERAL(11, 174, 8), // "addVisit"
QT_MOC_LITERAL(12, 183, 18), // "GotoPreviousScreen"
QT_MOC_LITERAL(13, 202, 11), // "ResetScreen"
QT_MOC_LITERAL(14, 214, 15), // "ResetAllScreens"
QT_MOC_LITERAL(15, 230, 12), // "DeleteScreen"
QT_MOC_LITERAL(16, 243, 16), // "DeleteAllScreens"
QT_MOC_LITERAL(17, 260, 10), // "TabChanged"
QT_MOC_LITERAL(18, 271, 5) // "index"

    },
    "O3DE::ProjectManager::ScreensCtrl\0"
    "NotifyCurrentProject\0\0projectPath\0"
    "NotifyBuildProject\0ProjectInfo\0"
    "projectInfo\0ChangeToScreen\0"
    "ProjectManagerScreen\0screen\0"
    "ForceChangeToScreen\0addVisit\0"
    "GotoPreviousScreen\0ResetScreen\0"
    "ResetAllScreens\0DeleteScreen\0"
    "DeleteAllScreens\0TabChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O3DE__ProjectManager__ScreensCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   75,    2, 0x0a /* Public */,
      10,    2,   78,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      14,    0,   90,    2, 0x0a /* Public */,
      15,    1,   91,    2, 0x0a /* Public */,
      16,    0,   94,    2, 0x0a /* Public */,
      17,    1,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8, QMetaType::Bool,    9,   11,
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void O3DE::ProjectManager::ScreensCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreensCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NotifyCurrentProject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->NotifyBuildProject((*reinterpret_cast< const ProjectInfo(*)>(_a[1]))); break;
        case 2: { bool _r = _t->ChangeToScreen((*reinterpret_cast< ProjectManagerScreen(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->ForceChangeToScreen((*reinterpret_cast< ProjectManagerScreen(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->ForceChangeToScreen((*reinterpret_cast< ProjectManagerScreen(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->GotoPreviousScreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->ResetScreen((*reinterpret_cast< ProjectManagerScreen(*)>(_a[1]))); break;
        case 7: _t->ResetAllScreens(); break;
        case 8: _t->DeleteScreen((*reinterpret_cast< ProjectManagerScreen(*)>(_a[1]))); break;
        case 9: _t->DeleteAllScreens(); break;
        case 10: _t->TabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScreensCtrl::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreensCtrl::NotifyCurrentProject)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScreensCtrl::*)(const ProjectInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreensCtrl::NotifyBuildProject)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject O3DE::ProjectManager::ScreensCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_O3DE__ProjectManager__ScreensCtrl.data,
    qt_meta_data_O3DE__ProjectManager__ScreensCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *O3DE::ProjectManager::ScreensCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O3DE::ProjectManager::ScreensCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_O3DE__ProjectManager__ScreensCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int O3DE::ProjectManager::ScreensCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void O3DE::ProjectManager::ScreensCtrl::NotifyCurrentProject(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void O3DE::ProjectManager::ScreensCtrl::NotifyBuildProject(const ProjectInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
