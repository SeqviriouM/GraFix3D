/****************************************************************************
** Meta object code from reading C++ file 'dvupol.h'
**
** Created: Sun Oct 16 13:50:08 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interface/dvupol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dvupol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dvupol[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      14,    7,    7,    7, 0x0a,
      22,    7,    7,    7, 0x0a,
      28,    7,    7,    7, 0x0a,
      36,    7,    7,    7, 0x0a,
      44,    7,    7,    7, 0x0a,
      52,    7,    7,    7, 0x0a,
      60,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_dvupol[] = {
    "dvupol\0\0viz()\0noviz()\0pok()\0skryt()\0"
    "nazad()\0vmenu()\0ellip()\0gip()\0"
};

const QMetaObject dvupol::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dvupol,
      qt_meta_data_dvupol, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dvupol::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dvupol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dvupol::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dvupol))
        return static_cast<void*>(const_cast< dvupol*>(this));
    return QDialog::qt_metacast(_clname);
}

int dvupol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
