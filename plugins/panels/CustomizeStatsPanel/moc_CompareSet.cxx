/****************************************************************************
** CompareSet meta object code from reading C++ file 'CompareSet.hxx'
**
** Created: Wed Mar 5 17:45:20 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CompareSet.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CompareSet::className() const
{
    return "CompareSet";
}

QMetaObject *CompareSet::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CompareSet( "CompareSet", &CompareSet::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CompareSet::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareSet", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CompareSet::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareSet", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CompareSet::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_0 = {"currentChanged", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "currentChanged(QWidget*)", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"CompareSet", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CompareSet.setMetaObject( metaObj );
    return metaObj;
}

void* CompareSet::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CompareSet" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool CompareSet::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: currentChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CompareSet::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CompareSet::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool CompareSet::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
