/****************************************************************************
** SPCheckBox meta object code from reading C++ file 'SPCheckBox.hxx'
**
** Created: Wed Mar 5 17:44:23 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SPCheckBox.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SPCheckBox::className() const
{
    return "SPCheckBox";
}

QMetaObject *SPCheckBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SPCheckBox( "SPCheckBox", &SPCheckBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SPCheckBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SPCheckBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SPCheckBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SPCheckBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SPCheckBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCheckBox::staticMetaObject();
    static const QUMethod slot_0 = {"toggleCallback", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "toggleCallback()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SPCheckBox", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SPCheckBox.setMetaObject( metaObj );
    return metaObj;
}

void* SPCheckBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SPCheckBox" ) )
	return this;
    return QCheckBox::qt_cast( clname );
}

bool SPCheckBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: toggleCallback(); break;
    default:
	return QCheckBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SPCheckBox::qt_emit( int _id, QUObject* _o )
{
    return QCheckBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SPCheckBox::qt_property( int id, int f, QVariant* v)
{
    return QCheckBox::qt_property( id, f, v);
}

bool SPCheckBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
