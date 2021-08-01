/****************************************************************************
** Meta object code from reading C++ file 'ManifestWidgetPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/SceneAPI/SceneUI/SceneWidgets/ManifestWidgetPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManifestWidgetPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AZ__SceneAPI__UI__ManifestWidgetPage_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AZ__SceneAPI__UI__ManifestWidgetPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AZ__SceneAPI__UI__ManifestWidgetPage_t qt_meta_stringdata_AZ__SceneAPI__UI__ManifestWidgetPage = {
    {
QT_MOC_LITERAL(0, 0, 36), // "AZ::SceneAPI::UI::ManifestWid..."
QT_MOC_LITERAL(1, 37, 16), // "OnSingleGroupAdd"
QT_MOC_LITERAL(2, 54, 0) // ""

    },
    "AZ::SceneAPI::UI::ManifestWidgetPage\0"
    "OnSingleGroupAdd\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AZ__SceneAPI__UI__ManifestWidgetPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AZ::SceneAPI::UI::ManifestWidgetPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManifestWidgetPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSingleGroupAdd(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AZ::SceneAPI::UI::ManifestWidgetPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AZ__SceneAPI__UI__ManifestWidgetPage.data,
    qt_meta_data_AZ__SceneAPI__UI__ManifestWidgetPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AZ::SceneAPI::UI::ManifestWidgetPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AZ::SceneAPI::UI::ManifestWidgetPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AZ__SceneAPI__UI__ManifestWidgetPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AzToolsFramework::IPropertyEditorNotify"))
        return static_cast< AzToolsFramework::IPropertyEditorNotify*>(this);
    if (!strcmp(_clname, "Events::ManifestMetaInfoBus::Handler"))
        return static_cast< Events::ManifestMetaInfoBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int AZ::SceneAPI::UI::ManifestWidgetPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
