/****************************************************************************
** SourcePanel meta object code from reading C++ file 'SourcePanel.hxx'
**
** Created: Wed Mar 5 17:43:54 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SourcePanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SourcePanel::className() const
{
    return "SourcePanel";
}

QMetaObject *SourcePanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SourcePanel( "SourcePanel", &SourcePanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SourcePanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SourcePanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SourcePanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SourcePanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SourcePanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In },
	{ "offset", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"clicked", 2, param_slot_0 };
    static const QUMethod slot_1 = {"valueChanged", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"valueChanged", 1, param_slot_2 };
    static const QUMethod slot_3 = {"chooseFile", 0, 0 };
    static const QUMethod slot_4 = {"goToLine", 0, 0 };
    static const QUMethod slot_5 = {"goToFunction", 0, 0 };
    static const QUMethod slot_6 = {"showLineNumbers", 0, 0 };
    static const QUMethod slot_7 = {"showCanvasForm", 0, 0 };
    static const QUMethod slot_8 = {"findString", 0, 0 };
    static const QUMethod slot_9 = {"details", 0, 0 };
    static const QUMethod slot_10 = {"whoCallsMe", 0, 0 };
    static const QUMethod slot_11 = {"whoDoICall", 0, 0 };
    static const QUMethod slot_12 = {"saveAs", 0, 0 };
    static const QUMethod slot_13 = {"zoomIn", 0, 0 };
    static const QUMethod slot_14 = {"zoomOut", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "clicked(int,int)", &slot_0, QMetaData::Public },
	{ "valueChanged()", &slot_1, QMetaData::Public },
	{ "valueChanged(int)", &slot_2, QMetaData::Public },
	{ "chooseFile()", &slot_3, QMetaData::Public },
	{ "goToLine()", &slot_4, QMetaData::Public },
	{ "goToFunction()", &slot_5, QMetaData::Public },
	{ "showLineNumbers()", &slot_6, QMetaData::Public },
	{ "showCanvasForm()", &slot_7, QMetaData::Public },
	{ "findString()", &slot_8, QMetaData::Public },
	{ "details()", &slot_9, QMetaData::Public },
	{ "whoCallsMe()", &slot_10, QMetaData::Public },
	{ "whoDoICall()", &slot_11, QMetaData::Public },
	{ "saveAs()", &slot_12, QMetaData::Public },
	{ "zoomIn()", &slot_13, QMetaData::Public },
	{ "zoomOut()", &slot_14, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SourcePanel", parentObject,
	slot_tbl, 15,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SourcePanel.setMetaObject( metaObj );
    return metaObj;
}

void* SourcePanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SourcePanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool SourcePanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: clicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: valueChanged(); break;
    case 2: valueChanged((int)static_QUType_int.get(_o+1)); break;
    case 3: chooseFile(); break;
    case 4: goToLine(); break;
    case 5: goToFunction(); break;
    case 6: showLineNumbers(); break;
    case 7: showCanvasForm(); break;
    case 8: findString(); break;
    case 9: details(); break;
    case 10: whoCallsMe(); break;
    case 11: whoDoICall(); break;
    case 12: saveAs(); break;
    case 13: zoomIn(); break;
    case 14: zoomOut(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SourcePanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SourcePanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool SourcePanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
