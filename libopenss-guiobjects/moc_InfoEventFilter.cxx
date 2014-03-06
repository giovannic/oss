/****************************************************************************
** InfoEventFilter meta object code from reading C++ file 'InfoEventFilter.hxx'
**
** Created: Wed Mar 5 17:42:41 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "InfoEventFilter.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *InfoEventFilter::className() const
{
    return "InfoEventFilter";
}

QMetaObject *InfoEventFilter::metaObj = 0;
static QMetaObjectCleanUp cleanUp_InfoEventFilter( "InfoEventFilter", &InfoEventFilter::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString InfoEventFilter::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InfoEventFilter", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString InfoEventFilter::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InfoEventFilter", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* InfoEventFilter::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"wakeupFromSleep", 0, 0 };
    static const QUMethod slot_1 = {"popupInfo", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "wakeupFromSleep()", &slot_0, QMetaData::Public },
	{ "popupInfo()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"InfoEventFilter", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_InfoEventFilter.setMetaObject( metaObj );
    return metaObj;
}

void* InfoEventFilter::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "InfoEventFilter" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool InfoEventFilter::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: wakeupFromSleep(); break;
    case 1: popupInfo(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool InfoEventFilter::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool InfoEventFilter::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool InfoEventFilter::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
