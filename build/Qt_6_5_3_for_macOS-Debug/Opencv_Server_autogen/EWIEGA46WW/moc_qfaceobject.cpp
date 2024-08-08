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
    "send_faceid",
    "",
    "int64_t",
    "faceid",
    "face_register",
    "Mat&",
    "faceimage",
    "face_query",
    "faceImage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[7];
    char stringdata5[14];
    char stringdata6[5];
    char stringdata7[10];
    char stringdata8[11];
    char stringdata9[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQFaceObjectENDCLASS_t qt_meta_stringdata_CLASSQFaceObjectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QFaceObject"
        QT_MOC_LITERAL(12, 11),  // "send_faceid"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 7),  // "int64_t"
        QT_MOC_LITERAL(33, 6),  // "faceid"
        QT_MOC_LITERAL(40, 13),  // "face_register"
        QT_MOC_LITERAL(54, 4),  // "Mat&"
        QT_MOC_LITERAL(59, 9),  // "faceimage"
        QT_MOC_LITERAL(69, 10),  // "face_query"
        QT_MOC_LITERAL(80, 9)   // "faceImage"
    },
    "QFaceObject",
    "send_faceid",
    "",
    "int64_t",
    "faceid",
    "face_register",
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
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   35,    2, 0x0a,    3 /* Public */,
       8,    1,   38,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    0x80000000 | 3, 0x80000000 | 6,    7,
    QMetaType::Int, 0x80000000 | 6,    9,

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
        // method 'send_faceid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int64_t, std::false_type>,
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
        case 0: _t->send_faceid((*reinterpret_cast< std::add_pointer_t<int64_t>>(_a[1]))); break;
        case 1: { int64_t _r = _t->face_register((*reinterpret_cast< std::add_pointer_t<Mat&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int64_t*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->face_query((*reinterpret_cast< std::add_pointer_t<Mat&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QFaceObject::*)(int64_t );
            if (_t _q_method = &QFaceObject::send_faceid; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
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
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QFaceObject::send_faceid(int64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
