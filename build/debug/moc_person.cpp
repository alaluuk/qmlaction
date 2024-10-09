/****************************************************************************
** Meta object code from reading C++ file 'person.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../person.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'person.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPersonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPersonENDCLASS = QtMocHelpers::stringData(
    "Person",
    "setId",
    "",
    "value",
    "setFirstname",
    "setLastname",
    "addTodatabase",
    "delFromDatabase",
    "getData",
    "getSelected",
    "updateSelected",
    "getId",
    "getFirstname",
    "getLastname"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPersonENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    5 /* Public */,
       4,    1,   65,    2, 0x0a,    7 /* Public */,
       5,    1,   68,    2, 0x0a,    9 /* Public */,
       6,    0,   71,    2, 0x0a,   11 /* Public */,
       7,    0,   72,    2, 0x0a,   12 /* Public */,
       8,    0,   73,    2, 0x0a,   13 /* Public */,
       9,    0,   74,    2, 0x0a,   14 /* Public */,
      10,    0,   75,    2, 0x0a,   15 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00015003, uint(-1), 0,
      12, QMetaType::QString, 0x00015003, uint(-1), 0,
      13, QMetaType::QString, 0x00015003, uint(-1), 0,
       8, QMetaType::QString, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Person::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPersonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPersonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPersonENDCLASS_t,
        // property 'getId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'getFirstname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'getLastname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'getData'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Person, std::true_type>,
        // method 'setId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFirstname'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setLastname'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'addTodatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delFromDatabase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getData'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Person::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Person *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setId((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setFirstname((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setLastname((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->addTodatabase(); break;
        case 4: _t->delFromDatabase(); break;
        case 5: { QString _r = _t->getData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->getSelected(); break;
        case 7: _t->updateSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Person *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getFirstname(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getLastname(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Person *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFirstname(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setLastname(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Person::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Person::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPersonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Person::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
