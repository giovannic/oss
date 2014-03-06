/****************************************************************************
** SPChartForm meta object code from reading C++ file 'SPChartForm.hxx'
**
** Created: Wed Mar 5 17:44:22 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SPChartForm.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SPChartForm::className() const
{
    return "SPChartForm";
}

QMetaObject *SPChartForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SPChartForm( "SPChartForm", &SPChartForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SPChartForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SPChartForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SPChartForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SPChartForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SPChartForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ChartForm::staticMetaObject();
    static const QUMethod slot_0 = {"goToLine", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "goToLine()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SPChartForm", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SPChartForm.setMetaObject( metaObj );
    return metaObj;
}

void* SPChartForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SPChartForm" ) )
	return this;
    return ChartForm::qt_cast( clname );
}

bool SPChartForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: goToLine(); break;
    default:
	return ChartForm::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SPChartForm::qt_emit( int _id, QUObject* _o )
{
    return ChartForm::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SPChartForm::qt_property( int id, int f, QVariant* v)
{
    return ChartForm::qt_property( id, f, v);
}

bool SPChartForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
