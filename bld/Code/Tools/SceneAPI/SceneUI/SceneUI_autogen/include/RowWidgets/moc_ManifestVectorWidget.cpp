/****************************************************************************
** Meta object code from reading C++ file 'ManifestVectorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/SceneAPI/SceneUI/RowWidgets/ManifestVectorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManifestVectorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AZ__SceneAPI__UI__ManifestVectorWidget_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AZ__SceneAPI__UI__ManifestVectorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AZ__SceneAPI__UI__ManifestVectorWidget_t qt_meta_stringdata_AZ__SceneAPI__UI__ManifestVectorWidget = {
    {
QT_MOC_LITERAL(0, 0, 38), // "AZ::SceneAPI::UI::ManifestVec..."
QT_MOC_LITERAL(1, 39, 12), // "valueChanged"
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "AZ::SceneAPI::UI::ManifestVectorWidget\0"
    "valueChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AZ__SceneAPI__UI__ManifestVectorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void AZ::SceneAPI::UI::ManifestVectorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManifestVectorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ManifestVectorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ManifestVectorWidget::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AZ::SceneAPI::UI::ManifestVectorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AZ__SceneAPI__UI__ManifestVectorWidget.data,
    qt_meta_data_AZ__SceneAPI__UI__ManifestVectorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AZ::SceneAPI::UI::ManifestVectorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AZ::SceneAPI::UI::ManifestVectorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AZ__SceneAPI__UI__ManifestVectorWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::IPropertyEditorNotify"))
        return static_cast< AzToolsFramework::IPropertyEditorNotify*>(this);
    if (!strcmp(_clname, "Events::ManifestMetaInfoBus::Handler"))
        return static_cast< Events::ManifestMetaInfoBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int AZ::SceneAPI::UI::ManifestVectorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AZ::SceneAPI::UI::ManifestVectorWidget::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
