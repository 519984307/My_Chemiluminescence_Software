/****************************************************************************
** Meta object code from reading C++ file 'myreagentdialogadd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../systemWidget/reagentNumber/myreagentdialogadd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myreagentdialogadd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyReagentDialogAdd_t {
    QByteArrayData data[14];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyReagentDialogAdd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyReagentDialogAdd_t qt_meta_stringdata_MyReagentDialogAdd = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MyReagentDialogAdd"
QT_MOC_LITERAL(1, 19, 25), // "siganl_please_fresh_table"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "btn_cancelSlot"
QT_MOC_LITERAL(4, 61, 11), // "btn_addSlot"
QT_MOC_LITERAL(5, 73, 28), // "slot_fresh_cBox_PROJECT_NAME"
QT_MOC_LITERAL(6, 102, 12), // "str_category"
QT_MOC_LITERAL(7, 115, 28), // "slot_fresh_cBox_REAGENT_TYPE"
QT_MOC_LITERAL(8, 144, 15), // "str_projectName"
QT_MOC_LITERAL(9, 160, 27), // "slot_fresh_le_CATEGORY_code"
QT_MOC_LITERAL(10, 188, 31), // "slot_fresh_le_PROJECT_NAME_code"
QT_MOC_LITERAL(11, 220, 16), // "str_PROJECT_NAME"
QT_MOC_LITERAL(12, 237, 31), // "slot_fresh_le_REAGENT_TYPE_code"
QT_MOC_LITERAL(13, 269, 16) // "str_REAGENT_TYPE"

    },
    "MyReagentDialogAdd\0siganl_please_fresh_table\0"
    "\0btn_cancelSlot\0btn_addSlot\0"
    "slot_fresh_cBox_PROJECT_NAME\0str_category\0"
    "slot_fresh_cBox_REAGENT_TYPE\0"
    "str_projectName\0slot_fresh_le_CATEGORY_code\0"
    "slot_fresh_le_PROJECT_NAME_code\0"
    "str_PROJECT_NAME\0slot_fresh_le_REAGENT_TYPE_code\0"
    "str_REAGENT_TYPE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyReagentDialogAdd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void MyReagentDialogAdd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyReagentDialogAdd *_t = static_cast<MyReagentDialogAdd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->siganl_please_fresh_table(); break;
        case 1: _t->btn_cancelSlot(); break;
        case 2: _t->btn_addSlot(); break;
        case 3: _t->slot_fresh_cBox_PROJECT_NAME((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slot_fresh_cBox_REAGENT_TYPE((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slot_fresh_le_CATEGORY_code((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->slot_fresh_le_PROJECT_NAME_code((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->slot_fresh_le_REAGENT_TYPE_code((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyReagentDialogAdd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyReagentDialogAdd::siganl_please_fresh_table)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MyReagentDialogAdd::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MyReagentDialogAdd.data,
      qt_meta_data_MyReagentDialogAdd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyReagentDialogAdd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyReagentDialogAdd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyReagentDialogAdd.stringdata0))
        return static_cast<void*>(const_cast< MyReagentDialogAdd*>(this));
    return QDialog::qt_metacast(_clname);
}

int MyReagentDialogAdd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MyReagentDialogAdd::siganl_please_fresh_table()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
