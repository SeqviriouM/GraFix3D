/****************************************************************************
** Meta object code from reading C++ file 'dannie.h'
**
** Created: Sat Oct 29 18:14:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dannie.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dannie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dannie[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      16,    7,    7,    7, 0x0a,
      23,    7,    7,    7, 0x0a,
      34,    7,    7,    7, 0x0a,
      41,    7,    7,    7, 0x0a,
      50,    7,    7,    7, 0x0a,
      59,    7,    7,    7, 0x0a,
      68,    7,    7,    7, 0x0a,
      77,    7,    7,    7, 0x0a,
      86,    7,    7,    7, 0x0a,
      95,    7,    7,    7, 0x0a,
     104,    7,    7,    7, 0x0a,
     113,    7,    7,    7, 0x0a,
     122,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dannie[] = {
    "dannie\0\0nazad()\0post()\0nacsmesh()\0"
    "koef()\0color1()\0color2()\0color3()\0"
    "color4()\0color5()\0color6()\0color7()\0"
    "color8()\0color9()\0color10()\0"
};

const QMetaObject dannie::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dannie,
      qt_meta_data_dannie, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dannie::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dannie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dannie::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dannie))
        return static_cast<void*>(const_cast< dannie*>(this));
    return QDialog::qt_metacast(_clname);
}

int dannie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nazad(); break;
        case 1: post(); break;
        case 2: nacsmesh(); break;
        case 3: koef(); break;
        case 4: color1(); break;
        case 5: color2(); break;
        case 6: color3(); break;
        case 7: color4(); break;
        case 8: color5(); break;
        case 9: color6(); break;
        case 10: color7(); break;
        case 11: color8(); break;
        case 12: color9(); break;
        case 13: color10(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
