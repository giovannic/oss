/****************************************************************************
** IOWizardPanel meta object code from reading C++ file 'IOWizardPanel.hxx'
**
** Created: Wed Mar 5 17:48:03 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "IOWizardPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IOWizardPanel::className() const
{
    return "IOWizardPanel";
}

QMetaObject *IOWizardPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IOWizardPanel( "IOWizardPanel", &IOWizardPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IOWizardPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IOWizardPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IOWizardPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IOWizardPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IOWizardPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"eDescriptionPageNextButtonSelected", 0, 0 };
    static const QUMethod slot_1 = {"eDescriptionPageIntroButtonSelected", 0, 0 };
    static const QUMethod slot_2 = {"eParameterPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_3 = {"eParameterPageNextButtonSelected", 0, 0 };
    static const QUMethod slot_4 = {"eParameterPageResetButtonSelected", 0, 0 };
    static const QUMethod slot_5 = {"eSummaryPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_6 = {"eSummaryPageFinishButtonSelected", 0, 0 };
    static const QUMethod slot_7 = {"vDescriptionPageNextButtonSelected", 0, 0 };
    static const QUMethod slot_8 = {"vDescriptionPageIntroButtonSelected", 0, 0 };
    static const QUMethod slot_9 = {"vParameterPageSampleRateTextReturnPressed", 0, 0 };
    static const QUMethod slot_10 = {"vParameterPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_11 = {"vParameterPageNextButtonSelected", 0, 0 };
    static const QUMethod slot_12 = {"vParameterPageResetButtonSelected", 0, 0 };
    static const QUMethod slot_13 = {"vSummaryPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_14 = {"vSummaryPageFinishButtonSelected", 0, 0 };
    static const QUMethod slot_15 = {"eParameterPageSampleRateTextReturnPressed", 0, 0 };
    static const QUMethod slot_16 = {"ewizardModeSelected", 0, 0 };
    static const QUMethod slot_17 = {"vwizardModeSelected", 0, 0 };
    static const QUMethod slot_18 = {"wizardModeSelected", 0, 0 };
    static const QUMethod slot_19 = {"finishButtonSelected", 0, 0 };
    static const QUMethod slot_20 = {"vParameterPageCheckBoxSelected", 0, 0 };
    static const QUMethod slot_21 = {"eParameterPageCheckBoxSelected", 0, 0 };
    static const QUMethod slot_22 = {"vOfflineRBSelected", 0, 0 };
    static const QUMethod slot_23 = {"vOnlineRBSelected", 0, 0 };
    static const QUMethod slot_24 = {"eOfflineRBSelected", 0, 0 };
    static const QUMethod slot_25 = {"eOnlineRBSelected", 0, 0 };
    static const QUMethod slot_26 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "eDescriptionPageNextButtonSelected()", &slot_0, QMetaData::Public },
	{ "eDescriptionPageIntroButtonSelected()", &slot_1, QMetaData::Public },
	{ "eParameterPageBackButtonSelected()", &slot_2, QMetaData::Public },
	{ "eParameterPageNextButtonSelected()", &slot_3, QMetaData::Public },
	{ "eParameterPageResetButtonSelected()", &slot_4, QMetaData::Public },
	{ "eSummaryPageBackButtonSelected()", &slot_5, QMetaData::Public },
	{ "eSummaryPageFinishButtonSelected()", &slot_6, QMetaData::Public },
	{ "vDescriptionPageNextButtonSelected()", &slot_7, QMetaData::Public },
	{ "vDescriptionPageIntroButtonSelected()", &slot_8, QMetaData::Public },
	{ "vParameterPageSampleRateTextReturnPressed()", &slot_9, QMetaData::Public },
	{ "vParameterPageBackButtonSelected()", &slot_10, QMetaData::Public },
	{ "vParameterPageNextButtonSelected()", &slot_11, QMetaData::Public },
	{ "vParameterPageResetButtonSelected()", &slot_12, QMetaData::Public },
	{ "vSummaryPageBackButtonSelected()", &slot_13, QMetaData::Public },
	{ "vSummaryPageFinishButtonSelected()", &slot_14, QMetaData::Public },
	{ "eParameterPageSampleRateTextReturnPressed()", &slot_15, QMetaData::Public },
	{ "ewizardModeSelected()", &slot_16, QMetaData::Public },
	{ "vwizardModeSelected()", &slot_17, QMetaData::Public },
	{ "wizardModeSelected()", &slot_18, QMetaData::Public },
	{ "finishButtonSelected()", &slot_19, QMetaData::Public },
	{ "vParameterPageCheckBoxSelected()", &slot_20, QMetaData::Public },
	{ "eParameterPageCheckBoxSelected()", &slot_21, QMetaData::Public },
	{ "vOfflineRBSelected()", &slot_22, QMetaData::Public },
	{ "vOnlineRBSelected()", &slot_23, QMetaData::Public },
	{ "eOfflineRBSelected()", &slot_24, QMetaData::Public },
	{ "eOnlineRBSelected()", &slot_25, QMetaData::Public },
	{ "languageChange()", &slot_26, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"IOWizardPanel", parentObject,
	slot_tbl, 27,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IOWizardPanel.setMetaObject( metaObj );
    return metaObj;
}

void* IOWizardPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IOWizardPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool IOWizardPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: eDescriptionPageNextButtonSelected(); break;
    case 1: eDescriptionPageIntroButtonSelected(); break;
    case 2: eParameterPageBackButtonSelected(); break;
    case 3: eParameterPageNextButtonSelected(); break;
    case 4: eParameterPageResetButtonSelected(); break;
    case 5: eSummaryPageBackButtonSelected(); break;
    case 6: eSummaryPageFinishButtonSelected(); break;
    case 7: vDescriptionPageNextButtonSelected(); break;
    case 8: vDescriptionPageIntroButtonSelected(); break;
    case 9: vParameterPageSampleRateTextReturnPressed(); break;
    case 10: vParameterPageBackButtonSelected(); break;
    case 11: vParameterPageNextButtonSelected(); break;
    case 12: vParameterPageResetButtonSelected(); break;
    case 13: vSummaryPageBackButtonSelected(); break;
    case 14: vSummaryPageFinishButtonSelected(); break;
    case 15: eParameterPageSampleRateTextReturnPressed(); break;
    case 16: ewizardModeSelected(); break;
    case 17: vwizardModeSelected(); break;
    case 18: wizardModeSelected(); break;
    case 19: finishButtonSelected(); break;
    case 20: vParameterPageCheckBoxSelected(); break;
    case 21: eParameterPageCheckBoxSelected(); break;
    case 22: vOfflineRBSelected(); break;
    case 23: vOnlineRBSelected(); break;
    case 24: eOfflineRBSelected(); break;
    case 25: eOnlineRBSelected(); break;
    case 26: languageChange(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool IOWizardPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool IOWizardPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool IOWizardPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
