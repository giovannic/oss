/****************************************************************************
** AttachProgramDialog meta object code from reading C++ file 'AttachProgramDialog.hxx'
**
** Created: Wed Mar 5 17:43:04 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "AttachProgramDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AttachProgramDialog::className() const
{
    return "AttachProgramDialog";
}

QMetaObject *AttachProgramDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AttachProgramDialog( "AttachProgramDialog", &AttachProgramDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AttachProgramDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AttachProgramDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AttachProgramDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AttachProgramDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AttachProgramDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFileDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"accept", 0, 0 };
    static const QUMethod slot_2 = {"parallelCBSelected", 0, 0 };
    static const QUMethod slot_3 = {"parallelSaveCBSelected", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "accept()", &slot_1, QMetaData::Protected },
	{ "parallelCBSelected()", &slot_2, QMetaData::Public },
	{ "parallelSaveCBSelected()", &slot_3, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"AttachProgramDialog", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AttachProgramDialog.setMetaObject( metaObj );
    return metaObj;
}

void* AttachProgramDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AttachProgramDialog" ) )
	return this;
    return QFileDialog::qt_cast( clname );
}

bool AttachProgramDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: accept(); break;
    case 2: parallelCBSelected(); break;
    case 3: parallelSaveCBSelected(); break;
    default:
	return QFileDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AttachProgramDialog::qt_emit( int _id, QUObject* _o )
{
    return QFileDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AttachProgramDialog::qt_property( int id, int f, QVariant* v)
{
    return QFileDialog::qt_property( id, f, v);
}

bool AttachProgramDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
