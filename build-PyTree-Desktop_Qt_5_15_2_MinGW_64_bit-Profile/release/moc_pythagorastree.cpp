/****************************************************************************
** Meta object code from reading C++ file 'pythagorastree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PyTree/pythagorastree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pythagorastree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PythagorasTree_t {
    QByteArrayData data[11];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythagorasTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythagorasTree_t qt_meta_stringdata_PythagorasTree = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PythagorasTree"
QT_MOC_LITERAL(1, 15, 26), // "on_inputAngle_valueChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "value"
QT_MOC_LITERAL(4, 49, 27), // "on_inputSize_a_valueChanged"
QT_MOC_LITERAL(5, 77, 27), // "on_inputSize_b_valueChanged"
QT_MOC_LITERAL(6, 105, 15), // "on_Draw_clicked"
QT_MOC_LITERAL(7, 121, 26), // "on_inputLevel_valueChanged"
QT_MOC_LITERAL(8, 148, 28), // "on_colorPickerButton_clicked"
QT_MOC_LITERAL(9, 177, 30), // "on_colorPickerButton_2_clicked"
QT_MOC_LITERAL(10, 208, 30) // "on_colorPickerButton_3_clicked"

    },
    "PythagorasTree\0on_inputAngle_valueChanged\0"
    "\0value\0on_inputSize_a_valueChanged\0"
    "on_inputSize_b_valueChanged\0on_Draw_clicked\0"
    "on_inputLevel_valueChanged\0"
    "on_colorPickerButton_clicked\0"
    "on_colorPickerButton_2_clicked\0"
    "on_colorPickerButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythagorasTree[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PythagorasTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PythagorasTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_inputAngle_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_inputSize_a_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_inputSize_b_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_Draw_clicked(); break;
        case 4: _t->on_inputLevel_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_colorPickerButton_clicked(); break;
        case 6: _t->on_colorPickerButton_2_clicked(); break;
        case 7: _t->on_colorPickerButton_3_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PythagorasTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PythagorasTree.data,
    qt_meta_data_PythagorasTree,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PythagorasTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythagorasTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PythagorasTree.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PythagorasTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
