/****************************************************************************
** CmdPanel meta object code from reading C++ file 'CmdPanel.hxx'
**
** Created: Wed Mar 5 17:44:02 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CmdPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CmdPanel::className() const
{
    return "CmdPanel";
}

QMetaObject *CmdPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CmdPanel( "CmdPanel", &CmdPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CmdPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CmdPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CmdPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CmdPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CmdPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"menu1callback", 0, 0 };
    static const QUMethod slot_1 = {"menu2callback", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "menu1callback()", &slot_0, QMetaData::Protected },
	{ "menu2callback()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CmdPanel", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CmdPanel.setMetaObject( metaObj );
    return metaObj;
}

void* CmdPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CmdPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool CmdPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: menu1callback(); break;
    case 1: menu2callback(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CmdPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CmdPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool CmdPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
