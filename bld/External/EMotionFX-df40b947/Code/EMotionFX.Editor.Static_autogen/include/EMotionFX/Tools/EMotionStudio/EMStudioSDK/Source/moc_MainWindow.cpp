/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/EMStudioSDK/Source/MainWindow.h"
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
struct qt_meta_stringdata_EMStudio__ErrorWindow_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ErrorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ErrorWindow_t qt_meta_stringdata_EMStudio__ErrorWindow = {
    {
QT_MOC_LITERAL(0, 0, 21) // "EMStudio::ErrorWindow"

    },
    "EMStudio::ErrorWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ErrorWindow[] = {

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

void EMStudio::ErrorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ErrorWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ErrorWindow.data,
    qt_meta_data_EMStudio__ErrorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ErrorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ErrorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ErrorWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::ErrorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_EMStudio__MainWindow_t {
    QByteArrayData data[40];
    char stringdata0[642];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MainWindow_t qt_meta_stringdata_EMStudio__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "EMStudio::MainWindow"
QT_MOC_LITERAL(1, 21, 22), // "HardwareChangeDetected"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "OnAutosaveTimeOut"
QT_MOC_LITERAL(4, 63, 19), // "LoadLayoutAfterShow"
QT_MOC_LITERAL(5, 83, 20), // "RaiseFloatingWidgets"
QT_MOC_LITERAL(6, 104, 18), // "LoadCharacterFiles"
QT_MOC_LITERAL(7, 123, 24), // "OnSaveLayoutDialogAccept"
QT_MOC_LITERAL(8, 148, 24), // "OnSaveLayoutDialogReject"
QT_MOC_LITERAL(9, 173, 15), // "OnFileOpenActor"
QT_MOC_LITERAL(10, 189, 24), // "OnFileSaveSelectedActors"
QT_MOC_LITERAL(11, 214, 7), // "OnReset"
QT_MOC_LITERAL(12, 222, 16), // "OnFileMergeActor"
QT_MOC_LITERAL(13, 239, 18), // "OnOpenDroppedActor"
QT_MOC_LITERAL(14, 258, 12), // "OnRecentFile"
QT_MOC_LITERAL(15, 271, 8), // "QAction*"
QT_MOC_LITERAL(16, 280, 6), // "action"
QT_MOC_LITERAL(17, 287, 19), // "OnMergeDroppedActor"
QT_MOC_LITERAL(18, 307, 18), // "OnFileNewWorkspace"
QT_MOC_LITERAL(19, 326, 19), // "OnFileOpenWorkspace"
QT_MOC_LITERAL(20, 346, 19), // "OnFileSaveWorkspace"
QT_MOC_LITERAL(21, 366, 21), // "OnFileSaveWorkspaceAs"
QT_MOC_LITERAL(22, 388, 14), // "OnWindowCreate"
QT_MOC_LITERAL(23, 403, 7), // "checked"
QT_MOC_LITERAL(24, 411, 14), // "OnLayoutSaveAs"
QT_MOC_LITERAL(25, 426, 14), // "OnRemoveLayout"
QT_MOC_LITERAL(26, 441, 12), // "OnLoadLayout"
QT_MOC_LITERAL(27, 454, 6), // "OnUndo"
QT_MOC_LITERAL(28, 461, 6), // "OnRedo"
QT_MOC_LITERAL(29, 468, 20), // "OnOpenAutosaveFolder"
QT_MOC_LITERAL(30, 489, 20), // "OnOpenSettingsFolder"
QT_MOC_LITERAL(31, 510, 13), // "OnPreferences"
QT_MOC_LITERAL(32, 524, 9), // "OnSaveAll"
QT_MOC_LITERAL(33, 534, 22), // "ApplicationModeChanged"
QT_MOC_LITERAL(34, 557, 5), // "index"
QT_MOC_LITERAL(35, 563, 4), // "text"
QT_MOC_LITERAL(36, 568, 21), // "OnUpdateRenderPlugins"
QT_MOC_LITERAL(37, 590, 27), // "OnRemoveLayoutButtonClicked"
QT_MOC_LITERAL(38, 618, 16), // "QAbstractButton*"
QT_MOC_LITERAL(39, 635, 6) // "button"

    },
    "EMStudio::MainWindow\0HardwareChangeDetected\0"
    "\0OnAutosaveTimeOut\0LoadLayoutAfterShow\0"
    "RaiseFloatingWidgets\0LoadCharacterFiles\0"
    "OnSaveLayoutDialogAccept\0"
    "OnSaveLayoutDialogReject\0OnFileOpenActor\0"
    "OnFileSaveSelectedActors\0OnReset\0"
    "OnFileMergeActor\0OnOpenDroppedActor\0"
    "OnRecentFile\0QAction*\0action\0"
    "OnMergeDroppedActor\0OnFileNewWorkspace\0"
    "OnFileOpenWorkspace\0OnFileSaveWorkspace\0"
    "OnFileSaveWorkspaceAs\0OnWindowCreate\0"
    "checked\0OnLayoutSaveAs\0OnRemoveLayout\0"
    "OnLoadLayout\0OnUndo\0OnRedo\0"
    "OnOpenAutosaveFolder\0OnOpenSettingsFolder\0"
    "OnPreferences\0OnSaveAll\0ApplicationModeChanged\0"
    "index\0text\0OnUpdateRenderPlugins\0"
    "OnRemoveLayoutButtonClicked\0"
    "QAbstractButton*\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  175,    2, 0x0a /* Public */,
       4,    0,  176,    2, 0x0a /* Public */,
       5,    0,  177,    2, 0x0a /* Public */,
       6,    0,  178,    2, 0x0a /* Public */,
       7,    0,  179,    2, 0x0a /* Public */,
       8,    0,  180,    2, 0x0a /* Public */,
       9,    0,  181,    2, 0x0a /* Public */,
      10,    0,  182,    2, 0x0a /* Public */,
      11,    0,  183,    2, 0x0a /* Public */,
      12,    0,  184,    2, 0x0a /* Public */,
      13,    0,  185,    2, 0x0a /* Public */,
      14,    1,  186,    2, 0x0a /* Public */,
      17,    0,  189,    2, 0x0a /* Public */,
      18,    0,  190,    2, 0x0a /* Public */,
      19,    0,  191,    2, 0x0a /* Public */,
      20,    0,  192,    2, 0x0a /* Public */,
      21,    0,  193,    2, 0x0a /* Public */,
      22,    1,  194,    2, 0x0a /* Public */,
      24,    0,  197,    2, 0x0a /* Public */,
      25,    0,  198,    2, 0x0a /* Public */,
      26,    0,  199,    2, 0x0a /* Public */,
      27,    0,  200,    2, 0x0a /* Public */,
      28,    0,  201,    2, 0x0a /* Public */,
      29,    0,  202,    2, 0x0a /* Public */,
      30,    0,  203,    2, 0x0a /* Public */,
      31,    0,  204,    2, 0x0a /* Public */,
      32,    0,  205,    2, 0x0a /* Public */,
      33,    1,  206,    2, 0x0a /* Public */,
      33,    1,  209,    2, 0x0a /* Public */,
      36,    0,  212,    2, 0x0a /* Public */,
      37,    1,  213,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,

