/****************************************************************************
** Meta object code from reading C++ file 'LogWindowCallback.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/LogWindow/LogWindowCallback.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogWindowCallback.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__LogWindowCallback_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__LogWindowCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__LogWindowCallback_t qt_meta_stringdata_EMStudio__LogWindowCallback = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMStudio::LogWindowCallback"
QT_MOC_LITERAL(1, 28, 5), // "DoLog"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "text"
QT_MOC_LITERAL(4, 40, 29), // "MCore::LogCallback::ELogLevel"
QT_MOC_LITERAL(5, 70, 8), // "logLevel"
QT_MOC_LITERAL(6, 79, 4), // "Copy"
QT_MOC_LITERAL(7, 84, 9), // "SelectAll"
QT_MOC_LITERAL(8, 94, 11), // "UnselectAll"
QT_MOC_LITERAL(9, 106, 5), // "Clear"
QT_MOC_LITERAL(10, 112, 7) // "LogImpl"

    },
    "EMStudio::LogWindowCallback\0DoLog\0\0"
    "text\0MCore::LogCallback::ELogLevel\0"
    "logLevel\0Copy\0SelectAll\0UnselectAll\0"
    "Clear\0LogImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__LogWindowCallback[] = {

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
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    2,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void EMStudio::LogWindowCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogWindowCallback *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DoLog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MCore::LogCallback::ELogLevel(*)>(_a[2]))); break;
        case 1: _t->Copy(); break;
        case 2: _t->SelectAll(); break;
        case 3: _t->UnselectAll(); break;
        case 4: _t->Clear(); break;
        case 5: _t->LogImpl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MCore::LogCallback::ELogLevel(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MCore::LogCallback::ELogLevel >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MCore::LogCallback::ELogLevel >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogWindowCallback::*)(const QString , MCore::LogCallback::ELogLevel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogWindowCallback::DoLog)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::LogWindowCallback::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__LogWindowCallback.data,
    qt_meta_data_EMStudio__LogWindowCallback,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::LogWindowCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::LogWindowCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__LogWindowCallback.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MCore::LogCallback"))
        return static_cast< MCore::LogCallback*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int EMStudio::LogWindowCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EMStudio::LogWindowCallback::DoLog(const QString _t1, MCore::LogCallback::ELogLevel _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
