/****************************************************************************
** StatsPanel meta object code from reading C++ file 'StatsPanel.hxx'
**
** Created: Wed Mar 5 17:44:51 2014
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "StatsPanel.hxx"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *StatsPanel::className() const
{
    return "StatsPanel";
}

QMetaObject *StatsPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_StatsPanel( "StatsPanel", &StatsPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString StatsPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StatsPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString StatsPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StatsPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* StatsPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Panel::staticMetaObject();
    static const QUMethod slot_0 = {"displayUsingFunction", 0, 0 };
    static const QUMethod slot_1 = {"displayUsingStatement", 0, 0 };
    static const QUMethod slot_2 = {"displayUsingLinkedObject", 0, 0 };
    static const QUMethod slot_3 = {"displayUsingLoop", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"itemSelected", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"returnPressed", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"itemSelected", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"doOption", 1, param_slot_7 };
    static const QUMethod slot_8 = {"exportCSVData", 0, 0 };
    static const QUMethod slot_9 = {"exportTextData", 0, 0 };
    static const QUMethod slot_10 = {"details", 0, 0 };
    static const QUMethod slot_11 = {"originalQuery", 0, 0 };
    static const QUMethod slot_12 = {"cviewQueryStatements", 0, 0 };
    static const QUMethod slot_13 = {"updatePanel", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"focusOnExp", 1, param_slot_14 };
    static const QUMethod slot_15 = {"gotoSourceCompare1Selected", 0, 0 };
    static const QUParameter param_slot_16[] = {
	{ "use_current_item", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"gotoSourceCompare1Selected", 1, param_slot_16 };
    static const QUMethod slot_17 = {"gotoSourceCompare2Selected", 0, 0 };
    static const QUParameter param_slot_18[] = {
	{ "use_current_item", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"gotoSourceCompare2Selected", 1, param_slot_18 };
    static const QUMethod slot_19 = {"gotoSourceCompare3Selected", 0, 0 };
    static const QUParameter param_slot_20[] = {
	{ "use_current_item", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_20 = {"gotoSourceCompare3Selected", 1, param_slot_20 };
    static const QUMethod slot_21 = {"gotoSourceCompare4Selected", 0, 0 };
    static const QUParameter param_slot_22[] = {
	{ "use_current_item", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"gotoSourceCompare4Selected", 1, param_slot_22 };
    static const QUMethod slot_23 = {"gotoSourceCompare5Selected", 0, 0 };
    static const QUParameter param_slot_24[] = {
	{ "use_current_item", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_24 = {"gotoSourceCompare5Selected", 1, param_slot_24 };
    static const QUMethod slot_25 = {"gotoSource", 0, 0 };
    static const QUParameter param_slot_26[] = {
	{ "use_current_item", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_26 = {"gotoSource", 1, param_slot_26 };
    static const QUMethod slot_27 = {"aboutSelected", 0, 0 };
    static const QUMethod slot_28 = {"MPItraceSelected", 0, 0 };
    static const QUMethod slot_29 = {"MEMtraceSelected", 0, 0 };
    static const QUMethod slot_30 = {"PTHREADStraceSelected", 0, 0 };
    static const QUMethod slot_31 = {"IOtraceSelected", 0, 0 };
    static const QUMethod slot_32 = {"customizeExperimentsSelected", 0, 0 };
    static const QUMethod slot_33 = {"clusterAnalysisSelected", 0, 0 };
    static const QUMethod slot_34 = {"clearAuxiliarySelected", 0, 0 };
    static const QUMethod slot_35 = {"showEventListSelected", 0, 0 };
    static const QUMethod slot_36 = {"minMaxAverageSelected", 0, 0 };
    static const QUMethod slot_37 = {"manageProcessesSelected", 0, 0 };
    static const QUMethod slot_38 = {"raiseManageProcessesPanel", 0, 0 };
    static const QUMethod slot_39 = {"progressUpdate", 0, 0 };
    static const QUParameter param_slot_40[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_40 = {"valueChanged", 1, param_slot_40 };
    static const QUParameter param_slot_41[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_41 = {"clicked", 2, param_slot_41 };
    static const QUMethod slot_42 = {"clearModifiers", 0, 0 };
    static const QUMethod slot_43 = {"defaultViewSelected", 0, 0 };
    static const QUMethod slot_44 = {"functionsSelected", 0, 0 };
    static const QUMethod slot_45 = {"linkedObjectsSelected", 0, 0 };
    static const QUMethod slot_46 = {"statementsSelected", 0, 0 };
    static const QUMethod slot_47 = {"statementsByFunctionSelected", 0, 0 };
    static const QUMethod slot_48 = {"calltreesSelected", 0, 0 };
    static const QUMethod slot_49 = {"calltreesByFunctionSelected", 0, 0 };
    static const QUMethod slot_50 = {"calltreesFullStackSelected", 0, 0 };
    static const QUMethod slot_51 = {"calltreesFullStackByFunctionSelected", 0, 0 };
    static const QUMethod slot_52 = {"tracebacksSelected", 0, 0 };
    static const QUMethod slot_53 = {"tracebacksByFunctionSelected", 0, 0 };
    static const QUMethod slot_54 = {"tracebacksFullStackSelected", 0, 0 };
    static const QUMethod slot_55 = {"tracebacksFullStackByFunctionSelected", 0, 0 };
    static const QUMethod slot_56 = {"butterflySelected", 0, 0 };
    static const QUMethod slot_57 = {"infoEditHeaderMoreButtonSelected", 0, 0 };
    static const QUMethod slot_58 = {"hotCallpathSelected", 0, 0 };
    static const QUParameter param_slot_59[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_59 = {"threadSelected", 1, param_slot_59 };
    static const QUParameter param_slot_60[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_60 = {"modifierSelected", 1, param_slot_60 };
    static const QUParameter param_slot_61[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_61 = {"mpiModifierSelected", 1, param_slot_61 };
    static const QUParameter param_slot_62[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_62 = {"mpipModifierSelected", 1, param_slot_62 };
    static const QUParameter param_slot_63[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_63 = {"mpitModifierSelected", 1, param_slot_63 };
    static const QUParameter param_slot_64[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_64 = {"ioModifierSelected", 1, param_slot_64 };
    static const QUParameter param_slot_65[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_65 = {"iopModifierSelected", 1, param_slot_65 };
    static const QUParameter param_slot_66[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_66 = {"iotModifierSelected", 1, param_slot_66 };
    static const QUParameter param_slot_67[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_67 = {"hwcModifierSelected", 1, param_slot_67 };
    static const QUParameter param_slot_68[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_68 = {"hwcsampModifierSelected", 1, param_slot_68 };
    static const QUParameter param_slot_69[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_69 = {"hwctimeModifierSelected", 1, param_slot_69 };
    static const QUParameter param_slot_70[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_70 = {"genericModifierSelected", 1, param_slot_70 };
    static const QUParameter param_slot_71[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_71 = {"pcsampModifierSelected", 1, param_slot_71 };
    static const QUParameter param_slot_72[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_72 = {"usertimeModifierSelected", 1, param_slot_72 };
    static const QUParameter param_slot_73[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_73 = {"memModifierSelected", 1, param_slot_73 };
    static const QUParameter param_slot_74[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_74 = {"pthreadsModifierSelected", 1, param_slot_74 };
    static const QUParameter param_slot_75[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_75 = {"fpeModifierSelected", 1, param_slot_75 };
    static const QUParameter param_slot_76[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_76 = {"collectorMetricSelected", 1, param_slot_76 };
    static const QUParameter param_slot_77[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_77 = {"collectorMPIReportSelected", 1, param_slot_77 };
    static const QUParameter param_slot_78[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_78 = {"collectorMPIPReportSelected", 1, param_slot_78 };
    static const QUParameter param_slot_79[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_79 = {"collectorMPITReportSelected", 1, param_slot_79 };
    static const QUParameter param_slot_80[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_80 = {"collectorIOReportSelected", 1, param_slot_80 };
    static const QUParameter param_slot_81[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_81 = {"collectorIOPReportSelected", 1, param_slot_81 };
    static const QUParameter param_slot_82[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_82 = {"collectorMEMReportSelected", 1, param_slot_82 };
    static const QUParameter param_slot_83[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_83 = {"collectorPTHREADSReportSelected", 1, param_slot_83 };
    static const QUParameter param_slot_84[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_84 = {"collectorIOTReportSelected", 1, param_slot_84 };
    static const QUParameter param_slot_85[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_85 = {"collectorHWCReportSelected", 1, param_slot_85 };
    static const QUParameter param_slot_86[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_86 = {"collectorHWCSampReportSelected", 1, param_slot_86 };
    static const QUParameter param_slot_87[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_87 = {"collectorHWCTimeReportSelected", 1, param_slot_87 };
    static const QUParameter param_slot_88[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_88 = {"collectorUserTimeReportSelected", 1, param_slot_88 };
    static const QUParameter param_slot_89[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_89 = {"collectorPCSampReportSelected", 1, param_slot_89 };
    static const QUParameter param_slot_90[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_90 = {"collectorFPEReportSelected", 1, param_slot_90 };
    static const QUParameter param_slot_91[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_91 = {"collectorGenericReportSelected", 1, param_slot_91 };
    static const QUMethod slot_92 = {"showStats", 0, 0 };
    static const QUMethod slot_93 = {"showToolBar", 0, 0 };
    static const QUMethod slot_94 = {"showInfoHeader", 0, 0 };
    static const QUMethod slot_95 = {"showDiff", 0, 0 };
    static const QUMethod slot_96 = {"showChart", 0, 0 };
    static const QUMethod slot_97 = {"setOrientation", 0, 0 };
    static const QUMethod slot_98 = {"timeSliceSelected", 0, 0 };
    static const QUMethod slot_99 = {"optionalViewsCreationSelected", 0, 0 };
    static const QUMethod slot_100 = {"sourcePanelAnnotationCreationSelected", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "displayUsingFunction()", &slot_0, QMetaData::Public },
	{ "displayUsingStatement()", &slot_1, QMetaData::Public },
	{ "displayUsingLinkedObject()", &slot_2, QMetaData::Public },
	{ "displayUsingLoop()", &slot_3, QMetaData::Public },
	{ "itemSelected(QListViewItem*)", &slot_4, QMetaData::Public },
	{ "returnPressed(QListViewItem*)", &slot_5, QMetaData::Public },
	{ "itemSelected(int)", &slot_6, QMetaData::Public },
	{ "doOption(int)", &slot_7, QMetaData::Public },
	{ "exportCSVData()", &slot_8, QMetaData::Public },
	{ "exportTextData()", &slot_9, QMetaData::Public },
	{ "details()", &slot_10, QMetaData::Public },
	{ "originalQuery()", &slot_11, QMetaData::Public },
	{ "cviewQueryStatements()", &slot_12, QMetaData::Public },
	{ "updatePanel()", &slot_13, QMetaData::Public },
	{ "focusOnExp(int)", &slot_14, QMetaData::Public },
	{ "gotoSourceCompare1Selected()", &slot_15, QMetaData::Public },
	{ "gotoSourceCompare1Selected(bool)", &slot_16, QMetaData::Public },
	{ "gotoSourceCompare2Selected()", &slot_17, QMetaData::Public },
	{ "gotoSourceCompare2Selected(bool)", &slot_18, QMetaData::Public },
	{ "gotoSourceCompare3Selected()", &slot_19, QMetaData::Public },
	{ "gotoSourceCompare3Selected(bool)", &slot_20, QMetaData::Public },
	{ "gotoSourceCompare4Selected()", &slot_21, QMetaData::Public },
	{ "gotoSourceCompare4Selected(bool)", &slot_22, QMetaData::Public },
	{ "gotoSourceCompare5Selected()", &slot_23, QMetaData::Public },
	{ "gotoSourceCompare5Selected(bool)", &slot_24, QMetaData::Public },
	{ "gotoSource()", &slot_25, QMetaData::Public },
	{ "gotoSource(bool)", &slot_26, QMetaData::Public },
	{ "aboutSelected()", &slot_27, QMetaData::Public },
	{ "MPItraceSelected()", &slot_28, QMetaData::Public },
	{ "MEMtraceSelected()", &slot_29, QMetaData::Public },
	{ "PTHREADStraceSelected()", &slot_30, QMetaData::Public },
	{ "IOtraceSelected()", &slot_31, QMetaData::Public },
	{ "customizeExperimentsSelected()", &slot_32, QMetaData::Public },
	{ "clusterAnalysisSelected()", &slot_33, QMetaData::Public },
	{ "clearAuxiliarySelected()", &slot_34, QMetaData::Public },
	{ "showEventListSelected()", &slot_35, QMetaData::Public },
	{ "minMaxAverageSelected()", &slot_36, QMetaData::Public },
	{ "manageProcessesSelected()", &slot_37, QMetaData::Public },
	{ "raiseManageProcessesPanel()", &slot_38, QMetaData::Public },
	{ "progressUpdate()", &slot_39, QMetaData::Public },
	{ "valueChanged(int)", &slot_40, QMetaData::Public },
	{ "clicked(int,int)", &slot_41, QMetaData::Public },
	{ "clearModifiers()", &slot_42, QMetaData::Public },
	{ "defaultViewSelected()", &slot_43, QMetaData::Public },
	{ "functionsSelected()", &slot_44, QMetaData::Public },
	{ "linkedObjectsSelected()", &slot_45, QMetaData::Public },
	{ "statementsSelected()", &slot_46, QMetaData::Public },
	{ "statementsByFunctionSelected()", &slot_47, QMetaData::Public },
	{ "calltreesSelected()", &slot_48, QMetaData::Public },
	{ "calltreesByFunctionSelected()", &slot_49, QMetaData::Public },
	{ "calltreesFullStackSelected()", &slot_50, QMetaData::Public },
	{ "calltreesFullStackByFunctionSelected()", &slot_51, QMetaData::Public },
	{ "tracebacksSelected()", &slot_52, QMetaData::Public },
	{ "tracebacksByFunctionSelected()", &slot_53, QMetaData::Public },
	{ "tracebacksFullStackSelected()", &slot_54, QMetaData::Public },
	{ "tracebacksFullStackByFunctionSelected()", &slot_55, QMetaData::Public },
	{ "butterflySelected()", &slot_56, QMetaData::Public },
	{ "infoEditHeaderMoreButtonSelected()", &slot_57, QMetaData::Public },
	{ "hotCallpathSelected()", &slot_58, QMetaData::Public },
	{ "threadSelected(int)", &slot_59, QMetaData::Private },
	{ "modifierSelected(int)", &slot_60, QMetaData::Private },
	{ "mpiModifierSelected(int)", &slot_61, QMetaData::Private },
	{ "mpipModifierSelected(int)", &slot_62, QMetaData::Private },
	{ "mpitModifierSelected(int)", &slot_63, QMetaData::Private },
	{ "ioModifierSelected(int)", &slot_64, QMetaData::Private },
	{ "iopModifierSelected(int)", &slot_65, QMetaData::Private },
	{ "iotModifierSelected(int)", &slot_66, QMetaData::Private },
	{ "hwcModifierSelected(int)", &slot_67, QMetaData::Private },
	{ "hwcsampModifierSelected(int)", &slot_68, QMetaData::Private },
	{ "hwctimeModifierSelected(int)", &slot_69, QMetaData::Private },
	{ "genericModifierSelected(int)", &slot_70, QMetaData::Private },
	{ "pcsampModifierSelected(int)", &slot_71, QMetaData::Private },
	{ "usertimeModifierSelected(int)", &slot_72, QMetaData::Private },
	{ "memModifierSelected(int)", &slot_73, QMetaData::Private },
	{ "pthreadsModifierSelected(int)", &slot_74, QMetaData::Private },
	{ "fpeModifierSelected(int)", &slot_75, QMetaData::Private },
	{ "collectorMetricSelected(int)", &slot_76, QMetaData::Private },
	{ "collectorMPIReportSelected(int)", &slot_77, QMetaData::Private },
	{ "collectorMPIPReportSelected(int)", &slot_78, QMetaData::Private },
	{ "collectorMPITReportSelected(int)", &slot_79, QMetaData::Private },
	{ "collectorIOReportSelected(int)", &slot_80, QMetaData::Private },
	{ "collectorIOPReportSelected(int)", &slot_81, QMetaData::Private },
	{ "collectorMEMReportSelected(int)", &slot_82, QMetaData::Private },
	{ "collectorPTHREADSReportSelected(int)", &slot_83, QMetaData::Private },
	{ "collectorIOTReportSelected(int)", &slot_84, QMetaData::Private },
	{ "collectorHWCReportSelected(int)", &slot_85, QMetaData::Private },
	{ "collectorHWCSampReportSelected(int)", &slot_86, QMetaData::Private },
	{ "collectorHWCTimeReportSelected(int)", &slot_87, QMetaData::Private },
	{ "collectorUserTimeReportSelected(int)", &slot_88, QMetaData::Private },
	{ "collectorPCSampReportSelected(int)", &slot_89, QMetaData::Private },
	{ "collectorFPEReportSelected(int)", &slot_90, QMetaData::Private },
	{ "collectorGenericReportSelected(int)", &slot_91, QMetaData::Private },
	{ "showStats()", &slot_92, QMetaData::Private },
	{ "showToolBar()", &slot_93, QMetaData::Private },
	{ "showInfoHeader()", &slot_94, QMetaData::Private },
	{ "showDiff()", &slot_95, QMetaData::Private },
	{ "showChart()", &slot_96, QMetaData::Private },
	{ "setOrientation()", &slot_97, QMetaData::Private },
	{ "timeSliceSelected()", &slot_98, QMetaData::Private },
	{ "optionalViewsCreationSelected()", &slot_99, QMetaData::Private },
	{ "sourcePanelAnnotationCreationSelected()", &slot_100, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"StatsPanel", parentObject,
	slot_tbl, 101,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_StatsPanel.setMetaObject( metaObj );
    return metaObj;
}

void* StatsPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "StatsPanel" ) )
	return this;
    return Panel::qt_cast( clname );
}

bool StatsPanel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: displayUsingFunction(); break;
    case 1: displayUsingStatement(); break;
    case 2: displayUsingLinkedObject(); break;
    case 3: displayUsingLoop(); break;
    case 4: itemSelected((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: returnPressed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: itemSelected((int)static_QUType_int.get(_o+1)); break;
    case 7: doOption((int)static_QUType_int.get(_o+1)); break;
    case 8: exportCSVData(); break;
    case 9: exportTextData(); break;
    case 10: details(); break;
    case 11: originalQuery(); break;
    case 12: cviewQueryStatements(); break;
    case 13: updatePanel(); break;
    case 14: focusOnExp((int)static_QUType_int.get(_o+1)); break;
    case 15: gotoSourceCompare1Selected(); break;
    case 16: gotoSourceCompare1Selected((bool)static_QUType_bool.get(_o+1)); break;
    case 17: gotoSourceCompare2Selected(); break;
    case 18: gotoSourceCompare2Selected((bool)static_QUType_bool.get(_o+1)); break;
    case 19: gotoSourceCompare3Selected(); break;
    case 20: gotoSourceCompare3Selected((bool)static_QUType_bool.get(_o+1)); break;
    case 21: gotoSourceCompare4Selected(); break;
    case 22: gotoSourceCompare4Selected((bool)static_QUType_bool.get(_o+1)); break;
    case 23: gotoSourceCompare5Selected(); break;
    case 24: gotoSourceCompare5Selected((bool)static_QUType_bool.get(_o+1)); break;
    case 25: gotoSource(); break;
    case 26: gotoSource((bool)static_QUType_bool.get(_o+1)); break;
    case 27: aboutSelected(); break;
    case 28: MPItraceSelected(); break;
    case 29: MEMtraceSelected(); break;
    case 30: PTHREADStraceSelected(); break;
    case 31: IOtraceSelected(); break;
    case 32: customizeExperimentsSelected(); break;
    case 33: clusterAnalysisSelected(); break;
    case 34: clearAuxiliarySelected(); break;
    case 35: showEventListSelected(); break;
    case 36: minMaxAverageSelected(); break;
    case 37: manageProcessesSelected(); break;
    case 38: raiseManageProcessesPanel(); break;
    case 39: progressUpdate(); break;
    case 40: valueChanged((int)static_QUType_int.get(_o+1)); break;
    case 41: clicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 42: clearModifiers(); break;
    case 43: defaultViewSelected(); break;
    case 44: functionsSelected(); break;
    case 45: linkedObjectsSelected(); break;
    case 46: statementsSelected(); break;
    case 47: statementsByFunctionSelected(); break;
    case 48: calltreesSelected(); break;
    case 49: calltreesByFunctionSelected(); break;
    case 50: calltreesFullStackSelected(); break;
    case 51: calltreesFullStackByFunctionSelected(); break;
    case 52: tracebacksSelected(); break;
    case 53: tracebacksByFunctionSelected(); break;
    case 54: tracebacksFullStackSelected(); break;
    case 55: tracebacksFullStackByFunctionSelected(); break;
    case 56: butterflySelected(); break;
    case 57: infoEditHeaderMoreButtonSelected(); break;
    case 58: hotCallpathSelected(); break;
    case 59: threadSelected((int)static_QUType_int.get(_o+1)); break;
    case 60: modifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 61: mpiModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 62: mpipModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 63: mpitModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 64: ioModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 65: iopModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 66: iotModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 67: hwcModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 68: hwcsampModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 69: hwctimeModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 70: genericModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 71: pcsampModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 72: usertimeModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 73: memModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 74: pthreadsModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 75: fpeModifierSelected((int)static_QUType_int.get(_o+1)); break;
    case 76: collectorMetricSelected((int)static_QUType_int.get(_o+1)); break;
    case 77: collectorMPIReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 78: collectorMPIPReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 79: collectorMPITReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 80: collectorIOReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 81: collectorIOPReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 82: collectorMEMReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 83: collectorPTHREADSReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 84: collectorIOTReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 85: collectorHWCReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 86: collectorHWCSampReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 87: collectorHWCTimeReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 88: collectorUserTimeReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 89: collectorPCSampReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 90: collectorFPEReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 91: collectorGenericReportSelected((int)static_QUType_int.get(_o+1)); break;
    case 92: showStats(); break;
    case 93: showToolBar(); break;
    case 94: showInfoHeader(); break;
    case 95: showDiff(); break;
    case 96: showChart(); break;
    case 97: setOrientation(); break;
    case 98: timeSliceSelected(); break;
    case 99: optionalViewsCreationSelected(); break;
    case 100: sourcePanelAnnotationCreationSelected(); break;
    default:
	return Panel::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool StatsPanel::qt_emit( int _id, QUObject* _o )
{
    return Panel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool StatsPanel::qt_property( int id, int f, QVariant* v)
{
    return Panel::qt_property( id, f, v);
}

bool StatsPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
