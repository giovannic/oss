/****************************************************************************
** CustomExperimentPanel meta object code from reading C++ file 'CustomExperimentPanel.hxx'
**
** Created: Wed Mar 5 17:44:09 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CustomExperimentPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CustomExperimentPanel::className() const
{
    return "CustomExperimentPanel";
}

QMetaObject *CustomExperimentPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomExperimentPanel( "CustomExperimentPanel", &CustomExperimentPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomExperimentPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomExperimentPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomExperimentPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomExperimentPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomExperimentPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"saveAsSelected", 0, 0 };
    static const QUMethod slot_1 = {"loadSourcePanel", 0, 0 };
    static const QUMethod slot_2 = {"editPanelName", 0, 0 };
    static const QUMethod slot_3 = {"saveExperiment", 0, 0 };
    static const QUMethod slot_4 = {"experimentStatus", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_ptr, "Panel", QUParameter::Out }
    };
    static const QUMethod slot_5 = {"loadStatsPanel", 1, param_slot_5 };
    static const QUMethod slot_6 = {"loadManageProcessesPanel", 0, 0 };
    static const QUMethod slot_7 = {"progressUpdate", 0, 0 };
    static const QUMethod slot_8 = {"statusUpdateTimerSlot", 0, 0 };
    static const QUMethod slot_9 = {"attachProcessSelected", 0, 0 };
    static const QUMethod slot_10 = {"loadProgramSelected", 0, 0 };
    static const QUMethod slot_11 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "saveAsSelected()", &slot_0, QMetaData::Public },
	{ "loadSourcePanel()", &slot_1, QMetaData::Public },
	{ "editPanelName()", &slot_2, QMetaData::Public },
	{ "saveExperiment()", &slot_3, QMetaData::Public },
	{ "experimentStatus()", &slot_4, QMetaData::Public },
	{ "loadStatsPanel()", &slot_5, QMetaData::Public },
	{ "loadManageProcessesPanel()", &slot_6, QMetaData::Public },
	{ "progressUpdate()", &slot_7, QMetaData::Public },
	{ "statusUpdateTimerSlot()", &slot_8, QMetaData::Private },
	{ "attachProcessSelected()", &slot_9, QMetaData::Private },
	{ "loadProgramSelected()", &slot_10, QMetaData::Private },
	{ "languageChange()", &slot_11, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CustomExperimentPanel", parentObject,
	slot_tbl, 12,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomExperimentPanel.setMetaObject( metaObj );
    return metaObj;
}

void* CustomExperimentPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomExperimentPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool CustomExperimentPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: saveAsSelected(); break;
    case 1: loadSourcePanel(); break;
    case 2: editPanelName(); break;
    case 3: saveExperiment(); break;
    case 4: experimentStatus(); break;
    case 5: static_QUType_ptr.set(_o,loadStatsPanel()); break;
    case 6: loadManageProcessesPanel(); break;
    case 7: progressUpdate(); break;
    case 8: statusUpdateTimerSlot(); break;
    case 9: attachProcessSelected(); break;
    case 10: loadProgramSelected(); break;
    case 11: languageChange(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CustomExperimentPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomExperimentPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool CustomExperimentPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
