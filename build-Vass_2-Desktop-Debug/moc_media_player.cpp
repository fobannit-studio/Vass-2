/****************************************************************************
** Meta object code from reading C++ file 'media_player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Vass_2/media_player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'media_player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Media_Player_t {
    QByteArrayData data[13];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Media_Player_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Media_Player_t qt_meta_stringdata_Media_Player = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Media_Player"
QT_MOC_LITERAL(1, 13, 29), // "on_ProgressSlider_sliderMoved"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "position"
QT_MOC_LITERAL(4, 53, 21), // "on_PlayButton_clicked"
QT_MOC_LITERAL(5, 75, 18), // "on_durationChanged"
QT_MOC_LITERAL(6, 94, 18), // "on_positionChanged"
QT_MOC_LITERAL(7, 113, 20), // "on_AddButton_clicked"
QT_MOC_LITERAL(8, 134, 28), // "on_VolumeSlider_valueChanged"
QT_MOC_LITERAL(9, 163, 5), // "value"
QT_MOC_LITERAL(10, 169, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(11, 201, 25), // "on_PreviousButton_clicked"
QT_MOC_LITERAL(12, 227, 21) // "on_NextButton_clicked"

    },
    "Media_Player\0on_ProgressSlider_sliderMoved\0"
    "\0position\0on_PlayButton_clicked\0"
    "on_durationChanged\0on_positionChanged\0"
    "on_AddButton_clicked\0on_VolumeSlider_valueChanged\0"
    "value\0on_listWidget_itemDoubleClicked\0"
    "on_PreviousButton_clicked\0"
    "on_NextButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Media_Player[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Media_Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Media_Player *_t = static_cast<Media_Player *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ProgressSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_PlayButton_clicked(); break;
        case 2: _t->on_durationChanged((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 3: _t->on_positionChanged((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 4: _t->on_AddButton_clicked(); break;
        case 5: _t->on_VolumeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_listWidget_itemDoubleClicked(); break;
        case 7: _t->on_PreviousButton_clicked(); break;
        case 8: _t->on_NextButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Media_Player::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Media_Player.data,
      qt_meta_data_Media_Player,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Media_Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Media_Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Media_Player.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Media_Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
