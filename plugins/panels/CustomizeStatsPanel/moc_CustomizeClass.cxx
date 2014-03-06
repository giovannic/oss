/****************************************************************************
** CustomizeClass meta object code from reading C++ file 'CustomizeClass.hxx'
**
** Created: Wed Mar 5 17:45:23 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CustomizeClass.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CustomizeClass::className() const
{
    return "CustomizeClass";
}

QMetaObject *CustomizeClass::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomizeClass( "CustomizeClass", &CustomizeClass::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomizeClass::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomizeClass", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomizeClass::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomizeClass", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomizeClass::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"compareByFunction", 0, 0 };
    static const QUMethod slot_2 = {"compareByStatement", 0, 0 };
    static const QUMethod slot_3 = {"compareByLinkedObject", 0, 0 };
    static const QUMethod slot_4 = {"updatePanel", 0, 0 };
    static const QUMethod slot_5 = {"addNewCSet", 0, 0 };
    static const QUMethod slot_6 = {"addNewColumn", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_ptr, "CompareSet", QUParameter::In }
    };
    static const QUMethod slot_7 = {"addNewColumn", 1, param_slot_7 };
    static const QUMethod slot_8 = {"addProcessesSelected", 0, 0 };
    static const QUMethod slot_9 = {"removeUserPSet", 0, 0 };
    static const QUMethod slot_10 = {"removeCSet", 0, 0 };
    static const QUMethod slot_11 = {"removeRaisedTab", 0, 0 };
    static const QUMethod slot_12 = {"focusOnCSetSelected", 0, 0 };
    static const QUMethod slot_13 = {"loadAdditionalExperimentSelected", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "compareByFunction()", &slot_1, QMetaData::Public },
	{ "compareByStatement()", &slot_2, QMetaData::Public },
	{ "compareByLinkedObject()", &slot_3, QMetaData::Public },
	{ "updatePanel()", &slot_4, QMetaData::Public },
	{ "addNewCSet()", &slot_5, QMetaData::Public },
	{ "addNewColumn()", &slot_6, QMetaData::Public },
	{ "addNewColumn(CompareSet*)", &slot_7, QMetaData::Public },
	{ "addProcessesSelected()", &slot_8, QMetaData::Public },
	{ "removeUserPSet()", &slot_9, QMetaData::Public },
	{ "removeCSet()", &slot_10, QMetaData::Public },
	{ "removeRaisedTab()", &slot_11, QMetaData::Public },
	{ "focusOnCSetSelected()", &slot_12, QMetaData::Public },
	{ "loadAdditionalExperimentSelected()", &slot_13, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"CustomizeClass", parentObject,
	slot_tbl, 14,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomizeClass.setMetaObject( metaObj );
    return metaObj;
}

void* CustomizeClass::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomizeClass" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool CustomizeClass::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: compareByFunction(); break;
    case 2: compareByStatement(); break;
    case 3: compareByLinkedObject(); break;
    case 4: updatePanel(); break;
    case 5: addNewCSet(); break;
    case 6: addNewColumn(); break;
    case 7: addNewColumn((CompareSet*)static_QUType_ptr.get(_o+1)); break;
    case 8: addProcessesSelected(); break;
    case 9: removeUserPSet(); break;
    case 10: removeCSet(); break;
    case 11: removeRaisedTab(); break;
    case 12: focusOnCSetSelected(); break;
    case 13: loadAdditionalExperimentSelected(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CustomizeClass::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomizeClass::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool CustomizeClass::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
