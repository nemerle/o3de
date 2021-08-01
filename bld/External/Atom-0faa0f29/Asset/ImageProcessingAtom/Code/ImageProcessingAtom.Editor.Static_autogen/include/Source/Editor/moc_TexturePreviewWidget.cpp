/****************************************************************************
** Meta object code from reading C++ file 'TexturePreviewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/Atom/Asset/ImageProcessingAtom/Code/Source/Editor/TexturePreviewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TexturePreviewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageProcessingAtomEditor__TexturePreviewWidget_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageProcessingAtomEditor__TexturePreviewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageProcessingAtomEditor__TexturePreviewWidget_t qt_meta_stringdata_ImageProcessingAtomEditor__TexturePreviewWidget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "ImageProcessingAtomEditor::Te..."
QT_MOC_LITERAL(1, 48, 14), // "OnTiledChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 7), // "checked"
QT_MOC_LITERAL(4, 72, 9), // "OnPrevMip"
QT_MOC_LITERAL(5, 82, 9), // "OnNextMip"
QT_MOC_LITERAL(6, 92, 19), // "OnChangePreviewMode"
QT_MOC_LITERAL(7, 112, 5), // "index"
QT_MOC_LITERAL(8, 118, 13), // "UpdatePreview"
QT_MOC_LITERAL(9, 132, 15), // "OnAlwaysRefresh"
QT_MOC_LITERAL(10, 148, 17), // "OnRefreshPerClick"
QT_MOC_LITERAL(11, 166, 16) // "OnRefreshClicked"

    },
    "ImageProcessingAtomEditor::TexturePreviewWidget\0"
    "OnTiledChanged\0\0checked\0OnPrevMip\0"
    "OnNextMip\0OnChangePreviewMode\0index\0"
    "UpdatePreview\0OnAlwaysRefresh\0"
    "OnRefreshPerClick\0OnRefreshClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageProcessingAtomEditor__TexturePreviewWidget[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    0,   64,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageProcessingAtomEditor::TexturePreviewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TexturePreviewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnTiledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->OnPrevMip(); break;
        case 2: _t->OnNextMip(); break;
        case 3: _t->OnChangePreviewMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->UpdatePreview(); break;
        case 5: _t->OnAlwaysRefresh(); break;
        case 6: _t->OnRefreshPerClick(); break;
        case 7: _t->OnRefreshClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageProcessingAtomEditor::TexturePreviewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ImageProcessingAtomEditor__TexturePreviewWidget.data,
    qt_meta_data_ImageProcessingAtomEditor__TexturePreviewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageProcessingAtomEditor::TexturePreviewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageProcessingAtomEditor::TexturePreviewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageProcessingAtomEditor__TexturePreviewWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EditorInternalNotificationBus::Handler"))
        return static_cast< EditorInternalNotificationBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int ImageProcessingAtomEditor::TexturePreviewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
