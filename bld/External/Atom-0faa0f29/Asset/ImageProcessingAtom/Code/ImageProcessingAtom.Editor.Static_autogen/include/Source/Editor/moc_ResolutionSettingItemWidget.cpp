/****************************************************************************
** Meta object code from reading C++ file 'ResolutionSettingItemWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/Atom/Asset/ImageProcessingAtom/Code/Source/Editor/ResolutionSettingItemWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResolutionSettingItemWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageProcessingAtomEditor__ResolutionSettingItemWidget_t {
    QByteArrayData data[6];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageProcessingAtomEditor__ResolutionSettingItemWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageProcessingAtomEditor__ResolutionSettingItemWidget_t qt_meta_stringdata_ImageProcessingAtomEditor__ResolutionSettingItemWidget = {
    {
QT_MOC_LITERAL(0, 0, 54), // "ImageProcessingAtomEditor::Re..."
QT_MOC_LITERAL(1, 55, 15), // "OnChangeDownRes"
QT_MOC_LITERAL(2, 71, 0), // ""
QT_MOC_LITERAL(3, 72, 7), // "downRes"
QT_MOC_LITERAL(4, 80, 14), // "OnChangeFormat"
QT_MOC_LITERAL(5, 95, 5) // "index"

    },
    "ImageProcessingAtomEditor::ResolutionSettingItemWidget\0"
    "OnChangeDownRes\0\0downRes\0OnChangeFormat\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageProcessingAtomEditor__ResolutionSettingItemWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void ImageProcessingAtomEditor::ResolutionSettingItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResolutionSettingItemWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnChangeDownRes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnChangeFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageProcessingAtomEditor::ResolutionSettingItemWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ImageProcessingAtomEditor__ResolutionSettingItemWidget.data,
    qt_meta_data_ImageProcessingAtomEditor__ResolutionSettingItemWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageProcessingAtomEditor::ResolutionSettingItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageProcessingAtomEditor::ResolutionSettingItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageProcessingAtomEditor__ResolutionSettingItemWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EditorInternalNotificationBus::Handler"))
        return static_cast< EditorInternalNotificationBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageProcessingAtomEditor::ResolutionSettingItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
