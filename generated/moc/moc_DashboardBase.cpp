/****************************************************************************
** Meta object code from reading C++ file 'DashboardBase.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../core/src/DashboardBase.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DashboardBase.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DashboardBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      38,   14,   14,   14, 0x05,
      61,   57,   14,   14, 0x05,
      86,   14,   14,   14, 0x05,
     103,   14,   14,   14, 0x05,
     130,  121,   14,   14, 0x05,
     159,   57,   14,   14, 0x05,
     182,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     206,   14,   14,   14, 0x0a,
     223,  219,   14,   14, 0x0a,
     250,  244,   14,   14, 0x0a,
     272,  219,   14,   14, 0x0a,
     298,  244,   14,   14, 0x0a,
     323,  219,   14,   14, 0x0a,
     352,   14,   14,   14, 0x0a,
     368,  219,   14,   14, 0x0a,
     397,  391,   14,   14, 0x0a,
     429,  419,   14,   14, 0x0a,
     470,  419,   14,   14, 0x0a,
     520,  511,   14,   14, 0x0a,
     578,  219,  573,   14, 0x0a,
     611,  607,   14,   14, 0x0a,
     653,   57,   14,   14, 0x0a,
     696,  682,   14,   14, 0x0a,
     732,   14,  721,   14, 0x0a,
     747,   14,  740,   14, 0x0a,
     758,   14,  573,   14, 0x0a,
     783,  777,   14,   14, 0x0a,
     821,   14,  809,   14, 0x0a,
     835,   14,  831,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DashboardBase[] = {
    "DashboardBase\0\0hasToBeUpdate(QString)\0"
    "sortEventConsole()\0msg\0updateStatusBar(QString)\0"
    "settingsLoaded()\0updateSourceUrl()\0"
    "interval\0timerIntervalChanged(qint32)\0"
    "errorOccurred(QString)\0dashboardLinkSelected()\0"
    "runMonitor()\0src\0runMonitor(SourceT&)\0"
    "srcId\0runNgrt4ndUpdate(int)\0"
    "runNgrt4ndUpdate(SourceT)\0"
    "runLivestatusUpdate(int)\0"
    "runLivestatusUpdate(SourceT)\0"
    "resetStatData()\0prepareUpdate(SourceT)\0"
    "_node\0updateBpNode(QString)\0reply,src\0"
    "processZbxReply(QNetworkReply*,SourceT&)\0"
    "processZnsReply(QNetworkReply*,SourceT&)\0"
    "code,src\0processRpcError(QNetworkReply::NetworkError,SourceT)\0"
    "bool\0allocSourceHandler(SourceT&)\0ids\0"
    "handleSourceSettingsChanged(QList<qint8>)\0"
    "handleErrorOccurred(QString)\0preferencePtr\0"
    "initialize(Preferences*)\0CoreDataT*\0"
    "cdata()\0qint32\0userRole()\0showOnlyTroubles()\0"
    "value\0setShowOnlyTroubles(bool)\0"
    "SourceListT\0sources()\0int\0firstSrcIndex()\0"
};

void DashboardBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DashboardBase *_t = static_cast<DashboardBase *>(_o);
        switch (_id) {
        case 0: _t->hasToBeUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sortEventConsole(); break;
        case 2: _t->updateStatusBar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->settingsLoaded(); break;
        case 4: _t->updateSourceUrl(); break;
        case 5: _t->timerIntervalChanged((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 6: _t->errorOccurred((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->dashboardLinkSelected(); break;
        case 8: _t->runMonitor(); break;
        case 9: _t->runMonitor((*reinterpret_cast< SourceT(*)>(_a[1]))); break;
        case 10: _t->runNgrt4ndUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->runNgrt4ndUpdate((*reinterpret_cast< const SourceT(*)>(_a[1]))); break;
        case 12: _t->runLivestatusUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->runLivestatusUpdate((*reinterpret_cast< const SourceT(*)>(_a[1]))); break;
        case 14: _t->resetStatData(); break;
        case 15: _t->prepareUpdate((*reinterpret_cast< const SourceT(*)>(_a[1]))); break;
        case 16: _t->updateBpNode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->processZbxReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< SourceT(*)>(_a[2]))); break;
        case 18: _t->processZnsReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< SourceT(*)>(_a[2]))); break;
        case 19: _t->processRpcError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const SourceT(*)>(_a[2]))); break;
        case 20: { bool _r = _t->allocSourceHandler((*reinterpret_cast< SourceT(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->handleSourceSettingsChanged((*reinterpret_cast< QList<qint8>(*)>(_a[1]))); break;
        case 22: _t->handleErrorOccurred((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->initialize((*reinterpret_cast< Preferences*(*)>(_a[1]))); break;
        case 24: { CoreDataT* _r = _t->cdata();
            if (_a[0]) *reinterpret_cast< CoreDataT**>(_a[0]) = _r; }  break;
        case 25: { qint32 _r = _t->userRole();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->showOnlyTroubles();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setShowOnlyTroubles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: { SourceListT _r = _t->sources();
            if (_a[0]) *reinterpret_cast< SourceListT*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->firstSrcIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DashboardBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DashboardBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DashboardBase,
      qt_meta_data_DashboardBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DashboardBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DashboardBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DashboardBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DashboardBase))
        return static_cast<void*>(const_cast< DashboardBase*>(this));
    return QObject::qt_metacast(_clname);
}

int DashboardBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void DashboardBase::hasToBeUpdate(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DashboardBase::sortEventConsole()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DashboardBase::updateStatusBar(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DashboardBase::settingsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DashboardBase::updateSourceUrl()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void DashboardBase::timerIntervalChanged(qint32 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DashboardBase::errorOccurred(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DashboardBase::dashboardLinkSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE