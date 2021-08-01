/****************************************************************************
** Meta object code from reading C++ file 'PropertyAssetCtrl.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/PropertyEditor/PropertyAssetCtrl.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyAssetCtrl.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__PropertyAssetCtrl_t {
    QByteArrayData data[68];
    char stringdata0[1154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__PropertyAssetCtrl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__PropertyAssetCtrl_t qt_meta_stringdata_AzToolsFramework__PropertyAssetCtrl = {
    {
QT_MOC_LITERAL(0, 0, 35), // "AzToolsFramework::PropertyAss..."
QT_MOC_LITERAL(1, 36, 16), // "OnAssetIDChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 17), // "AZ::Data::AssetId"
QT_MOC_LITERAL(4, 72, 10), // "newAssetID"
QT_MOC_LITERAL(5, 83, 8), // "SetTitle"
QT_MOC_LITERAL(6, 92, 5), // "title"
QT_MOC_LITERAL(7, 98, 19), // "SetEditNotifyTarget"
QT_MOC_LITERAL(8, 118, 16), // "editNotifyTarget"
QT_MOC_LITERAL(9, 135, 21), // "SetEditNotifyCallback"
QT_MOC_LITERAL(10, 157, 17), // "EditCallbackType*"
QT_MOC_LITERAL(11, 175, 18), // "editNotifyCallback"
QT_MOC_LITERAL(12, 194, 22), // "SetClearNotifyCallback"
QT_MOC_LITERAL(13, 217, 18), // "ClearCallbackType*"
QT_MOC_LITERAL(14, 236, 19), // "clearNotifyCallback"
QT_MOC_LITERAL(15, 256, 27), // "SetDefaultDirectoryCallback"
QT_MOC_LITERAL(16, 284, 29), // "DefaultDirectoryCallbackType*"
QT_MOC_LITERAL(17, 314, 8), // "callback"
QT_MOC_LITERAL(18, 323, 20), // "SetEditButtonEnabled"
QT_MOC_LITERAL(19, 344, 7), // "enabled"
QT_MOC_LITERAL(20, 352, 20), // "SetEditButtonVisible"
QT_MOC_LITERAL(21, 373, 7), // "visible"
QT_MOC_LITERAL(22, 381, 17), // "SetEditButtonIcon"
QT_MOC_LITERAL(23, 399, 4), // "icon"
QT_MOC_LITERAL(24, 404, 20), // "SetEditButtonTooltip"
QT_MOC_LITERAL(25, 425, 7), // "tooltip"
QT_MOC_LITERAL(26, 433, 19), // "SetBrowseButtonIcon"
QT_MOC_LITERAL(27, 453, 22), // "SetBrowseButtonEnabled"
QT_MOC_LITERAL(28, 476, 22), // "SetBrowseButtonVisible"
QT_MOC_LITERAL(29, 499, 21), // "SetClearButtonEnabled"
QT_MOC_LITERAL(30, 521, 6), // "enable"
QT_MOC_LITERAL(31, 528, 21), // "SetClearButtonVisible"
QT_MOC_LITERAL(32, 550, 23), // "SetShowProductAssetName"
QT_MOC_LITERAL(33, 574, 23), // "GetShowProductAssetName"
QT_MOC_LITERAL(34, 598, 32), // "SetHideProductFilesInAssetPicker"
QT_MOC_LITERAL(35, 631, 4), // "hide"
QT_MOC_LITERAL(36, 636, 32), // "GetHideProductFilesInAssetPicker"
QT_MOC_LITERAL(37, 669, 16), // "SetShowThumbnail"
QT_MOC_LITERAL(38, 686, 16), // "GetShowThumbnail"
QT_MOC_LITERAL(39, 703, 30), // "SetShowThumbnailDropDownButton"
QT_MOC_LITERAL(40, 734, 30), // "GetShowThumbnailDropDownButton"
QT_MOC_LITERAL(41, 765, 20), // "SetThumbnailCallback"
QT_MOC_LITERAL(42, 786, 18), // "SetSelectedAssetID"
QT_MOC_LITERAL(43, 805, 5), // "newID"
QT_MOC_LITERAL(44, 811, 19), // "SetCurrentAssetType"
QT_MOC_LITERAL(45, 831, 19), // "AZ::Data::AssetType"
QT_MOC_LITERAL(46, 851, 7), // "newType"
QT_MOC_LITERAL(47, 859, 19), // "SetCurrentAssetHint"
QT_MOC_LITERAL(48, 879, 13), // "AZStd::string"
QT_MOC_LITERAL(49, 893, 4), // "hint"
QT_MOC_LITERAL(50, 898, 17), // "SetDefaultAssetID"
QT_MOC_LITERAL(51, 916, 9), // "defaultID"
QT_MOC_LITERAL(52, 926, 16), // "PopupAssetPicker"
QT_MOC_LITERAL(53, 943, 20), // "OnClearButtonClicked"
QT_MOC_LITERAL(54, 964, 18), // "UpdateAssetDisplay"
QT_MOC_LITERAL(55, 983, 15), // "OnLineEditFocus"
QT_MOC_LITERAL(56, 999, 5), // "focus"
QT_MOC_LITERAL(57, 1005, 19), // "OnEditButtonClicked"
QT_MOC_LITERAL(58, 1025, 18), // "OnThumbnailClicked"
QT_MOC_LITERAL(59, 1044, 22), // "OnCompletionModelReset"
QT_MOC_LITERAL(60, 1067, 14), // "OnAutocomplete"
QT_MOC_LITERAL(61, 1082, 11), // "QModelIndex"
QT_MOC_LITERAL(62, 1094, 5), // "index"
QT_MOC_LITERAL(63, 1100, 12), // "OnTextChange"
QT_MOC_LITERAL(64, 1113, 4), // "text"
QT_MOC_LITERAL(65, 1118, 15), // "OnReturnPressed"
QT_MOC_LITERAL(66, 1134, 15), // "ShowContextMenu"
QT_MOC_LITERAL(67, 1150, 3) // "pos"

    },
    "AzToolsFramework::PropertyAssetCtrl\0"
    "OnAssetIDChanged\0\0AZ::Data::AssetId\0"
    "newAssetID\0SetTitle\0title\0SetEditNotifyTarget\0"
    "editNotifyTarget\0SetEditNotifyCallback\0"
    "EditCallbackType*\0editNotifyCallback\0"
    "SetClearNotifyCallback\0ClearCallbackType*\0"
    "clearNotifyCallback\0SetDefaultDirectoryCallback\0"
    "DefaultDirectoryCallbackType*\0callback\0"
    "SetEditButtonEnabled\0enabled\0"
    "SetEditButtonVisible\0visible\0"
    "SetEditButtonIcon\0icon\0SetEditButtonTooltip\0"
    "tooltip\0SetBrowseButtonIcon\0"
    "SetBrowseButtonEnabled\0SetBrowseButtonVisible\0"
    "SetClearButtonEnabled\0enable\0"
    "SetClearButtonVisible\0SetShowProductAssetName\0"
    "GetShowProductAssetName\0"
    "SetHideProductFilesInAssetPicker\0hide\0"
    "GetHideProductFilesInAssetPicker\0"
    "SetShowThumbnail\0GetShowThumbnail\0"
    "SetShowThumbnailDropDownButton\0"
    "GetShowThumbnailDropDownButton\0"
    "SetThumbnailCallback\0SetSelectedAssetID\0"
    "newID\0SetCurrentAssetType\0AZ::Data::AssetType\0"
    "newType\0SetCurrentAssetHint\0AZStd::string\0"
    "hint\0SetDefaultAssetID\0defaultID\0"
    "PopupAssetPicker\0OnClearButtonClicked\0"
    "UpdateAssetDisplay\0OnLineEditFocus\0"
    "focus\0OnEditButtonClicked\0OnThumbnailClicked\0"
    "OnCompletionModelReset\0OnAutocomplete\0"
    "QModelIndex\0index\0OnTextChange\0text\0"
    "OnReturnPressed\0ShowContextMenu\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__PropertyAssetCtrl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  214,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  217,    2, 0x0a /* Public */,
       7,    1,  220,    2, 0x0a /* Public */,
       9,    1,  223,    2, 0x0a /* Public */,
      12,    1,  226,    2, 0x0a /* Public */,
      15,    1,  229,    2, 0x0a /* Public */,
      18,    1,  232,    2, 0x0a /* Public */,
      20,    1,  235,    2, 0x0a /* Public */,
      22,    1,  238,    2, 0x0a /* Public */,
      24,    1,  241,    2, 0x0a /* Public */,
      26,    1,  244,    2, 0x0a /* Public */,
      27,    1,  247,    2, 0x0a /* Public */,
      28,    1,  250,    2, 0x0a /* Public */,
      29,    1,  253,    2, 0x0a /* Public */,
      31,    1,  256,    2, 0x0a /* Public */,
      32,    1,  259,    2, 0x0a /* Public */,
      33,    0,  262,    2, 0x0a /* Public */,
      34,    1,  263,    2, 0x0a /* Public */,
      36,    0,  266,    2, 0x0a /* Public */,
      37,    1,  267,    2, 0x0a /* Public */,
      38,    0,  270,    2, 0x0a /* Public */,
      39,    1,  271,    2, 0x0a /* Public */,
      40,    0,  274,    2, 0x0a /* Public */,
      41,    1,  275,    2, 0x0a /* Public */,
      42,    1,  278,    2, 0x0a /* Public */,
      44,    1,  281,    2, 0x0a /* Public */,
      42,    2,  284,    2, 0x0a /* Public */,
      47,    1,  289,    2, 0x0a /* Public */,
      50,    1,  292,    2, 0x0a /* Public */,
      52,    0,  295,    2, 0x0a /* Public */,
      53,    0,  296,    2, 0x0a /* Public */,
      54,    0,  297,    2, 0x0a /* Public */,
      55,    1,  298,    2, 0x0a /* Public */,
      57,    0,  301,    2, 0x0a /* Public */,
      58,    0,  302,    2, 0x0a /* Public */,
      59,    0,  303,    2, 0x0a /* Public */,
      60,    1,  304,    2, 0x0a /* Public */,
      63,    1,  307,    2, 0x0a /* Public */,
      65,    0,  310,    2, 0x0a /* Public */,
      66,    1,  311,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::VoidStar,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QIcon,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QIcon,   23,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 3,   43,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 45,   43,   46,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 3,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, QMetaType::QString,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   67,

       0        // eod
};

