/****************************************************************************
** CompareExperimentsPanel meta object code from reading C++ file 'CompareExperimentsPanel.hxx'
**
** Created: Wed Mar 5 17:44:18 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CompareExperimentsPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CompareExperimentsPanel::className() const
{
    return "CompareExperimentsPanel";
}

QMetaObject *CompareExperimentsPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CompareExperimentsPanel( "CompareExperimentsPanel", &CompareExperimentsPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CompareExperimentsPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareExperimentsPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CompareExperimentsPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareExperimentsPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CompareExperimentsPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = CustomExperimentPanel::staticMetaObject();
    static const QUMethod slot_0 = {"loadLSExperimentPanel", 0, 0 };
    static const QUMethod slot_1 = {"loadRSExperimentPanel", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "loadLSExperimentPanel()", &slot_0, QMetaData::Public },
	{ "loadRSExperimentPanel()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"CompareExperimentsPanel", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CompareExperimentsPanel.setMetaObject( metaObj );
    return metaObj;
}

void* CompareExperimentsPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CompareExperimentsPanel" ) )
	return this;
    return CustomExperimentPanel::qt_cast( clname );
}

bool CompareExperimentsPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: loadLSExperimentPanel(); break;
    case 1: loadRSExperimentPanel(); break;
    default:
	return CustomExperimentPanel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CompareExperimentsPanel::qt_emit( int _id, QUObject* _o )
{
    return CustomExperimentPanel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CompareExperimentsPanel::qt_property( int id, int f, QVariant* v)
{
    return CustomExperimentPanel::qt_property( id, f, v);
}

bool CompareExperimentsPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
