/****************************************************************************
** ProcessControlObject meta object code from reading C++ file 'ProcessControlObject.hxx'
**
** Created: Wed Mar 5 17:42:40 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ProcessControlObject.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ProcessControlObject::className() const
{
    return "ProcessControlObject";
}

QMetaObject *ProcessControlObject::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ProcessControlObject( "ProcessControlObject", &ProcessControlObject::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ProcessControlObject::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessControlObject", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ProcessControlObject::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessControlObject", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ProcessControlObject::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"runButtonSlot", 0, 0 };
    static const QUMethod slot_1 = {"runButtonPressedSlot", 0, 0 };
    static const QUMethod slot_2 = {"continueButtonSlot", 0, 0 };
    static const QUMethod slot_3 = {"continueButtonPressedSlot", 0, 0 };
    static const QUMethod slot_4 = {"pauseButtonSlot", 0, 0 };
    static const QUMethod slot_5 = {"updateButtonSlot", 0, 0 };
    static const QUMethod slot_6 = {"interruptButtonSlot", 0, 0 };
    static const QUMethod slot_7 = {"terminateButtonSlot", 0, 0 };
    static const QUMethod slot_8 = {"languageChange", 0, 0 };
    static const QUMethod slot_9 = {"buttonTimerSlot", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "runButtonSlot()", &slot_0, QMetaData::Public },
	{ "runButtonPressedSlot()", &slot_1, QMetaData::Public },
	{ "continueButtonSlot()", &slot_2, QMetaData::Public },
	{ "continueButtonPressedSlot()", &slot_3, QMetaData::Public },
	{ "pauseButtonSlot()", &slot_4, QMetaData::Public },
	{ "updateButtonSlot()", &slot_5, QMetaData::Public },
	{ "interruptButtonSlot()", &slot_6, QMetaData::Public },
	{ "terminateButtonSlot()", &slot_7, QMetaData::Public },
	{ "languageChange()", &slot_8, QMetaData::Protected },
	{ "buttonTimerSlot()", &slot_9, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ProcessControlObject", parentObject,
	slot_tbl, 10,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ProcessControlObject.setMetaObject( metaObj );
    return metaObj;
}

void* ProcessControlObject::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ProcessControlObject" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool ProcessControlObject::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: runButtonSlot(); break;
    case 1: runButtonPressedSlot(); break;
    case 2: continueButtonSlot(); break;
    case 3: continueButtonPressedSlot(); break;
    case 4: pauseButtonSlot(); break;
    case 5: updateButtonSlot(); break;
    case 6: interruptButtonSlot(); break;
    case 7: terminateButtonSlot(); break;
    case 8: languageChange(); break;
    case 9: buttonTimerSlot(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ProcessControlObject::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ProcessControlObject::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ProcessControlObject::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
