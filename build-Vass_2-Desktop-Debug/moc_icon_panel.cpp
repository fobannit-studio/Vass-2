/****************************************************************************
** Meta object code from reading C++ file 'icon_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Vass_2/icon_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icon_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_icon_panel_t {
    QByteArrayData data[15];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_icon_panel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_icon_panel_t qt_meta_stringdata_icon_panel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "icon_panel"
QT_MOC_LITERAL(1, 11, 11), // "HideIconBar"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 22), // "on_addShortCut_clicked"
QT_MOC_LITERAL(4, 47, 14), // "fill_shortcuts"
QT_MOC_LITERAL(5, 62, 16), // "on_app_1_clicked"
QT_MOC_LITERAL(6, 79, 16), // "on_app_2_clicked"
QT_MOC_LITERAL(7, 96, 16), // "on_app_3_clicked"
QT_MOC_LITERAL(8, 113, 16), // "on_app_4_clicked"
QT_MOC_LITERAL(9, 130, 16), // "on_app_5_clicked"
QT_MOC_LITERAL(10, 147, 16), // "on_app_6_clicked"
QT_MOC_LITERAL(11, 164, 16), // "on_app_7_clicked"
QT_MOC_LITERAL(12, 181, 16), // "on_app_8_clicked"
QT_MOC_LITERAL(13, 198, 25), // "on_removeShortCut_clicked"
QT_MOC_LITERAL(14, 224, 16) // "close_icon_panel"

    },
    "icon_panel\0HideIconBar\0\0on_addShortCut_clicked\0"
    "fill_shortcuts\0on_app_1_clicked\0"
    "on_app_2_clicked\0on_app_3_clicked\0"
    "on_app_4_clicked\0on_app_5_clicked\0"
    "on_app_6_clicked\0on_app_7_clicked\0"
    "on_app_8_clicked\0on_removeShortCut_clicked\0"
    "close_icon_panel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_icon_panel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void icon_panel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        icon_panel *_t = static_cast<icon_panel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HideIconBar(); break;
        case 1: _t->on_addShortCut_clicked(); break;
        case 2: _t->fill_shortcuts(); break;
        case 3: _t->on_app_1_clicked(); break;
        case 4: _t->on_app_2_clicked(); break;
        case 5: _t->on_app_3_clicked(); break;
        case 6: _t->on_app_4_clicked(); break;
        case 7: _t->on_app_5_clicked(); break;
        case 8: _t->on_app_6_clicked(); break;
        case 9: _t->on_app_7_clicked(); break;
        case 10: _t->on_app_8_clicked(); break;
        case 11: _t->on_removeShortCut_clicked(); break;
        case 12: _t->close_icon_panel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (icon_panel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&icon_panel::HideIconBar)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject icon_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_icon_panel.data,
      qt_meta_data_icon_panel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *icon_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *icon_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_icon_panel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int icon_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void icon_panel::HideIconBar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
