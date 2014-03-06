/****************************************************************************
** SelectTimeSegmentDialog meta object code from reading C++ file 'SelectTimeSegmentDialog.hxx'
**
** Created: Wed Mar 5 11:56:47 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SelectTimeSegmentDialog.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SelectTimeSegmentDialog::className() const
{
    return "SelectTimeSegmentDialog";
}

QMetaObject *SelectTimeSegmentDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SelectTimeSegmentDialog( "SelectTimeSegmentDialog", &SelectTimeSegmentDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SelectTimeSegmentDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectTimeSegmentDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SelectTimeSegmentDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SelectTimeSegmentDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SelectTimeSegmentDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"ok_accept", 0, 0 };
    static const QUMethod slot_2 = {"cancel_reject", 0, 0 };
    static const QUMethod slot_3 = {"buttonDefaultsSelected", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"startSliderMoved", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"endSliderMoved", 1, param_slot_5 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "ok_accept()", &slot_1, QMetaData::Public },
	{ "cancel_reject()", &slot_2, QMetaData::Public },
	{ "buttonDefaultsSelected()", &slot_3, QMetaData::Public },
	{ "startSliderMoved(int)", &slot_4, QMetaData::Public },
	{ "endSliderMoved(int)", &slot_5, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SelectTimeSegmentDialog", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SelectTimeSegmentDialog.setMetaObject( metaObj );
    return metaObj;
}

void* SelectTimeSegmentDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SelectTimeSegmentDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool SelectTimeSegmentDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: ok_accept(); break;
    case 2: cancel_reject(); break;
    case 3: buttonDefaultsSelected(); break;
    case 4: startSliderMoved((int)static_QUType_int.get(_o+1)); break;
    case 5: endSliderMoved((int)static_QUType_int.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SelectTimeSegmentDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SelectTimeSegmentDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SelectTimeSegmentDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
