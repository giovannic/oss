/****************************************************************************
** AttachProcessDialog meta object code from reading C++ file 'AttachProcessDialog.hxx'
**
** Created: Wed Mar 5 17:43:03 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "AttachProcessDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AttachProcessDialog::className() const
{
    return "AttachProcessDialog";
}

QMetaObject *AttachProcessDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AttachProcessDialog( "AttachProcessDialog", &AttachProcessDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AttachProcessDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AttachProcessDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AttachProcessDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AttachProcessDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AttachProcessDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"ok_accept", 0, 0 };
    static const QUMethod slot_1 = {"languageChange", 0, 0 };
    static const QUMethod slot_2 = {"attachHostComboBoxActivated", 0, 0 };
    static const QUMethod slot_3 = {"buttonFilterSelected", 0, 0 };
    static const QUMethod slot_4 = {"inclusionRBSelected", 0, 0 };
    static const QUMethod slot_5 = {"exclusionRBSelected", 0, 0 };
    static const QUMethod slot_6 = {"addSelected", 0, 0 };
    static const QUMethod slot_7 = {"removeSelected", 0, 0 };
    static const QUMethod slot_8 = {"saveSelected", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "ok_accept()", &slot_0, QMetaData::Private },
	{ "languageChange()", &slot_1, QMetaData::Protected },
	{ "attachHostComboBoxActivated()", &slot_2, QMetaData::Public },
	{ "buttonFilterSelected()", &slot_3, QMetaData::Public },
	{ "inclusionRBSelected()", &slot_4, QMetaData::Public },
	{ "exclusionRBSelected()", &slot_5, QMetaData::Public },
	{ "addSelected()", &slot_6, QMetaData::Public },
	{ "removeSelected()", &slot_7, QMetaData::Public },
	{ "saveSelected()", &slot_8, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"AttachProcessDialog", parentObject,
	slot_tbl, 9,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AttachProcessDialog.setMetaObject( metaObj );
    return metaObj;
}

void* AttachProcessDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AttachProcessDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool AttachProcessDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: ok_accept(); break;
    case 1: languageChange(); break;
    case 2: attachHostComboBoxActivated(); break;
    case 3: buttonFilterSelected(); break;
    case 4: inclusionRBSelected(); break;
    case 5: exclusionRBSelected(); break;
    case 6: addSelected(); break;
    case 7: removeSelected(); break;
    case 8: saveSelected(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AttachProcessDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AttachProcessDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool AttachProcessDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
