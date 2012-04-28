/****************************************************************************
** Meta object code from reading C++ file 'postroenye.h'
**
** Created: Sat Oct 29 18:14:21 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "postroenye.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'postroenye.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_postroenye[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      19,   11,   11,   11, 0x0a,
      31,   11,   11,   11, 0x0a,
      44,   11,   11,   11, 0x0a,
      55,   11,   11,   11, 0x0a,
      63,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_postroenye[] = {
    "postroenye\0\0exit()\0nazadvvod()\0"
    "nazadvibor()\0nazaddan()\0vmenu()\0"
    "inform()\0"
};

const QMetaObject postroenye::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_postroenye,
      qt_meta_data_postroenye, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &postroenye::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *postroenye::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *postroenye::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_postroenye))
        return static_cast<void*>(const_cast< postroenye*>(this));
    return QDialog::qt_metacast(_clname);
}

int postroenye::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: exit(); break;
        case 1: nazadvvod(); break;
        case 2: nazadvibor(); break;
        case 3: nazaddan(); break;
        case 4: vmenu(); break;
        case 5: inform(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
