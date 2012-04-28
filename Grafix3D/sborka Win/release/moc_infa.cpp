/****************************************************************************
** Meta object code from reading C++ file 'infa.h'
**
** Created: Sun 6. Nov 12:37:02 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../interface/infa.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_infa[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x0a,
      17,    5,    5,    5, 0x0a,
      28,    5,    5,    5, 0x0a,
      40,    5,    5,    5, 0x0a,
      51,    5,    5,    5, 0x0a,
      61,    5,    5,    5, 0x0a,
      72,    5,    5,    5, 0x0a,
      83,    5,    5,    5, 0x0a,
      91,    5,    5,    5, 0x0a,
      98,    5,    5,    5, 0x0a,
     104,    5,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_infa[] = {
    "infa\0\0glavmenu()\0elipsoid()\0odnopolis()\0"
    "dvupolis()\0elchili()\0gipchili()\0"
    "parchili()\0konus()\0sfer()\0gip()\0el()\0"
};

const QMetaObject infa::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_infa,
      qt_meta_data_infa, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &infa::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *infa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *infa::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_infa))
        return static_cast<void*>(const_cast< infa*>(this));
    return QDialog::qt_metacast(_clname);
}

int infa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: glavmenu(); break;
        case 1: elipsoid(); break;
        case 2: odnopolis(); break;
        case 3: dvupolis(); break;
        case 4: elchili(); break;
        case 5: gipchili(); break;
        case 6: parchili(); break;
        case 7: konus(); break;
        case 8: sfer(); break;
        case 9: gip(); break;
        case 10: el(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
