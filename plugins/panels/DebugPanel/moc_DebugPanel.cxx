/****************************************************************************
** DebugPanel meta object code from reading C++ file 'DebugPanel.hxx'
**
** Created: Wed Mar 5 17:45:33 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "DebugPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DebugPanel::className() const
{
    return "DebugPanel";
}

QMetaObject *DebugPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DebugPanel( "DebugPanel", &DebugPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DebugPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DebugPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DebugPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DebugPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DebugPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"debugAllOnButtonSelected", 0, 0 };
    static const QUMethod slot_1 = {"debugAllOffButtonSelected", 0, 0 };
    static const QUMethod slot_2 = {"debugGUIOnButtonSelected", 0, 0 };
    static const QUMethod slot_3 = {"debugGUIOffButtonSelected", 0, 0 };
    static const QUMethod slot_4 = {"debugCLIOnButtonSelected", 0, 0 };
    static const QUMethod slot_5 = {"debugCLIOffButtonSelected", 0, 0 };
    static const QUMethod slot_6 = {"debugFrameWorkOnButtonSelected", 0, 0 };
    static const QUMethod slot_7 = {"debugFrameWorkOffButtonSelected", 0, 0 };
    static const QUMethod slot_8 = {"debugBackendOnButtonSelected", 0, 0 };
    static const QUMethod slot_9 = {"debugBackendOffButtonSelected", 0, 0 };
    static const QUMethod slot_10 = {"debugPanelContainerTreeButtonSelected", 0, 0 };
    static const QUMethod slot_11 = {"debugAllWidgetsButtonSelected", 0, 0 };
    static const QUMethod slot_12 = {"applyButtonSelected", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "debugAllOnButtonSelected()", &slot_0, QMetaData::Public },
	{ "debugAllOffButtonSelected()", &slot_1, QMetaData::Public },
	{ "debugGUIOnButtonSelected()", &slot_2, QMetaData::Public },
	{ "debugGUIOffButtonSelected()", &slot_3, QMetaData::Public },
	{ "debugCLIOnButtonSelected()", &slot_4, QMetaData::Public },
	{ "debugCLIOffButtonSelected()", &slot_5, QMetaData::Public },
	{ "debugFrameWorkOnButtonSelected()", &slot_6, QMetaData::Public },
	{ "debugFrameWorkOffButtonSelected()", &slot_7, QMetaData::Public },
	{ "debugBackendOnButtonSelected()", &slot_8, QMetaData::Public },
	{ "debugBackendOffButtonSelected()", &slot_9, QMetaData::Public },
	{ "debugPanelContainerTreeButtonSelected()", &slot_10, QMetaData::Public },
	{ "debugAllWidgetsButtonSelected()", &slot_11, QMetaData::Public },
	{ "applyButtonSelected()", &slot_12, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"DebugPanel", parentObject,
	slot_tbl, 13,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DebugPanel.setMetaObject( metaObj );
    return metaObj;
}

void* DebugPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DebugPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool DebugPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: debugAllOnButtonSelected(); break;
    case 1: debugAllOffButtonSelected(); break;
    case 2: debugGUIOnButtonSelected(); break;
    case 3: debugGUIOffButtonSelected(); break;
    case 4: debugCLIOnButtonSelected(); break;
    case 5: debugCLIOffButtonSelected(); break;
    case 6: debugFrameWorkOnButtonSelected(); break;
    case 7: debugFrameWorkOffButtonSelected(); break;
    case 8: debugBackendOnButtonSelected(); break;
    case 9: debugBackendOffButtonSelected(); break;
    case 10: debugPanelContainerTreeButtonSelected(); break;
    case 11: debugAllWidgetsButtonSelected(); break;
    case 12: applyButtonSelected(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DebugPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DebugPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool DebugPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
