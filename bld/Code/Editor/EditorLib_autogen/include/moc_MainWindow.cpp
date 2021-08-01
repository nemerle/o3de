/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Code/Editor/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UndoRedoToolButton_t {
    QByteArrayData data[4];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UndoRedoToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UndoRedoToolButton_t qt_meta_stringdata_UndoRedoToolButton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UndoRedoToolButton"
QT_MOC_LITERAL(1, 19, 6), // "Update"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5) // "count"

    },
    "UndoRedoToolButton\0Update\0\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UndoRedoToolButton[] = {

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
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void UndoRedoToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UndoRedoToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Update((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UndoRedoToolButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QToolButton::staticMetaObject>(),
    qt_meta_stringdata_UndoRedoToolButton.data,
    qt_meta_data_UndoRedoToolButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UndoRedoToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoRedoToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UndoRedoToolButton.stringdata0))
        return static_cast<void*>(this);
    return QToolButton::qt_metacast(_clname);
}

int UndoRedoToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "ToggleRefCoordSys"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "UpdateRefCoordSys"
QT_MOC_LITERAL(4, 48, 15), // "DeleteSelection"
QT_MOC_LITERAL(5, 64, 25), // "ShowKeyboardCustomization"
QT_MOC_LITERAL(6, 90, 23), // "ExportKeyboardShortcuts"
QT_MOC_LITERAL(7, 114, 23), // "ImportKeyboardShortcuts"
QT_MOC_LITERAL(8, 138, 15), // "OnStopAllSounds"
QT_MOC_LITERAL(9, 154, 20), // "OnRefreshAudioSystem"
QT_MOC_LITERAL(10, 175, 10), // "SaveLayout"
QT_MOC_LITERAL(11, 186, 20), // "ViewDeletePaneLayout"
QT_MOC_LITERAL(12, 207, 10), // "layoutName"
QT_MOC_LITERAL(13, 218, 20), // "ViewRenamePaneLayout"
QT_MOC_LITERAL(14, 239, 18), // "ViewLoadPaneLayout"
QT_MOC_LITERAL(15, 258, 18), // "ViewSavePaneLayout"
QT_MOC_LITERAL(16, 277, 25), // "OnConnectionStatusClicked"
QT_MOC_LITERAL(17, 303, 24), // "OnUpdateConnectionStatus"
QT_MOC_LITERAL(18, 328, 32), // "ShowConnectionDisconnectedDialog"
QT_MOC_LITERAL(19, 361, 14), // "OnEscapeAction"
QT_MOC_LITERAL(20, 376, 26), // "OnOpenAssetImporterManager"
QT_MOC_LITERAL(21, 403, 4) // "list"

    },
    "MainWindow\0ToggleRefCoordSys\0\0"
    "UpdateRefCoordSys\0DeleteSelection\0"
    "ShowKeyboardCustomization\0"
    "ExportKeyboardShortcuts\0ImportKeyboardShortcuts\0"
    "OnStopAllSounds\0OnRefreshAudioSystem\0"
    "SaveLayout\0ViewDeletePaneLayout\0"
    "layoutName\0ViewRenamePaneLayout\0"
    "ViewLoadPaneLayout\0ViewSavePaneLayout\0"
    "OnConnectionStatusClicked\0"
    "OnUpdateConnectionStatus\0"
    "ShowConnectionDisconnectedDialog\0"
    "OnEscapeAction\0OnOpenAssetImporterManager\0"
    "list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    1,  113,    2, 0x08 /* Private */,
      13,    1,  116,    2, 0x08 /* Private */,
      14,    1,  119,    2, 0x08 /* Private */,
      15,    1,  122,    2, 0x08 /* Private */,
      16,    0,  125,    2, 0x08 /* Private */,
      17,    0,  126,    2, 0x08 /* Private */,
      18,    0,  127,    2, 0x08 /* Private */,
      19,    0,  128,    2, 0x08 /* Private */,
      20,    1,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ToggleRefCoordSys(); break;
        case 1: _t->UpdateRefCoordSys(); break;
        case 2: _t->DeleteSelection(); break;
        case 3: _t->ShowKeyboardCustomization(); break;
        case 4: _t->ExportKeyboardShortcuts(); break;
        case 5: _t->ImportKeyboardShortcuts(); break;
        case 6: _t->OnStopAllSounds(); break;
        case 7: _t->OnRefreshAudioSystem(); break;
        case 8: _t->SaveLayout(); break;
        case 9: _t->ViewDeletePaneLayout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->ViewRenamePaneLayout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->ViewLoadPaneLayout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->ViewSavePaneLayout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->OnConnectionStatusClicked(); break;
        case 14: _t->OnUpdateConnectionStatus(); break;
        case 15: _t->ShowConnectionDisconnectedDialog(); break;
        case 16: _t->OnEscapeAction(); break;
        case 17: _t->OnOpenAssetImporterManager((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ToggleRefCoordSys)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::UpdateRefCoordSys)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::DeleteSelection)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IEditorNotifyListener"))
        return static_cast< IEditorNotifyListener*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void MainWindow::ToggleRefCoordSys()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::UpdateRefCoordSys()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::DeleteSelection()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