       0        // eod
};

void EMStudio::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HardwareChangeDetected(); break;
        case 1: _t->OnAutosaveTimeOut(); break;
        case 2: _t->LoadLayoutAfterShow(); break;
        case 3: _t->RaiseFloatingWidgets(); break;
        case 4: _t->LoadCharacterFiles(); break;
        case 5: _t->OnSaveLayoutDialogAccept(); break;
        case 6: _t->OnSaveLayoutDialogReject(); break;
        case 7: _t->OnFileOpenActor(); break;
        case 8: _t->OnFileSaveSelectedActors(); break;
        case 9: _t->OnReset(); break;
        case 10: _t->OnFileMergeActor(); break;
        case 11: _t->OnOpenDroppedActor(); break;
        case 12: _t->OnRecentFile((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: _t->OnMergeDroppedActor(); break;
        case 14: _t->OnFileNewWorkspace(); break;
        case 15: _t->OnFileOpenWorkspace(); break;
        case 16: _t->OnFileSaveWorkspace(); break;
        case 17: _t->OnFileSaveWorkspaceAs(); break;
        case 18: _t->OnWindowCreate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->OnLayoutSaveAs(); break;
        case 20: _t->OnRemoveLayout(); break;
        case 21: _t->OnLoadLayout(); break;
        case 22: _t->OnUndo(); break;
        case 23: _t->OnRedo(); break;
        case 24: _t->OnOpenAutosaveFolder(); break;
        case 25: _t->OnOpenSettingsFolder(); break;
        case 26: _t->OnPreferences(); break;
        case 27: _t->OnSaveAll(); break;
        case 28: _t->ApplicationModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->ApplicationModeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->OnUpdateRenderPlugins(); break;
        case 31: _t->OnRemoveLayoutButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::HardwareChangeDetected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<AzQtComponents::DockMainWindow::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MainWindow.data,
    qt_meta_data_EMStudio__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EMotionFX::ActorEditorRequestBus::Handler"))
        return static_cast< EMotionFX::ActorEditorRequestBus::Handler*>(this);
    return AzQtComponents::DockMainWindow::qt_metacast(_clname);
}

int EMStudio::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzQtComponents::DockMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::MainWindow::HardwareChangeDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
