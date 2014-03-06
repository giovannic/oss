/****************************************************************************
** CPTextEdit meta object code from reading C++ file 'CPTextEdit.hxx'
**
** Created: Wed Mar 5 11:57:41 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CPTextEdit.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CPTextEdit::className() const
{
    return "CPTextEdit";
}

QMetaObject *CPTextEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CPTextEdit( "CPTextEdit", &CPTextEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CPTextEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CPTextEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CPTextEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CPTextEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CPTextEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTextEdit::staticMetaObject();
    static const QUMethod slot_0 = {"textChanged", 0, 0 };
    static const QUMethod slot_1 = {"selectionChanged", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "yes", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"copyAvailable", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In },
	{ "pos", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"cursorPositionChanged", 2, param_slot_3 };
    static const QUMethod slot_4 = {"returnPressed", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"modificationChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In },
	{ "pos", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"clicked", 2, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In },
	{ "pos", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"doubleClicked", 2, param_slot_7 };
    static const QUMethod slot_8 = {"copy", 0, 0 };
    static const QUMethod slot_9 = {"cut", 0, 0 };
    static const QUMethod slot_10 = {"paste", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "textChanged()", &slot_0, QMetaData::Protected },
	{ "selectionChanged()", &slot_1, QMetaData::Protected },
	{ "copyAvailable(bool)", &slot_2, QMetaData::Protected },
	{ "cursorPositionChanged(int,int)", &slot_3, QMetaData::Protected },
	{ "returnPressed()", &slot_4, QMetaData::Protected },
	{ "modificationChanged(bool)", &slot_5, QMetaData::Protected },
	{ "clicked(int,int)", &slot_6, QMetaData::Protected },
	{ "doubleClicked(int,int)", &slot_7, QMetaData::Protected },
	{ "copy()", &slot_8, QMetaData::Protected },
	{ "cut()", &slot_9, QMetaData::Protected },
	{ "paste()", &slot_10, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CPTextEdit", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CPTextEdit.setMetaObject( metaObj );
    return metaObj;
}

void* CPTextEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CPTextEdit" ) )
	return this;
    return QTextEdit::qt_cast( clname );
}

bool CPTextEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: textChanged(); break;
    case 1: selectionChanged(); break;
    case 2: copyAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 3: cursorPositionChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 4: returnPressed(); break;
    case 5: modificationChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 6: clicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 7: doubleClicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 8: copy(); break;
    case 9: cut(); break;
    case 10: paste(); break;
    default:
	return QTextEdit::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CPTextEdit::qt_emit( int _id, QUObject* _o )
{
    return QTextEdit::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CPTextEdit::qt_property( int id, int f, QVariant* v)
{
    return QTextEdit::qt_property( id, f, v);
}

bool CPTextEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
