/****************************************************************************
** ManageProcessesPanel meta object code from reading C++ file 'ManageProcessesPanel.hxx'
**
** Created: Wed Mar 5 17:45:05 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ManageProcessesPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ManageProcessesPanel::className() const
{
    return "ManageProcessesPanel";
}

QMetaObject *ManageProcessesPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ManageProcessesPanel( "ManageProcessesPanel", &ManageProcessesPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ManageProcessesPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ManageProcessesPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ManageProcessesPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ManageProcessesPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ManageProcessesPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"updateTimerCallback", 0, 0 };
    static const QUMethod slot_1 = {"openCustomizeStatsPanel", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateTimerCallback()", &slot_0, QMetaData::Public },
	{ "openCustomizeStatsPanel()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ManageProcessesPanel", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ManageProcessesPanel.setMetaObject( metaObj );
    return metaObj;
}

void* ManageProcessesPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ManageProcessesPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool ManageProcessesPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateTimerCallback(); break;
    case 1: openCustomizeStatsPanel(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ManageProcessesPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ManageProcessesPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool ManageProcessesPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
