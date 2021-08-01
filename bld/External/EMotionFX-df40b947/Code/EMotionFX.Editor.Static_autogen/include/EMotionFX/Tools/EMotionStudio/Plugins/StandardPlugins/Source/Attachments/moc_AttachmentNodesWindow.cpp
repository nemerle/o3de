/****************************************************************************
** Meta object code from reading C++ file 'AttachmentNodesWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/Attachments/AttachmentNodesWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AttachmentNodesWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__AttachmentNodesWindow_t {
    QByteArrayData data[8];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__AttachmentNodesWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__AttachmentNodesWindow_t qt_meta_stringdata_EMStudio__AttachmentNodesWindow = {
    {
QT_MOC_LITERAL(0, 0, 31), // "EMStudio::AttachmentNodesWindow"
QT_MOC_LITERAL(1, 32, 24), // "SelectNodesButtonPressed"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 24), // "RemoveNodesButtonPressed"
QT_MOC_LITERAL(4, 83, 21), // "NodeSelectionFinished"
QT_MOC_LITERAL(5, 105, 27), // "MCore::Array<SelectionItem>"
QT_MOC_LITERAL(6, 133, 13), // "selectionList"
QT_MOC_LITERAL(7, 147, 22) // "OnItemSelectionChanged"

    },
    "EMStudio::AttachmentNodesWindow\0"
    "SelectNodesButtonPressed\0\0"
    "RemoveNodesButtonPressed\0NodeSelectionFinished\0"
    "MCore::Array<SelectionItem>\0selectionList\0"
    "OnItemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__AttachmentNodesWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       7,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void EMStudio::AttachmentNodesWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AttachmentNodesWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectNodesButtonPressed(); break;
        case 1: _t->RemoveNodesButtonPressed(); break;
        case 2: _t->NodeSelectionFinished((*reinterpret_cast< MCore::Array<SelectionItem>(*)>(_a[1]))); break;
        case 3: _t->OnItemSelectionChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::AttachmentNodesWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__AttachmentNodesWindow.data,
    qt_meta_data_EMStudio__AttachmentNodesWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::AttachmentNodesWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::AttachmentNodesWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__AttachmentNodesWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::AttachmentNodesWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
