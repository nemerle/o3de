/****************************************************************************
** Meta object code from reading C++ file 'ActorPropertiesWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/SceneManager/ActorPropertiesWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActorPropertiesWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__ActorPropertiesWindow_t {
    QByteArrayData data[12];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ActorPropertiesWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ActorPropertiesWindow_t qt_meta_stringdata_EMStudio__ActorPropertiesWindow = {
    {
QT_MOC_LITERAL(0, 0, 31), // "EMStudio::ActorPropertiesWindow"
QT_MOC_LITERAL(1, 32, 15), // "UpdateInterface"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "NameEditChanged"
QT_MOC_LITERAL(4, 65, 31), // "OnMotionExtractionJointSelected"
QT_MOC_LITERAL(5, 97, 28), // "AZStd::vector<SelectionItem>"
QT_MOC_LITERAL(6, 126, 14), // "selectedJoints"
QT_MOC_LITERAL(7, 141, 22), // "OnFindBestMatchingNode"
QT_MOC_LITERAL(8, 164, 27), // "OnRetargetRootJointSelected"
QT_MOC_LITERAL(9, 192, 13), // "OnMirrorSetup"
QT_MOC_LITERAL(10, 206, 39), // "OnExcludedJointsFromBoundsSel..."
QT_MOC_LITERAL(11, 246, 42) // "OnExcludedJointsFromBoundsSel..."

    },
    "EMStudio::ActorPropertiesWindow\0"
    "UpdateInterface\0\0NameEditChanged\0"
    "OnMotionExtractionJointSelected\0"
    "AZStd::vector<SelectionItem>\0"
    "selectedJoints\0OnFindBestMatchingNode\0"
    "OnRetargetRootJointSelected\0OnMirrorSetup\0"
    "OnExcludedJointsFromBoundsSelectionDone\0"
    "OnExcludedJointsFromBoundsSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ActorPropertiesWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    1,   56,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void EMStudio::ActorPropertiesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActorPropertiesWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateInterface(); break;
        case 1: _t->NameEditChanged(); break;
        case 2: _t->OnMotionExtractionJointSelected((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 3: _t->OnFindBestMatchingNode(); break;
        case 4: _t->OnRetargetRootJointSelected((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 5: _t->OnMirrorSetup(); break;
        case 6: _t->OnExcludedJointsFromBoundsSelectionDone((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        case 7: _t->OnExcludedJointsFromBoundsSelectionChanged((*reinterpret_cast< const AZStd::vector<SelectionItem>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ActorPropertiesWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ActorPropertiesWindow.data,
    qt_meta_data_EMStudio__ActorPropertiesWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ActorPropertiesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ActorPropertiesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ActorPropertiesWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::ActorPropertiesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
