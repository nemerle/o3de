/****************************************************************************
** Meta object code from reading C++ file 'LogControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/UI/Logging/LogControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogView_t {
    QByteArrayData data[16];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogView_t qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogView = {
    {
QT_MOC_LITERAL(0, 0, 39), // "AzToolsFramework::LogPanel::B..."
QT_MOC_LITERAL(1, 40, 15), // "onLinkActivated"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 4), // "link"
QT_MOC_LITERAL(4, 62, 12), // "rowsInserted"
QT_MOC_LITERAL(5, 75, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 87, 6), // "parent"
QT_MOC_LITERAL(7, 94, 5), // "start"
QT_MOC_LITERAL(8, 100, 3), // "end"
QT_MOC_LITERAL(9, 104, 9), // "SelectAll"
QT_MOC_LITERAL(10, 114, 10), // "SelectNone"
QT_MOC_LITERAL(11, 125, 7), // "CopyAll"
QT_MOC_LITERAL(12, 133, 12), // "CopySelected"
QT_MOC_LITERAL(13, 146, 18), // "CurrentItemChanged"
QT_MOC_LITERAL(14, 165, 7), // "current"
QT_MOC_LITERAL(15, 173, 8) // "previous"

    },
    "AzToolsFramework::LogPanel::BaseLogView\0"
    "onLinkActivated\0\0link\0rowsInserted\0"
    "QModelIndex\0parent\0start\0end\0SelectAll\0"
    "SelectNone\0CopyAll\0CopySelected\0"
    "CurrentItemChanged\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__LogPanel__BaseLogView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   52,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x0a /* Public */,
      10,    0,   60,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x0a /* Public */,
      12,    0,   62,    2, 0x0a /* Public */,
      13,    2,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,   14,   15,

       0        // eod
};

void AzToolsFramework::LogPanel::BaseLogView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BaseLogView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->SelectAll(); break;
        case 3: _t->SelectNone(); break;
        case 4: _t->CopyAll(); break;
        case 5: _t->CopySelected(); break;
        case 6: _t->CurrentItemChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BaseLogView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseLogView::onLinkActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::LogPanel::BaseLogView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogView.data,
    qt_meta_data_AzToolsFramework__LogPanel__BaseLogView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::LogPanel::BaseLogView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::LogPanel::BaseLogView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__LogPanel__BaseLogView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::LogPanel::BaseLogView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::LogPanel::BaseLogView::onLinkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
