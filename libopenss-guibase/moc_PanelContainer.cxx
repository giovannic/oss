/****************************************************************************
** PanelContainer meta object code from reading C++ file 'PanelContainer.hxx'
**
** Created: Wed Mar 5 17:42:30 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "PanelContainer.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PanelContainer::className() const
{
    return "PanelContainer";
}

QMetaObject *PanelContainer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PanelContainer( "PanelContainer", &PanelContainer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PanelContainer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PanelContainer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PanelContainer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PanelContainer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PanelContainer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"splitHorizontal", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "leftSidePercent", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"splitHorizontal", 1, param_slot_1 };
    static const QUMethod slot_2 = {"splitVertical", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "leftSidePercent", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"splitVertical", 1, param_slot_3 };
    static const QUMethod slot_4 = {"dragRaisedPanel", 0, 0 };
    static const QUMethod slot_5 = {"removeLastPanelContainer", 0, 0 };
    static const QUMethod slot_6 = {"setThenRemoveLastPanelContainer", 0, 0 };
    static const QUMethod slot_7 = {"removePanelContainer", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "pc", &static_QUType_ptr, "PanelContainer", QUParameter::In }
    };
    static const QUMethod slot_8 = {"removePanelContainer", 1, param_slot_8 };
    static const QUMethod slot_9 = {"removeRaisedPanel", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ "pc", &static_QUType_ptr, "PanelContainer", QUParameter::In }
    };
    static const QUMethod slot_10 = {"removeRaisedPanel", 1, param_slot_10 };
    static const QUMethod slot_11 = {"closeAllExternalPanelContainers", 0, 0 };
    static const QUMethod slot_12 = {"closeWindow", 0, 0 };
    static const QUParameter param_slot_13[] = {
	{ "pc", &static_QUType_ptr, "PanelContainer", QUParameter::In }
    };
    static const QUMethod slot_13 = {"closeWindow", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ "orientation", &static_QUType_ptr, "Orientation", QUParameter::In }
    };
    static const QUMethod slot_14 = {"split", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "orientation", &static_QUType_ptr, "Orientation", QUParameter::In },
	{ "showRight", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"split", 2, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "orientation", &static_QUType_ptr, "Orientation", QUParameter::In },
	{ "showRight", &static_QUType_bool, 0, QUParameter::In },
	{ "leftSidePercent", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"split", 3, param_slot_16 };
    static const QUMethod slot_17 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "splitHorizontal()", &slot_0, QMetaData::Public },
	{ "splitHorizontal(int)", &slot_1, QMetaData::Public },
	{ "splitVertical()", &slot_2, QMetaData::Public },
	{ "splitVertical(int)", &slot_3, QMetaData::Public },
	{ "dragRaisedPanel()", &slot_4, QMetaData::Public },
	{ "removeLastPanelContainer()", &slot_5, QMetaData::Public },
	{ "setThenRemoveLastPanelContainer()", &slot_6, QMetaData::Public },
	{ "removePanelContainer()", &slot_7, QMetaData::Public },
	{ "removePanelContainer(PanelContainer*)", &slot_8, QMetaData::Public },
	{ "removeRaisedPanel()", &slot_9, QMetaData::Public },
	{ "removeRaisedPanel(PanelContainer*)", &slot_10, QMetaData::Public },
	{ "closeAllExternalPanelContainers()", &slot_11, QMetaData::Public },
	{ "closeWindow()", &slot_12, QMetaData::Public },
	{ "closeWindow(PanelContainer*)", &slot_13, QMetaData::Public },
	{ "split(Orientation)", &slot_14, QMetaData::Private },
	{ "split(Orientation,bool)", &slot_15, QMetaData::Private },
	{ "split(Orientation,bool,int)", &slot_16, QMetaData::Private },
	{ "languageChange()", &slot_17, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PanelContainer", parentObject,
	slot_tbl, 18,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PanelContainer.setMetaObject( metaObj );
    return metaObj;
}

void* PanelContainer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PanelContainer" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool PanelContainer::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: splitHorizontal(); break;
    case 1: splitHorizontal((int)static_QUType_int.get(_o+1)); break;
    case 2: splitVertical(); break;
    case 3: splitVertical((int)static_QUType_int.get(_o+1)); break;
    case 4: dragRaisedPanel(); break;
    case 5: removeLastPanelContainer(); break;
    case 6: setThenRemoveLastPanelContainer(); break;
    case 7: removePanelContainer(); break;
    case 8: removePanelContainer((PanelContainer*)static_QUType_ptr.get(_o+1)); break;
    case 9: removeRaisedPanel(); break;
    case 10: removeRaisedPanel((PanelContainer*)static_QUType_ptr.get(_o+1)); break;
    case 11: closeAllExternalPanelContainers(); break;
    case 12: closeWindow(); break;
    case 13: closeWindow((PanelContainer*)static_QUType_ptr.get(_o+1)); break;
    case 14: split((Orientation)(*((Orientation*)static_QUType_ptr.get(_o+1)))); break;
    case 15: split((Orientation)(*((Orientation*)static_QUType_ptr.get(_o+1))),(bool)static_QUType_bool.get(_o+2)); break;
    case 16: split((Orientation)(*((Orientation*)static_QUType_ptr.get(_o+1))),(bool)static_QUType_bool.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 17: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PanelContainer::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PanelContainer::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool PanelContainer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
