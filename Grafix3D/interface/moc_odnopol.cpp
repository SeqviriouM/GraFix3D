/****************************************************************************
** Meta object code from reading C++ file 'odnopol.h'
**
** Created: Sat Oct 29 18:14:24 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "odnopol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'odnopol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_odnopol[] = {

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
       9,    8,    8,    8, 0x0a,
      15,    8,    8,    8, 0x0a,
      23,    8,    8,    8, 0x0a,
      29,    8,    8,    8, 0x0a,
      37,    8,    8,    8, 0x0a,
      45,    8,    8,    8, 0x0a,
      53,    8,    8,    8, 0x0a,
      61,    8,    8,    8, 0x0a,
      67,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_odnopol[] = {
    "odnopol\0\0viz()\0noviz()\0pok()\0skryt()\0"
    "nazad()\0vmenu()\0ellip()\0gip()\0post()\0"
};

const QMetaObject odnopol::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_odnopol,
      qt_meta_data_odnopol, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &odnopol::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *odnopol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *odnopol::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_odnopol))
        return static_cast<void*>(const_cast< odnopol*>(this));
    return QDialog::qt_metacast(_clname);
}

int odnopol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: viz(); break;
        case 1: noviz(); break;
        case 2: pok(); break;
        case 3: skryt(); break;
        case 4: nazad(); break;
        case 5: vmenu(); break;
        case 6: ellip(); break;
        case 7: gip(); break;
        case 8: post(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
