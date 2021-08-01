/****************************************************************************
** Meta object code from reading C++ file 'MirrorSetupWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../../../../Gems/EMotionFX/Code/EMotionFX/Tools/EMotionStudio/Plugins/StandardPlugins/Source/SceneManager/MirrorSetupWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MirrorSetupWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EMStudio__MirrorSetupWindow_t {
    QByteArrayData data[17];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EMStudio__MirrorSetupWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EMStudio__MirrorSetupWindow_t qt_meta_stringdata_EMStudio__MirrorSetupWindow = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EMStudio::MirrorSetupWindow"
QT_MOC_LITERAL(1, 28, 26), // "OnCurrentListDoubleClicked"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(4, 74, 4), // "item"
QT_MOC_LITERAL(5, 79, 27), // "OnMappingTableDoubleClicked"
QT_MOC_LITERAL(6, 107, 30), // "OnMappingTableSelectionChanged"
QT_MOC_LITERAL(7, 138, 29), // "OnCurrentListSelectionChanged"
QT_MOC_LITERAL(8, 168, 28), // "OnSourceListSelectionChanged"
QT_MOC_LITERAL(9, 197, 26), // "OnCurrentTextFilterChanged"
QT_MOC_LITERAL(10, 224, 4), // "text"
QT_MOC_LITERAL(11, 229, 25), // "OnSourceTextFilterChanged"
QT_MOC_LITERAL(12, 255, 13), // "OnLinkPressed"
QT_MOC_LITERAL(13, 269, 13), // "OnLoadMapping"
QT_MOC_LITERAL(14, 283, 13), // "OnSaveMapping"
QT_MOC_LITERAL(15, 297, 14), // "OnClearMapping"
QT_MOC_LITERAL(16, 312, 11) // "OnBestGuess"

    },
    "EMStudio::MirrorSetupWindow\0"
    "OnCurrentListDoubleClicked\0\0"
    "QTableWidgetItem*\0item\0"
    "OnMappingTableDoubleClicked\0"
    "OnMappingTableSelectionChanged\0"
    "OnCurrentListSelectionChanged\0"
    "OnSourceListSelectionChanged\0"
    "OnCurrentTextFilterChanged\0text\0"
    "OnSourceTextFilterChanged\0OnLinkPressed\0"
    "OnLoadMapping\0OnSaveMapping\0OnClearMapping\0"
    "OnBestGuess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EMStudio__MirrorSetupWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    0,   82,    2, 0x0a /* Public */,
       9,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,
      15,    0,   92,    2, 0x0a /* Public */,
      16,    0,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EMStudio::MirrorSetupWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MirrorSetupWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnCurrentListDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->OnMappingTableDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->OnMappingTableSelectionChanged(); break;
        case 3: _t->OnCurrentListSelectionChanged(); break;
        case 4: _t->OnSourceListSelectionChanged(); break;
        case 5: _t->OnCurrentTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->OnSourceTextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->OnLinkPressed(); break;
        case 8: _t->OnLoadMapping(); break;
        case 9: _t->OnSaveMapping(); break;
        case 10: _t->OnClearMapping(); break;
        case 11: _t->OnBestGuess(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EMStudio::MirrorSetupWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EMStudio__MirrorSetupWindow.data,
    qt_meta_data_EMStudio__MirrorSetupWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EMStudio::MirrorSetupWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EMStudio::MirrorSetupWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EMStudio__MirrorSetupWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EMStudio::MirrorSetupWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
