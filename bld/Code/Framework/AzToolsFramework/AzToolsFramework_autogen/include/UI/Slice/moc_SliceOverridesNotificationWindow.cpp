/****************************************************************************
** Meta object code from reading C++ file 'SliceOverridesNotificationWindow.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Slice/SliceOverridesNotificationWindow.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SliceOverridesNotificationWindow.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__SliceOverridesNotificationWindow_t {
    QByteArrayData data[10];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__SliceOverridesNotificationWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__SliceOverridesNotificationWindow_t qt_meta_stringdata_AzToolsFramework__SliceOverridesNotificationWindow = {
    {
QT_MOC_LITERAL(0, 0, 50), // "AzToolsFramework::SliceOverri..."
QT_MOC_LITERAL(1, 51, 24), // "RemoveNotificationWindow"
QT_MOC_LITERAL(2, 76, 0), // ""
QT_MOC_LITERAL(3, 77, 33), // "SliceOverridesNotificationWin..."
QT_MOC_LITERAL(4, 111, 6), // "window"
QT_MOC_LITERAL(5, 118, 11), // "IconPressed"
QT_MOC_LITERAL(6, 130, 12), // "TimerTimeOut"
QT_MOC_LITERAL(7, 143, 14), // "OpacityChanged"
QT_MOC_LITERAL(8, 158, 10), // "newOpacity"
QT_MOC_LITERAL(9, 169, 15) // "FadeOutFinished"

    },
    "AzToolsFramework::SliceOverridesNotificationWindow\0"
    "RemoveNotificationWindow\0\0"
    "SliceOverridesNotificationWindow*\0"
    "window\0IconPressed\0TimerTimeOut\0"
    "OpacityChanged\0newOpacity\0FadeOutFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__SliceOverridesNotificationWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
       9,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::SliceOverridesNotificationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliceOverridesNotificationWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RemoveNotificationWindow((*reinterpret_cast< SliceOverridesNotificationWindow*(*)>(_a[1]))); break;
        case 1: _t->IconPressed(); break;
        case 2: _t->TimerTimeOut(); break;
        case 3: _t->OpacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->FadeOutFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SliceOverridesNotificationWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliceOverridesNotificationWindow::*)(SliceOverridesNotificationWindow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliceOverridesNotificationWindow::RemoveNotificationWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::SliceOverridesNotificationWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__SliceOverridesNotificationWindow.data,
    qt_meta_data_AzToolsFramework__SliceOverridesNotificationWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::SliceOverridesNotificationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::SliceOverridesNotificationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__SliceOverridesNotificationWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::SliceOverridesNotificationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::SliceOverridesNotificationWindow::RemoveNotificationWindow(SliceOverridesNotificationWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
