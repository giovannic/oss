/****************************************************************************
** IntroWizardPanel meta object code from reading C++ file 'IntroWizardPanel.hxx'
**
** Created: Wed Mar 5 17:47:45 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "IntroWizardPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IntroWizardPanel::className() const
{
    return "IntroWizardPanel";
}

QMetaObject *IntroWizardPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IntroWizardPanel( "IntroWizardPanel", &IntroWizardPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IntroWizardPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IntroWizardPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IntroWizardPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IntroWizardPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IntroWizardPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"wizardModeSelected", 0, 0 };
    static const QUMethod slot_1 = {"vpage0wizardModeSelected", 0, 0 };
    static const QUMethod slot_2 = {"vpage1wizardModeSelected", 0, 0 };
    static const QUMethod slot_3 = {"epage0wizardModeSelected", 0, 0 };
    static const QUMethod slot_4 = {"epage1wizardModeSelected", 0, 0 };
    static const QUMethod slot_5 = {"vORepage0NextButtonSelected", 0, 0 };
    static const QUMethod slot_6 = {"vORepage1NextButtonSelected", 0, 0 };
    static const QUMethod slot_7 = {"vpage1BackButtonSelected", 0, 0 };
    static const QUMethod slot_8 = {"epage1BackButtonSelected", 0, 0 };
    static const QUMethod slot_9 = {"printRaisedPanel", 0, 0 };
    static const QUMethod slot_10 = {"vpage0SavedExpDataRBChanged", 0, 0 };
    static const QUMethod slot_11 = {"vpage0SavedExpCompareDataRBChanged", 0, 0 };
    static const QUMethod slot_12 = {"vpage0CreateLoadExpDataRBChanged", 0, 0 };
    static const QUMethod slot_13 = {"vpage0CreateAttachExpDataRBChanged", 0, 0 };
    static const QUMethod slot_14 = {"epage0SavedExpDataRBChanged", 0, 0 };
    static const QUMethod slot_15 = {"epage0SavedExpCompareDataRBChanged", 0, 0 };
    static const QUMethod slot_16 = {"epage0CreateLoadExpDataRBChanged", 0, 0 };
    static const QUMethod slot_17 = {"vpage1pcSampleRBChanged", 0, 0 };
    static const QUMethod slot_18 = {"vpage1UserTimeRBChanged", 0, 0 };
    static const QUMethod slot_19 = {"vpage1HardwareCounterRBChanged", 0, 0 };
    static const QUMethod slot_20 = {"vpage1HardwareCounterSampRBChanged", 0, 0 };
    static const QUMethod slot_21 = {"vpage1FloatingPointRBChanged", 0, 0 };
    static const QUMethod slot_22 = {"vpage1InputOutputRBChanged", 0, 0 };
    static const QUMethod slot_23 = {"vpage1MPIRBChanged", 0, 0 };
    static const QUMethod slot_24 = {"page1LoadExperimentCheckBoxChanged", 0, 0 };
    static const QUMethod slot_25 = {"page1CompareExperimentsCheckBoxChanged", 0, 0 };
    static const QUMethod slot_26 = {"epage1pcSampleRBChanged", 0, 0 };
    static const QUMethod slot_27 = {"epage1UserTimeRBChanged", 0, 0 };
    static const QUMethod slot_28 = {"epage1HardwareCounterRBChanged", 0, 0 };
    static const QUMethod slot_29 = {"epage1HardwareCounterSampRBChanged", 0, 0 };
    static const QUMethod slot_30 = {"epage1FloatingPointRBChanged", 0, 0 };
    static const QUMethod slot_31 = {"epage1InputOutputRBChanged", 0, 0 };
    static const QUMethod slot_32 = {"epage1MPIRBChanged", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "wizardModeSelected()", &slot_0, QMetaData::Public },
	{ "vpage0wizardModeSelected()", &slot_1, QMetaData::Public },
	{ "vpage1wizardModeSelected()", &slot_2, QMetaData::Public },
	{ "epage0wizardModeSelected()", &slot_3, QMetaData::Public },
	{ "epage1wizardModeSelected()", &slot_4, QMetaData::Public },
	{ "vORepage0NextButtonSelected()", &slot_5, QMetaData::Public },
	{ "vORepage1NextButtonSelected()", &slot_6, QMetaData::Public },
	{ "vpage1BackButtonSelected()", &slot_7, QMetaData::Public },
	{ "epage1BackButtonSelected()", &slot_8, QMetaData::Public },
	{ "printRaisedPanel()", &slot_9, QMetaData::Public },
	{ "vpage0SavedExpDataRBChanged()", &slot_10, QMetaData::Public },
	{ "vpage0SavedExpCompareDataRBChanged()", &slot_11, QMetaData::Public },
	{ "vpage0CreateLoadExpDataRBChanged()", &slot_12, QMetaData::Public },
	{ "vpage0CreateAttachExpDataRBChanged()", &slot_13, QMetaData::Public },
	{ "epage0SavedExpDataRBChanged()", &slot_14, QMetaData::Public },
	{ "epage0SavedExpCompareDataRBChanged()", &slot_15, QMetaData::Public },
	{ "epage0CreateLoadExpDataRBChanged()", &slot_16, QMetaData::Public },
	{ "vpage1pcSampleRBChanged()", &slot_17, QMetaData::Public },
	{ "vpage1UserTimeRBChanged()", &slot_18, QMetaData::Public },
	{ "vpage1HardwareCounterRBChanged()", &slot_19, QMetaData::Public },
	{ "vpage1HardwareCounterSampRBChanged()", &slot_20, QMetaData::Public },
	{ "vpage1FloatingPointRBChanged()", &slot_21, QMetaData::Public },
	{ "vpage1InputOutputRBChanged()", &slot_22, QMetaData::Public },
	{ "vpage1MPIRBChanged()", &slot_23, QMetaData::Public },
	{ "page1LoadExperimentCheckBoxChanged()", &slot_24, QMetaData::Public },
	{ "page1CompareExperimentsCheckBoxChanged()", &slot_25, QMetaData::Public },
	{ "epage1pcSampleRBChanged()", &slot_26, QMetaData::Public },
	{ "epage1UserTimeRBChanged()", &slot_27, QMetaData::Public },
	{ "epage1HardwareCounterRBChanged()", &slot_28, QMetaData::Public },
	{ "epage1HardwareCounterSampRBChanged()", &slot_29, QMetaData::Public },
	{ "epage1FloatingPointRBChanged()", &slot_30, QMetaData::Public },
	{ "epage1InputOutputRBChanged()", &slot_31, QMetaData::Public },
	{ "epage1MPIRBChanged()", &slot_32, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"IntroWizardPanel", parentObject,
	slot_tbl, 33,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IntroWizardPanel.setMetaObject( metaObj );
    return metaObj;
}

void* IntroWizardPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IntroWizardPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool IntroWizardPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: wizardModeSelected(); break;
    case 1: vpage0wizardModeSelected(); break;
    case 2: vpage1wizardModeSelected(); break;
    case 3: epage0wizardModeSelected(); break;
    case 4: epage1wizardModeSelected(); break;
    case 5: vORepage0NextButtonSelected(); break;
    case 6: vORepage1NextButtonSelected(); break;
    case 7: vpage1BackButtonSelected(); break;
    case 8: epage1BackButtonSelected(); break;
    case 9: printRaisedPanel(); break;
    case 10: vpage0SavedExpDataRBChanged(); break;
    case 11: vpage0SavedExpCompareDataRBChanged(); break;
    case 12: vpage0CreateLoadExpDataRBChanged(); break;
    case 13: vpage0CreateAttachExpDataRBChanged(); break;
    case 14: epage0SavedExpDataRBChanged(); break;
    case 15: epage0SavedExpCompareDataRBChanged(); break;
    case 16: epage0CreateLoadExpDataRBChanged(); break;
    case 17: vpage1pcSampleRBChanged(); break;
    case 18: vpage1UserTimeRBChanged(); break;
    case 19: vpage1HardwareCounterRBChanged(); break;
    case 20: vpage1HardwareCounterSampRBChanged(); break;
    case 21: vpage1FloatingPointRBChanged(); break;
    case 22: vpage1InputOutputRBChanged(); break;
    case 23: vpage1MPIRBChanged(); break;
    case 24: page1LoadExperimentCheckBoxChanged(); break;
    case 25: page1CompareExperimentsCheckBoxChanged(); break;
    case 26: epage1pcSampleRBChanged(); break;
    case 27: epage1UserTimeRBChanged(); break;
    case 28: epage1HardwareCounterRBChanged(); break;
    case 29: epage1HardwareCounterSampRBChanged(); break;
    case 30: epage1FloatingPointRBChanged(); break;
    case 31: epage1InputOutputRBChanged(); break;
    case 32: epage1MPIRBChanged(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool IntroWizardPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool IntroWizardPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool IntroWizardPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
