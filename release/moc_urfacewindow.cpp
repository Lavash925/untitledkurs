/****************************************************************************
** Meta object code from reading C++ file 'urfacewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../urfacewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'urfacewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_urfacewindow_t {
    const uint offsetsAndSize[46];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_urfacewindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_urfacewindow_t qt_meta_stringdata_urfacewindow = {
    {
QT_MOC_LITERAL(0, 12), // "urfacewindow"
QT_MOC_LITERAL(13, 22), // "urorder_button_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(60, 7), // "company"
QT_MOC_LITERAL(68, 24), // "on_lineEdit_2_textEdited"
QT_MOC_LITERAL(93, 10), // "cardnumber"
QT_MOC_LITERAL(104, 24), // "on_lineEdit_3_textEdited"
QT_MOC_LITERAL(129, 3), // "inn"
QT_MOC_LITERAL(133, 24), // "on_lineEdit_4_textEdited"
QT_MOC_LITERAL(158, 6), // "street"
QT_MOC_LITERAL(165, 24), // "on_lineEdit_5_textEdited"
QT_MOC_LITERAL(190, 5), // "house"
QT_MOC_LITERAL(196, 24), // "on_lineEdit_6_textEdited"
QT_MOC_LITERAL(221, 4), // "name"
QT_MOC_LITERAL(226, 24), // "on_lineEdit_7_textEdited"
QT_MOC_LITERAL(251, 6), // "bonus2"
QT_MOC_LITERAL(258, 28), // "on_urorderPushButton_clicked"
QT_MOC_LITERAL(287, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(310, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(335, 24), // "on_radioButton_3_clicked"
QT_MOC_LITERAL(360, 24), // "on_radioButton_4_clicked"
QT_MOC_LITERAL(385, 24) // "on_radioButton_5_clicked"

    },
    "urfacewindow\0urorder_button_clicked\0"
    "\0on_lineEdit_textEdited\0company\0"
    "on_lineEdit_2_textEdited\0cardnumber\0"
    "on_lineEdit_3_textEdited\0inn\0"
    "on_lineEdit_4_textEdited\0street\0"
    "on_lineEdit_5_textEdited\0house\0"
    "on_lineEdit_6_textEdited\0name\0"
    "on_lineEdit_7_textEdited\0bonus2\0"
    "on_urorderPushButton_clicked\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked\0"
    "on_radioButton_3_clicked\0"
    "on_radioButton_4_clicked\0"
    "on_radioButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_urfacewindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   99,    2, 0x08,    2 /* Private */,
       5,    1,  102,    2, 0x08,    4 /* Private */,
       7,    1,  105,    2, 0x08,    6 /* Private */,
       9,    1,  108,    2, 0x08,    8 /* Private */,
      11,    1,  111,    2, 0x08,   10 /* Private */,
      13,    1,  114,    2, 0x08,   12 /* Private */,
      15,    1,  117,    2, 0x08,   14 /* Private */,
      17,    0,  120,    2, 0x08,   16 /* Private */,
      18,    0,  121,    2, 0x08,   17 /* Private */,
      19,    0,  122,    2, 0x08,   18 /* Private */,
      20,    0,  123,    2, 0x08,   19 /* Private */,
      21,    0,  124,    2, 0x08,   20 /* Private */,
      22,    0,  125,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void urfacewindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<urfacewindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->urorder_button_clicked(); break;
        case 1: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_2_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_3_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_lineEdit_4_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_lineEdit_5_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_6_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lineEdit_7_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_urorderPushButton_clicked(); break;
        case 9: _t->on_radioButton_clicked(); break;
        case 10: _t->on_radioButton_2_clicked(); break;
        case 11: _t->on_radioButton_3_clicked(); break;
        case 12: _t->on_radioButton_4_clicked(); break;
        case 13: _t->on_radioButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (urfacewindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&urfacewindow::urorder_button_clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject urfacewindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_urfacewindow.offsetsAndSize,
    qt_meta_data_urfacewindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_urfacewindow_t
, QtPrivate::TypeAndForceComplete<urfacewindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *urfacewindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *urfacewindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_urfacewindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int urfacewindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void urfacewindow::urorder_button_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
