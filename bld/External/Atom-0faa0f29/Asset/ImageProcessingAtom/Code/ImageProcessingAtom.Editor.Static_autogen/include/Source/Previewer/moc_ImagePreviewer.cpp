/****************************************************************************
** Meta object code from reading C++ file 'ImagePreviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../Gems/Atom/Asset/ImageProcessingAtom/Code/Source/Previewer/ImagePreviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImagePreviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageProcessingAtom__ImagePreviewer_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageProcessingAtom__ImagePreviewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageProcessingAtom__ImagePreviewer_t qt_meta_stringdata_ImageProcessingAtom__ImagePreviewer = {
    {
QT_MOC_LITERAL(0, 0, 35) // "ImageProcessingAtom::ImagePre..."

    },
    "ImageProcessingAtom::ImagePreviewer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageProcessingAtom__ImagePreviewer[] = {

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

void ImageProcessingAtom::ImagePreviewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ImageProcessingAtom::ImagePreviewer::staticMetaObject = { {
    QMetaObject::SuperData::link<AzToolsFramework::AssetBrowser::Previewer::staticMetaObject>(),
    qt_meta_stringdata_ImageProcessingAtom__ImagePreviewer.data,
    qt_meta_data_ImageProcessingAtom__ImagePreviewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageProcessingAtom::ImagePreviewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageProcessingAtom::ImagePreviewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageProcessingAtom__ImagePreviewer.stringdata0))
        return static_cast<void*>(this);
    return AzToolsFramework::AssetBrowser::Previewer::qt_metacast(_clname);
}

int ImageProcessingAtom::ImagePreviewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AzToolsFramework::AssetBrowser::Previewer::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
