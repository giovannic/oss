/****************************************************************************
** SourcePanelAnnotationDialog meta object code from reading C++ file 'SourcePanelAnnotationDialog.hxx'
**
** Created: Wed Mar 5 17:44:35 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SourcePanelAnnotationDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SourcePanelAnnotationDialog::className() const
{
    return "SourcePanelAnnotationDialog";
}

QMetaObject *SourcePanelAnnotationDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SourcePanelAnnotationDialog( "SourcePanelAnnotationDialog", &SourcePanelAnnotationDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SourcePanelAnnotationDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SourcePanelAnnotationDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SourcePanelAnnotationDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SourcePanelAnnotationDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SourcePanelAnnotationDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"resetPreferenceDefaults", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_1 = {"listItemSelected", 1, param_slot_1 };
    static const QUMethod slot_2 = {"buttonApplySelected", 0, 0 };
    static const QUMethod slot_3 = {"buttonOkSelected", 0, 0 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "resetPreferenceDefaults()", &slot_0, QMetaData::Public },
	{ "listItemSelected(QListViewItem*)", &slot_1, QMetaData::Public },
	{ "buttonApplySelected()", &slot_2, QMetaData::Public },
	{ "buttonOkSelected()", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"SourcePanelAnnotationDialog", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SourcePanelAnnotationDialog.setMetaObject( metaObj );
    return metaObj;
}

void* SourcePanelAnnotationDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SourcePanelAnnotationDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool SourcePanelAnnotationDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: resetPreferenceDefaults(); break;
    case 1: listItemSelected((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 2: buttonApplySelected(); break;
    case 3: buttonOkSelected(); break;
    case 4: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SourcePanelAnnotationDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SourcePanelAnnotationDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SourcePanelAnnotationDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES