/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EasyPlot/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "AjusteLineal"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "AjusteCuadratico"
QT_MOC_LITERAL(4, 42, 17), // "AjusteExponencial"
QT_MOC_LITERAL(5, 60, 20), // "ConfiguracionGrafica"
QT_MOC_LITERAL(6, 81, 8), // "gnuplot*"
QT_MOC_LITERAL(7, 90, 16), // "ValoresIniciales"
QT_MOC_LITERAL(8, 107, 7), // "Ajuste*"
QT_MOC_LITERAL(9, 115, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(10, 140, 25), // "on_actionLineal_triggered"
QT_MOC_LITERAL(11, 166, 29), // "on_actionCuadr_tico_triggered"
QT_MOC_LITERAL(12, 196, 30), // "on_actionExponencial_triggered"
QT_MOC_LITERAL(13, 227, 32), // "on_actionConfiguraci_n_triggered"
QT_MOC_LITERAL(14, 260, 27), // "on_actionGraficar_triggered"
QT_MOC_LITERAL(15, 288, 36), // "on_actionValores_Iniciales_tr..."
QT_MOC_LITERAL(16, 325, 26) // "on_actionGuardar_triggered"

    },
    "MainWindow\0AjusteLineal\0\0AjusteCuadratico\0"
    "AjusteExponencial\0ConfiguracionGrafica\0"
    "gnuplot*\0ValoresIniciales\0Ajuste*\0"
    "on_actionAbrir_triggered\0"
    "on_actionLineal_triggered\0"
    "on_actionCuadr_tico_triggered\0"
    "on_actionExponencial_triggered\0"
    "on_actionConfiguraci_n_triggered\0"
    "on_actionGraficar_triggered\0"
    "on_actionValores_Iniciales_triggered\0"
    "on_actionGuardar_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,
       5,    2,   88,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AjusteLineal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->AjusteCuadratico((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->AjusteExponencial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ConfiguracionGrafica((*reinterpret_cast< gnuplot*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->ValoresIniciales((*reinterpret_cast< Ajuste*(*)>(_a[1]))); break;
        case 5: _t->on_actionAbrir_triggered(); break;
        case 6: _t->on_actionLineal_triggered(); break;
        case 7: _t->on_actionCuadr_tico_triggered(); break;
        case 8: _t->on_actionExponencial_triggered(); break;
        case 9: _t->on_actionConfiguraci_n_triggered(); break;
        case 10: _t->on_actionGraficar_triggered(); break;
        case 11: _t->on_actionValores_Iniciales_triggered(); break;
        case 12: _t->on_actionGuardar_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Ajuste* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AjusteLineal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AjusteCuadratico)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AjusteExponencial)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(gnuplot * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ConfiguracionGrafica)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(Ajuste * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::ValoresIniciales)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::AjusteLineal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::AjusteCuadratico(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::AjusteExponencial(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::ConfiguracionGrafica(gnuplot * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::ValoresIniciales(Ajuste * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
