/****************************************************************************
** TabWidget meta object code from reading C++ file 'TabWidget.hxx'
**
** Created: Wed Mar 5 17:42:28 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "TabWidget.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TabWidget::className() const
{
    return "TabWidget";
}

QMetaObject *TabWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TabWidget( "TabWidget", &TabWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TabWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TabWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TabWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TabWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TabWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTabWidget::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"deletePanelButtonSelected", 0, 0 };
    static const QUMethod slot_2 = {"splitHorizontal", 0, 0 };
    static const QUMethod slot_3 = {"splitVertical", 0, 0 };
    static const QUMethod slot_4 = {"panelContainerMenu", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "deletePanelButtonSelected()", &slot_1, QMetaData::Private },
	{ "splitHorizontal()", &slot_2, QMetaData::Private },
	{ "splitVertical()", &slot_3, QMetaData::Private },
	{ "panelContainerMenu()", &slot_4, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"TabWidget", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TabWidget.setMetaObject( metaObj );
    return metaObj;
}

void* TabWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TabWidget" ) )
	return this;
    return QTabWidget::qt_cast( clname );
}

bool TabWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: deletePanelButtonSelected(); break;
    case 2: splitHorizontal(); break;
    case 3: splitVertical(); break;
    case 4: panelContainerMenu(); break;
    default:
	return QTabWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TabWidget::qt_emit( int _id, QUObject* _o )
{
    return QTabWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TabWidget::qt_property( int id, int f, QVariant* v)
{
    return QTabWidget::qt_property( id, f, v);
}

bool TabWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
