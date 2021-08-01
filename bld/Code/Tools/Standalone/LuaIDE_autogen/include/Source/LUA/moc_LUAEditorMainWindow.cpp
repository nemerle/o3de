/****************************************************************************
** Meta object code from reading C++ file 'LUAEditorMainWindow.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/LUA/LUAEditorMainWindow.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LUAEditorMainWindow.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LUAEditor__LUAEditorMainWindow_t {
    QByteArrayData data[75];
    char stringdata0[1363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__LUAEditorMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__LUAEditorMainWindow_t qt_meta_stringdata_LUAEditor__LUAEditorMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 30), // "LUAEditor::LUAEditorMainWindow"
QT_MOC_LITERAL(1, 31, 22), // "OnReferenceDataChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 18), // "RestoreWindowState"
QT_MOC_LITERAL(4, 74, 24), // "OnMenuCloseCurrentWindow"
QT_MOC_LITERAL(5, 99, 19), // "assetBrowserPressed"
QT_MOC_LITERAL(6, 119, 13), // "OnFileMenuNew"
QT_MOC_LITERAL(7, 133, 14), // "OnFileMenuSave"
QT_MOC_LITERAL(8, 148, 16), // "OnFileMenuSaveAs"
QT_MOC_LITERAL(9, 165, 17), // "OnFileMenuSaveAll"
QT_MOC_LITERAL(10, 183, 16), // "OnFileMenuReload"
QT_MOC_LITERAL(11, 200, 15), // "OnFileMenuClose"
QT_MOC_LITERAL(12, 216, 18), // "OnFileMenuCloseAll"
QT_MOC_LITERAL(13, 235, 24), // "OnFileMenuCloseAllExcept"
QT_MOC_LITERAL(14, 260, 14), // "OnEditMenuUndo"
QT_MOC_LITERAL(15, 275, 14), // "OnEditMenuRedo"
QT_MOC_LITERAL(16, 290, 13), // "OnEditMenuCut"
QT_MOC_LITERAL(17, 304, 14), // "OnEditMenuCopy"
QT_MOC_LITERAL(18, 319, 15), // "OnEditMenuPaste"
QT_MOC_LITERAL(19, 335, 14), // "OnEditMenuFind"
QT_MOC_LITERAL(20, 350, 18), // "OnEditMenuFindNext"
QT_MOC_LITERAL(21, 369, 23), // "OnEditMenuFindInAllOpen"
QT_MOC_LITERAL(22, 393, 19), // "OnEditMenuFindLocal"
QT_MOC_LITERAL(23, 413, 26), // "OnEditMenuFindLocalReverse"
QT_MOC_LITERAL(24, 440, 18), // "OnEditMenuGoToLine"
QT_MOC_LITERAL(25, 459, 17), // "OnEditMenuFoldAll"
QT_MOC_LITERAL(26, 477, 19), // "OnEditMenuUnfoldAll"
QT_MOC_LITERAL(27, 497, 17), // "OnEditMenuReplace"
QT_MOC_LITERAL(28, 515, 26), // "OnEditMenuReplaceInAllOpen"
QT_MOC_LITERAL(29, 542, 19), // "OnEditMenuSelectAll"
QT_MOC_LITERAL(30, 562, 23), // "OnEditMenuSelectToBrace"
QT_MOC_LITERAL(31, 586, 22), // "OnCommentSelectedBlock"
QT_MOC_LITERAL(32, 609, 24), // "OnUnCommentSelectedBlock"
QT_MOC_LITERAL(33, 634, 21), // "OnEditMenuTransposeUp"
QT_MOC_LITERAL(34, 656, 21), // "OnEditMenuTransposeDn"
QT_MOC_LITERAL(35, 678, 13), // "OnTabForwards"
QT_MOC_LITERAL(36, 692, 14), // "OnTabBackwards"
QT_MOC_LITERAL(37, 707, 21), // "OnViewMenuBreakpoints"
QT_MOC_LITERAL(38, 729, 15), // "OnViewMenuStack"
QT_MOC_LITERAL(39, 745, 16), // "OnViewMenuLocals"
QT_MOC_LITERAL(40, 762, 15), // "OnViewMenuWatch"
QT_MOC_LITERAL(41, 778, 19), // "OnViewMenuReference"
QT_MOC_LITERAL(42, 798, 15), // "OnViewMenuFind1"
QT_MOC_LITERAL(43, 814, 15), // "OnViewMenuFind2"
QT_MOC_LITERAL(44, 830, 15), // "OnViewMenuFind3"
QT_MOC_LITERAL(45, 846, 15), // "OnViewMenuFind4"
QT_MOC_LITERAL(46, 862, 19), // "OnViewMenuResetZoom"
QT_MOC_LITERAL(47, 882, 21), // "OnAutocompleteChanged"
QT_MOC_LITERAL(48, 904, 6), // "change"
QT_MOC_LITERAL(49, 911, 10), // "OnSettings"
QT_MOC_LITERAL(50, 922, 18), // "OnLuaDocumentation"
QT_MOC_LITERAL(51, 941, 14), // "OnDebugExecute"
QT_MOC_LITERAL(52, 956, 22), // "OnDebugExecuteOnTarget"
QT_MOC_LITERAL(53, 979, 23), // "OnDebugToggleBreakpoint"
QT_MOC_LITERAL(54, 1003, 22), // "OnDebugContinueRunning"
QT_MOC_LITERAL(55, 1026, 15), // "OnDebugStepOver"
QT_MOC_LITERAL(56, 1042, 13), // "OnDebugStepIn"
QT_MOC_LITERAL(57, 1056, 14), // "OnDebugStepOut"
QT_MOC_LITERAL(58, 1071, 27), // "OnSourceControlMenuCheckOut"
QT_MOC_LITERAL(59, 1099, 25), // "luaClassFilterTextChanged"
QT_MOC_LITERAL(60, 1125, 19), // "OnFindResultClicked"
QT_MOC_LITERAL(61, 1145, 20), // "FindResultsBlockInfo"
QT_MOC_LITERAL(62, 1166, 6), // "result"
QT_MOC_LITERAL(63, 1173, 18), // "showTabContextMenu"
QT_MOC_LITERAL(64, 1192, 13), // "AZStd::string"
QT_MOC_LITERAL(65, 1206, 7), // "assetId"
QT_MOC_LITERAL(66, 1214, 36), // "closeAllTabsExceptThisTabCont..."
QT_MOC_LITERAL(67, 1251, 14), // "OnLogTabsReset"
QT_MOC_LITERAL(68, 1266, 15), // "AddMessageToLog"
QT_MOC_LITERAL(69, 1282, 43), // "AzToolsFramework::Logging::Lo..."
QT_MOC_LITERAL(70, 1326, 4), // "type"
QT_MOC_LITERAL(71, 1331, 11), // "const char*"
QT_MOC_LITERAL(72, 1343, 6), // "window"
QT_MOC_LITERAL(73, 1350, 7), // "message"
QT_MOC_LITERAL(74, 1358, 4) // "data"

    },
    "LUAEditor::LUAEditorMainWindow\0"
    "OnReferenceDataChanged\0\0RestoreWindowState\0"
    "OnMenuCloseCurrentWindow\0assetBrowserPressed\0"
    "OnFileMenuNew\0OnFileMenuSave\0"
    "OnFileMenuSaveAs\0OnFileMenuSaveAll\0"
    "OnFileMenuReload\0OnFileMenuClose\0"
    "OnFileMenuCloseAll\0OnFileMenuCloseAllExcept\0"
    "OnEditMenuUndo\0OnEditMenuRedo\0"
    "OnEditMenuCut\0OnEditMenuCopy\0"
    "OnEditMenuPaste\0OnEditMenuFind\0"
    "OnEditMenuFindNext\0OnEditMenuFindInAllOpen\0"
    "OnEditMenuFindLocal\0OnEditMenuFindLocalReverse\0"
    "OnEditMenuGoToLine\0OnEditMenuFoldAll\0"
    "OnEditMenuUnfoldAll\0OnEditMenuReplace\0"
    "OnEditMenuReplaceInAllOpen\0"
    "OnEditMenuSelectAll\0OnEditMenuSelectToBrace\0"
    "OnCommentSelectedBlock\0OnUnCommentSelectedBlock\0"
    "OnEditMenuTransposeUp\0OnEditMenuTransposeDn\0"
    "OnTabForwards\0OnTabBackwards\0"
    "OnViewMenuBreakpoints\0OnViewMenuStack\0"
    "OnViewMenuLocals\0OnViewMenuWatch\0"
    "OnViewMenuReference\0OnViewMenuFind1\0"
    "OnViewMenuFind2\0OnViewMenuFind3\0"
    "OnViewMenuFind4\0OnViewMenuResetZoom\0"
    "OnAutocompleteChanged\0change\0OnSettings\0"
    "OnLuaDocumentation\0OnDebugExecute\0"
    "OnDebugExecuteOnTarget\0OnDebugToggleBreakpoint\0"
    "OnDebugContinueRunning\0OnDebugStepOver\0"
    "OnDebugStepIn\0OnDebugStepOut\0"
    "OnSourceControlMenuCheckOut\0"
    "luaClassFilterTextChanged\0OnFindResultClicked\0"
    "FindResultsBlockInfo\0result\0"
    "showTabContextMenu\0AZStd::string\0"
    "assetId\0closeAllTabsExceptThisTabContextMenu\0"
    "OnLogTabsReset\0AddMessageToLog\0"
    "AzToolsFramework::Logging::LogLine::LogType\0"
    "type\0const char*\0window\0message\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__LUAEditorMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  324,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  325,    2, 0x0a /* Public */,
       4,    0,  326,    2, 0x0a /* Public */,
       5,    0,  327,    2, 0x0a /* Public */,
       6,    0,  328,    2, 0x0a /* Public */,
       7,    0,  329,    2, 0x0a /* Public */,
       8,    0,  330,    2, 0x0a /* Public */,
       9,    0,  331,    2, 0x0a /* Public */,
      10,    0,  332,    2, 0x0a /* Public */,
      11,    0,  333,    2, 0x0a /* Public */,
      12,    0,  334,    2, 0x0a /* Public */,
      13,    0,  335,    2, 0x0a /* Public */,
      14,    0,  336,    2, 0x0a /* Public */,
      15,    0,  337,    2, 0x0a /* Public */,
      16,    0,  338,    2, 0x0a /* Public */,
      17,    0,  339,    2, 0x0a /* Public */,
      18,    0,  340,    2, 0x0a /* Public */,
      19,    0,  341,    2, 0x0a /* Public */,
      20,    0,  342,    2, 0x0a /* Public */,
      21,    0,  343,    2, 0x0a /* Public */,
      22,    0,  344,    2, 0x0a /* Public */,
      23,    0,  345,    2, 0x0a /* Public */,
      24,    0,  346,    2, 0x0a /* Public */,
      25,    0,  347,    2, 0x0a /* Public */,
      26,    0,  348,    2, 0x0a /* Public */,
      27,    0,  349,    2, 0x0a /* Public */,
      28,    0,  350,    2, 0x0a /* Public */,
      29,    0,  351,    2, 0x0a /* Public */,
      30,    0,  352,    2, 0x0a /* Public */,
      31,    0,  353,    2, 0x0a /* Public */,
      32,    0,  354,    2, 0x0a /* Public */,
      33,    0,  355,    2, 0x0a /* Public */,
      34,    0,  356,    2, 0x0a /* Public */,
      35,    0,  357,    2, 0x0a /* Public */,
      36,    0,  358,    2, 0x0a /* Public */,
      37,    0,  359,    2, 0x0a /* Public */,
      38,    0,  360,    2, 0x0a /* Public */,
      39,    0,  361,    2, 0x0a /* Public */,
      40,    0,  362,    2, 0x0a /* Public */,
      41,    0,  363,    2, 0x0a /* Public */,
      42,    0,  364,    2, 0x0a /* Public */,
      43,    0,  365,    2, 0x0a /* Public */,
      44,    0,  366,    2, 0x0a /* Public */,
      45,    0,  367,    2, 0x0a /* Public */,
      46,    0,  368,    2, 0x0a /* Public */,
      47,    1,  369,    2, 0x0a /* Public */,
      49,    0,  372,    2, 0x0a /* Public */,
      50,    0,  373,    2, 0x0a /* Public */,
      51,    0,  374,    2, 0x0a /* Public */,
      52,    0,  375,    2, 0x0a /* Public */,
      53,    0,  376,    2, 0x0a /* Public */,
      54,    0,  377,    2, 0x0a /* Public */,
      55,    0,  378,    2, 0x0a /* Public */,
      56,    0,  379,    2, 0x0a /* Public */,
      57,    0,  380,    2, 0x0a /* Public */,
      58,    0,  381,    2, 0x0a /* Public */,
      59,    1,  382,    2, 0x0a /* Public */,
      60,    1,  385,    2, 0x0a /* Public */,
      63,    2,  388,    2, 0x0a /* Public */,
      66,    0,  393,    2, 0x0a /* Public */,
      67,    0,  394,    2, 0x0a /* Public */,
      68,    4,  395,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Bool,   48,
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
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 64, QMetaType::QPoint,   65,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69, 0x80000000 | 71, 0x80000000 | 71, QMetaType::VoidStar,   70,   72,   73,   74,

       0        // eod
};

