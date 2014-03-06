/****************************************************************************
** ChooseExperimentDialog meta object code from reading C++ file 'ChooseExperimentDialog.hxx'
**
** Created: Wed Mar 5 17:44:28 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ChooseExperimentDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ChooseExperimentDialog::className() const
{
    return "ChooseExperimentDialog";
}

QMetaObject *ChooseExperimentDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ChooseExperimentDialog( "ChooseExperimentDialog", &ChooseExperimentDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ChooseExperimentDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ChooseExperimentDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ChooseExperimentDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ChooseExperimentDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ChooseExperimentDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"buttonOkSelected", 0, 0 };
    static const QUMethod slot_1 = {"buttonCancelSelected", 0, 0 };
    static const QUMethod slot_2 = {"ExpChoiceCheckBox1Selected", 0, 0 };
    static const QUMethod slot_3 = {"ExpChoiceCheckBox2Selected", 0, 0 };
    static const QUMethod slot_4 = {"ExpChoiceCheckBox3Selected", 0, 0 };
    static const QUMethod slot_5 = {"ExpChoiceCheckBox4Selected", 0, 0 };
    static const QUMethod slot_6 = {"ExpChoiceCheckBox5Selected", 0, 0 };
    static const QUMethod slot_7 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "buttonOkSelected()", &slot_0, QMetaData::Public },
	{ "buttonCancelSelected()", &slot_1, QMetaData::Public },
	{ "ExpChoiceCheckBox1Selected()", &slot_2, QMetaData::Public },
	{ "ExpChoiceCheckBox2Selected()", &slot_3, QMetaData::Public },
	{ "ExpChoiceCheckBox3Selected()", &slot_4, QMetaData::Public },
	{ "ExpChoiceCheckBox4Selected()", &slot_5, QMetaData::Public },
	{ "ExpChoiceCheckBox5Selected()", &slot_6, QMetaData::Public },
	{ "languageChange()", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ChooseExperimentDialog", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ChooseExperimentDialog.setMetaObject( metaObj );
    return metaObj;
}

void* ChooseExperimentDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ChooseExperimentDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ChooseExperimentDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: buttonOkSelected(); break;
    case 1: buttonCancelSelected(); break;
    case 2: ExpChoiceCheckBox1Selected(); break;
    case 3: ExpChoiceCheckBox2Selected(); break;
    case 4: ExpChoiceCheckBox3Selected(); break;
    case 5: ExpChoiceCheckBox4Selected(); break;
    case 6: ExpChoiceCheckBox5Selected(); break;
    case 7: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ChooseExperimentDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ChooseExperimentDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ChooseExperimentDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
