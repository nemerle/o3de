/****************************************************************************
** Meta object code from reading C++ file 'FilteredSearchWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../Code/Framework/AzQtComponents/AzQtComponents/Components/FilteredSearchWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilteredSearchWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__FilterCriteriaButton_t {
    QByteArrayData data[6];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__FilterCriteriaButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__FilterCriteriaButton_t qt_meta_stringdata_AzQtComponents__FilterCriteriaButton = {
    {
QT_MOC_LITERAL(0, 0, 36), // "AzQtComponents::FilterCriteri..."
QT_MOC_LITERAL(1, 37, 12), // "RequestClose"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 18), // "ExtraButtonClicked"
QT_MOC_LITERAL(4, 70, 37), // "FilterCriteriaButton::ExtraBu..."
QT_MOC_LITERAL(5, 108, 4) // "type"

    },
    "AzQtComponents::FilterCriteriaButton\0"
    "RequestClose\0\0ExtraButtonClicked\0"
    "FilterCriteriaButton::ExtraButtonType\0"
    "type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__FilterCriteriaButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void AzQtComponents::FilterCriteriaButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterCriteriaButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RequestClose(); break;
        case 1: _t->ExtraButtonClicked((*reinterpret_cast< FilterCriteriaButton::ExtraButtonType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterCriteriaButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterCriteriaButton::RequestClose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilterCriteriaButton::*)(FilterCriteriaButton::ExtraButtonType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterCriteriaButton::ExtraButtonClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::FilterCriteriaButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__FilterCriteriaButton.data,
    qt_meta_data_AzQtComponents__FilterCriteriaButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::FilterCriteriaButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::FilterCriteriaButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__FilterCriteriaButton.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::FilterCriteriaButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AzQtComponents::FilterCriteriaButton::RequestClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::FilterCriteriaButton::ExtraButtonClicked(FilterCriteriaButton::ExtraButtonType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AzQtComponents__SearchTypeSelector_t {
    QByteArrayData data[11];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SearchTypeSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SearchTypeSelector_t qt_meta_stringdata_AzQtComponents__SearchTypeSelector = {
    {
QT_MOC_LITERAL(0, 0, 34), // "AzQtComponents::SearchTypeSel..."
QT_MOC_LITERAL(1, 35, 11), // "TypeToggled"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 2), // "id"
QT_MOC_LITERAL(4, 51, 7), // "enabled"
QT_MOC_LITERAL(5, 59, 17), // "FilterTextChanged"
QT_MOC_LITERAL(6, 77, 9), // "newFilter"
QT_MOC_LITERAL(7, 87, 10), // "fixedWidth"
QT_MOC_LITERAL(8, 98, 21), // "heightEstimatePadding"
QT_MOC_LITERAL(9, 120, 21), // "lineEditSearchVisible"
QT_MOC_LITERAL(10, 142, 18) // "searchLayoutMargin"

    },
    "AzQtComponents::SearchTypeSelector\0"
    "TypeToggled\0\0id\0enabled\0FilterTextChanged\0"
    "newFilter\0fixedWidth\0heightEstimatePadding\0"
    "lineEditSearchVisible\0searchLayoutMargin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SearchTypeSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Int, 0x00095103,

       0        // eod
};

void AzQtComponents::SearchTypeSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchTypeSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TypeToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->FilterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchTypeSelector::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchTypeSelector::TypeToggled)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SearchTypeSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->fixedWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->heightEstimatePadding(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->lineEditSearchVisible(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->searchLayoutMargin(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SearchTypeSelector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFixedWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHeightEstimatePadding(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setLineEditSearchVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setSearchLayoutMargin(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SearchTypeSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SearchTypeSelector.data,
    qt_meta_data_AzQtComponents__SearchTypeSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SearchTypeSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SearchTypeSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SearchTypeSelector.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int AzQtComponents::SearchTypeSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::SearchTypeSelector::TypeToggled(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AzQtComponents__SearchTypeSelectorFilterModel_t {
    QByteArrayData data[3];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__SearchTypeSelectorFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__SearchTypeSelectorFilterModel_t qt_meta_stringdata_AzQtComponents__SearchTypeSelectorFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 45), // "AzQtComponents::SearchTypeSel..."
QT_MOC_LITERAL(1, 46, 17), // "onRowCountChanged"
QT_MOC_LITERAL(2, 64, 0) // ""

    },
    "AzQtComponents::SearchTypeSelectorFilterModel\0"
    "onRowCountChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__SearchTypeSelectorFilterModel[] = {

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
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AzQtComponents::SearchTypeSelectorFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchTypeSelectorFilterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRowCountChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::SearchTypeSelectorFilterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__SearchTypeSelectorFilterModel.data,
    qt_meta_data_AzQtComponents__SearchTypeSelectorFilterModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::SearchTypeSelectorFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::SearchTypeSelectorFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__SearchTypeSelectorFilterModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AzQtComponents::SearchTypeSelectorFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AzQtComponents__FilteredSearchWidget_t {
    QByteArrayData data[29];
    char stringdata0[467];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__FilteredSearchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__FilteredSearchWidget_t qt_meta_stringdata_AzQtComponents__FilteredSearchWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "AzQtComponents::FilteredSearc..."
QT_MOC_LITERAL(1, 37, 17), // "TextFilterChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 16), // "activeTextFilter"
QT_MOC_LITERAL(4, 73, 17), // "TypeFilterChanged"
QT_MOC_LITERAL(5, 91, 20), // "SearchTypeFilterList"
QT_MOC_LITERAL(6, 112, 17), // "activeTypeFilters"
QT_MOC_LITERAL(7, 130, 22), // "placeholderTextChanged"
QT_MOC_LITERAL(8, 153, 15), // "placeholderText"
QT_MOC_LITERAL(9, 169, 27), // "textFilterFillsWidthChanged"
QT_MOC_LITERAL(10, 197, 10), // "fillsWidth"
QT_MOC_LITERAL(11, 208, 15), // "ClearTypeFilter"
QT_MOC_LITERAL(12, 224, 21), // "SetFilterStateByIndex"
QT_MOC_LITERAL(13, 246, 5), // "index"
QT_MOC_LITERAL(14, 252, 7), // "enabled"
QT_MOC_LITERAL(15, 260, 14), // "SetFilterState"
QT_MOC_LITERAL(16, 275, 12), // "readSettings"
QT_MOC_LITERAL(17, 288, 10), // "QSettings&"
QT_MOC_LITERAL(18, 299, 8), // "settings"
QT_MOC_LITERAL(19, 308, 10), // "widgetName"
QT_MOC_LITERAL(20, 319, 13), // "writeSettings"
QT_MOC_LITERAL(21, 333, 21), // "UpdateTextFilterWidth"
QT_MOC_LITERAL(22, 355, 24), // "OnClearFilterContextMenu"
QT_MOC_LITERAL(23, 380, 3), // "pos"
QT_MOC_LITERAL(24, 384, 19), // "OnSearchContextMenu"
QT_MOC_LITERAL(25, 404, 13), // "OnTextChanged"
QT_MOC_LITERAL(26, 418, 16), // "UpdateTextFilter"
QT_MOC_LITERAL(27, 435, 10), // "textFilter"
QT_MOC_LITERAL(28, 446, 20) // "textFilterFillsWidth"

    },
    "AzQtComponents::FilteredSearchWidget\0"
    "TextFilterChanged\0\0activeTextFilter\0"
    "TypeFilterChanged\0SearchTypeFilterList\0"
    "activeTypeFilters\0placeholderTextChanged\0"
    "placeholderText\0textFilterFillsWidthChanged\0"
    "fillsWidth\0ClearTypeFilter\0"
    "SetFilterStateByIndex\0index\0enabled\0"
    "SetFilterState\0readSettings\0QSettings&\0"
    "settings\0widgetName\0writeSettings\0"
    "UpdateTextFilterWidth\0OnClearFilterContextMenu\0"
    "pos\0OnSearchContextMenu\0OnTextChanged\0"
    "UpdateTextFilter\0textFilter\0"
    "textFilterFillsWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__FilteredSearchWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       3,  128, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       7,    1,   90,    2, 0x06 /* Public */,
       9,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   96,    2, 0x0a /* Public */,
      12,    2,   97,    2, 0x0a /* Public */,
      15,    2,  102,    2, 0x0a /* Public */,
      16,    2,  107,    2, 0x0a /* Public */,
      20,    2,  112,    2, 0x0a /* Public */,
      21,    0,  117,    2, 0x08 /* Private */,
      22,    1,  118,    2, 0x08 /* Private */,
      24,    1,  121,    2, 0x08 /* Private */,
      25,    1,  124,    2, 0x08 /* Private */,
      26,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   13,   14,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,   19,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   23,
    QMetaType::Void, QMetaType::QPoint,   23,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
      27, QMetaType::QString, 0x00495003,
      28, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,
       0,
       3,

       0        // eod
};

