/****************************************************************************
** Meta object code from reading C++ file 'GLWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/RenderPlugins/Source/OpenGLRender/GLWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__GLWidget_t {
    QByteArrayData data[8];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__GLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__GLWidget_t qt_meta_stringdata_EMStudio__GLWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EMStudio::GLWidget"
QT_MOC_LITERAL(1, 19, 27), // "CloneSelectedActorInstances"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 28), // "RemoveSelectedActorInstances"
QT_MOC_LITERAL(4, 77, 35), // "MakeSelectedActorInstancesInv..."
QT_MOC_LITERAL(5, 113, 33), // "MakeSelectedActorInstancesVis..."
QT_MOC_LITERAL(6, 147, 30), // "UnselectSelectedActorInstances"
QT_MOC_LITERAL(7, 178, 15) // "ResetToBindPose"

    },
    "EMStudio::GLWidget\0CloneSelectedActorInstances\0"
    "\0RemoveSelectedActorInstances\0"
    "MakeSelectedActorInstancesInvisible\0"
    "MakeSelectedActorInstancesVisible\0"
    "UnselectSelectedActorInstances\0"
    "ResetToBindPose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__GLWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloneSelectedActorInstances(); break;
        case 1: _t->RemoveSelectedActorInstances(); break;
        case 2: _t->MakeSelectedActorInstancesInvisible(); break;
        case 3: _t->MakeSelectedActorInstancesVisible(); break;
        case 4: _t->UnselectSelectedActorInstances(); break;
        case 5: _t->ResetToBindPose(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::GLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__GLWidget.data,
    qt_meta_data_EMStudio__GLWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__GLWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RenderWidget"))
        return static_cast< RenderWidget*>(this);
    if (!strcmp(_clname, "QOpenGLExtraFunctions"))
        return static_cast< QOpenGLExtraFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int EMStudio::GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
