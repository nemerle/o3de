/****************************************************************************
** Meta object code from reading C++ file 'ToolButtonLineEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/ToolButtonLineEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToolButtonLineEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__ToolButtonLineEdit_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__ToolButtonLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__ToolButtonLineEdit_t qt_meta_stringdata_AzQtComponents__ToolButtonLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 34) // "AzQtComponents::ToolButtonLin..."

    },
    "AzQtComponents::ToolButtonLineEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__ToolButtonLineEdit[] = {

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

void AzQtComponents::ToolButtonLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::ToolButtonLineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<ToolButtonWithWidget::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__ToolButtonLineEdit.data,
    qt_meta_data_AzQtComponents__ToolButtonLineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::ToolButtonLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::ToolButtonLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__ToolButtonLineEdit.stringdata0))
        return static_cast<void*>(this);
    return ToolButtonWithWidget::qt_metacast(_clname);
}

int AzQtComponents::ToolButtonLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolButtonWithWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