void AzToolsFramework::PropertyAssetCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyAssetCtrl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAssetIDChanged((*reinterpret_cast< AZ::Data::AssetId(*)>(_a[1]))); break;
        case 1: _t->SetTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SetEditNotifyTarget((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->SetEditNotifyCallback((*reinterpret_cast< EditCallbackType*(*)>(_a[1]))); break;
        case 4: _t->SetClearNotifyCallback((*reinterpret_cast< ClearCallbackType*(*)>(_a[1]))); break;
        case 5: _t->SetDefaultDirectoryCallback((*reinterpret_cast< DefaultDirectoryCallbackType*(*)>(_a[1]))); break;
        case 6: _t->SetEditButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SetEditButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SetEditButtonIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 9: _t->SetEditButtonTooltip((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->SetBrowseButtonIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 11: _t->SetBrowseButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->SetBrowseButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->SetClearButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->SetClearButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->SetShowProductAssetName((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: { bool _r = _t->GetShowProductAssetName();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->SetHideProductFilesInAssetPicker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: { bool _r = _t->GetHideProductFilesInAssetPicker();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->SetShowThumbnail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: { bool _r = _t->GetShowThumbnail();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->SetShowThumbnailDropDownButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: { bool _r = _t->GetShowThumbnailDropDownButton();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->SetThumbnailCallback((*reinterpret_cast< EditCallbackType*(*)>(_a[1]))); break;
        case 24: _t->SetSelectedAssetID((*reinterpret_cast< const AZ::Data::AssetId(*)>(_a[1]))); break;
        case 25: _t->SetCurrentAssetType((*reinterpret_cast< const AZ::Data::AssetType(*)>(_a[1]))); break;
        case 26: _t->SetSelectedAssetID((*reinterpret_cast< const AZ::Data::AssetId(*)>(_a[1])),(*reinterpret_cast< const AZ::Data::AssetType(*)>(_a[2]))); break;
        case 27: _t->SetCurrentAssetHint((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 28: _t->SetDefaultAssetID((*reinterpret_cast< const AZ::Data::AssetId(*)>(_a[1]))); break;
        case 29: _t->PopupAssetPicker(); break;
        case 30: _t->OnClearButtonClicked(); break;
        case 31: _t->UpdateAssetDisplay(); break;
        case 32: _t->OnLineEditFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->OnEditButtonClicked(); break;
        case 34: _t->OnThumbnailClicked(); break;
        case 35: _t->OnCompletionModelReset(); break;
        case 36: _t->OnAutocomplete((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 37: _t->OnTextChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->OnReturnPressed(); break;
        case 39: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyAssetCtrl::*)(AZ::Data::AssetId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyAssetCtrl::OnAssetIDChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::PropertyAssetCtrl::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__PropertyAssetCtrl.data,
    qt_meta_data_AzToolsFramework__PropertyAssetCtrl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::PropertyAssetCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::PropertyAssetCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__PropertyAssetCtrl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::PropertyAssetCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::PropertyAssetCtrl::OnAssetIDChanged(AZ::Data::AssetId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzToolsFramework__AssetPropertyHandlerDefault_t {
    QByteArrayData data[1];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetPropertyHandlerDefault_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetPropertyHandlerDefault_t qt_meta_stringdata_AzToolsFramework__AssetPropertyHandlerDefault = {
    {
QT_MOC_LITERAL(0, 0, 45) // "AzToolsFramework::AssetProper..."

    },
    "AzToolsFramework::AssetPropertyHandlerDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetPropertyHandlerDefault[] = {

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

void AzToolsFramework::AssetPropertyHandlerDefault::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetPropertyHandlerDefault::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetPropertyHandlerDefault.data,
    qt_meta_data_AzToolsFramework__AssetPropertyHandlerDefault,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetPropertyHandlerDefault::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetPropertyHandlerDefault::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetPropertyHandlerDefault.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyHandler<AZ::Data::Asset<AZ::Data::AssetData>,PropertyAssetCtrl>"))
        return static_cast< PropertyHandler<AZ::Data::Asset<AZ::Data::AssetData>,PropertyAssetCtrl>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::AssetPropertyHandlerDefault::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AzToolsFramework__SimpleAssetPropertyHandlerDefault_t {
    QByteArrayData data[1];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__SimpleAssetPropertyHandlerDefault_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__SimpleAssetPropertyHandlerDefault_t qt_meta_stringdata_AzToolsFramework__SimpleAssetPropertyHandlerDefault = {
    {
QT_MOC_LITERAL(0, 0, 51) // "AzToolsFramework::SimpleAsset..."

    },
    "AzToolsFramework::SimpleAssetPropertyHandlerDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__SimpleAssetPropertyHandlerDefault[] = {

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

void AzToolsFramework::SimpleAssetPropertyHandlerDefault::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::SimpleAssetPropertyHandlerDefault::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__SimpleAssetPropertyHandlerDefault.data,
    qt_meta_data_AzToolsFramework__SimpleAssetPropertyHandlerDefault,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::SimpleAssetPropertyHandlerDefault::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::SimpleAssetPropertyHandlerDefault::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__SimpleAssetPropertyHandlerDefault.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "PropertyHandler<AzFramework::SimpleAssetReferenceBase,PropertyAssetCtrl>"))
        return static_cast< PropertyHandler<AzFramework::SimpleAssetReferenceBase,PropertyAssetCtrl>*>(this);
    return QObject::qt_metacast(_clname);
}

int AzToolsFramework::SimpleAssetPropertyHandlerDefault::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
