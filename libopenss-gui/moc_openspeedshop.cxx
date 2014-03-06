/****************************************************************************
** OpenSpeedshop meta object code from reading C++ file 'openspeedshop.hxx'
**
** Created: Wed Mar 5 17:43:24 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "openspeedshop.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *OpenSpeedshop::className() const
{
    return "OpenSpeedshop";
}

QMetaObject *OpenSpeedshop::metaObj = 0;
static QMetaObjectCleanUp cleanUp_OpenSpeedshop( "OpenSpeedshop", &OpenSpeedshop::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString OpenSpeedshop::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OpenSpeedshop", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString OpenSpeedshop::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OpenSpeedshop", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* OpenSpeedshop::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"fileOpenExperiment", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "selectedID", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"fileOpenExperiment", 1, param_slot_1 };
    static const QUMethod slot_2 = {"fileOpenSavedExperiment", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "filename", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"fileOpenSavedExperiment", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "filename", &static_QUType_QString, 0, QUParameter::In },
	{ "openPanel", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"fileOpenSavedExperiment", 2, param_slot_4 };
    static const QUMethod slot_5 = {"fileSaveExperiment", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"fileSaveExperiment", 1, param_slot_6 };
    static const QUMethod slot_7 = {"filePreferences", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "stackWidgetToRaise", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_8 = {"filePreferences", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "stackWidgetToRaise", &static_QUType_ptr, "QWidget", QUParameter::In },
	{ "panel_type", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"filePreferences", 2, param_slot_9 };
    static const QUMethod slot_10 = {"fileClose", 0, 0 };
    static const QUMethod slot_11 = {"fileExit", 0, 0 };
    static const QUMethod slot_12 = {"helpIndex", 0, 0 };
    static const QUMethod slot_13 = {"helpContents", 0, 0 };
    static const QUMethod slot_14 = {"helpAbout", 0, 0 };
    static const QUMethod slot_15 = {"loadNewProgram", 0, 0 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_ptr, "Panel", QUParameter::Out },
	{ "pc", &static_QUType_ptr, "PanelContainer", QUParameter::In },
	{ "topPC", &static_QUType_ptr, "PanelContainer", QUParameter::In },
	{ "expID", &static_QUType_ptr, "int64_t", QUParameter::In },
	{ "targetPanel", &static_QUType_ptr, "Panel", QUParameter::In },
	{ "isOffline", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"loadNewProgramPanel", 6, param_slot_16 };
    static const QUMethod slot_17 = {"loadNewMultiProcessProgram", 0, 0 };
    static const QUMethod slot_18 = {"loadArgumentFile", 0, 0 };
    static const QUMethod slot_19 = {"attachNewProcess", 0, 0 };
    static const QUMethod slot_20 = {"attachNewMultiProcess", 0, 0 };
    static const QUMethod slot_21 = {"myQuit", 0, 0 };
    static const QUMethod slot_22 = {"progressUpdate", 0, 0 };
    static const QUMethod slot_23 = {"raiseTheGUI", 0, 0 };
    static const QUMethod slot_24 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "fileOpenExperiment()", &slot_0, QMetaData::Public },
	{ "fileOpenExperiment(int)", &slot_1, QMetaData::Public },
	{ "fileOpenSavedExperiment()", &slot_2, QMetaData::Public },
	{ "fileOpenSavedExperiment(QString)", &slot_3, QMetaData::Public },
	{ "fileOpenSavedExperiment(QString,bool)", &slot_4, QMetaData::Public },
	{ "fileSaveExperiment()", &slot_5, QMetaData::Public },
	{ "fileSaveExperiment(int)", &slot_6, QMetaData::Public },
	{ "filePreferences()", &slot_7, QMetaData::Public },
	{ "filePreferences(QWidget*)", &slot_8, QMetaData::Public },
	{ "filePreferences(QWidget*,QString)", &slot_9, QMetaData::Public },
	{ "fileClose()", &slot_10, QMetaData::Public },
	{ "fileExit()", &slot_11, QMetaData::Public },
	{ "helpIndex()", &slot_12, QMetaData::Public },
	{ "helpContents()", &slot_13, QMetaData::Public },
	{ "helpAbout()", &slot_14, QMetaData::Public },
	{ "loadNewProgram()", &slot_15, QMetaData::Public },
	{ "loadNewProgramPanel(PanelContainer*,PanelContainer*,int64_t,Panel*,bool)", &slot_16, QMetaData::Public },
	{ "loadNewMultiProcessProgram()", &slot_17, QMetaData::Public },
	{ "loadArgumentFile()", &slot_18, QMetaData::Public },
	{ "attachNewProcess()", &slot_19, QMetaData::Public },
	{ "attachNewMultiProcess()", &slot_20, QMetaData::Public },
	{ "myQuit()", &slot_21, QMetaData::Public },
	{ "progressUpdate()", &slot_22, QMetaData::Public },
	{ "raiseTheGUI()", &slot_23, QMetaData::Public },
	{ "languageChange()", &slot_24, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"OpenSpeedshop", parentObject,
	slot_tbl, 25,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_OpenSpeedshop.setMetaObject( metaObj );
    return metaObj;
}

void* OpenSpeedshop::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "OpenSpeedshop" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool OpenSpeedshop::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fileOpenExperiment(); break;
    case 1: fileOpenExperiment((int)static_QUType_int.get(_o+1)); break;
    case 2: fileOpenSavedExperiment(); break;
    case 3: fileOpenSavedExperiment((QString)static_QUType_QString.get(_o+1)); break;
    case 4: fileOpenSavedExperiment((QString)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 5: fileSaveExperiment(); break;
    case 6: fileSaveExperiment((int)static_QUType_int.get(_o+1)); break;
    case 7: filePreferences(); break;
    case 8: filePreferences((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 9: filePreferences((QWidget*)static_QUType_ptr.get(_o+1),(QString)static_QUType_QString.get(_o+2)); break;
    case 10: fileClose(); break;
    case 11: fileExit(); break;
    case 12: helpIndex(); break;
    case 13: helpContents(); break;
    case 14: helpAbout(); break;
    case 15: loadNewProgram(); break;
    case 16: static_QUType_ptr.set(_o,loadNewProgramPanel((PanelContainer*)static_QUType_ptr.get(_o+1),(PanelContainer*)static_QUType_ptr.get(_o+2),(int64_t)(*((int64_t*)static_QUType_ptr.get(_o+3))),(Panel*)static_QUType_ptr.get(_o+4),(bool)static_QUType_bool.get(_o+5))); break;
    case 17: loadNewMultiProcessProgram(); break;
    case 18: loadArgumentFile(); break;
    case 19: attachNewProcess(); break;
    case 20: attachNewMultiProcess(); break;
    case 21: myQuit(); break;
    case 22: progressUpdate(); break;
    case 23: raiseTheGUI(); break;
    case 24: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool OpenSpeedshop::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool OpenSpeedshop::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool OpenSpeedshop::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
