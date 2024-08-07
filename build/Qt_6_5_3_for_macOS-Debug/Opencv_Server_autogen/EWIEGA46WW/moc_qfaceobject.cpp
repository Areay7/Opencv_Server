/****************************************************************************
** Meta object code from reading C++ file 'qfaceobject.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qfaceobject.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfaceobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQFaceObjectENDCLASS = QtMocHelpers::stringData(
    "QFaceObject",
    "face_register",
    "int64_t",
    "",
    "Mat&",
    "faceimage",
    "face_query",
    "faceImage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[8];
    char stringdata3[1];
    char stringdata4[5];
    char stringdata5[10];
    char stringdata6[11];
    char stringdata7[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t qt_meta_stringdata_CLASSQFaceObjectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QFaceObject"
        QT_MOC_LITERAL(12, 13),  // "face_register"
        QT_MOC_LITERAL(26, 7),  // "int64_t"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 4),  // "Mat&"
        QT_MOC_LITERAL(40, 9),  // "faceimage"
        QT_MOC_LITERAL(50, 10),  // "face_query"
        QT_MOC_LITERAL(61, 9)   // "faceImage"
    },
    "QFaceObject",
    "face_register",
    "int64_t",
    "",
    "Mat&",
    "faceimage",
    "face_query",
    "faceImage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQFaceObjectENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    3, 0x0a,    1 /* Public */,
       6,    1,   29,    3, 0x0a,    3 /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Int, 0x80000000 | 4,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject QFaceObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQFaceObjectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQFaceObjectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFaceObject, std::true_type>,
        // method 'face_register'
        QtPrivate::TypeAndForceComplete<int64_t, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mat &, std::false_type>,
        // method 'face_query'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mat &, std::false_type>
    >,
    nullptr
} };

void QFaceObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QFaceObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int64_t _r = _t->face_register((*reinterpret_cast< std::add_pointer_t<Mat&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int64_t*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->face_query((*reinterpret_cast< std::add_pointer_t<Mat&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *QFaceObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFaceObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQFaceObjectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QFaceObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
