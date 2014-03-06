/****************************************************************************
** AttachArgDialog meta object code from reading C++ file 'AttachArgDialog.hxx'
**
** Created: Wed Mar 5 17:43:02 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "AttachArgDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AttachArgDialog::className() const
{
    return "AttachArgDialog";
}

QMetaObject *AttachArgDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AttachArgDialog( "AttachArgDialog", &AttachArgDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AttachArgDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AttachArgDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AttachArgDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AttachArgDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AttachArgDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFileDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"accept", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "accept()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"AttachArgDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AttachArgDialog.setMetaObject( metaObj );
    return metaObj;
}

void* AttachArgDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AttachArgDialog" ) )
	return this;
    return QFileDialog::qt_cast( clname );
}

bool AttachArgDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: accept(); break;
    default:
	return QFileDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AttachArgDialog::qt_emit( int _id, QUObject* _o )
{
    return QFileDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AttachArgDialog::qt_property( int id, int f, QVariant* v)
{
    return QFileDialog::qt_property( id, f, v);
}

bool AttachArgDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
