/****************************************************************************
** Panel meta object code from reading C++ file 'Panel.hxx'
**
** Created: Wed Mar 5 17:42:30 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Panel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Panel::className() const
{
    return "Panel";
}

QMetaObject *Panel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Panel( "Panel", &Panel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Panel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Panel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Panel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Panel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Panel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"wakeupFromSleep", 0, 0 };
    static const QUMethod slot_1 = {"popupInfoAtLine", 0, 0 };
    static const QUMethod slot_2 = {"toggleRecycle", 0, 0 };
    static const QUMethod slot_3 = {"raisePreferencePanel", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "wakeupFromSleep()", &slot_0, QMetaData::Public },
	{ "popupInfoAtLine()", &slot_1, QMetaData::Public },
	{ "toggleRecycle()", &slot_2, QMetaData::Public },
	{ "raisePreferencePanel()", &slot_3, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Panel", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Panel.setMetaObject( metaObj );
    return metaObj;
}

void* Panel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Panel" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Panel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: wakeupFromSleep(); break;
    case 1: popupInfoAtLine(); break;
    case 2: toggleRecycle(); break;
    case 3: raisePreferencePanel(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Panel::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Panel::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Panel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
