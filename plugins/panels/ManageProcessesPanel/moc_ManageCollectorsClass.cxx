/****************************************************************************
** ManageCollectorsClass meta object code from reading C++ file 'ManageCollectorsClass.hxx'
**
** Created: Wed Mar 5 11:58:34 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ManageCollectorsClass.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ManageCollectorsClass::className() const
{
    return "ManageCollectorsClass";
}

QMetaObject *ManageCollectorsClass::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ManageCollectorsClass( "ManageCollectorsClass", &ManageCollectorsClass::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ManageCollectorsClass::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ManageCollectorsClass", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ManageCollectorsClass::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ManageCollectorsClass", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ManageCollectorsClass::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"contextMenuRequested", 3, param_slot_1 };
    static const QUMethod slot_2 = {"updatePanel", 0, 0 };
    static const QUMethod slot_3 = {"updateTimerCallback", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"LS_attachCollectorSelected", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"RS_attachCollectorSelected", 1, param_slot_5 };
    static const QUMethod slot_6 = {"detachSelected", 0, 0 };
    static const QUMethod slot_7 = {"disableSelected", 0, 0 };
    static const QUMethod slot_8 = {"enableSelected", 0, 0 };
    static const QUMethod slot_9 = {"attachProcessSelected", 0, 0 };
    static const QUMethod slot_10 = {"focusOnProcessSelected", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_ptr, "QListView", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"focusOnPSetList", 2, param_slot_11 };
    static const QUMethod slot_12 = {"focusOnPSetSelected", 0, 0 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_13 = {"focusOnProcessSelected", 1, param_slot_13 };
    static const QUMethod slot_14 = {"focusOnRankSelected", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_ptr, "QListView", QUParameter::In }
    };
    static const QUMethod slot_15 = {"focusOnRankSetList", 1, param_slot_15 };
    static const QUMethod slot_16 = {"focusOnRankSetSelected", 0, 0 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_17 = {"focusOnRankSelected", 1, param_slot_17 };
    static const QUMethod slot_18 = {"loadProgramSelected", 0, 0 };
    static const QUMethod slot_19 = {"fileCollectorAboutToShowSelected", 0, 0 };
    static const QUParameter param_slot_20[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_20 = {"paramSelected", 1, param_slot_20 };
    static const QUMethod slot_21 = {"sortByProcess", 0, 0 };
    static const QUMethod slot_22 = {"sortByCollector", 0, 0 };
    static const QUMethod slot_23 = {"sortByHost", 0, 0 };
    static const QUMethod slot_24 = {"sortByMPIRank", 0, 0 };
    static const QUMethod slot_25 = {"createUserPSet", 0, 0 };
    static const QUMethod slot_26 = {"removeUserPSet", 0, 0 };
    static const QUMethod slot_27 = {"selectProcessesSelected", 0, 0 };
    static const QUMethod slot_28 = {"progressUpdate", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "contextMenuRequested(QListViewItem*,const QPoint&,int)", &slot_1, QMetaData::Public },
	{ "updatePanel()", &slot_2, QMetaData::Public },
	{ "updateTimerCallback()", &slot_3, QMetaData::Public },
	{ "LS_attachCollectorSelected(int)", &slot_4, QMetaData::Private },
	{ "RS_attachCollectorSelected(int)", &slot_5, QMetaData::Private },
	{ "detachSelected()", &slot_6, QMetaData::Private },
	{ "disableSelected()", &slot_7, QMetaData::Private },
	{ "enableSelected()", &slot_8, QMetaData::Private },
	{ "attachProcessSelected()", &slot_9, QMetaData::Private },
	{ "focusOnProcessSelected()", &slot_10, QMetaData::Private },
	{ "focusOnPSetList(QListView*,bool)", &slot_11, QMetaData::Private },
	{ "focusOnPSetSelected()", &slot_12, QMetaData::Private },
	{ "focusOnProcessSelected(QListViewItem*)", &slot_13, QMetaData::Private },
	{ "focusOnRankSelected()", &slot_14, QMetaData::Private },
	{ "focusOnRankSetList(QListView*)", &slot_15, QMetaData::Private },
	{ "focusOnRankSetSelected()", &slot_16, QMetaData::Private },
	{ "focusOnRankSelected(QListViewItem*)", &slot_17, QMetaData::Private },
	{ "loadProgramSelected()", &slot_18, QMetaData::Private },
	{ "fileCollectorAboutToShowSelected()", &slot_19, QMetaData::Private },
	{ "paramSelected(int)", &slot_20, QMetaData::Private },
	{ "sortByProcess()", &slot_21, QMetaData::Private },
	{ "sortByCollector()", &slot_22, QMetaData::Private },
	{ "sortByHost()", &slot_23, QMetaData::Private },
	{ "sortByMPIRank()", &slot_24, QMetaData::Private },
	{ "createUserPSet()", &slot_25, QMetaData::Private },
	{ "removeUserPSet()", &slot_26, QMetaData::Private },
	{ "selectProcessesSelected()", &slot_27, QMetaData::Private },
	{ "progressUpdate()", &slot_28, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ManageCollectorsClass", parentObject,
	slot_tbl, 29,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ManageCollectorsClass.setMetaObject( metaObj );
    return metaObj;
}

void* ManageCollectorsClass::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ManageCollectorsClass" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool ManageCollectorsClass::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: contextMenuRequested((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 2: updatePanel(); break;
    case 3: updateTimerCallback(); break;
    case 4: LS_attachCollectorSelected((int)static_QUType_int.get(_o+1)); break;
    case 5: RS_attachCollectorSelected((int)static_QUType_int.get(_o+1)); break;
    case 6: detachSelected(); break;
    case 7: disableSelected(); break;
    case 8: enableSelected(); break;
    case 9: attachProcessSelected(); break;
    case 10: focusOnProcessSelected(); break;
    case 11: focusOnPSetList((QListView*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 12: focusOnPSetSelected(); break;
    case 13: focusOnProcessSelected((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 14: focusOnRankSelected(); break;
    case 15: focusOnRankSetList((QListView*)static_QUType_ptr.get(_o+1)); break;
    case 16: focusOnRankSetSelected(); break;
    case 17: focusOnRankSelected((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 18: loadProgramSelected(); break;
    case 19: fileCollectorAboutToShowSelected(); break;
    case 20: paramSelected((int)static_QUType_int.get(_o+1)); break;
    case 21: sortByProcess(); break;
    case 22: sortByCollector(); break;
    case 23: sortByHost(); break;
    case 24: sortByMPIRank(); break;
    case 25: createUserPSet(); break;
    case 26: removeUserPSet(); break;
    case 27: selectProcessesSelected(); break;
    case 28: progressUpdate(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ManageCollectorsClass::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ManageCollectorsClass::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ManageCollectorsClass::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