void LUAEditor::LUAEditorMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LUAEditorMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnReferenceDataChanged(); break;
        case 1: _t->RestoreWindowState(); break;
        case 2: _t->OnMenuCloseCurrentWindow(); break;
        case 3: _t->assetBrowserPressed(); break;
        case 4: _t->OnFileMenuNew(); break;
        case 5: _t->OnFileMenuSave(); break;
        case 6: _t->OnFileMenuSaveAs(); break;
        case 7: _t->OnFileMenuSaveAll(); break;
        case 8: _t->OnFileMenuReload(); break;
        case 9: _t->OnFileMenuClose(); break;
        case 10: _t->OnFileMenuCloseAll(); break;
        case 11: _t->OnFileMenuCloseAllExcept(); break;
        case 12: _t->OnEditMenuUndo(); break;
        case 13: _t->OnEditMenuRedo(); break;
        case 14: _t->OnEditMenuCut(); break;
        case 15: _t->OnEditMenuCopy(); break;
        case 16: _t->OnEditMenuPaste(); break;
        case 17: _t->OnEditMenuFind(); break;
        case 18: _t->OnEditMenuFindNext(); break;
        case 19: _t->OnEditMenuFindInAllOpen(); break;
        case 20: _t->OnEditMenuFindLocal(); break;
        case 21: _t->OnEditMenuFindLocalReverse(); break;
        case 22: _t->OnEditMenuGoToLine(); break;
        case 23: _t->OnEditMenuFoldAll(); break;
        case 24: _t->OnEditMenuUnfoldAll(); break;
        case 25: _t->OnEditMenuReplace(); break;
        case 26: _t->OnEditMenuReplaceInAllOpen(); break;
        case 27: _t->OnEditMenuSelectAll(); break;
        case 28: _t->OnEditMenuSelectToBrace(); break;
        case 29: _t->OnCommentSelectedBlock(); break;
        case 30: _t->OnUnCommentSelectedBlock(); break;
        case 31: _t->OnEditMenuTransposeUp(); break;
        case 32: _t->OnEditMenuTransposeDn(); break;
        case 33: _t->OnTabForwards(); break;
        case 34: _t->OnTabBackwards(); break;
        case 35: _t->OnViewMenuBreakpoints(); break;
        case 36: _t->OnViewMenuStack(); break;
        case 37: _t->OnViewMenuLocals(); break;
        case 38: _t->OnViewMenuWatch(); break;
        case 39: _t->OnViewMenuReference(); break;
        case 40: _t->OnViewMenuFind1(); break;
        case 41: _t->OnViewMenuFind2(); break;
        case 42: _t->OnViewMenuFind3(); break;
        case 43: _t->OnViewMenuFind4(); break;
        case 44: _t->OnViewMenuResetZoom(); break;
        case 45: _t->OnAutocompleteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->OnSettings(); break;
        case 47: _t->OnLuaDocumentation(); break;
        case 48: _t->OnDebugExecute(); break;
        case 49: _t->OnDebugExecuteOnTarget(); break;
        case 50: _t->OnDebugToggleBreakpoint(); break;
        case 51: _t->OnDebugContinueRunning(); break;
        case 52: _t->OnDebugStepOver(); break;
        case 53: _t->OnDebugStepIn(); break;
        case 54: _t->OnDebugStepOut(); break;
        case 55: _t->OnSourceControlMenuCheckOut(); break;
        case 56: _t->luaClassFilterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 57: _t->OnFindResultClicked((*reinterpret_cast< FindResultsBlockInfo(*)>(_a[1]))); break;
        case 58: _t->showTabContextMenu((*reinterpret_cast< const AZStd::string(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 59: _t->closeAllTabsExceptThisTabContextMenu(); break;
        case 60: _t->OnLogTabsReset(); break;
        case 61: _t->AddMessageToLog((*reinterpret_cast< AzToolsFramework::Logging::LogLine::LogType(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LUAEditorMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAEditorMainWindow::OnReferenceDataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::LUAEditorMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__LUAEditorMainWindow.data,
    qt_meta_data_LUAEditor__LUAEditorMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::LUAEditorMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::LUAEditorMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__LUAEditorMainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "LUAEditorMainWindowMessages::Handler"))
        return static_cast< LUAEditorMainWindowMessages::Handler*>(this);
    if (!strcmp(_clname, "LUAViewMessages::Handler"))
        return static_cast< LUAViewMessages::Handler*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LUAEditor::LUAEditorMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 62;
    }
    return _id;
}

// SIGNAL 0
void LUAEditor::LUAEditorMainWindow::OnReferenceDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LUAEditor__LUAEditorMainWindowLayout_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__LUAEditorMainWindowLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__LUAEditorMainWindowLayout_t qt_meta_stringdata_LUAEditor__LUAEditorMainWindowLayout = {
    {
QT_MOC_LITERAL(0, 0, 36) // "LUAEditor::LUAEditorMainWindo..."

    },
    "LUAEditor::LUAEditorMainWindowLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__LUAEditorMainWindowLayout[] = {

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

void LUAEditor::LUAEditorMainWindowLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::LUAEditorMainWindowLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QLayout::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__LUAEditorMainWindowLayout.data,
    qt_meta_data_LUAEditor__LUAEditorMainWindowLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::LUAEditorMainWindowLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::LUAEditorMainWindowLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__LUAEditorMainWindowLayout.stringdata0))
        return static_cast<void*>(this);
    return QLayout::qt_metacast(_clname);
}

int LUAEditor::LUAEditorMainWindowLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
