/****************************************************************************
** loadPanel meta object code from reading C++ file 'loadPanel.hxx'
**
** Created: Wed Mar 5 17:45:31 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "loadPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *loadPanel::className() const
{
    return "loadPanel";
}

QMetaObject *loadPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_loadPanel( "loadPanel", &loadPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString loadPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "loadPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString loadPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "loadPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* loadPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"vAttachOrLoadPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_1 = {"vAttachOrLoadPageClearButtonSelected", 0, 0 };
    static const QUMethod slot_2 = {"vAttachOrLoadPageNextButtonSelected", 0, 0 };
    static const QUMethod slot_3 = {"vAttachOrLoadPageAttachToProcessCheckBoxSelected", 0, 0 };
    static const QUMethod slot_4 = {"vAttachOrLoadPageLoadExecutableCheckBoxSelected", 0, 0 };
    static const QUMethod slot_5 = {"vAttachOrLoadPageLoadDifferentExecutableCheckBoxSelected", 0, 0 };
    static const QUMethod slot_6 = {"vAttachOrLoadPageLoadMultiProcessExecutableCheckBoxSelected", 0, 0 };
    static const QUMethod slot_7 = {"vAttachOrLoadPageLoadDifferentMultiProcessExecutableCheckBoxSelected", 0, 0 };
    static const QUMethod slot_8 = {"vAttachOrLoadPageAttachToMultiProcessCheckBoxSelected", 0, 0 };
    static const QUMethod slot_9 = {"vMPLoadPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_10 = {"vMPLoadPageClearButtonSelected", 0, 0 };
    static const QUMethod slot_11 = {"vMPLoadPageLoadButtonSelected", 0, 0 };
    static const QUMethod slot_12 = {"vMPLoadPageAcceptButtonSelected", 0, 0 };
    static const QUMethod slot_13 = {"vMPLoadPageArgBrowseSelected", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ "wasParallel", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"vSummaryPageFinishButtonSelected", 1, param_slot_14 };
    static const QUMethod slot_15 = {"finishButtonSelected", 0, 0 };
    static const QUMethod slot_16 = {"vMPLoadPageFinishButtonSelected", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "vAttachOrLoadPageBackButtonSelected()", &slot_0, QMetaData::Public },
	{ "vAttachOrLoadPageClearButtonSelected()", &slot_1, QMetaData::Public },
	{ "vAttachOrLoadPageNextButtonSelected()", &slot_2, QMetaData::Public },
	{ "vAttachOrLoadPageAttachToProcessCheckBoxSelected()", &slot_3, QMetaData::Public },
	{ "vAttachOrLoadPageLoadExecutableCheckBoxSelected()", &slot_4, QMetaData::Public },
	{ "vAttachOrLoadPageLoadDifferentExecutableCheckBoxSelected()", &slot_5, QMetaData::Public },
	{ "vAttachOrLoadPageLoadMultiProcessExecutableCheckBoxSelected()", &slot_6, QMetaData::Public },
	{ "vAttachOrLoadPageLoadDifferentMultiProcessExecutableCheckBoxSelected()", &slot_7, QMetaData::Public },
	{ "vAttachOrLoadPageAttachToMultiProcessCheckBoxSelected()", &slot_8, QMetaData::Public },
	{ "vMPLoadPageBackButtonSelected()", &slot_9, QMetaData::Public },
	{ "vMPLoadPageClearButtonSelected()", &slot_10, QMetaData::Public },
	{ "vMPLoadPageLoadButtonSelected()", &slot_11, QMetaData::Public },
	{ "vMPLoadPageAcceptButtonSelected()", &slot_12, QMetaData::Public },
	{ "vMPLoadPageArgBrowseSelected()", &slot_13, QMetaData::Public },
	{ "vSummaryPageFinishButtonSelected(bool)", &slot_14, QMetaData::Public },
	{ "finishButtonSelected()", &slot_15, QMetaData::Public },
	{ "vMPLoadPageFinishButtonSelected()", &slot_16, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"loadPanel", parentObject,
	slot_tbl, 17,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_loadPanel.setMetaObject( metaObj );
    return metaObj;
}

void* loadPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "loadPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool loadPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: vAttachOrLoadPageBackButtonSelected(); break;
    case 1: vAttachOrLoadPageClearButtonSelected(); break;
    case 2: vAttachOrLoadPageNextButtonSelected(); break;
    case 3: vAttachOrLoadPageAttachToProcessCheckBoxSelected(); break;
    case 4: vAttachOrLoadPageLoadExecutableCheckBoxSelected(); break;
    case 5: vAttachOrLoadPageLoadDifferentExecutableCheckBoxSelected(); break;
    case 6: vAttachOrLoadPageLoadMultiProcessExecutableCheckBoxSelected(); break;
    case 7: vAttachOrLoadPageLoadDifferentMultiProcessExecutableCheckBoxSelected(); break;
    case 8: vAttachOrLoadPageAttachToMultiProcessCheckBoxSelected(); break;
    case 9: vMPLoadPageBackButtonSelected(); break;
    case 10: vMPLoadPageClearButtonSelected(); break;
    case 11: vMPLoadPageLoadButtonSelected(); break;
    case 12: vMPLoadPageAcceptButtonSelected(); break;
    case 13: vMPLoadPageArgBrowseSelected(); break;
    case 14: vSummaryPageFinishButtonSelected((bool)static_QUType_bool.get(_o+1)); break;
    case 15: finishButtonSelected(); break;
    case 16: vMPLoadPageFinishButtonSelected(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool loadPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool loadPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool loadPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
