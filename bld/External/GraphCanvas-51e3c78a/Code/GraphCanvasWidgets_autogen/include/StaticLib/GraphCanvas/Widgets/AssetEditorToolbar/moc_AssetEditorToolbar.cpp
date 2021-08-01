/****************************************************************************
** Meta object code from reading C++ file 'AssetEditorToolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/GraphCanvas/Code/StaticLib/GraphCanvas/Widgets/AssetEditorToolbar/AssetEditorToolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetEditorToolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphCanvas__AssetEditorToolbar_t {
    QByteArrayData data[16];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphCanvas__AssetEditorToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphCanvas__AssetEditorToolbar_t qt_meta_stringdata_GraphCanvas__AssetEditorToolbar = {
    {
QT_MOC_LITERAL(0, 0, 31), // "GraphCanvas::AssetEditorToolbar"
QT_MOC_LITERAL(1, 32, 10), // "AddComment"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "checked"
QT_MOC_LITERAL(4, 52, 14), // "GroupSelection"
QT_MOC_LITERAL(5, 67, 16), // "UngroupSelection"
QT_MOC_LITERAL(6, 84, 16), // "AlignSelectedTop"
QT_MOC_LITERAL(7, 101, 19), // "AlignSelectedBottom"
QT_MOC_LITERAL(8, 121, 17), // "AlignSelectedLeft"
QT_MOC_LITERAL(9, 139, 18), // "AlignSelectedRight"
QT_MOC_LITERAL(10, 158, 15), // "OrganizeTopLeft"
QT_MOC_LITERAL(11, 174, 16), // "OrganizeCentered"
QT_MOC_LITERAL(12, 191, 19), // "OrganizeBottomRight"
QT_MOC_LITERAL(13, 211, 27), // "OnCommentPresetsContextMenu"
QT_MOC_LITERAL(14, 239, 3), // "pos"
QT_MOC_LITERAL(15, 243, 29) // "OnNodeGroupPresetsContextMenu"

    },
    "GraphCanvas::AssetEditorToolbar\0"
    "AddComment\0\0checked\0GroupSelection\0"
    "UngroupSelection\0AlignSelectedTop\0"
    "AlignSelectedBottom\0AlignSelectedLeft\0"
    "AlignSelectedRight\0OrganizeTopLeft\0"
    "OrganizeCentered\0OrganizeBottomRight\0"
    "OnCommentPresetsContextMenu\0pos\0"
    "OnNodeGroupPresetsContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphCanvas__AssetEditorToolbar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       5,    1,   80,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x0a /* Public */,
       7,    1,   86,    2, 0x0a /* Public */,
       8,    1,   89,    2, 0x0a /* Public */,
       9,    1,   92,    2, 0x0a /* Public */,
      10,    1,   95,    2, 0x0a /* Public */,
      11,    1,   98,    2, 0x0a /* Public */,
      12,    1,  101,    2, 0x0a /* Public */,
      13,    1,  104,    2, 0x0a /* Public */,
      15,    1,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QPoint,   14,
    QMetaType::Void, QMetaType::QPoint,   14,

       0        // eod
};

void GraphCanvas::AssetEditorToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetEditorToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddComment((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->GroupSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->UngroupSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->AlignSelectedTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->AlignSelectedBottom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->AlignSelectedLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->AlignSelectedRight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->OrganizeTopLeft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->OrganizeCentered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->OrganizeBottomRight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->OnCommentPresetsContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->OnNodeGroupPresetsContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GraphCanvas::AssetEditorToolbar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GraphCanvas__AssetEditorToolbar.data,
    qt_meta_data_GraphCanvas__AssetEditorToolbar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphCanvas::AssetEditorToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphCanvas::AssetEditorToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphCanvas__AssetEditorToolbar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AssetEditorNotificationBus::Handler"))
        return static_cast< AssetEditorNotificationBus::Handler*>(this);
    if (!strcmp(_clname, "SceneNotificationBus::Handler"))
        return static_cast< SceneNotificationBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphCanvas::AssetEditorToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