void AzQtComponents::FilteredSearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilteredSearchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->TypeFilterChanged((*reinterpret_cast< const SearchTypeFilterList(*)>(_a[1]))); break;
        case 2: _t->placeholderTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->textFilterFillsWidthChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->ClearTypeFilter(); break;
        case 5: _t->SetFilterStateByIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->SetFilterState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->readSettings((*reinterpret_cast< QSettings(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->UpdateTextFilterWidth(); break;
        case 10: _t->OnClearFilterContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 11: _t->OnSearchContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->OnTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->UpdateTextFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilteredSearchWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilteredSearchWidget::TextFilterChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FilteredSearchWidget::*)(const SearchTypeFilterList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilteredSearchWidget::TypeFilterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FilteredSearchWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilteredSearchWidget::placeholderTextChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FilteredSearchWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilteredSearchWidget::textFilterFillsWidthChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FilteredSearchWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->textFilter(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->textFilterFillsWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FilteredSearchWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->SetTextFilter(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setTextFilterFillsWidth(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::FilteredSearchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__FilteredSearchWidget.data,
    qt_meta_data_AzQtComponents__FilteredSearchWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::FilteredSearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::FilteredSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__FilteredSearchWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::FilteredSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::FilteredSearchWidget::TextFilterChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::FilteredSearchWidget::TypeFilterChanged(const SearchTypeFilterList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::FilteredSearchWidget::placeholderTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::FilteredSearchWidget::textFilterFillsWidthChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
