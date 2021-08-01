/****************************************************************************
** Meta object code from reading C++ file 'ProcessingOverlayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/SceneAPI/SceneUI/CommonWidgets/ProcessingOverlayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessingOverlayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter_t {
    QByteArrayData data[1];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter_t qt_meta_stringdata_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter = {
    {
QT_MOC_LITERAL(0, 0, 57) // "AZ::SceneAPI::SceneUI::Intern..."

    },
    "AZ::SceneAPI::SceneUI::Internal::QtWebEngineMessageFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter[] = {

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

void AZ::SceneAPI::SceneUI::Internal::QtWebEngineMessageFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AZ::SceneAPI::SceneUI::Internal::QtWebEngineMessageFilter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter.data,
    qt_meta_data_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AZ::SceneAPI::SceneUI::Internal::QtWebEngineMessageFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AZ::SceneAPI::SceneUI::Internal::QtWebEngineMessageFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AZ__SceneAPI__SceneUI__Internal__QtWebEngineMessageFilter.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AZ::SceneAPI::SceneUI::Internal::QtWebEngineMessageFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget_t {
    QByteArrayData data[13];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget_t qt_meta_stringdata_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget = {
    {
QT_MOC_LITERAL(0, 0, 46), // "AZ::SceneAPI::SceneUI::Proces..."
QT_MOC_LITERAL(1, 47, 7), // "Closing"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 11), // "AddLogEntry"
QT_MOC_LITERAL(4, 68, 35), // "AzToolsFramework::Logging::Lo..."
QT_MOC_LITERAL(5, 104, 5), // "entry"
QT_MOC_LITERAL(6, 110, 14), // "OnLayerRemoved"
QT_MOC_LITERAL(7, 125, 7), // "layerId"
QT_MOC_LITERAL(8, 133, 18), // "OnSetStatusMessage"
QT_MOC_LITERAL(9, 152, 13), // "AZStd::string"
QT_MOC_LITERAL(10, 166, 7), // "message"
QT_MOC_LITERAL(11, 174, 20), // "OnProcessingComplete"
QT_MOC_LITERAL(12, 195, 17) // "UpdateColumnSizes"

    },
    "AZ::SceneAPI::SceneUI::ProcessingOverlayWidget\0"
    "Closing\0\0AddLogEntry\0"
    "AzToolsFramework::Logging::LogEntry\0"
    "entry\0OnLayerRemoved\0layerId\0"
    "OnSetStatusMessage\0AZStd::string\0"
    "message\0OnProcessingComplete\0"
    "UpdateColumnSizes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,
      11,    0,   54,    2, 0x0a /* Public */,
      12,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AZ::SceneAPI::SceneUI::ProcessingOverlayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProcessingOverlayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Closing(); break;
        case 1: _t->AddLogEntry((*reinterpret_cast< const AzToolsFramework::Logging::LogEntry(*)>(_a[1]))); break;
        case 2: _t->OnLayerRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnSetStatusMessage((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 4: _t->OnProcessingComplete(); break;
        case 5: _t->UpdateColumnSizes(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProcessingOverlayWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessingOverlayWidget::Closing)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AZ::SceneAPI::SceneUI::ProcessingOverlayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget.data,
    qt_meta_data_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AZ::SceneAPI::SceneUI::ProcessingOverlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AZ::SceneAPI::SceneUI::ProcessingOverlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AZ__SceneAPI__SceneUI__ProcessingOverlayWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Debug::TraceMessageBus::Handler"))
        return static_cast< Debug::TraceMessageBus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int AZ::SceneAPI::SceneUI::ProcessingOverlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AZ::SceneAPI::SceneUI::ProcessingOverlayWidget::Closing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
