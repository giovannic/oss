/****************************************************************************
** CustomizeStatsPanel meta object code from reading C++ file 'CustomizeStatsPanel.hxx'
**
** Created: Wed Mar 5 17:45:26 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CustomizeStatsPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CustomizeStatsPanel::className() const
{
    return "CustomizeStatsPanel";
}

QMetaObject *CustomizeStatsPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomizeStatsPanel( "CustomizeStatsPanel", &CustomizeStatsPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomizeStatsPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomizeStatsPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomizeStatsPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomizeStatsPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomizeStatsPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"CustomizeStatsPanel", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomizeStatsPanel.setMetaObject( metaObj );
    return metaObj;
}

void* CustomizeStatsPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomizeStatsPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool CustomizeStatsPanel::qt_invoke( int _id, QUObject* _o )
{
    return Panel::qt_invoke(_id,_o);
}

bool CustomizeStatsPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomizeStatsPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool CustomizeStatsPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
