/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_calculator_t {
    QByteArrayData data[13];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_calculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_calculator_t qt_meta_stringdata_calculator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "calculator"
QT_MOC_LITERAL(1, 11, 12), // "num0_Clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "num1_Clicked"
QT_MOC_LITERAL(4, 38, 12), // "num2_Clicked"
QT_MOC_LITERAL(5, 51, 12), // "num3_Clicked"
QT_MOC_LITERAL(6, 64, 12), // "num4_Clicked"
QT_MOC_LITERAL(7, 77, 12), // "num5_Clicked"
QT_MOC_LITERAL(8, 90, 12), // "num6_Clicked"
QT_MOC_LITERAL(9, 103, 12), // "num7_Clicked"
QT_MOC_LITERAL(10, 116, 12), // "num8_Clicked"
QT_MOC_LITERAL(11, 129, 12), // "num9_Clicked"
QT_MOC_LITERAL(12, 142, 13) // "clear_Clicked"

    },
    "calculator\0num0_Clicked\0\0num1_Clicked\0"
    "num2_Clicked\0num3_Clicked\0num4_Clicked\0"
    "num5_Clicked\0num6_Clicked\0num7_Clicked\0"
    "num8_Clicked\0num9_Clicked\0clear_Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_calculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

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

       0        // eod
};

void calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        calculator *_t = static_cast<calculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->num0_Clicked(); break;
        case 1: _t->num1_Clicked(); break;
        case 2: _t->num2_Clicked(); break;
        case 3: _t->num3_Clicked(); break;
        case 4: _t->num4_Clicked(); break;
        case 5: _t->num5_Clicked(); break;
        case 6: _t->num6_Clicked(); break;
        case 7: _t->num7_Clicked(); break;
        case 8: _t->num8_Clicked(); break;
        case 9: _t->num9_Clicked(); break;
        case 10: _t->clear_Clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject calculator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_calculator.data,
      qt_meta_data_calculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_calculator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
