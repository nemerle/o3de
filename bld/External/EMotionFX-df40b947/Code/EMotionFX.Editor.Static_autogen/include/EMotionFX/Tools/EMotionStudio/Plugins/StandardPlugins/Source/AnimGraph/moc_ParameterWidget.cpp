/****************************************************************************
** Meta object code from reading C++ file 'ParameterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/AnimGraph/ParameterWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParameterWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__ParameterWidget_t {
    QByteArrayData data[15];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__ParameterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__ParameterWidget_t qt_meta_stringdata_EMStudio__ParameterWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "EMStudio::ParameterWidget"
QT_MOC_LITERAL(1, 26, 15), // "OnSelectionDone"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 28), // "AZStd::vector<AZStd::string>"
QT_MOC_LITERAL(4, 72, 13), // "selectedItems"
QT_MOC_LITERAL(5, 86, 15), // "OnDoubleClicked"
QT_MOC_LITERAL(6, 102, 13), // "AZStd::string"
QT_MOC_LITERAL(7, 116, 4), // "item"
QT_MOC_LITERAL(8, 121, 6), // "Update"
QT_MOC_LITERAL(9, 128, 15), // "UpdateSelection"
QT_MOC_LITERAL(10, 144, 17), // "ItemDoubleClicked"
QT_MOC_LITERAL(11, 162, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(12, 179, 6), // "column"
QT_MOC_LITERAL(13, 186, 19), // "OnTextFilterChanged"
QT_MOC_LITERAL(14, 206, 4) // "text"

    },
    "EMStudio::ParameterWidget\0OnSelectionDone\0"
    "\0AZStd::vector<AZStd::string>\0"
    "selectedItems\0OnDoubleClicked\0"
    "AZStd::string\0item\0Update\0UpdateSelection\0"
    "ItemDoubleClicked\0QTreeWidgetItem*\0"
    "column\0OnTextFilterChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__ParameterWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,
      10,    2,   52,    2, 0x0a /* Public */,
      13,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,    7,   12,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void EMStudio::ParameterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSelectionDone((*reinterpret_cast< const AZStd::vector<AZStd::string>(*)>(_a[1]))); break;
        case 1: _t->OnDoubleClicked((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 2: _t->Update(); break;
        case 3: _t->UpdateSelection(); break;
        case 4: _t->ItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->OnTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ParameterWidget::*)(const AZStd::vector<AZStd::string> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterWidget::OnSelectionDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ParameterWidget::*)(const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ParameterWidget::OnDoubleClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::ParameterWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__ParameterWidget.data,
    qt_meta_data_EMStudio__ParameterWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::ParameterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::ParameterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__ParameterWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EMStudio::ParameterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void EMStudio::ParameterWidget::OnSelectionDone(const AZStd::vector<AZStd::string> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EMStudio::ParameterWidget::OnDoubleClicked(const AZStd::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
