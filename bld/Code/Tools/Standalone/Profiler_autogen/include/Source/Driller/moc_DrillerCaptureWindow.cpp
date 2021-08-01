/****************************************************************************
** Meta object code from reading C++ file 'DrillerCaptureWindow.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/Driller/DrillerCaptureWindow.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrillerCaptureWindow.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Driller__DrillerCaptureWindow_t {
    QByteArrayData data[61];
    char stringdata0[1075];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Driller__DrillerCaptureWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Driller__DrillerCaptureWindow_t qt_meta_stringdata_Driller__DrillerCaptureWindow = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Driller::DrillerCaptureWindow"
QT_MOC_LITERAL(1, 30, 19), // "ScrubberFrameUpdate"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "FrameNumberType"
QT_MOC_LITERAL(4, 67, 5), // "frame"
QT_MOC_LITERAL(5, 73, 12), // "ShowYourself"
QT_MOC_LITERAL(6, 86, 12), // "HideYourself"
QT_MOC_LITERAL(7, 99, 19), // "OnCaptureModeChange"
QT_MOC_LITERAL(8, 119, 11), // "CaptureMode"
QT_MOC_LITERAL(9, 131, 22), // "CaptureWindowSetToLive"
QT_MOC_LITERAL(10, 154, 21), // "RepopulateAnnotations"
QT_MOC_LITERAL(11, 176, 18), // "RestoreWindowState"
QT_MOC_LITERAL(12, 195, 24), // "OnMenuCloseCurrentWindow"
QT_MOC_LITERAL(13, 220, 6), // "OnOpen"
QT_MOC_LITERAL(14, 227, 7), // "OnClose"
QT_MOC_LITERAL(15, 235, 11), // "OnCloseFile"
QT_MOC_LITERAL(16, 247, 9), // "OnToBegin"
QT_MOC_LITERAL(17, 257, 7), // "OnToEnd"
QT_MOC_LITERAL(18, 265, 13), // "OnPlayToggled"
QT_MOC_LITERAL(19, 279, 11), // "toggleState"
QT_MOC_LITERAL(20, 291, 16), // "OnCaptureToggled"
QT_MOC_LITERAL(21, 308, 15), // "OnSliderPressed"
QT_MOC_LITERAL(22, 324, 16), // "OnNewSliderValue"
QT_MOC_LITERAL(23, 341, 8), // "newValue"
QT_MOC_LITERAL(24, 350, 25), // "OnFrameScrubberboxChanged"
QT_MOC_LITERAL(25, 376, 16), // "OnQuantMenuFinal"
QT_MOC_LITERAL(26, 393, 5), // "range"
QT_MOC_LITERAL(27, 399, 26), // "HandleScrollToFrameRequest"
QT_MOC_LITERAL(28, 426, 25), // "OnChannelControlMouseDown"
QT_MOC_LITERAL(29, 452, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(30, 468, 11), // "whichButton"
QT_MOC_LITERAL(31, 480, 9), // "modifiers"
QT_MOC_LITERAL(32, 490, 25), // "OnChannelControlMouseMove"
QT_MOC_LITERAL(33, 516, 23), // "OnChannelControlMouseUp"
QT_MOC_LITERAL(34, 540, 26), // "OnChannelControlMouseWheel"
QT_MOC_LITERAL(35, 567, 11), // "wheelAmount"
QT_MOC_LITERAL(36, 579, 17), // "OnOpenDrillerFile"
QT_MOC_LITERAL(37, 597, 8), // "fileName"
QT_MOC_LITERAL(38, 606, 29), // "OnOpenDrillerFileForWorkspace"
QT_MOC_LITERAL(39, 636, 17), // "workspaceFileName"
QT_MOC_LITERAL(40, 654, 19), // "OnOpenWorkspaceFile"
QT_MOC_LITERAL(41, 674, 19), // "openDrillerFileAlso"
QT_MOC_LITERAL(42, 694, 20), // "OnApplyWorkspaceFile"
QT_MOC_LITERAL(43, 715, 17), // "OnSaveDrillerFile"
QT_MOC_LITERAL(44, 733, 19), // "OnSaveWorkspaceFile"
QT_MOC_LITERAL(45, 753, 9), // "automated"
QT_MOC_LITERAL(46, 763, 12), // "PlaybackTick"
QT_MOC_LITERAL(47, 776, 18), // "OnUpdateScrollSize"
QT_MOC_LITERAL(48, 795, 22), // "EventRequestEventFocus"
QT_MOC_LITERAL(49, 818, 15), // "EventNumberType"
QT_MOC_LITERAL(50, 834, 8), // "eventIdx"
QT_MOC_LITERAL(51, 843, 35), // "OnSelectedAnnotationChannelsC..."
QT_MOC_LITERAL(52, 879, 24), // "OnAnnotationOptionsClick"
QT_MOC_LITERAL(53, 904, 27), // "InformOfMouseOverAnnotation"
QT_MOC_LITERAL(54, 932, 10), // "Annotation"
QT_MOC_LITERAL(55, 943, 10), // "annotation"
QT_MOC_LITERAL(56, 954, 23), // "InformOfClickAnnotation"
QT_MOC_LITERAL(57, 978, 28), // "OnAnnotationsDialogDestroyed"
QT_MOC_LITERAL(58, 1007, 26), // "CommitAnnotationsCollected"
QT_MOC_LITERAL(59, 1034, 24), // "UpdateEndFrameInControls"
QT_MOC_LITERAL(60, 1059, 15) // "GetOpenFileName"

    },
    "Driller::DrillerCaptureWindow\0"
    "ScrubberFrameUpdate\0\0FrameNumberType\0"
    "frame\0ShowYourself\0HideYourself\0"
    "OnCaptureModeChange\0CaptureMode\0"
    "CaptureWindowSetToLive\0RepopulateAnnotations\0"
    "RestoreWindowState\0OnMenuCloseCurrentWindow\0"
    "OnOpen\0OnClose\0OnCloseFile\0OnToBegin\0"
    "OnToEnd\0OnPlayToggled\0toggleState\0"
    "OnCaptureToggled\0OnSliderPressed\0"
    "OnNewSliderValue\0newValue\0"
    "OnFrameScrubberboxChanged\0OnQuantMenuFinal\0"
    "range\0HandleScrollToFrameRequest\0"
    "OnChannelControlMouseDown\0Qt::MouseButton\0"
    "whichButton\0modifiers\0OnChannelControlMouseMove\0"
    "OnChannelControlMouseUp\0"
    "OnChannelControlMouseWheel\0wheelAmount\0"
    "OnOpenDrillerFile\0fileName\0"
    "OnOpenDrillerFileForWorkspace\0"
    "workspaceFileName\0OnOpenWorkspaceFile\0"
    "openDrillerFileAlso\0OnApplyWorkspaceFile\0"
    "OnSaveDrillerFile\0OnSaveWorkspaceFile\0"
    "automated\0PlaybackTick\0OnUpdateScrollSize\0"
    "EventRequestEventFocus\0EventNumberType\0"
    "eventIdx\0OnSelectedAnnotationChannelsChanged\0"
    "OnAnnotationOptionsClick\0"
    "InformOfMouseOverAnnotation\0Annotation\0"
    "annotation\0InformOfClickAnnotation\0"
    "OnAnnotationsDialogDestroyed\0"
    "CommitAnnotationsCollected\0"
    "UpdateEndFrameInControls\0GetOpenFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Driller__DrillerCaptureWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  229,    2, 0x06 /* Public */,
       5,    0,  232,    2, 0x06 /* Public */,
       6,    0,  233,    2, 0x06 /* Public */,
       7,    1,  234,    2, 0x06 /* Public */,
       9,    1,  237,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  240,    2, 0x0a /* Public */,
      11,    0,  241,    2, 0x0a /* Public */,
      12,    0,  242,    2, 0x0a /* Public */,
      13,    0,  243,    2, 0x0a /* Public */,
      14,    0,  244,    2, 0x0a /* Public */,
      15,    0,  245,    2, 0x0a /* Public */,
      16,    0,  246,    2, 0x0a /* Public */,
      17,    0,  247,    2, 0x0a /* Public */,
      18,    1,  248,    2, 0x0a /* Public */,
      20,    1,  251,    2, 0x0a /* Public */,
      21,    0,  254,    2, 0x0a /* Public */,
      22,    1,  255,    2, 0x0a /* Public */,
      24,    1,  258,    2, 0x0a /* Public */,
      25,    1,  261,    2, 0x0a /* Public */,
      27,    1,  264,    2, 0x0a /* Public */,
      28,    4,  267,    2, 0x0a /* Public */,
      32,    3,  276,    2, 0x0a /* Public */,
      33,    4,  283,    2, 0x0a /* Public */,
      34,    4,  292,    2, 0x0a /* Public */,
      36,    0,  301,    2, 0x0a /* Public */,
      36,    1,  302,    2, 0x0a /* Public */,
      38,    2,  305,    2, 0x0a /* Public */,
      40,    2,  310,    2, 0x0a /* Public */,
      42,    1,  315,    2, 0x0a /* Public */,
      43,    0,  318,    2, 0x0a /* Public */,
      44,    2,  319,    2, 0x0a /* Public */,
      44,    1,  324,    2, 0x2a /* Public | MethodCloned */,
      46,    0,  327,    2, 0x0a /* Public */,
      47,    0,  328,    2, 0x0a /* Public */,
      48,    1,  329,    2, 0x0a /* Public */,
      51,    0,  332,    2, 0x0a /* Public */,
      52,    0,  333,    2, 0x0a /* Public */,
      53,    1,  334,    2, 0x0a /* Public */,
      56,    1,  337,    2, 0x0a /* Public */,
      57,    0,  340,    2, 0x0a /* Public */,
      58,    0,  341,    2, 0x0a /* Public */,
      59,    0,  342,    2, 0x0a /* Public */,
      60,    0,  343,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,   30,    4,   26,   31,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,   26,   31,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,   30,    4,   26,   31,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    4,   35,   26,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   37,   39,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   37,   41,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   37,   45,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,

       0        // eod
};

