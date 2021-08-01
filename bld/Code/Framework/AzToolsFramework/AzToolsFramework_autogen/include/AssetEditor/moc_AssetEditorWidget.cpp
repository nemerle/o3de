/****************************************************************************
** Meta object code from reading C++ file 'AssetEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzToolsFramework/AzToolsFramework/AssetEditor/AssetEditorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzToolsFramework__AssetEditor__AssetEditorWidget_t {
    QByteArrayData data[22];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzToolsFramework__AssetEditor__AssetEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzToolsFramework__AssetEditor__AssetEditorWidget_t qt_meta_stringdata_AzToolsFramework__AssetEditor__AssetEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 48), // "AzToolsFramework::AssetEditor..."
QT_MOC_LITERAL(1, 49, 18), // "OnAssetSavedSignal"
QT_MOC_LITERAL(2, 68, 0), // ""
QT_MOC_LITERAL(3, 69, 23), // "OnAssetSaveFailedSignal"
QT_MOC_LITERAL(4, 93, 13), // "AZStd::string"
QT_MOC_LITERAL(5, 107, 5), // "error"
QT_MOC_LITERAL(6, 113, 21), // "OnAssetRevertedSignal"
QT_MOC_LITERAL(7, 135, 25), // "OnAssetRevertFailedSignal"
QT_MOC_LITERAL(8, 161, 19), // "OnAssetOpenedSignal"
QT_MOC_LITERAL(9, 181, 36), // "AZ::Data::Asset<AZ::Data::Ass..."
QT_MOC_LITERAL(10, 218, 5), // "asset"
QT_MOC_LITERAL(11, 224, 19), // "OpenAssetWithDialog"
QT_MOC_LITERAL(12, 244, 17), // "OpenAssetFromPath"
QT_MOC_LITERAL(13, 262, 8), // "fullPath"
QT_MOC_LITERAL(14, 271, 9), // "SaveAsset"
QT_MOC_LITERAL(15, 281, 11), // "SaveAssetAs"
QT_MOC_LITERAL(16, 293, 15), // "SaveAssetToPath"
QT_MOC_LITERAL(17, 309, 18), // "AZStd::string_view"
QT_MOC_LITERAL(18, 328, 9), // "assetPath"
QT_MOC_LITERAL(19, 338, 9), // "ExpandAll"
QT_MOC_LITERAL(20, 348, 11), // "CollapseAll"
QT_MOC_LITERAL(21, 360, 10) // "OnNewAsset"

    },
    "AzToolsFramework::AssetEditor::AssetEditorWidget\0"
    "OnAssetSavedSignal\0\0OnAssetSaveFailedSignal\0"
    "AZStd::string\0error\0OnAssetRevertedSignal\0"
    "OnAssetRevertFailedSignal\0OnAssetOpenedSignal\0"
    "AZ::Data::Asset<AZ::Data::AssetData>\0"
    "asset\0OpenAssetWithDialog\0OpenAssetFromPath\0"
    "fullPath\0SaveAsset\0SaveAssetAs\0"
    "SaveAssetToPath\0AZStd::string_view\0"
    "assetPath\0ExpandAll\0CollapseAll\0"
    "OnNewAsset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzToolsFramework__AssetEditor__AssetEditorWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   90,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,
      14,    0,   94,    2, 0x0a /* Public */,
      15,    0,   95,    2, 0x0a /* Public */,
      16,    1,   96,    2, 0x0a /* Public */,
      19,    0,   99,    2, 0x0a /* Public */,
      20,    0,  100,    2, 0x0a /* Public */,
      21,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzToolsFramework::AssetEditor::AssetEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnAssetSavedSignal(); break;
        case 1: _t->OnAssetSaveFailedSignal((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 2: _t->OnAssetRevertedSignal(); break;
        case 3: _t->OnAssetRevertFailedSignal((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 4: _t->OnAssetOpenedSignal((*reinterpret_cast< const AZ::Data::Asset<AZ::Data::AssetData>(*)>(_a[1]))); break;
        case 5: _t->OpenAssetWithDialog(); break;
        case 6: _t->OpenAssetFromPath((*reinterpret_cast< const AZStd::string(*)>(_a[1]))); break;
        case 7: _t->SaveAsset(); break;
        case 8: _t->SaveAssetAs(); break;
        case 9: { bool _r = _t->SaveAssetToPath((*reinterpret_cast< AZStd::string_view(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->ExpandAll(); break;
        case 11: _t->CollapseAll(); break;
        case 12: _t->OnNewAsset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetEditorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetEditorWidget::OnAssetSavedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetEditorWidget::*)(const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetEditorWidget::OnAssetSaveFailedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssetEditorWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetEditorWidget::OnAssetRevertedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AssetEditorWidget::*)(const AZStd::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetEditorWidget::OnAssetRevertFailedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AssetEditorWidget::*)(const AZ::Data::Asset<AZ::Data::AssetData> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetEditorWidget::OnAssetOpenedSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzToolsFramework::AssetEditor::AssetEditorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AzToolsFramework__AssetEditor__AssetEditorWidget.data,
    qt_meta_data_AzToolsFramework__AssetEditor__AssetEditorWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzToolsFramework::AssetEditor::AssetEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzToolsFramework::AssetEditor::AssetEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzToolsFramework__AssetEditor__AssetEditorWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AzToolsFramework::AssetEditor::AssetEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void AzToolsFramework::AssetEditor::AssetEditorWidget::OnAssetSavedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzToolsFramework::AssetEditor::AssetEditorWidget::OnAssetSaveFailedSignal(const AZStd::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzToolsFramework::AssetEditor::AssetEditorWidget::OnAssetRevertedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AzToolsFramework::AssetEditor::AssetEditorWidget::OnAssetRevertFailedSignal(const AZStd::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzToolsFramework::AssetEditor::AssetEditorWidget::OnAssetOpenedSignal(const AZ::Data::Asset<AZ::Data::AssetData> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
