/****************************************************************************
** SPCanvasView meta object code from reading C++ file 'SPCanvasView.hxx'
**
** Created: Wed Mar 5 17:43:57 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SPCanvasView.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SPCanvasView::className() const
{
    return "SPCanvasView";
}

QMetaObject *SPCanvasView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SPCanvasView( "SPCanvasView", &SPCanvasView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SPCanvasView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SPCanvasView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SPCanvasView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SPCanvasView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SPCanvasView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCanvasView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"SPCanvasView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SPCanvasView.setMetaObject( metaObj );
    return metaObj;
}

void* SPCanvasView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SPCanvasView" ) )
	return this;
    return QCanvasView::qt_cast( clname );
}

bool SPCanvasView::qt_invoke( int _id, QUObject* _o )
{
    return QCanvasView::qt_invoke(_id,_o);
}

bool SPCanvasView::qt_emit( int _id, QUObject* _o )
{
    return QCanvasView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SPCanvasView::qt_property( int id, int f, QVariant* v)
{
    return QCanvasView::qt_property( id, f, v);
}

bool SPCanvasView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
