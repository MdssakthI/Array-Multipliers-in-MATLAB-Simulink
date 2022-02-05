#include "rt_logging_mmi.h"
#include "Normal_Multiplier_InXA1_NAB4_capi.h"
#include <math.h>
#include "Normal_Multiplier_InXA1_NAB4.h"
#include "Normal_Multiplier_InXA1_NAB4_private.h"
#include "Normal_Multiplier_InXA1_NAB4_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 16 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "10.3 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void MdlStart ( void ) { { bool externalInputIsInDatasetFormat =
false ; void * pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath
= sdiGetLabelFromChars ( "Normal_Multiplier_InXA1_NAB4/Partial Product Row 5"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 65536 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 5 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. c1mkke1lc0 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7af74198-53a3-4558-8a13-1109cc743f19" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . c1mkke1lc0 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . c1mkke1lc0 . AQHandles , "0.01" ,
0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . c1mkke1lc0 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . c1mkke1lc0 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . c1mkke1lc0 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Normal_Multiplier_InXA1_NAB4/Partial Product Row 8" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 65536 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 6 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ajfirptzuw . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9e9c58a6-b172-4822-a9fb-09f7541551d3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . ajfirptzuw . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ajfirptzuw . AQHandles , "0.01" ,
0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ajfirptzuw .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ajfirptzuw . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ajfirptzuw . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 65536 } ; rtDW . k1cll4glti . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . k1cll4glti . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . j4giqpsgit . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . j4giqpsgit . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . lfpipej4d5 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . lfpipej4d5 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ksm0c15pn3 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ksm0c15pn3 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . g2gvxr3gsi . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . g2gvxr3gsi . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . hjizvovpsx . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . hjizvovpsx . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . kr3cklxyu4 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . kr3cklxyu4 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . f1xmxzfzp0 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . f1xmxzfzp0 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . gfsafs2vvk . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . gfsafs2vvk . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . gujjiko25c . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . gujjiko25c . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . fqlzo2jf0t . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . fqlzo2jf0t . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ncssq0cdqe . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ncssq0cdqe . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . eziwunhvb3 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . eziwunhvb3 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . l2l4tukvx1 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . l2l4tukvx1 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . feszysrdxp . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . feszysrdxp . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . duuwmv1zl1 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . duuwmv1zl1 . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . pvltcsg3fd . TimePtr = fromwksInfo -> time ;
rtDW . pvltcsg3fd . DataPtr = fromwksInfo -> data ; rtDW . pvltcsg3fd .
RSimInfoPtr = fromwksInfo ; } rtDW . moidzuewht . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . b1dguehs12 . TimePtr = fromwksInfo -> time ;
rtDW . b1dguehs12 . DataPtr = fromwksInfo -> data ; rtDW . b1dguehs12 .
RSimInfoPtr = fromwksInfo ; } rtDW . d25msrec11 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . lqtjsmd0c0 . TimePtr = fromwksInfo -> time ;
rtDW . lqtjsmd0c0 . DataPtr = fromwksInfo -> data ; rtDW . lqtjsmd0c0 .
RSimInfoPtr = fromwksInfo ; } rtDW . o4oqn42ujc . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . enjvq1rtga . TimePtr = fromwksInfo -> time ;
rtDW . enjvq1rtga . DataPtr = fromwksInfo -> data ; rtDW . enjvq1rtga .
RSimInfoPtr = fromwksInfo ; } rtDW . kbdqbct1b2 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . awjbgkvpml . TimePtr = fromwksInfo -> time ;
rtDW . awjbgkvpml . DataPtr = fromwksInfo -> data ; rtDW . awjbgkvpml .
RSimInfoPtr = fromwksInfo ; } rtDW . mltx3t5uia . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . bgsy1dpqct . TimePtr = fromwksInfo -> time ;
rtDW . bgsy1dpqct . DataPtr = fromwksInfo -> data ; rtDW . bgsy1dpqct .
RSimInfoPtr = fromwksInfo ; } rtDW . kddtm1uwe3 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . n2rvtyxgyn . TimePtr = fromwksInfo -> time ;
rtDW . n2rvtyxgyn . DataPtr = fromwksInfo -> data ; rtDW . n2rvtyxgyn .
RSimInfoPtr = fromwksInfo ; } rtDW . frhsfxyceb . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . ebwheh510k . TimePtr = fromwksInfo -> time ;
rtDW . ebwheh510k . DataPtr = fromwksInfo -> data ; rtDW . ebwheh510k .
RSimInfoPtr = fromwksInfo ; } rtDW . hzwxcai33x . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . cjva2p5i1u . TimePtr = fromwksInfo -> time ;
rtDW . cjva2p5i1u . DataPtr = fromwksInfo -> data ; rtDW . cjva2p5i1u .
RSimInfoPtr = fromwksInfo ; } rtDW . a14vmdf0iv . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . j11louxedr . TimePtr = fromwksInfo -> time ;
rtDW . j11louxedr . DataPtr = fromwksInfo -> data ; rtDW . j11louxedr .
RSimInfoPtr = fromwksInfo ; } rtDW . eqyepdn0ua . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . brkivscmyp . TimePtr = fromwksInfo -> time ;
rtDW . brkivscmyp . DataPtr = fromwksInfo -> data ; rtDW . brkivscmyp .
RSimInfoPtr = fromwksInfo ; } rtDW . o4b50arjk4 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . bkhye3vpg5 . TimePtr = fromwksInfo -> time ;
rtDW . bkhye3vpg5 . DataPtr = fromwksInfo -> data ; rtDW . bkhye3vpg5 .
RSimInfoPtr = fromwksInfo ; } rtDW . dnlhn3plya . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . dub1rycbnz . TimePtr = fromwksInfo -> time ;
rtDW . dub1rycbnz . DataPtr = fromwksInfo -> data ; rtDW . dub1rycbnz .
RSimInfoPtr = fromwksInfo ; } rtDW . bao1yo2tyh . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . nmdky2lrb2 . TimePtr = fromwksInfo -> time ;
rtDW . nmdky2lrb2 . DataPtr = fromwksInfo -> data ; rtDW . nmdky2lrb2 .
RSimInfoPtr = fromwksInfo ; } rtDW . c5ev3bj0ey . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . pkw4hqakgw . TimePtr = fromwksInfo -> time ;
rtDW . pkw4hqakgw . DataPtr = fromwksInfo -> data ; rtDW . pkw4hqakgw .
RSimInfoPtr = fromwksInfo ; } rtDW . iryr4bvyss . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . ih233gw33i . TimePtr = fromwksInfo -> time ;
rtDW . ih233gw33i . DataPtr = fromwksInfo -> data ; rtDW . ih233gw33i .
RSimInfoPtr = fromwksInfo ; } rtDW . pgjyomlnv4 . PrevIndex = 0 ; } } void
MdlOutputs ( int_T tid ) { int32_T i ; boolean_T ajl42h2nud ; boolean_T
anupfjg1uu ; boolean_T beuzyt1b0l ; boolean_T bf0vlo5opv ; boolean_T
c1ptn0ync0 ; boolean_T campykoil0 ; boolean_T dmzesfixdm ; boolean_T
e13yfxn2yf ; boolean_T efc3xbubya ; boolean_T eopxuynkdw ; boolean_T
exduqiaqz5 ; boolean_T fkjf3yylwo ; boolean_T grxsvmner4 ; boolean_T
hetgucpepc ; boolean_T ii05lwzmrl ; boolean_T ja5gfozxwn ; boolean_T
jienwguhcb ; boolean_T jiiidi153d ; boolean_T laqjanvpra ; boolean_T
ldbqp1e4fx ; boolean_T n0s3wqoaow ; boolean_T nnkm1kmeqe ; boolean_T
nsr4ydnvvc ; boolean_T oeduxrzwtv ; boolean_T ogkbxjw0bv ; boolean_T
p5sfuyrcif ; boolean_T pfec5f4nay ; boolean_T pvc4zbdx35 ; { real_T *
pDataValues = ( real_T * ) rtDW . pvltcsg3fd . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . pvltcsg3fd . TimePtr ; int_T currTimeIndex = rtDW .
moidzuewht . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . pvltcsg3fd .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . moidzuewht . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
j4xkqwcio0_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . j4xkqwcio0_mbvzarwird [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . j4xkqwcio0_mbvzarwird [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } { real_T * pDataValues = ( real_T * ) rtDW . b1dguehs12
. DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . b1dguehs12 . TimePtr ;
int_T currTimeIndex = rtDW . d25msrec11 . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . b1dguehs12 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . d25msrec11 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . gxc3nhmfwj_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . gxc3nhmfwj_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . gxc3nhmfwj_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . icmeug23yd [ i ] = ( ( rtB . j4xkqwcio0_mbvzarwird [ i
] != 0.0 ) && ( rtB . gxc3nhmfwj_cl54gopm0x [ i ] != 0.0 ) ) ; } { if ( rtDW
. c1mkke1lc0 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW
. c1mkke1lc0 . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
icmeug23yd [ 0 ] + 0 ) ; } } { real_T * pDataValues = ( real_T * ) rtDW .
lqtjsmd0c0 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . lqtjsmd0c0
. TimePtr ; int_T currTimeIndex = rtDW . o4oqn42ujc . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . lqtjsmd0c0 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . o4oqn42ujc . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . awecfytk5f_kkiq3xxxve [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . awecfytk5f_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . awecfytk5f_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T *
pDataValues = ( real_T * ) rtDW . enjvq1rtga . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . enjvq1rtga . TimePtr ; int_T currTimeIndex = rtDW .
kbdqbct1b2 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . enjvq1rtga .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . kbdqbct1b2 . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
d1x4uo2pps_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . d1x4uo2pps_cxarnvbvui [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . d1x4uo2pps_cxarnvbvui [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . kahhteyho0 [ i
] = ( ( rtB . awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
d1x4uo2pps_cxarnvbvui [ i ] != 0.0 ) ) ; } { if ( rtDW . ajfirptzuw .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ajfirptzuw .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . kahhteyho0 [ 0 ] +
0 ) ; } } { real_T * pDataValues = ( real_T * ) rtDW . awjbgkvpml . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . awjbgkvpml . TimePtr ; int_T
currTimeIndex = rtDW . mltx3t5uia . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . awjbgkvpml . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
mltx3t5uia . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . e10p5nijns_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . e10p5nijns_bhxxfovxdy [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
e10p5nijns_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . bgsy1dpqct . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . bgsy1dpqct . TimePtr ; int_T currTimeIndex = rtDW . kddtm1uwe3 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . bgsy1dpqct . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . kddtm1uwe3 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . pfmfqr2dxw_pbm3vprmfu [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . pfmfqr2dxw_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . pfmfqr2dxw_pbm3vprmfu [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . g1g5fzyp4j [ i ] = ( ( rtB . e10p5nijns_bhxxfovxdy [ i
] != 0.0 ) && ( rtB . pfmfqr2dxw_pbm3vprmfu [ i ] != 0.0 ) ) ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . k1cll4glti . LoggedData ) , & rtB . g1g5fzyp4j [ 0 ] , 0
) ; } } } { real_T * pDataValues = ( real_T * ) rtDW . n2rvtyxgyn . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . n2rvtyxgyn . TimePtr ; int_T
currTimeIndex = rtDW . frhsfxyceb . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . n2rvtyxgyn . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
frhsfxyceb . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . dergw2ixg1_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . dergw2ixg1_cv5hdgrwft [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
dergw2ixg1_cv5hdgrwft [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . op5zfwxpem [ i ] = ( boolean_T ) ( ( ( rtB .
dergw2ixg1_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . pfmfqr2dxw_pbm3vprmfu [ i ]
!= 0.0 ) ) ^ ( ( rtB . e10p5nijns_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
d1x4uo2pps_cxarnvbvui [ i ] != 0.0 ) ) ) ^ ( rtP . Constant2_Value != 0.0 ) ;
} if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1
) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar *
) ( LogVar * ) ( rtDW . j4giqpsgit . LoggedData ) , & rtB . op5zfwxpem [ 0 ]
, 0 ) ; } } } { real_T * pDataValues = ( real_T * ) rtDW . ebwheh510k .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . ebwheh510k . TimePtr ;
int_T currTimeIndex = rtDW . hzwxcai33x . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . ebwheh510k . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hzwxcai33x . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ofbges4ydc_fqdqrf4qbc [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . ofbges4ydc_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . ofbges4ydc_fqdqrf4qbc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . n1vtun4qv5_guugdwf2m3 [ i ] = ( ( rtB .
e10p5nijns_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . ofbges4ydc_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; } { real_T * pDataValues = ( real_T * ) rtDW . cjva2p5i1u .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . cjva2p5i1u . TimePtr ;
int_T currTimeIndex = rtDW . a14vmdf0iv . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . cjva2p5i1u . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . a14vmdf0iv . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . gbuacuyyue_g2mlkqadfk [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . gbuacuyyue_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . gbuacuyyue_g2mlkqadfk [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { ii05lwzmrl = ( ( rtB . dergw2ixg1_cv5hdgrwft [ i ] != 0.0 )
&& ( rtB . gbuacuyyue_g2mlkqadfk [ i ] != 0.0 ) ) ; ldbqp1e4fx = rtB .
n1vtun4qv5_guugdwf2m3 [ i ] ^ ii05lwzmrl ; rtB . e4wwqxwnup_dypejvacrn [ i ]
= ( rtP . Constant2_Value != 0.0 ) ^ ldbqp1e4fx ; rtB . anupnn0jzd_ldqodwenvz
[ i ] = ii05lwzmrl ; rtB . a11mv2rz1m_dhamdvybc1 [ i ] = ldbqp1e4fx ; } {
real_T * pDataValues = ( real_T * ) rtDW . j11louxedr . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . j11louxedr . TimePtr ; int_T currTimeIndex
= rtDW . eqyepdn0ua . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
j11louxedr . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . eqyepdn0ua .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
elqzys50j2_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . elqzys50j2_g1smspu5ke [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . elqzys50j2_g1smspu5ke [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 65536 ; i ++ ) { jiiidi153d = ( ( rtB
. elqzys50j2_g1smspu5ke [ i ] != 0.0 ) && ( rtB . gxc3nhmfwj_cl54gopm0x [ i ]
!= 0.0 ) ) ; anupfjg1uu = rtB . e4wwqxwnup_dypejvacrn [ i ] ^ jiiidi153d ;
rtB . cnyn5fudun_bjbgfqrolh [ i ] = ( rtP . Constant1_Value != 0.0 ) ^
anupfjg1uu ; rtB . jyar2yqfuv_lxo5edjg3c [ i ] = jiiidi153d ; rtB .
medh532pfo_owjr1h1vqy [ i ] = anupfjg1uu ; } { real_T * pDataValues = (
real_T * ) rtDW . brkivscmyp . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . brkivscmyp . TimePtr ; int_T currTimeIndex = rtDW . o4b50arjk4 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . brkivscmyp . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . o4b50arjk4 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ggwznjfpkr_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . ggwznjfpkr_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . ggwznjfpkr_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { exduqiaqz5 = rtB . cnyn5fudun_bjbgfqrolh [ i ] ; fkjf3yylwo
= ( ( rtB . ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB .
d1x4uo2pps_cxarnvbvui [ i ] != 0.0 ) ) ; beuzyt1b0l = exduqiaqz5 ^ fkjf3yylwo
; nnkm1kmeqe = ( rtP . Constant3_Value != 0.0 ) ^ beuzyt1b0l ; ii05lwzmrl = (
( rtB . j4xkqwcio0_mbvzarwird [ i ] != 0.0 ) && ( rtB . pfmfqr2dxw_pbm3vprmfu
[ i ] != 0.0 ) ) ; rtB . ngfwu0pzmy_bnlywzniup [ i ] = ( nnkm1kmeqe &&
ii05lwzmrl ) ; rtB . ocgbir3blb_bsqwvugooi [ i ] = ( ( ( rtP .
Constant3_Value != 0.0 ) && beuzyt1b0l ) || ( exduqiaqz5 && fkjf3yylwo ) ) ;
rtB . grrh4e51co_nuebgmauvi [ i ] = ( ( ( rtP . Constant1_Value != 0.0 ) &&
rtB . medh532pfo_owjr1h1vqy [ i ] ) || ( rtB . e4wwqxwnup_dypejvacrn [ i ] &&
rtB . jyar2yqfuv_lxo5edjg3c [ i ] ) ) ; rtB . fbxikb3vxd_lnjdk5wtww [ i ] =
nnkm1kmeqe ; rtB . lg3omraq1w_hv2ho1zopz [ i ] = ii05lwzmrl ; rtB .
cnyn5fudun_bjbgfqrolh [ i ] = ( ( ( rtP . Constant2_Value != 0.0 ) && rtB .
a11mv2rz1m_dhamdvybc1 [ i ] ) || ( rtB . n1vtun4qv5_guugdwf2m3 [ i ] && rtB .
anupnn0jzd_ldqodwenvz [ i ] ) ) ; } { real_T * pDataValues = ( real_T * )
rtDW . bkhye3vpg5 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
bkhye3vpg5 . TimePtr ; int_T currTimeIndex = rtDW . dnlhn3plya . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . bkhye3vpg5 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . dnlhn3plya . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . lmi2ccv2ko_nz4o0shxby [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . lmi2ccv2ko_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . lmi2ccv2ko_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { anupfjg1uu = ( ( rtB . e10p5nijns_bhxxfovxdy [ i ] != 0.0 )
&& ( rtB . lmi2ccv2ko_nz4o0shxby [ i ] != 0.0 ) ) ; jiiidi153d = ( ( rtB .
dergw2ixg1_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . ofbges4ydc_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; pvc4zbdx35 = anupfjg1uu ^ jiiidi153d ; ldbqp1e4fx = rtB .
cnyn5fudun_bjbgfqrolh [ i ] ^ pvc4zbdx35 ; ii05lwzmrl = ( ( rtB .
elqzys50j2_g1smspu5ke [ i ] != 0.0 ) && ( rtB . gbuacuyyue_g2mlkqadfk [ i ]
!= 0.0 ) ) ; c1ptn0ync0 = ldbqp1e4fx ^ ii05lwzmrl ; ja5gfozxwn = rtB .
grrh4e51co_nuebgmauvi [ i ] ^ c1ptn0ync0 ; jienwguhcb = ( ( rtB .
ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB . gxc3nhmfwj_cl54gopm0x [ i ]
!= 0.0 ) ) ; grxsvmner4 = ja5gfozxwn ^ jienwguhcb ; eopxuynkdw = rtB .
ocgbir3blb_bsqwvugooi [ i ] ^ grxsvmner4 ; nsr4ydnvvc = ( ( rtB .
j4xkqwcio0_mbvzarwird [ i ] != 0.0 ) && ( rtB . d1x4uo2pps_cxarnvbvui [ i ]
!= 0.0 ) ) ; hetgucpepc = eopxuynkdw ^ nsr4ydnvvc ; rtB .
dwmn3bg2ap_ju13rw2h0m [ i ] = rtB . ngfwu0pzmy_bnlywzniup [ i ] ^ hetgucpepc
; rtB . medh532pfo_owjr1h1vqy [ i ] = anupfjg1uu ; rtB .
jyar2yqfuv_lxo5edjg3c [ i ] = jiiidi153d ; rtB . e4wwqxwnup_dypejvacrn [ i ]
= pvc4zbdx35 ; rtB . a11mv2rz1m_dhamdvybc1 [ i ] = ldbqp1e4fx ; rtB .
anupnn0jzd_ldqodwenvz [ i ] = ii05lwzmrl ; rtB . n1vtun4qv5_guugdwf2m3 [ i ]
= c1ptn0ync0 ; rtB . bvb3obmjhw_dapv3jlyq5 [ i ] = ja5gfozxwn ; rtB .
m2b5x0cy5i_ezqlmfzvpq [ i ] = jienwguhcb ; rtB . hqpggldqvx_bjvjhhzy4i [ i ]
= grxsvmner4 ; rtB . filcmvu1jl_jzx3amusab [ i ] = eopxuynkdw ; rtB .
pfd4pcf5zp_fdinthrxmb [ i ] = nsr4ydnvvc ; rtB . l5uexs3ekg_al00mdgrv4 [ i ]
= hetgucpepc ; } { real_T * pDataValues = ( real_T * ) rtDW . dub1rycbnz .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . dub1rycbnz . TimePtr ;
int_T currTimeIndex = rtDW . bao1yo2tyh . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . dub1rycbnz . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . bao1yo2tyh . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . pvbmqf02qf_ppxrqq0gsf [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . pvbmqf02qf_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . pvbmqf02qf_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { exduqiaqz5 = ( ( rtB . pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 )
&& ( rtB . pfmfqr2dxw_pbm3vprmfu [ i ] != 0.0 ) ) ; rtB .
oykz5inwd1_o4f35lbcvx [ i ] = ( rtB . dwmn3bg2ap_ju13rw2h0m [ i ] &&
exduqiaqz5 ) ; rtB . a2oqsdfcq5_jz50ptvnrg [ i ] = exduqiaqz5 ; rtB .
l5uexs3ekg_al00mdgrv4 [ i ] = ( ( rtB . ngfwu0pzmy_bnlywzniup [ i ] && rtB .
l5uexs3ekg_al00mdgrv4 [ i ] ) || ( rtB . filcmvu1jl_jzx3amusab [ i ] && rtB .
pfd4pcf5zp_fdinthrxmb [ i ] ) ) ; rtB . filcmvu1jl_jzx3amusab [ i ] = ( ( rtB
. grrh4e51co_nuebgmauvi [ i ] && rtB . n1vtun4qv5_guugdwf2m3 [ i ] ) || ( rtB
. a11mv2rz1m_dhamdvybc1 [ i ] && rtB . anupnn0jzd_ldqodwenvz [ i ] ) ) ; rtB
. pfd4pcf5zp_fdinthrxmb [ i ] = ( ( rtB . ocgbir3blb_bsqwvugooi [ i ] && rtB
. hqpggldqvx_bjvjhhzy4i [ i ] ) || ( rtB . bvb3obmjhw_dapv3jlyq5 [ i ] && rtB
. m2b5x0cy5i_ezqlmfzvpq [ i ] ) ) ; rtB . hqpggldqvx_bjvjhhzy4i [ i ] = ( (
rtB . cnyn5fudun_bjbgfqrolh [ i ] && rtB . e4wwqxwnup_dypejvacrn [ i ] ) || (
rtB . medh532pfo_owjr1h1vqy [ i ] && rtB . jyar2yqfuv_lxo5edjg3c [ i ] ) ) ;
} { real_T * pDataValues = ( real_T * ) rtDW . nmdky2lrb2 . DataPtr ; real_T
* pTimeValues = ( real_T * ) rtDW . nmdky2lrb2 . TimePtr ; int_T
currTimeIndex = rtDW . c5ev3bj0ey . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . nmdky2lrb2 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
c5ev3bj0ey . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . mqq53tujso_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . mqq53tujso_llw0u2ae0v [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
mqq53tujso_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { jienwguhcb = ( ( rtB . e10p5nijns_bhxxfovxdy [ i ] != 0.0 ) && ( rtB
. mqq53tujso_llw0u2ae0v [ i ] != 0.0 ) ) ; ja5gfozxwn = ( ( rtB .
dergw2ixg1_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . lmi2ccv2ko_nz4o0shxby [ i ]
!= 0.0 ) ) ; campykoil0 = jienwguhcb ^ ja5gfozxwn ; beuzyt1b0l = rtB .
hqpggldqvx_bjvjhhzy4i [ i ] ^ campykoil0 ; fkjf3yylwo = ( ( rtB .
elqzys50j2_g1smspu5ke [ i ] != 0.0 ) && ( rtB . ofbges4ydc_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; exduqiaqz5 = beuzyt1b0l ^ fkjf3yylwo ; anupfjg1uu = rtB .
filcmvu1jl_jzx3amusab [ i ] ^ exduqiaqz5 ; jiiidi153d = ( ( rtB .
ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB . gbuacuyyue_g2mlkqadfk [ i ]
!= 0.0 ) ) ; pvc4zbdx35 = anupfjg1uu ^ jiiidi153d ; ldbqp1e4fx = rtB .
pfd4pcf5zp_fdinthrxmb [ i ] ^ pvc4zbdx35 ; ii05lwzmrl = ldbqp1e4fx ^ rtB .
icmeug23yd [ i ] ; c1ptn0ync0 = rtB . l5uexs3ekg_al00mdgrv4 [ i ] ^
ii05lwzmrl ; p5sfuyrcif = ( ( rtB . pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 ) && (
rtB . d1x4uo2pps_cxarnvbvui [ i ] != 0.0 ) ) ; nnkm1kmeqe = c1ptn0ync0 ^
p5sfuyrcif ; rtB . mj20vcjz43_oyypvi4boh [ i ] = rtB . oykz5inwd1_o4f35lbcvx
[ i ] ^ nnkm1kmeqe ; rtB . m2b5x0cy5i_ezqlmfzvpq [ i ] = jienwguhcb ; rtB .
bvb3obmjhw_dapv3jlyq5 [ i ] = ja5gfozxwn ; rtB . ngfwu0pzmy_bnlywzniup [ i ]
= campykoil0 ; rtB . ocgbir3blb_bsqwvugooi [ i ] = beuzyt1b0l ; rtB .
grrh4e51co_nuebgmauvi [ i ] = fkjf3yylwo ; rtB . cnyn5fudun_bjbgfqrolh [ i ]
= exduqiaqz5 ; rtB . medh532pfo_owjr1h1vqy [ i ] = anupfjg1uu ; rtB .
jyar2yqfuv_lxo5edjg3c [ i ] = jiiidi153d ; rtB . e4wwqxwnup_dypejvacrn [ i ]
= pvc4zbdx35 ; rtB . a11mv2rz1m_dhamdvybc1 [ i ] = ldbqp1e4fx ; rtB .
anupnn0jzd_ldqodwenvz [ i ] = ii05lwzmrl ; rtB . n1vtun4qv5_guugdwf2m3 [ i ]
= c1ptn0ync0 ; rtB . gp45ioca2t_nyxm0bsxsn [ i ] = p5sfuyrcif ; rtB .
fpoyajajzt_icdfyazkhu [ i ] = nnkm1kmeqe ; } { real_T * pDataValues = (
real_T * ) rtDW . pkw4hqakgw . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . pkw4hqakgw . TimePtr ; int_T currTimeIndex = rtDW . iryr4bvyss .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . pkw4hqakgw . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . iryr4bvyss . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ksye3ripfw_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . ksye3ripfw_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . ksye3ripfw_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { exduqiaqz5 = ( ( rtB . ksye3ripfw_jwzvbuczlb [ i ] != 0.0 )
&& ( rtB . pfmfqr2dxw_pbm3vprmfu [ i ] != 0.0 ) ) ; rtB .
nfifkdatcc_m3yhjduhi1 [ i ] = ( rtB . mj20vcjz43_oyypvi4boh [ i ] &&
exduqiaqz5 ) ; nnkm1kmeqe = ( ( rtB . oykz5inwd1_o4f35lbcvx [ i ] && rtB .
fpoyajajzt_icdfyazkhu [ i ] ) || ( rtB . n1vtun4qv5_guugdwf2m3 [ i ] && rtB .
gp45ioca2t_nyxm0bsxsn [ i ] ) ) ; rtB . oth0yyzist_nvsvtgkap4 [ i ] =
exduqiaqz5 ; rtB . oykz5inwd1_o4f35lbcvx [ i ] = ( ( rtB .
pfd4pcf5zp_fdinthrxmb [ i ] && rtB . e4wwqxwnup_dypejvacrn [ i ] ) || ( rtB .
medh532pfo_owjr1h1vqy [ i ] && rtB . jyar2yqfuv_lxo5edjg3c [ i ] ) ) ; rtB .
fpoyajajzt_icdfyazkhu [ i ] = nnkm1kmeqe ; rtB . gp45ioca2t_nyxm0bsxsn [ i ]
= ( ( rtB . l5uexs3ekg_al00mdgrv4 [ i ] && rtB . anupnn0jzd_ldqodwenvz [ i ]
) || ( rtB . a11mv2rz1m_dhamdvybc1 [ i ] && rtB . icmeug23yd [ i ] ) ) ; rtB
. pfd4pcf5zp_fdinthrxmb [ i ] = ( ( rtB . hqpggldqvx_bjvjhhzy4i [ i ] && rtB
. ngfwu0pzmy_bnlywzniup [ i ] ) || ( rtB . m2b5x0cy5i_ezqlmfzvpq [ i ] && rtB
. bvb3obmjhw_dapv3jlyq5 [ i ] ) ) ; rtB . l5uexs3ekg_al00mdgrv4 [ i ] = ( (
rtB . filcmvu1jl_jzx3amusab [ i ] && rtB . cnyn5fudun_bjbgfqrolh [ i ] ) || (
rtB . ocgbir3blb_bsqwvugooi [ i ] && rtB . grrh4e51co_nuebgmauvi [ i ] ) ) ;
} { real_T * pDataValues = ( real_T * ) rtDW . ih233gw33i . DataPtr ; real_T
* pTimeValues = ( real_T * ) rtDW . ih233gw33i . TimePtr ; int_T
currTimeIndex = rtDW . pgjyomlnv4 . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . ih233gw33i . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
pgjyomlnv4 . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . djd21qahvl_dhmrxtyqop [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . djd21qahvl_dhmrxtyqop [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
djd21qahvl_dhmrxtyqop [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { nsr4ydnvvc = rtB . pfd4pcf5zp_fdinthrxmb [ i ] ; hetgucpepc = rtB .
l5uexs3ekg_al00mdgrv4 [ i ] ; dmzesfixdm = rtB . oykz5inwd1_o4f35lbcvx [ i ]
; p5sfuyrcif = rtB . gp45ioca2t_nyxm0bsxsn [ i ] ; nnkm1kmeqe = rtB .
fpoyajajzt_icdfyazkhu [ i ] ; efc3xbubya = rtB . nfifkdatcc_m3yhjduhi1 [ i ]
; eopxuynkdw = ( ( rtB . e10p5nijns_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
djd21qahvl_dhmrxtyqop [ i ] != 0.0 ) ) ; grxsvmner4 = ( ( rtB .
dergw2ixg1_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . mqq53tujso_llw0u2ae0v [ i ]
!= 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4 ; ja5gfozxwn = nsr4ydnvvc ^
jienwguhcb ; campykoil0 = ( ( rtB . elqzys50j2_g1smspu5ke [ i ] != 0.0 ) && (
rtB . lmi2ccv2ko_nz4o0shxby [ i ] != 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^
campykoil0 ; fkjf3yylwo = hetgucpepc ^ beuzyt1b0l ; exduqiaqz5 = ( ( rtB .
ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB . ofbges4ydc_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; anupfjg1uu = fkjf3yylwo ^ exduqiaqz5 ; jiiidi153d = dmzesfixdm ^
anupfjg1uu ; pvc4zbdx35 = ( ( rtB . j4xkqwcio0_mbvzarwird [ i ] != 0.0 ) && (
rtB . gbuacuyyue_g2mlkqadfk [ i ] != 0.0 ) ) ; ldbqp1e4fx = jiiidi153d ^
pvc4zbdx35 ; ii05lwzmrl = p5sfuyrcif ^ ldbqp1e4fx ; c1ptn0ync0 = ( ( rtB .
pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . gxc3nhmfwj_cl54gopm0x [ i ]
!= 0.0 ) ) ; ajl42h2nud = ii05lwzmrl ^ c1ptn0ync0 ; laqjanvpra = nnkm1kmeqe ^
ajl42h2nud ; ogkbxjw0bv = ( ( rtB . ksye3ripfw_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . d1x4uo2pps_cxarnvbvui [ i ] != 0.0 ) ) ; bf0vlo5opv = laqjanvpra ^
ogkbxjw0bv ; oeduxrzwtv = efc3xbubya ^ bf0vlo5opv ; n0s3wqoaow = ( ( rtB .
awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . pfmfqr2dxw_pbm3vprmfu [ i ]
!= 0.0 ) ) ; pfec5f4nay = ( oeduxrzwtv && n0s3wqoaow ) ; bf0vlo5opv = ( (
efc3xbubya && bf0vlo5opv ) || ( laqjanvpra && ogkbxjw0bv ) ) ; ogkbxjw0bv = (
( nnkm1kmeqe && ajl42h2nud ) || ( ii05lwzmrl && c1ptn0ync0 ) ) ; laqjanvpra =
( ( p5sfuyrcif && ldbqp1e4fx ) || ( jiiidi153d && pvc4zbdx35 ) ) ; ajl42h2nud
= ( ( dmzesfixdm && anupfjg1uu ) || ( fkjf3yylwo && exduqiaqz5 ) ) ;
efc3xbubya = ( ( hetgucpepc && beuzyt1b0l ) || ( ja5gfozxwn && campykoil0 ) )
; nnkm1kmeqe = ( ( rtB . dergw2ixg1_cv5hdgrwft [ i ] != 0.0 ) && ( rtB .
djd21qahvl_dhmrxtyqop [ i ] != 0.0 ) ) ; p5sfuyrcif = ( ( nsr4ydnvvc &&
jienwguhcb ) || ( eopxuynkdw && grxsvmner4 ) ) ; dmzesfixdm = nnkm1kmeqe ^
p5sfuyrcif ; hetgucpepc = ( ( rtB . elqzys50j2_g1smspu5ke [ i ] != 0.0 ) && (
rtB . mqq53tujso_llw0u2ae0v [ i ] != 0.0 ) ) ; nsr4ydnvvc = dmzesfixdm ^
hetgucpepc ; eopxuynkdw = efc3xbubya ^ nsr4ydnvvc ; grxsvmner4 = ( ( rtB .
ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB . lmi2ccv2ko_nz4o0shxby [ i ]
!= 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4 ; ja5gfozxwn = ajl42h2nud ^
jienwguhcb ; campykoil0 = ( ( rtB . j4xkqwcio0_mbvzarwird [ i ] != 0.0 ) && (
rtB . ofbges4ydc_fqdqrf4qbc [ i ] != 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^
campykoil0 ; fkjf3yylwo = laqjanvpra ^ beuzyt1b0l ; exduqiaqz5 = ( ( rtB .
pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . gbuacuyyue_g2mlkqadfk [ i ]
!= 0.0 ) ) ; anupfjg1uu = fkjf3yylwo ^ exduqiaqz5 ; jiiidi153d = ogkbxjw0bv ^
anupfjg1uu ; pvc4zbdx35 = ( ( rtB . ksye3ripfw_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . gxc3nhmfwj_cl54gopm0x [ i ] != 0.0 ) ) ; ldbqp1e4fx = jiiidi153d ^
pvc4zbdx35 ; ii05lwzmrl = bf0vlo5opv ^ ldbqp1e4fx ; c1ptn0ync0 = ii05lwzmrl ^
rtB . kahhteyho0 [ i ] ; ii05lwzmrl = ( ( pfec5f4nay && c1ptn0ync0 ) || (
ii05lwzmrl && rtB . kahhteyho0 [ i ] ) ) ; bf0vlo5opv = ( ( bf0vlo5opv &&
ldbqp1e4fx ) || ( jiiidi153d && pvc4zbdx35 ) ) ; ogkbxjw0bv = ( ( ogkbxjw0bv
&& anupfjg1uu ) || ( fkjf3yylwo && exduqiaqz5 ) ) ; laqjanvpra = ( (
laqjanvpra && beuzyt1b0l ) || ( ja5gfozxwn && campykoil0 ) ) ; ajl42h2nud = (
( ajl42h2nud && jienwguhcb ) || ( eopxuynkdw && grxsvmner4 ) ) ; efc3xbubya =
( ( efc3xbubya && nsr4ydnvvc ) || ( dmzesfixdm && hetgucpepc ) ) ; nnkm1kmeqe
= ( nnkm1kmeqe && p5sfuyrcif ) ; p5sfuyrcif = ( ( rtB . elqzys50j2_g1smspu5ke
[ i ] != 0.0 ) && ( rtB . djd21qahvl_dhmrxtyqop [ i ] != 0.0 ) ) ; dmzesfixdm
= nnkm1kmeqe ^ p5sfuyrcif ; hetgucpepc = efc3xbubya ^ dmzesfixdm ; nsr4ydnvvc
= ( ( rtB . ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB .
mqq53tujso_llw0u2ae0v [ i ] != 0.0 ) ) ; eopxuynkdw = hetgucpepc ^ nsr4ydnvvc
; grxsvmner4 = ajl42h2nud ^ eopxuynkdw ; jienwguhcb = ( ( rtB .
j4xkqwcio0_mbvzarwird [ i ] != 0.0 ) && ( rtB . lmi2ccv2ko_nz4o0shxby [ i ]
!= 0.0 ) ) ; ja5gfozxwn = grxsvmner4 ^ jienwguhcb ; campykoil0 = laqjanvpra ^
ja5gfozxwn ; beuzyt1b0l = ( ( rtB . pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 ) && (
rtB . ofbges4ydc_fqdqrf4qbc [ i ] != 0.0 ) ) ; fkjf3yylwo = campykoil0 ^
beuzyt1b0l ; exduqiaqz5 = ogkbxjw0bv ^ fkjf3yylwo ; anupfjg1uu = ( ( rtB .
ksye3ripfw_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . gbuacuyyue_g2mlkqadfk [ i ]
!= 0.0 ) ) ; jiiidi153d = exduqiaqz5 ^ anupfjg1uu ; pvc4zbdx35 = bf0vlo5opv ^
jiiidi153d ; ldbqp1e4fx = ( ( rtB . awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . gxc3nhmfwj_cl54gopm0x [ i ] != 0.0 ) ) ; e13yfxn2yf = pvc4zbdx35 ^
ldbqp1e4fx ; pvc4zbdx35 = ( ( ii05lwzmrl && e13yfxn2yf ) || ( pvc4zbdx35 &&
ldbqp1e4fx ) ) ; bf0vlo5opv = ( ( bf0vlo5opv && jiiidi153d ) || ( exduqiaqz5
&& anupfjg1uu ) ) ; ogkbxjw0bv = ( ( ogkbxjw0bv && fkjf3yylwo ) || (
campykoil0 && beuzyt1b0l ) ) ; laqjanvpra = ( ( laqjanvpra && ja5gfozxwn ) ||
( grxsvmner4 && jienwguhcb ) ) ; ajl42h2nud = ( ( ajl42h2nud && eopxuynkdw )
|| ( hetgucpepc && nsr4ydnvvc ) ) ; hetgucpepc = ( ( rtB .
ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB . djd21qahvl_dhmrxtyqop [ i ]
!= 0.0 ) ) ; efc3xbubya = ( ( efc3xbubya && dmzesfixdm ) || ( nnkm1kmeqe &&
p5sfuyrcif ) ) ; nnkm1kmeqe = hetgucpepc ^ efc3xbubya ; p5sfuyrcif =
ajl42h2nud ^ nnkm1kmeqe ; dmzesfixdm = ( ( rtB . j4xkqwcio0_mbvzarwird [ i ]
!= 0.0 ) && ( rtB . mqq53tujso_llw0u2ae0v [ i ] != 0.0 ) ) ; nsr4ydnvvc =
p5sfuyrcif ^ dmzesfixdm ; eopxuynkdw = laqjanvpra ^ nsr4ydnvvc ; grxsvmner4 =
( ( rtB . pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
lmi2ccv2ko_nz4o0shxby [ i ] != 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4
; ja5gfozxwn = ogkbxjw0bv ^ jienwguhcb ; campykoil0 = ( ( rtB .
ksye3ripfw_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . ofbges4ydc_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^ campykoil0 ; fkjf3yylwo = bf0vlo5opv ^
beuzyt1b0l ; exduqiaqz5 = ( ( rtB . awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . gbuacuyyue_g2mlkqadfk [ i ] != 0.0 ) ) ; anupfjg1uu = fkjf3yylwo ^
exduqiaqz5 ; rtB . fcp1tvzqdu [ i ] = pvc4zbdx35 ^ anupfjg1uu ; rtB .
filcmvu1jl_jzx3amusab [ i ] = eopxuynkdw ; rtB . hqpggldqvx_bjvjhhzy4i [ i ]
= grxsvmner4 ; rtB . m2b5x0cy5i_ezqlmfzvpq [ i ] = jienwguhcb ; rtB .
bvb3obmjhw_dapv3jlyq5 [ i ] = ja5gfozxwn ; rtB . ngfwu0pzmy_bnlywzniup [ i ]
= campykoil0 ; rtB . ocgbir3blb_bsqwvugooi [ i ] = beuzyt1b0l ; rtB .
grrh4e51co_nuebgmauvi [ i ] = fkjf3yylwo ; rtB . cnyn5fudun_bjbgfqrolh [ i ]
= exduqiaqz5 ; rtB . medh532pfo_owjr1h1vqy [ i ] = anupfjg1uu ; rtB .
e4wwqxwnup_dypejvacrn [ i ] = pvc4zbdx35 ; rtB . anupnn0jzd_ldqodwenvz [ i ]
= ii05lwzmrl ; rtB . n1vtun4qv5_guugdwf2m3 [ i ] = c1ptn0ync0 ; rtB .
a11mv2rz1m_dhamdvybc1 [ i ] = ajl42h2nud ; rtB . jyar2yqfuv_lxo5edjg3c [ i ]
= laqjanvpra ; rtB . g1dksagv0g_czkfpwuzm5 [ i ] = ogkbxjw0bv ; rtB .
homvkrudpv_mdoasc5av4 [ i ] = bf0vlo5opv ; rtB . h4v5kw10pe_m3ybdk4ikc [ i ]
= oeduxrzwtv ; rtB . a35pywq0em_jacdjrqyev [ i ] = n0s3wqoaow ; rtB .
pkc135vz30_h522xzlxvt [ i ] = pfec5f4nay ; rtB . l2t0l0hhqj_c0dok3111h [ i ]
= e13yfxn2yf ; rtB . nfifkdatcc_m3yhjduhi1 [ i ] = efc3xbubya ; rtB .
fpoyajajzt_icdfyazkhu [ i ] = nnkm1kmeqe ; rtB . gp45ioca2t_nyxm0bsxsn [ i ]
= p5sfuyrcif ; rtB . oykz5inwd1_o4f35lbcvx [ i ] = dmzesfixdm ; rtB .
l5uexs3ekg_al00mdgrv4 [ i ] = hetgucpepc ; rtB . pfd4pcf5zp_fdinthrxmb [ i ]
= nsr4ydnvvc ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . lfpipej4d5
. LoggedData ) , & rtB . fcp1tvzqdu [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { fkjf3yylwo = ( ( rtB . e4wwqxwnup_dypejvacrn [ i ] && rtB .
medh532pfo_owjr1h1vqy [ i ] ) || ( rtB . grrh4e51co_nuebgmauvi [ i ] && rtB .
cnyn5fudun_bjbgfqrolh [ i ] ) ) ; bf0vlo5opv = ( ( rtB .
homvkrudpv_mdoasc5av4 [ i ] && rtB . ocgbir3blb_bsqwvugooi [ i ] ) || ( rtB .
bvb3obmjhw_dapv3jlyq5 [ i ] && rtB . ngfwu0pzmy_bnlywzniup [ i ] ) ) ;
ogkbxjw0bv = ( ( rtB . g1dksagv0g_czkfpwuzm5 [ i ] && rtB .
m2b5x0cy5i_ezqlmfzvpq [ i ] ) || ( rtB . filcmvu1jl_jzx3amusab [ i ] && rtB .
hqpggldqvx_bjvjhhzy4i [ i ] ) ) ; laqjanvpra = ( ( rtB .
jyar2yqfuv_lxo5edjg3c [ i ] && rtB . pfd4pcf5zp_fdinthrxmb [ i ] ) || ( rtB .
gp45ioca2t_nyxm0bsxsn [ i ] && rtB . oykz5inwd1_o4f35lbcvx [ i ] ) ) ;
p5sfuyrcif = ( ( rtB . j4xkqwcio0_mbvzarwird [ i ] != 0.0 ) && ( rtB .
djd21qahvl_dhmrxtyqop [ i ] != 0.0 ) ) ; ajl42h2nud = ( ( rtB .
a11mv2rz1m_dhamdvybc1 [ i ] && rtB . fpoyajajzt_icdfyazkhu [ i ] ) || ( rtB .
l5uexs3ekg_al00mdgrv4 [ i ] && rtB . nfifkdatcc_m3yhjduhi1 [ i ] ) ) ;
efc3xbubya = p5sfuyrcif ^ ajl42h2nud ; nnkm1kmeqe = laqjanvpra ^ efc3xbubya ;
dmzesfixdm = ( ( rtB . pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
mqq53tujso_llw0u2ae0v [ i ] != 0.0 ) ) ; hetgucpepc = nnkm1kmeqe ^ dmzesfixdm
; nsr4ydnvvc = ogkbxjw0bv ^ hetgucpepc ; eopxuynkdw = ( ( rtB .
ksye3ripfw_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . lmi2ccv2ko_nz4o0shxby [ i ]
!= 0.0 ) ) ; grxsvmner4 = nsr4ydnvvc ^ eopxuynkdw ; jienwguhcb = bf0vlo5opv ^
grxsvmner4 ; ja5gfozxwn = ( ( rtB . awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . ofbges4ydc_fqdqrf4qbc [ i ] != 0.0 ) ) ; campykoil0 = jienwguhcb ^
ja5gfozxwn ; rtB . jkn5jguhvy [ i ] = fkjf3yylwo ^ campykoil0 ; rtB .
grrh4e51co_nuebgmauvi [ i ] = fkjf3yylwo ; rtB . homvkrudpv_mdoasc5av4 [ i ]
= bf0vlo5opv ; rtB . bvb3obmjhw_dapv3jlyq5 [ i ] = ja5gfozxwn ; rtB .
ngfwu0pzmy_bnlywzniup [ i ] = campykoil0 ; rtB . g1dksagv0g_czkfpwuzm5 [ i ]
= ogkbxjw0bv ; rtB . m2b5x0cy5i_ezqlmfzvpq [ i ] = jienwguhcb ; rtB .
filcmvu1jl_jzx3amusab [ i ] = eopxuynkdw ; rtB . hqpggldqvx_bjvjhhzy4i [ i ]
= grxsvmner4 ; rtB . jyar2yqfuv_lxo5edjg3c [ i ] = laqjanvpra ; rtB .
pfd4pcf5zp_fdinthrxmb [ i ] = nsr4ydnvvc ; rtB . gp45ioca2t_nyxm0bsxsn [ i ]
= p5sfuyrcif ; rtB . oykz5inwd1_o4f35lbcvx [ i ] = dmzesfixdm ; rtB .
a11mv2rz1m_dhamdvybc1 [ i ] = ajl42h2nud ; rtB . fpoyajajzt_icdfyazkhu [ i ]
= nnkm1kmeqe ; rtB . l5uexs3ekg_al00mdgrv4 [ i ] = hetgucpepc ; rtB .
nfifkdatcc_m3yhjduhi1 [ i ] = efc3xbubya ; } if ( ssGetLogOutput ( rtS ) ) {
{ double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ksm0c15pn3 . LoggedData ) , & rtB . jkn5jguhvy [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { jienwguhcb = ( ( rtB .
grrh4e51co_nuebgmauvi [ i ] && rtB . ngfwu0pzmy_bnlywzniup [ i ] ) || ( rtB .
m2b5x0cy5i_ezqlmfzvpq [ i ] && rtB . bvb3obmjhw_dapv3jlyq5 [ i ] ) ) ;
bf0vlo5opv = ( ( rtB . homvkrudpv_mdoasc5av4 [ i ] && rtB .
hqpggldqvx_bjvjhhzy4i [ i ] ) || ( rtB . pfd4pcf5zp_fdinthrxmb [ i ] && rtB .
filcmvu1jl_jzx3amusab [ i ] ) ) ; ogkbxjw0bv = ( ( rtB .
g1dksagv0g_czkfpwuzm5 [ i ] && rtB . l5uexs3ekg_al00mdgrv4 [ i ] ) || ( rtB .
fpoyajajzt_icdfyazkhu [ i ] && rtB . oykz5inwd1_o4f35lbcvx [ i ] ) ) ;
nnkm1kmeqe = ( ( rtB . pvbmqf02qf_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
djd21qahvl_dhmrxtyqop [ i ] != 0.0 ) ) ; laqjanvpra = ( ( rtB .
jyar2yqfuv_lxo5edjg3c [ i ] && rtB . nfifkdatcc_m3yhjduhi1 [ i ] ) || ( rtB .
gp45ioca2t_nyxm0bsxsn [ i ] && rtB . a11mv2rz1m_dhamdvybc1 [ i ] ) ) ;
ajl42h2nud = nnkm1kmeqe ^ laqjanvpra ; efc3xbubya = ogkbxjw0bv ^ ajl42h2nud ;
p5sfuyrcif = ( ( rtB . ksye3ripfw_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
mqq53tujso_llw0u2ae0v [ i ] != 0.0 ) ) ; dmzesfixdm = efc3xbubya ^ p5sfuyrcif
; hetgucpepc = bf0vlo5opv ^ dmzesfixdm ; nsr4ydnvvc = ( ( rtB .
awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . lmi2ccv2ko_nz4o0shxby [ i ]
!= 0.0 ) ) ; eopxuynkdw = hetgucpepc ^ nsr4ydnvvc ; rtB . d2qr5asfwj [ i ] =
jienwguhcb ^ eopxuynkdw ; rtB . m2b5x0cy5i_ezqlmfzvpq [ i ] = jienwguhcb ;
rtB . homvkrudpv_mdoasc5av4 [ i ] = bf0vlo5opv ; rtB . pfd4pcf5zp_fdinthrxmb
[ i ] = nsr4ydnvvc ; rtB . filcmvu1jl_jzx3amusab [ i ] = eopxuynkdw ; rtB .
g1dksagv0g_czkfpwuzm5 [ i ] = ogkbxjw0bv ; rtB . l5uexs3ekg_al00mdgrv4 [ i ]
= hetgucpepc ; rtB . fpoyajajzt_icdfyazkhu [ i ] = nnkm1kmeqe ; rtB .
oykz5inwd1_o4f35lbcvx [ i ] = dmzesfixdm ; rtB . jyar2yqfuv_lxo5edjg3c [ i ]
= laqjanvpra ; rtB . nfifkdatcc_m3yhjduhi1 [ i ] = efc3xbubya ; rtB .
gp45ioca2t_nyxm0bsxsn [ i ] = p5sfuyrcif ; rtB . a11mv2rz1m_dhamdvybc1 [ i ]
= ajl42h2nud ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . g2gvxr3gsi
. LoggedData ) , & rtB . d2qr5asfwj [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { hetgucpepc = ( ( rtB . m2b5x0cy5i_ezqlmfzvpq [ i ] && rtB .
filcmvu1jl_jzx3amusab [ i ] ) || ( rtB . l5uexs3ekg_al00mdgrv4 [ i ] && rtB .
pfd4pcf5zp_fdinthrxmb [ i ] ) ) ; bf0vlo5opv = ( ( rtB .
homvkrudpv_mdoasc5av4 [ i ] && rtB . oykz5inwd1_o4f35lbcvx [ i ] ) || ( rtB .
nfifkdatcc_m3yhjduhi1 [ i ] && rtB . gp45ioca2t_nyxm0bsxsn [ i ] ) ) ;
efc3xbubya = ( ( rtB . ksye3ripfw_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
djd21qahvl_dhmrxtyqop [ i ] != 0.0 ) ) ; ogkbxjw0bv = ( ( rtB .
g1dksagv0g_czkfpwuzm5 [ i ] && rtB . a11mv2rz1m_dhamdvybc1 [ i ] ) || ( rtB .
fpoyajajzt_icdfyazkhu [ i ] && rtB . jyar2yqfuv_lxo5edjg3c [ i ] ) ) ;
laqjanvpra = efc3xbubya ^ ogkbxjw0bv ; ajl42h2nud = bf0vlo5opv ^ laqjanvpra ;
nnkm1kmeqe = ( ( rtB . awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
mqq53tujso_llw0u2ae0v [ i ] != 0.0 ) ) ; p5sfuyrcif = ajl42h2nud ^ nnkm1kmeqe
; rtB . kkcpfq4kub [ i ] = hetgucpepc ^ p5sfuyrcif ; rtB .
l5uexs3ekg_al00mdgrv4 [ i ] = hetgucpepc ; rtB . homvkrudpv_mdoasc5av4 [ i ]
= bf0vlo5opv ; rtB . nfifkdatcc_m3yhjduhi1 [ i ] = efc3xbubya ; rtB .
gp45ioca2t_nyxm0bsxsn [ i ] = p5sfuyrcif ; rtB . g1dksagv0g_czkfpwuzm5 [ i ]
= ogkbxjw0bv ; rtB . a11mv2rz1m_dhamdvybc1 [ i ] = ajl42h2nud ; rtB .
fpoyajajzt_icdfyazkhu [ i ] = nnkm1kmeqe ; rtB . jyar2yqfuv_lxo5edjg3c [ i ]
= laqjanvpra ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . hjizvovpsx
. LoggedData ) , & rtB . kkcpfq4kub [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { ajl42h2nud = ( ( rtB . l5uexs3ekg_al00mdgrv4 [ i ] && rtB .
gp45ioca2t_nyxm0bsxsn [ i ] ) || ( rtB . a11mv2rz1m_dhamdvybc1 [ i ] && rtB .
fpoyajajzt_icdfyazkhu [ i ] ) ) ; nnkm1kmeqe = ( ( rtB .
awecfytk5f_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . djd21qahvl_dhmrxtyqop [ i ]
!= 0.0 ) ) ; bf0vlo5opv = ( ( rtB . homvkrudpv_mdoasc5av4 [ i ] && rtB .
jyar2yqfuv_lxo5edjg3c [ i ] ) || ( rtB . nfifkdatcc_m3yhjduhi1 [ i ] && rtB .
g1dksagv0g_czkfpwuzm5 [ i ] ) ) ; ogkbxjw0bv = nnkm1kmeqe ^ bf0vlo5opv ; rtB
. hoh3yov1xo [ i ] = ajl42h2nud ^ ogkbxjw0bv ; rtB . a11mv2rz1m_dhamdvybc1 [
i ] = ajl42h2nud ; rtB . fpoyajajzt_icdfyazkhu [ i ] = nnkm1kmeqe ; rtB .
homvkrudpv_mdoasc5av4 [ i ] = bf0vlo5opv ; rtB . g1dksagv0g_czkfpwuzm5 [ i ]
= ogkbxjw0bv ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . kr3cklxyu4
. LoggedData ) , & rtB . hoh3yov1xo [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . ellhmzh2h3 [ i ] = ( ( rtB . a11mv2rz1m_dhamdvybc1 [ i
] && rtB . g1dksagv0g_czkfpwuzm5 [ i ] ) || ( rtB . fpoyajajzt_icdfyazkhu [ i
] && rtB . homvkrudpv_mdoasc5av4 [ i ] ) ) ; } if ( ssGetLogOutput ( rtS ) )
{ { double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . f1xmxzfzp0 . LoggedData ) , & rtB . ellhmzh2h3 [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . j02lqvxrlg [ i ] = (
boolean_T ) ( ( ( rtB . e10p5nijns_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
gxc3nhmfwj_cl54gopm0x [ i ] != 0.0 ) ) ^ ( ( rtB . dergw2ixg1_cv5hdgrwft [ i
] != 0.0 ) && ( rtB . d1x4uo2pps_cxarnvbvui [ i ] != 0.0 ) ) ^ ( rtP .
Constant2_Value != 0.0 ) ^ ( ( rtB . elqzys50j2_g1smspu5ke [ i ] != 0.0 ) &&
( rtB . pfmfqr2dxw_pbm3vprmfu [ i ] != 0.0 ) ) ) ^ ( rtP . Constant1_Value !=
0.0 ) ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime (
rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . gfsafs2vvk . LoggedData
) , & rtB . j02lqvxrlg [ 0 ] , 0 ) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) {
rtB . g1pjgzybux [ i ] = ( boolean_T ) ( ( ( rtB . e10p5nijns_bhxxfovxdy [ i
] != 0.0 ) && ( rtB . gbuacuyyue_g2mlkqadfk [ i ] != 0.0 ) ) ^ ( ( rtB .
dergw2ixg1_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . gxc3nhmfwj_cl54gopm0x [ i ]
!= 0.0 ) ) ^ ( rtP . Constant2_Value != 0.0 ) ^ ( ( rtB .
elqzys50j2_g1smspu5ke [ i ] != 0.0 ) && ( rtB . d1x4uo2pps_cxarnvbvui [ i ]
!= 0.0 ) ) ^ ( rtP . Constant1_Value != 0.0 ) ^ ( ( rtB .
ggwznjfpkr_merlcviukg [ i ] != 0.0 ) && ( rtB . pfmfqr2dxw_pbm3vprmfu [ i ]
!= 0.0 ) ) ) ^ ( rtP . Constant3_Value != 0.0 ) ; } if ( ssGetLogOutput ( rtS
) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . gujjiko25c . LoggedData ) , & rtB . g1pjgzybux [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . cipref3upt [ i ] = rtB .
fbxikb3vxd_lnjdk5wtww [ i ] ^ rtB . lg3omraq1w_hv2ho1zopz [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . fqlzo2jf0t . LoggedData ) , & rtB . cipref3upt [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . mupymws3k3 [ i ] = rtB .
dwmn3bg2ap_ju13rw2h0m [ i ] ^ rtB . a2oqsdfcq5_jz50ptvnrg [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ncssq0cdqe . LoggedData ) , & rtB . mupymws3k3 [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . d41bodg12y [ i ] = rtB .
mj20vcjz43_oyypvi4boh [ i ] ^ rtB . oth0yyzist_nvsvtgkap4 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . eziwunhvb3 . LoggedData ) , & rtB . d41bodg12y [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . ayfvkpfmwj [ i ] = rtB .
h4v5kw10pe_m3ybdk4ikc [ i ] ^ rtB . a35pywq0em_jacdjrqyev [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . l2l4tukvx1 . LoggedData ) , & rtB . ayfvkpfmwj [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . di1pxs4wub [ i ] = rtB .
pkc135vz30_h522xzlxvt [ i ] ^ rtB . n1vtun4qv5_guugdwf2m3 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . feszysrdxp . LoggedData ) , & rtB . di1pxs4wub [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . nlvtydabhm [ i ] = rtB .
anupnn0jzd_ldqodwenvz [ i ] ^ rtB . l2t0l0hhqj_c0dok3111h [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . duuwmv1zl1 . LoggedData ) , & rtB . nlvtydabhm [ 0 ] , 0
) ; } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER
( tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlTerminate ( void ) { rt_FREE ( rtDW . pvltcsg3fd . RSimInfoPtr ) ;
rt_FREE ( rtDW . b1dguehs12 . RSimInfoPtr ) ; rt_FREE ( rtDW . lqtjsmd0c0 .
RSimInfoPtr ) ; rt_FREE ( rtDW . enjvq1rtga . RSimInfoPtr ) ; rt_FREE ( rtDW
. awjbgkvpml . RSimInfoPtr ) ; rt_FREE ( rtDW . bgsy1dpqct . RSimInfoPtr ) ;
rt_FREE ( rtDW . n2rvtyxgyn . RSimInfoPtr ) ; rt_FREE ( rtDW . ebwheh510k .
RSimInfoPtr ) ; rt_FREE ( rtDW . cjva2p5i1u . RSimInfoPtr ) ; rt_FREE ( rtDW
. j11louxedr . RSimInfoPtr ) ; rt_FREE ( rtDW . brkivscmyp . RSimInfoPtr ) ;
rt_FREE ( rtDW . bkhye3vpg5 . RSimInfoPtr ) ; rt_FREE ( rtDW . dub1rycbnz .
RSimInfoPtr ) ; rt_FREE ( rtDW . nmdky2lrb2 . RSimInfoPtr ) ; rt_FREE ( rtDW
. pkw4hqakgw . RSimInfoPtr ) ; rt_FREE ( rtDW . ih233gw33i . RSimInfoPtr ) ;
{ if ( rtDW . c1mkke1lc0 . AQHandles ) { sdiTerminateStreaming ( & rtDW .
c1mkke1lc0 . AQHandles ) ; } } { if ( rtDW . ajfirptzuw . AQHandles ) {
sdiTerminateStreaming ( & rtDW . ajfirptzuw . AQHandles ) ; } } } static void
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Normal_Multiplier_InXA1_NAB4_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) ; static void
mr_Normal_Multiplier_InXA1_NAB4_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i ,
j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Normal_Multiplier_InXA1_NAB4_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Normal_Multiplier_InXA1_NAB4_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Normal_Multiplier_InXA1_NAB4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Normal_Multiplier_InXA1_NAB4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArrayWithOffset ( void
* destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Normal_Multiplier_InXA1_NAB4_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_Normal_Multiplier_InXA1_NAB4_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Normal_Multiplier_InXA1_NAB4_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_Normal_Multiplier_InXA1_NAB4_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Normal_Multiplier_InXA1_NAB4_GetDWork
( ) { static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( ssDW
, 0 , 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char
* rtdwDataFieldNames [ 16 ] = { "rtDW.moidzuewht" , "rtDW.d25msrec11" ,
"rtDW.o4oqn42ujc" , "rtDW.kbdqbct1b2" , "rtDW.mltx3t5uia" , "rtDW.kddtm1uwe3"
, "rtDW.frhsfxyceb" , "rtDW.hzwxcai33x" , "rtDW.a14vmdf0iv" ,
"rtDW.eqyepdn0ua" , "rtDW.o4b50arjk4" , "rtDW.dnlhn3plya" , "rtDW.bao1yo2tyh"
, "rtDW.c5ev3bj0ey" , "rtDW.iryr4bvyss" , "rtDW.pgjyomlnv4" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 16 , rtdwDataFieldNames ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( rtDW . moidzuewht ) , sizeof ( rtDW . moidzuewht ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const void * ) & ( rtDW . d25msrec11 ) , sizeof ( rtDW . d25msrec11 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( rtDW . o4oqn42ujc ) , sizeof ( rtDW . o4oqn42ujc ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 3 , (
const void * ) & ( rtDW . kbdqbct1b2 ) , sizeof ( rtDW . kbdqbct1b2 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( rtDW . mltx3t5uia ) , sizeof ( rtDW . mltx3t5uia ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 5 , (
const void * ) & ( rtDW . kddtm1uwe3 ) , sizeof ( rtDW . kddtm1uwe3 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 6 , (
const void * ) & ( rtDW . frhsfxyceb ) , sizeof ( rtDW . frhsfxyceb ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 7 , (
const void * ) & ( rtDW . hzwxcai33x ) , sizeof ( rtDW . hzwxcai33x ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( rtDW . a14vmdf0iv ) , sizeof ( rtDW . a14vmdf0iv ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 9 , (
const void * ) & ( rtDW . eqyepdn0ua ) , sizeof ( rtDW . eqyepdn0ua ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 10 , (
const void * ) & ( rtDW . o4b50arjk4 ) , sizeof ( rtDW . o4b50arjk4 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( rtDW . dnlhn3plya ) , sizeof ( rtDW . dnlhn3plya ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 12 , (
const void * ) & ( rtDW . bao1yo2tyh ) , sizeof ( rtDW . bao1yo2tyh ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 13 , (
const void * ) & ( rtDW . c5ev3bj0ey ) , sizeof ( rtDW . c5ev3bj0ey ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const void * ) & ( rtDW . iryr4bvyss ) , sizeof ( rtDW . iryr4bvyss ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 15 , (
const void * ) & ( rtDW . pgjyomlnv4 ) , sizeof ( rtDW . pgjyomlnv4 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Normal_Multiplier_InXA1_NAB4_SetDWork ( const mxArray * ssDW ) { ( void )
ssDW ; mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) &
( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. moidzuewht ) , rtdwData , 0 , 0 , sizeof ( rtDW . moidzuewht ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. d25msrec11 ) , rtdwData , 0 , 1 , sizeof ( rtDW . d25msrec11 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. o4oqn42ujc ) , rtdwData , 0 , 2 , sizeof ( rtDW . o4oqn42ujc ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. kbdqbct1b2 ) , rtdwData , 0 , 3 , sizeof ( rtDW . kbdqbct1b2 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. mltx3t5uia ) , rtdwData , 0 , 4 , sizeof ( rtDW . mltx3t5uia ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. kddtm1uwe3 ) , rtdwData , 0 , 5 , sizeof ( rtDW . kddtm1uwe3 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. frhsfxyceb ) , rtdwData , 0 , 6 , sizeof ( rtDW . frhsfxyceb ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. hzwxcai33x ) , rtdwData , 0 , 7 , sizeof ( rtDW . hzwxcai33x ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. a14vmdf0iv ) , rtdwData , 0 , 8 , sizeof ( rtDW . a14vmdf0iv ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. eqyepdn0ua ) , rtdwData , 0 , 9 , sizeof ( rtDW . eqyepdn0ua ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. o4b50arjk4 ) , rtdwData , 0 , 10 , sizeof ( rtDW . o4b50arjk4 ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. dnlhn3plya ) , rtdwData , 0 , 11 , sizeof ( rtDW . dnlhn3plya ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. bao1yo2tyh ) , rtdwData , 0 , 12 , sizeof ( rtDW . bao1yo2tyh ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. c5ev3bj0ey ) , rtdwData , 0 , 13 , sizeof ( rtDW . c5ev3bj0ey ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. iryr4bvyss ) , rtdwData , 0 , 14 , sizeof ( rtDW . iryr4bvyss ) ) ;
mr_Normal_Multiplier_InXA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. pgjyomlnv4 ) , rtdwData , 0 , 15 , sizeof ( rtDW . pgjyomlnv4 ) ) ; } }
mxArray * mr_Normal_Multiplier_InXA1_NAB4_GetSimStateDisallowedBlocks ( ) {
return NULL ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 348 )
; ssSetNumBlockIO ( rtS , 18 ) ; ssSetNumBlockParams ( rtS , 2097187 ) ; }
void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 582112333U ) ; ssSetChecksumVal ( rtS , 1 ,
1551001858U ) ; ssSetChecksumVal ( rtS , 2 , 3445610677U ) ; ssSetChecksumVal
( rtS , 3 , 2818132646U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
Normal_Multiplier_InXA1_NAB4_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Normal_Multiplier_InXA1_NAB4" ) ; ssSetPath ( rtS ,
"Normal_Multiplier_InXA1_NAB4" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 0.01 ) ; ssSetStepSize ( rtS , 0.01 ) ; ssSetFixedStepSize ( rtS , 0.01
) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "FixedStepDiscrete" ) ; ssSetVariableStepSolver ( rtS
, 0 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 582112333U
) ; ssSetChecksumVal ( rtS , 1 , 1551001858U ) ; ssSetChecksumVal ( rtS , 2 ,
3445610677U ) ; ssSetChecksumVal ( rtS , 3 , 2818132646U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Normal_Multiplier_InXA1_NAB4_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Normal_Multiplier_InXA1_NAB4_GetDWork
) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Normal_Multiplier_InXA1_NAB4_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
