/****************************************************************************
** Meta object code from reading C++ file 'vibor.h'
**
** Created: Sun 6. Nov 12:35:56 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../interface/vibor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vibor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vibor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      15,    6,    6,    6, 0x0a,
      23,    6,    6,    6, 0x0a,
      32,    6,    6,    6, 0x0a,
      41,    6,    6,    6, 0x0a,
      50,    6,    6,    6, 0x0a,
      59,    6,    6,    6, 0x0a,
      68,    6,    6,    6, 0x0a,
      77,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_vibor[] = {
    "vibor\0\0nazad()\0danie()\0danie2()\0"
    "danie5()\0danie4()\0danie3()\0danie7()\0"
    "danie8()\0danie6()\0"
};

const QMetaObject vibor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_vibor,
      qt_meta_data_vibor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vibor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vibor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vibor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vibor))
        return static_cast<void*>(const_cast< vibor*>(this));
    return QDialog::qt_metacast(_clname);
}

int vibor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nazad(); break;
        case 1: danie(); break;
        case 2: danie2(); break;
        case 3: danie5(); break;
        case 4: danie4(); break;
        case 5: danie3(); break;
        case 6: danie7(); break;
        case 7: danie8(); break;
        case 8: danie6(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
