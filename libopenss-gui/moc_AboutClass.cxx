/****************************************************************************
** AboutClass meta object code from reading C++ file 'AboutClass.hxx'
**
** Created: Wed Mar 5 17:43:22 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "AboutClass.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AboutClass::className() const
{
    return "AboutClass";
}

QMetaObject *AboutClass::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AboutClass( "AboutClass", &AboutClass::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AboutClass::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AboutClass", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AboutClass::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AboutClass", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AboutClass::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"accept", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "accept()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"AboutClass", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AboutClass.setMetaObject( metaObj );
    return metaObj;
}

void* AboutClass::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AboutClass" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool AboutClass::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: accept(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AboutClass::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AboutClass::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool AboutClass::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
