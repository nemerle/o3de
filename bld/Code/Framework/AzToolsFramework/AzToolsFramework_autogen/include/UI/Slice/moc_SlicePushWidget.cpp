/****************************************************************************
** Meta object code from reading C++ file 'SlicePushWidget.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Slice/SlicePushWidget.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlicePushWidget.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__NoChangesOverlay_t {
    QByteArrayData data[3];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__NoChangesOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__NoChangesOverlay_t qt_meta_stringdata_AzToolsFramework__NoChangesOverlay = {
    {
QT_MOC_LITERAL(0, 0, 34), // "AzToolsFramework::NoChangesOv..."
QT_MOC_LITERAL(1, 35, 14), // "OnCloseClicked"
QT_MOC_LITERAL(2, 50, 0) // ""

    },
    "AzToolsFramework::NoChangesOverlay\0"
    "OnCloseClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__NoChangesOverlay[] = {

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

void AzToolsFramework::NoChangesOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoChangesOverlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnCloseClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoChangesOverlay::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoChangesOverlay::OnCloseClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::NoChangesOverlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__NoChangesOverlay.data,
    qt_meta_data_AzToolsFramework__NoChangesOverlay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::NoChangesOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::NoChangesOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__NoChangesOverlay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::NoChangesOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AzToolsFramework::NoChangesOverlay::OnCloseClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AzToolsFramework__SlicePushWidget_t {
    QByteArrayData data[18];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__SlicePushWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__SlicePushWidget_t qt_meta_stringdata_AzToolsFramework__SlicePushWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AzToolsFramework::SlicePushWi..."
QT_MOC_LITERAL(1, 34, 10), // "OnFinished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "OnCanceled"
QT_MOC_LITERAL(4, 57, 23), // "OnFieldSelectionChanged"
QT_MOC_LITERAL(5, 81, 25), // "OnSliceRadioButtonChanged"
QT_MOC_LITERAL(6, 107, 13), // "QRadioButton*"
QT_MOC_LITERAL(7, 121, 12), // "selectButton"
QT_MOC_LITERAL(8, 134, 17), // "AZ::Data::AssetId"
QT_MOC_LITERAL(9, 152, 7), // "assetId"
QT_MOC_LITERAL(10, 160, 7), // "checked"
QT_MOC_LITERAL(11, 168, 18), // "OnFieldDataChanged"
QT_MOC_LITERAL(12, 187, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 204, 4), // "item"
QT_MOC_LITERAL(14, 209, 6), // "column"
QT_MOC_LITERAL(15, 216, 13), // "OnPushClicked"
QT_MOC_LITERAL(16, 230, 15), // "OnCancelClicked"
QT_MOC_LITERAL(17, 246, 22) // "OnToggleWarningClicked"

    },
    "AzToolsFramework::SlicePushWidget\0"
    "OnFinished\0\0OnCanceled\0OnFieldSelectionChanged\0"
    "OnSliceRadioButtonChanged\0QRadioButton*\0"
    "selectButton\0AZ::Data::AssetId\0assetId\0"
    "checked\0OnFieldDataChanged\0QTreeWidgetItem*\0"
    "item\0column\0OnPushClicked\0OnCancelClicked\0"
    "OnToggleWarningClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__SlicePushWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a /* Public */,
       5,    3,   57,    2, 0x0a /* Public */,
      11,    2,   64,    2, 0x0a /* Public */,
      15,    0,   69,    2, 0x0a /* Public */,
      16,    0,   70,    2, 0x0a /* Public */,
      17,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Bool,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::SlicePushWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SlicePushWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFinished(); break;
        case 1: _t->OnCanceled(); break;
        case 2: _t->OnFieldSelectionChanged(); break;
        case 3: _t->OnSliceRadioButtonChanged((*reinterpret_cast< QRadioButton*(*)>(_a[1])),(*reinterpret_cast< const AZ::Data::AssetId(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->OnFieldDataChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OnPushClicked(); break;
        case 6: _t->OnCancelClicked(); break;
        case 7: _t->OnToggleWarningClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SlicePushWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlicePushWidget::OnFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SlicePushWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SlicePushWidget::OnCanceled)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::SlicePushWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__SlicePushWidget.data,
    qt_meta_data_AzToolsFramework__SlicePushWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::SlicePushWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::SlicePushWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__SlicePushWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AZ::Data::AssetBus::MultiHandler"))
        return static_cast< AZ::Data::AssetBus::MultiHandler*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::SlicePushWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AzToolsFramework::SlicePushWidget::OnFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzToolsFramework::SlicePushWidget::OnCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
