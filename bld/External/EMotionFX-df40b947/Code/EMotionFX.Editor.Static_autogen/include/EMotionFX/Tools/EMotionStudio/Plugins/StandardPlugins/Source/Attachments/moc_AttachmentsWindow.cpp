/****************************************************************************
** Meta object code from reading C++ file 'AttachmentsWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/Attachments/AttachmentsWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AttachmentsWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__AttachmentsWindow_t {
    QByteArrayData data[19];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__AttachmentsWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__AttachmentsWindow_t qt_meta_stringdata_EMStudio__AttachmentsWindow = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMStudio::AttachmentsWindow"
QT_MOC_LITERAL(1, 28, 13), // "OnNodeChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 18), // "OnSelectionChanged"
QT_MOC_LITERAL(4, 62, 29), // "OnOpenAttachmentButtonClicked"
QT_MOC_LITERAL(5, 92, 39), // "OnOpenDeformableAttachmentBut..."
QT_MOC_LITERAL(6, 132, 21), // "OnRemoveButtonClicked"
QT_MOC_LITERAL(7, 154, 20), // "OnClearButtonClicked"
QT_MOC_LITERAL(8, 175, 25), // "OnSelectNodeButtonClicked"
QT_MOC_LITERAL(9, 201, 26), // "OnDroppedAttachmentsActors"
QT_MOC_LITERAL(10, 228, 25), // "OnDroppedDeformableActors"
QT_MOC_LITERAL(11, 254, 19), // "OnVisibilityChanged"
QT_MOC_LITERAL(12, 274, 10), // "visibility"
QT_MOC_LITERAL(13, 285, 25), // "OnAttachmentNodesSelected"
QT_MOC_LITERAL(14, 311, 27), // "MCore::Array<SelectionItem>"
QT_MOC_LITERAL(15, 339, 9), // "selection"
QT_MOC_LITERAL(16, 349, 31), // "OnCancelAttachmentNodeSelection"
QT_MOC_LITERAL(17, 381, 21), // "OnEscapeButtonPressed"
QT_MOC_LITERAL(18, 403, 22) // "OnUpdateButtonsEnabled"

    },
    "EMStudio::AttachmentsWindow\0OnNodeChanged\0"
    "\0OnSelectionChanged\0OnOpenAttachmentButtonClicked\0"
    "OnOpenDeformableAttachmentButtonClicked\0"
    "OnRemoveButtonClicked\0OnClearButtonClicked\0"
    "OnSelectNodeButtonClicked\0"
    "OnDroppedAttachmentsActors\0"
    "OnDroppedDeformableActors\0OnVisibilityChanged\0"
    "visibility\0OnAttachmentNodesSelected\0"
    "MCore::Array<SelectionItem>\0selection\0"
    "OnCancelAttachmentNodeSelection\0"
    "OnEscapeButtonPressed\0OnUpdateButtonsEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__AttachmentsWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    1,   93,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::AttachmentsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AttachmentsWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnNodeChanged(); break;
        case 1: _t->OnSelectionChanged(); break;
        case 2: _t->OnOpenAttachmentButtonClicked(); break;
        case 3: _t->OnOpenDeformableAttachmentButtonClicked(); break;
        case 4: _t->OnRemoveButtonClicked(); break;
        case 5: _t->OnClearButtonClicked(); break;
        case 6: _t->OnSelectNodeButtonClicked(); break;
        case 7: _t->OnDroppedAttachmentsActors(); break;
        case 8: _t->OnDroppedDeformableActors(); break;
        case 9: _t->OnVisibilityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->OnAttachmentNodesSelected((*reinterpret_cast< MCore::Array<SelectionItem>(*)>(_a[1]))); break;
        case 11: _t->OnCancelAttachmentNodeSelection(); break;
        case 12: _t->OnEscapeButtonPressed(); break;
        case 13: _t->OnUpdateButtonsEnabled(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::AttachmentsWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__AttachmentsWindow.data,
    qt_meta_data_EMStudio__AttachmentsWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::AttachmentsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::AttachmentsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__AttachmentsWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::AttachmentsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
