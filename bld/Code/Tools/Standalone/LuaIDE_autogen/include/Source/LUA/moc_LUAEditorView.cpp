/****************************************************************************
** Meta object code from reading C++ file 'LUAEditorView.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Tools/Standalone/Source/LUA/LUAEditorView.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LUAEditorView.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LUAEditor__LUADockWidget_t {
    QByteArrayData data[5];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__LUADockWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__LUADockWidget_t qt_meta_stringdata_LUAEditor__LUADockWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "LUAEditor::LUADockWidget"
QT_MOC_LITERAL(1, 25, 21), // "OnDockLocationChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(4, 67, 7) // "newArea"

    },
    "LUAEditor::LUADockWidget\0OnDockLocationChanged\0"
    "\0Qt::DockWidgetArea\0newArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__LUADockWidget[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void LUAEditor::LUADockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LUADockWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnDockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::LUADockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QDockWidget::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__LUADockWidget.data,
    qt_meta_data_LUAEditor__LUADockWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::LUADockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::LUADockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__LUADockWidget.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int LUAEditor::LUADockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LUAEditor__LUAViewWidget_t {
    QByteArrayData data[18];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LUAEditor__LUAViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LUAEditor__LUAViewWidget_t qt_meta_stringdata_LUAEditor__LUAViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "LUAEditor::LUAViewWidget"
QT_MOC_LITERAL(1, 25, 11), // "gainedFocus"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "initialUpdate"
QT_MOC_LITERAL(4, 52, 14), // "LUAViewWidget*"
QT_MOC_LITERAL(5, 67, 5), // "pThis"
QT_MOC_LITERAL(6, 73, 26), // "sourceControlStatusUpdated"
QT_MOC_LITERAL(7, 100, 8), // "newValue"
QT_MOC_LITERAL(8, 109, 11), // "RegainFocus"
QT_MOC_LITERAL(9, 121, 19), // "modificationChanged"
QT_MOC_LITERAL(10, 141, 1), // "m"
QT_MOC_LITERAL(11, 143, 20), // "PullFreshBreakpoints"
QT_MOC_LITERAL(12, 164, 16), // "RegainFocusFinal"
QT_MOC_LITERAL(13, 181, 20), // "UpdateBraceHighlight"
QT_MOC_LITERAL(14, 202, 19), // "OnVisibilityChanged"
QT_MOC_LITERAL(15, 222, 2), // "vc"
QT_MOC_LITERAL(16, 225, 8), // "OnZoomIn"
QT_MOC_LITERAL(17, 234, 9) // "OnZoomOut"

    },
    "LUAEditor::LUAViewWidget\0gainedFocus\0"
    "\0initialUpdate\0LUAViewWidget*\0pThis\0"
    "sourceControlStatusUpdated\0newValue\0"
    "RegainFocus\0modificationChanged\0m\0"
    "PullFreshBreakpoints\0RegainFocusFinal\0"
    "UpdateBraceHighlight\0OnVisibilityChanged\0"
    "vc\0OnZoomIn\0OnZoomOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LUAEditor__LUAViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       8,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   77,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    1,   83,    2, 0x0a /* Public */,
      16,    0,   86,    2, 0x0a /* Public */,
      17,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LUAEditor::LUAViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LUAViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gainedFocus(); break;
        case 1: _t->initialUpdate((*reinterpret_cast< LUAViewWidget*(*)>(_a[1]))); break;
        case 2: _t->sourceControlStatusUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->RegainFocus(); break;
        case 4: _t->modificationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->PullFreshBreakpoints(); break;
        case 6: _t->RegainFocusFinal(); break;
        case 7: _t->UpdateBraceHighlight(); break;
        case 8: _t->OnVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->OnZoomIn(); break;
        case 10: _t->OnZoomOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LUAViewWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LUAViewWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAViewWidget::gainedFocus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LUAViewWidget::*)(LUAViewWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAViewWidget::initialUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LUAViewWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAViewWidget::sourceControlStatusUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LUAViewWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LUAViewWidget::RegainFocus)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LUAEditor::LUAViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LUAEditor__LUAViewWidget.data,
    qt_meta_data_LUAEditor__LUAViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LUAEditor::LUAViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LUAEditor::LUAViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LUAEditor__LUAViewWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "LUAEditor::LUABreakpointTrackerMessages::Bus::Handler"))
        return static_cast< LUAEditor::LUABreakpointTrackerMessages::Bus::Handler*>(this);
    return QWidget::qt_metacast(_clname);
}

int LUAEditor::LUAViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void LUAEditor::LUAViewWidget::gainedFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LUAEditor::LUAViewWidget::initialUpdate(LUAViewWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LUAEditor::LUAViewWidget::sourceControlStatusUpdated(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LUAEditor::LUAViewWidget::RegainFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
