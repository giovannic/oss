/****************************************************************************
** ManageProcessesDialog meta object code from reading C++ file 'ManageProcessesDialog.hxx'
**
** Created: Wed Mar 5 11:56:45 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ManageProcessesDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ManageProcessesDialog::className() const
{
    return "ManageProcessesDialog";
}

QMetaObject *ManageProcessesDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ManageProcessesDialog( "ManageProcessesDialog", &ManageProcessesDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ManageProcessesDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ManageProcessesDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ManageProcessesDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ManageProcessesDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ManageProcessesDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"availableHostsComboBoxActivated", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"contextMenuRequested", 3, param_slot_2 };
    static const QUMethod slot_3 = {"addProcessSelected", 0, 0 };
    static const QUMethod slot_4 = {"removeEntrySelected", 0, 0 };
    static const QUMethod slot_5 = {"addProgramSelected", 0, 0 };
    static const QUMethod slot_6 = {"progressUpdate", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "availableHostsComboBoxActivated()", &slot_1, QMetaData::Public },
	{ "contextMenuRequested(QListViewItem*,const QPoint&,int)", &slot_2, QMetaData::Public },
	{ "addProcessSelected()", &slot_3, QMetaData::Private },
	{ "removeEntrySelected()", &slot_4, QMetaData::Private },
	{ "addProgramSelected()", &slot_5, QMetaData::Private },
	{ "progressUpdate()", &slot_6, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ManageProcessesDialog", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ManageProcessesDialog.setMetaObject( metaObj );
    return metaObj;
}

void* ManageProcessesDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ManageProcessesDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ManageProcessesDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: availableHostsComboBoxActivated(); break;
    case 2: contextMenuRequested((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 3: addProcessSelected(); break;
    case 4: removeEntrySelected(); break;
    case 5: addProgramSelected(); break;
    case 6: progressUpdate(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ManageProcessesDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ManageProcessesDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ManageProcessesDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
