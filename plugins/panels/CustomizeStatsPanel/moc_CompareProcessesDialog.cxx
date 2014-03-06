/****************************************************************************
** CompareProcessesDialog meta object code from reading C++ file 'CompareProcessesDialog.hxx'
**
** Created: Wed Mar 5 17:45:15 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CompareProcessesDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CompareProcessesDialog::className() const
{
    return "CompareProcessesDialog";
}

QMetaObject *CompareProcessesDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CompareProcessesDialog( "CompareProcessesDialog", &CompareProcessesDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CompareProcessesDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareProcessesDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CompareProcessesDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CompareProcessesDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CompareProcessesDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"help", 0, 0 };
    static const QUMethod slot_1 = {"acceptProcesses", 0, 0 };
    static const QUMethod slot_2 = {"addProcesses", 0, 0 };
    static const QUMethod slot_3 = {"removeProcesses", 0, 0 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "help()", &slot_0, QMetaData::Private },
	{ "acceptProcesses()", &slot_1, QMetaData::Private },
	{ "addProcesses()", &slot_2, QMetaData::Private },
	{ "removeProcesses()", &slot_3, QMetaData::Private },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CompareProcessesDialog", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CompareProcessesDialog.setMetaObject( metaObj );
    return metaObj;
}

void* CompareProcessesDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CompareProcessesDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool CompareProcessesDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: help(); break;
    case 1: acceptProcesses(); break;
    case 2: addProcesses(); break;
    case 3: removeProcesses(); break;
    case 4: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CompareProcessesDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CompareProcessesDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool CompareProcessesDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
