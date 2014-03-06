/****************************************************************************
** ColumnSet meta object code from reading C++ file 'ColumnSet.hxx'
**
** Created: Wed Mar 5 17:45:11 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ColumnSet.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ColumnSet::className() const
{
    return "ColumnSet";
}

QMetaObject *ColumnSet::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ColumnSet( "ColumnSet", &ColumnSet::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ColumnSet::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ColumnSet", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ColumnSet::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ColumnSet", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ColumnSet::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "path", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"changeExperiment", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "path", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"changeCollector", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "changeExperiment(const QString&)", &slot_0, QMetaData::Public },
	{ "changeCollector(const QString&)", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ColumnSet", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ColumnSet.setMetaObject( metaObj );
    return metaObj;
}

void* ColumnSet::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ColumnSet" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool ColumnSet::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: changeExperiment((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: changeCollector((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ColumnSet::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ColumnSet::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ColumnSet::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