void Driller::DrillerCaptureWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrillerCaptureWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ScrubberFrameUpdate((*reinterpret_cast< FrameNumberType(*)>(_a[1]))); break;
        case 1: _t->ShowYourself(); break;
        case 2: _t->HideYourself(); break;
        case 3: _t->OnCaptureModeChange((*reinterpret_cast< CaptureMode(*)>(_a[1]))); break;
        case 4: _t->CaptureWindowSetToLive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->RepopulateAnnotations(); break;
        case 6: _t->RestoreWindowState(); break;
        case 7: _t->OnMenuCloseCurrentWindow(); break;
        case 8: _t->OnOpen(); break;
        case 9: _t->OnClose(); break;
        case 10: _t->OnCloseFile(); break;
        case 11: _t->OnToBegin(); break;
        case 12: _t->OnToEnd(); break;
        case 13: _t->OnPlayToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->OnCaptureToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->OnSliderPressed(); break;
        case 16: _t->OnNewSliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->OnFrameScrubberboxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->OnQuantMenuFinal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->HandleScrollToFrameRequest((*reinterpret_cast< FrameNumberType(*)>(_a[1]))); break;
        case 20: _t->OnChannelControlMouseDown((*reinterpret_cast< Qt::MouseButton(*)>(_a[1])),(*reinterpret_cast< FrameNumberType(*)>(_a[2])),(*reinterpret_cast< FrameNumberType(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 21: _t->OnChannelControlMouseMove((*reinterpret_cast< FrameNumberType(*)>(_a[1])),(*reinterpret_cast< FrameNumberType(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->OnChannelControlMouseUp((*reinterpret_cast< Qt::MouseButton(*)>(_a[1])),(*reinterpret_cast< FrameNumberType(*)>(_a[2])),(*reinterpret_cast< FrameNumberType(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 23: _t->OnChannelControlMouseWheel((*reinterpret_cast< FrameNumberType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< FrameNumberType(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 24: _t->OnOpenDrillerFile(); break;
        case 25: _t->OnOpenDrillerFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->OnOpenDrillerFileForWorkspace((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->OnOpenWorkspaceFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->OnApplyWorkspaceFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->OnSaveDrillerFile(); break;
        case 30: _t->OnSaveWorkspaceFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: _t->OnSaveWorkspaceFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->PlaybackTick(); break;
        case 33: _t->OnUpdateScrollSize(); break;
        case 34: _t->EventRequestEventFocus((*reinterpret_cast< EventNumberType(*)>(_a[1]))); break;
        case 35: _t->OnSelectedAnnotationChannelsChanged(); break;
        case 36: _t->OnAnnotationOptionsClick(); break;
        case 37: _t->InformOfMouseOverAnnotation((*reinterpret_cast< const Annotation(*)>(_a[1]))); break;
        case 38: _t->InformOfClickAnnotation((*reinterpret_cast< const Annotation(*)>(_a[1]))); break;
        case 39: _t->OnAnnotationsDialogDestroyed(); break;
        case 40: _t->CommitAnnotationsCollected(); break;
        case 41: _t->UpdateEndFrameInControls(); break;
        case 42: { QString _r = _t->GetOpenFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrillerCaptureWindow::*)(FrameNumberType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrillerCaptureWindow::ScrubberFrameUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrillerCaptureWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrillerCaptureWindow::ShowYourself)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DrillerCaptureWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrillerCaptureWindow::HideYourself)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DrillerCaptureWindow::*)(CaptureMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrillerCaptureWindow::OnCaptureModeChange)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DrillerCaptureWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrillerCaptureWindow::CaptureWindowSetToLive)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Driller::DrillerCaptureWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_Driller__DrillerCaptureWindow.data,
    qt_meta_data_Driller__DrillerCaptureWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Driller::DrillerCaptureWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Driller::DrillerCaptureWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Driller__DrillerCaptureWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Driller::DrillerNetworkMessages::Bus::Handler"))
        return static_cast< Driller::DrillerNetworkMessages::Bus::Handler*>(this);
    if (!strcmp(_clname, "Driller::DrillerCaptureWindowRequestBus::Handler"))
        return static_cast< Driller::DrillerCaptureWindowRequestBus::Handler*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Driller::DrillerCaptureWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void Driller::DrillerCaptureWindow::ScrubberFrameUpdate(FrameNumberType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Driller::DrillerCaptureWindow::ShowYourself()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Driller::DrillerCaptureWindow::HideYourself()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Driller::DrillerCaptureWindow::OnCaptureModeChange(CaptureMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Driller::DrillerCaptureWindow::CaptureWindowSetToLive(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
