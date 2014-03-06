/****************************************************************************
** CompareWizardPanel meta object code from reading C++ file 'CompareWizardPanel.hxx'
**
** Created: Wed Mar 5 17:47:49 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CompareWizardPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CompareWizardPanel::className() const
{
    return "CompareWizardPanel";
}

QMetaObject *CompareWizardPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CompareWizardPanel( "CompareWizardPanel", &CompareWizardPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CompareWizardPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareWizardPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CompareWizardPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareWizardPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CompareWizardPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"vDescriptionPageNextButtonSelected", 0, 0 };
    static const QUMethod slot_1 = {"vDescriptionPageIntroButtonSelected", 0, 0 };
    static const QUMethod slot_2 = {"loadPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_3 = {"loadPageNextButtonSelected", 0, 0 };
    static const QUMethod slot_4 = {"compareTypePageBackButtonSelected", 0, 0 };
    static const QUMethod slot_5 = {"compareTypePageNextButtonSelected", 0, 0 };
    static const QUMethod slot_6 = {"vSummaryPageBackButtonSelected", 0, 0 };
    static const QUMethod slot_7 = {"vSummaryPageFinishButtonSelected", 0, 0 };
    static const QUMethod slot_8 = {"finishButtonSelected", 0, 0 };
    static const QUMethod slot_9 = {"vCompareTypeByFunctionCheckBoxSelected", 0, 0 };
    static const QUMethod slot_10 = {"vCompareTypeByStatementCheckBoxSelected", 0, 0 };
    static const QUMethod slot_11 = {"vCompareTypeByLinkedObjectCheckBoxSelected", 0, 0 };
    static const QUMethod slot_12 = {"leftSideExperimentDirButtonSelected", 0, 0 };
    static const QUMethod slot_13 = {"rightSideExperimentDirButtonSelected", 0, 0 };
    static const QUMethod slot_14 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "vDescriptionPageNextButtonSelected()", &slot_0, QMetaData::Public },
	{ "vDescriptionPageIntroButtonSelected()", &slot_1, QMetaData::Public },
	{ "loadPageBackButtonSelected()", &slot_2, QMetaData::Public },
	{ "loadPageNextButtonSelected()", &slot_3, QMetaData::Public },
	{ "compareTypePageBackButtonSelected()", &slot_4, QMetaData::Public },
	{ "compareTypePageNextButtonSelected()", &slot_5, QMetaData::Public },
	{ "vSummaryPageBackButtonSelected()", &slot_6, QMetaData::Public },
	{ "vSummaryPageFinishButtonSelected()", &slot_7, QMetaData::Public },
	{ "finishButtonSelected()", &slot_8, QMetaData::Public },
	{ "vCompareTypeByFunctionCheckBoxSelected()", &slot_9, QMetaData::Public },
	{ "vCompareTypeByStatementCheckBoxSelected()", &slot_10, QMetaData::Public },
	{ "vCompareTypeByLinkedObjectCheckBoxSelected()", &slot_11, QMetaData::Public },
	{ "leftSideExperimentDirButtonSelected()", &slot_12, QMetaData::Private },
	{ "rightSideExperimentDirButtonSelected()", &slot_13, QMetaData::Private },
	{ "languageChange()", &slot_14, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CompareWizardPanel", parentObject,
	slot_tbl, 15,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CompareWizardPanel.setMetaObject( metaObj );
    return metaObj;
}

void* CompareWizardPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CompareWizardPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool CompareWizardPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: vDescriptionPageNextButtonSelected(); break;
    case 1: vDescriptionPageIntroButtonSelected(); break;
    case 2: loadPageBackButtonSelected(); break;
    case 3: loadPageNextButtonSelected(); break;
    case 4: compareTypePageBackButtonSelected(); break;
    case 5: compareTypePageNextButtonSelected(); break;
    case 6: vSummaryPageBackButtonSelected(); break;
    case 7: vSummaryPageFinishButtonSelected(); break;
    case 8: finishButtonSelected(); break;
    case 9: vCompareTypeByFunctionCheckBoxSelected(); break;
    case 10: vCompareTypeByStatementCheckBoxSelected(); break;
    case 11: vCompareTypeByLinkedObjectCheckBoxSelected(); break;
    case 12: leftSideExperimentDirButtonSelected(); break;
    case 13: rightSideExperimentDirButtonSelected(); break;
    case 14: languageChange(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CompareWizardPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CompareWizardPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool CompareWizardPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
