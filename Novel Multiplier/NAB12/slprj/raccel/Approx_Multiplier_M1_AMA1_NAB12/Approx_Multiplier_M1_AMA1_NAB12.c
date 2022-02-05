#include "rt_logging_mmi.h"
#include "Approx_Multiplier_M1_AMA1_NAB12_capi.h"
#include <math.h>
#include "Approx_Multiplier_M1_AMA1_NAB12.h"
#include "Approx_Multiplier_M1_AMA1_NAB12_private.h"
#include "Approx_Multiplier_M1_AMA1_NAB12_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 16 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
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
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
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
= sdiGetLabelFromChars (
"Approx_Multiplier_M1_AMA1_NAB12/Partial Product Row 8" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 65536 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 6 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. azi3a5jqgt . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cacf4f70-fa33-491e-b49d-8ef617f525e2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . azi3a5jqgt . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . azi3a5jqgt . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . azi3a5jqgt .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . azi3a5jqgt . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . azi3a5jqgt . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 65536 } ; rtDW . h2tvi3e4zc . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . h2tvi3e4zc . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . nmd0gdzcmn . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nmd0gdzcmn . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . f4eplfx1zr . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . f4eplfx1zr . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . luyniqswml . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . luyniqswml . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . nog1w1hukz . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nog1w1hukz . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . kh4yvixqbe . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . kh4yvixqbe . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . cjcdkzuapp . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . cjcdkzuapp . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . cg0bxzudwl . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . cg0bxzudwl . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . eiur0wrcts . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . eiur0wrcts . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . penqdnwkab . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . penqdnwkab . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . arch5uuns0 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . arch5uuns0 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ondinwor10 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ondinwor10 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . j5unx1snrf . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . j5unx1snrf . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . lqtv55rxal . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . lqtv55rxal . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . nugueput5p . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nugueput5p . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . e50hwlfetp . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . e50hwlfetp . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . g0xb4l5keh . TimePtr = fromwksInfo -> time ;
rtDW . g0xb4l5keh . DataPtr = fromwksInfo -> data ; rtDW . g0xb4l5keh .
RSimInfoPtr = fromwksInfo ; } rtDW . e0resaer1z . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . knljyxljhx ; const double * timePoints = ( double *
) rtDW . g0xb4l5keh . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . a4ka45qq3i
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . guvwlab5cj . TimePtr = fromwksInfo -> time ;
rtDW . guvwlab5cj . DataPtr = fromwksInfo -> data ; rtDW . guvwlab5cj .
RSimInfoPtr = fromwksInfo ; } rtDW . b5vx33zofm . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . cibzpdmmhr ; const double * timePoints = ( double *
) rtDW . guvwlab5cj . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . liwlvxel1g
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . ly2u0svbhz . TimePtr = fromwksInfo -> time ;
rtDW . ly2u0svbhz . DataPtr = fromwksInfo -> data ; rtDW . ly2u0svbhz .
RSimInfoPtr = fromwksInfo ; } rtDW . gcwskomyjc . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . jtcicpj2sm ; const double * timePoints = ( double *
) rtDW . ly2u0svbhz . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . pjfm2molyz
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . k4pmebkxm0 . TimePtr = fromwksInfo -> time ;
rtDW . k4pmebkxm0 . DataPtr = fromwksInfo -> data ; rtDW . k4pmebkxm0 .
RSimInfoPtr = fromwksInfo ; } rtDW . pzdmkrguwq . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . lsq2kpx252 ; const double * timePoints = ( double *
) rtDW . k4pmebkxm0 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . pcu5b3ghhi
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . dvrypl0qlq . TimePtr = fromwksInfo -> time ;
rtDW . dvrypl0qlq . DataPtr = fromwksInfo -> data ; rtDW . dvrypl0qlq .
RSimInfoPtr = fromwksInfo ; } rtDW . j310mstkss . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . eabcjupldh ; const double * timePoints = ( double *
) rtDW . dvrypl0qlq . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . hmjfatyrl4
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . k43hkxinwx . TimePtr = fromwksInfo -> time ;
rtDW . k43hkxinwx . DataPtr = fromwksInfo -> data ; rtDW . k43hkxinwx .
RSimInfoPtr = fromwksInfo ; } rtDW . mwqvaddvfl . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . nwn5t1uwqp ; const double * timePoints = ( double *
) rtDW . k43hkxinwx . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . f3iigipiku
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . nnintsv2v5 . TimePtr = fromwksInfo -> time ;
rtDW . nnintsv2v5 . DataPtr = fromwksInfo -> data ; rtDW . nnintsv2v5 .
RSimInfoPtr = fromwksInfo ; } rtDW . jw3bgkm4th . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . dl1isdhfyz ; const double * timePoints = ( double *
) rtDW . nnintsv2v5 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . a11comamzj
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . glchecpn25 . TimePtr = fromwksInfo -> time ;
rtDW . glchecpn25 . DataPtr = fromwksInfo -> data ; rtDW . glchecpn25 .
RSimInfoPtr = fromwksInfo ; } rtDW . djvjedwkym . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . oniqdvpsin ; const double * timePoints = ( double *
) rtDW . glchecpn25 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . h3gwww4axl
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . fghyjkm11b . TimePtr = fromwksInfo -> time ;
rtDW . fghyjkm11b . DataPtr = fromwksInfo -> data ; rtDW . fghyjkm11b .
RSimInfoPtr = fromwksInfo ; } rtDW . nxq3votgjx . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . fbuzu2oh1p ; const double * timePoints = ( double *
) rtDW . fghyjkm11b . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . jvs3kxs40w
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . ofdt3igasd . TimePtr = fromwksInfo -> time ;
rtDW . ofdt3igasd . DataPtr = fromwksInfo -> data ; rtDW . ofdt3igasd .
RSimInfoPtr = fromwksInfo ; } rtDW . hlmig0afwy . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . obilf4y22j ; const double * timePoints = ( double *
) rtDW . ofdt3igasd . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . c0y1ylaiwq
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . nxbtbx35wl . TimePtr = fromwksInfo -> time ;
rtDW . nxbtbx35wl . DataPtr = fromwksInfo -> data ; rtDW . nxbtbx35wl .
RSimInfoPtr = fromwksInfo ; } rtDW . hol1rnwm5o . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . mxzvbg4ftd ; const double * timePoints = ( double *
) rtDW . nxbtbx35wl . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . ljlsms1abt
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . cggw1zeixd . TimePtr = fromwksInfo -> time ;
rtDW . cggw1zeixd . DataPtr = fromwksInfo -> data ; rtDW . cggw1zeixd .
RSimInfoPtr = fromwksInfo ; } rtDW . ddavbq1tqq . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ozpe3grulu ; const double * timePoints = ( double *
) rtDW . cggw1zeixd . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . czletarm4o
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . koghksg1kx . TimePtr = fromwksInfo -> time ;
rtDW . koghksg1kx . DataPtr = fromwksInfo -> data ; rtDW . koghksg1kx .
RSimInfoPtr = fromwksInfo ; } rtDW . gj4wn3ah3r . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . daspqe2aoe ; const double * timePoints = ( double *
) rtDW . koghksg1kx . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . hjp4ic2mxc
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . g3jmse5nhb . TimePtr = fromwksInfo -> time ;
rtDW . g3jmse5nhb . DataPtr = fromwksInfo -> data ; rtDW . g3jmse5nhb .
RSimInfoPtr = fromwksInfo ; } rtDW . a42hiitwvh . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . mv5dusxviz ; const double * timePoints = ( double *
) rtDW . g3jmse5nhb . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . atu2lxmomi
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . nbr0vpfhyq . TimePtr = fromwksInfo -> time ;
rtDW . nbr0vpfhyq . DataPtr = fromwksInfo -> data ; rtDW . nbr0vpfhyq .
RSimInfoPtr = fromwksInfo ; } rtDW . ghhsf1sxoz . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . oakvbgle2d ; const double * timePoints = ( double *
) rtDW . nbr0vpfhyq . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . omkjsjveyj
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . m5n310htgl . TimePtr = fromwksInfo -> time ;
rtDW . m5n310htgl . DataPtr = fromwksInfo -> data ; rtDW . m5n310htgl .
RSimInfoPtr = fromwksInfo ; } rtDW . lrtzlied03 . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . heuczihubc ; const double * timePoints = ( double *
) rtDW . m5n310htgl . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . f0skiflgxl
= 0 ; } } } void MdlOutputs ( int_T tid ) { int32_T i ; boolean_T bh3x0txmep
; boolean_T bpiyyozbli ; boolean_T cdlkwc2ls5 ; boolean_T cjrls0qj5w ;
boolean_T cmu5r52zus ; boolean_T dff1womlyo ; boolean_T dp3ky5mqwb ;
boolean_T dx0jrmvjat ; boolean_T faz35ftyoo ; boolean_T g0vtxlenkf ;
boolean_T gbtzjeidoo ; boolean_T hllmepvouh ; boolean_T htj2ju4onh ;
boolean_T ii5cdjkgoe ; boolean_T iwfl35rfeu ; boolean_T j1yh4neqyt ;
boolean_T jzelessou3 ; boolean_T lmrwahoeoz ; boolean_T n154m1grse ;
boolean_T nazzybkhxz ; boolean_T nonu0dvgna ; boolean_T nrz5hhizo5 ;
boolean_T ocxqcdf3dl ; boolean_T ovtnararkh ; boolean_T pmcq3pvib0 ;
boolean_T pnrhg4ujxe ; { real_T * pDataValues = ( real_T * ) rtDW .
g0xb4l5keh . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . g0xb4l5keh
. TimePtr ; int_T currTimeIndex = rtDW . e0resaer1z . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . g0xb4l5keh . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . e0resaer1z . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . b00nhbi1vn_mbvzarwird [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . b00nhbi1vn_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . knljyxljhx ; int_T *
zcTimeIndicesIdx = & rtDW . a4ka45qq3i ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
b00nhbi1vn_mbvzarwird [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . guvwlab5cj . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . guvwlab5cj . TimePtr ; int_T currTimeIndex = rtDW . b5vx33zofm .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . guvwlab5cj . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . b5vx33zofm . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . erimzpqpyv_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . erimzpqpyv_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . cibzpdmmhr ; int_T *
zcTimeIndicesIdx = & rtDW . liwlvxel1g ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
erimzpqpyv_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . liewt1idy0 [ i ] = ( ( rtB . b00nhbi1vn_mbvzarwird [ i ] !=
0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . azi3a5jqgt . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . azi3a5jqgt . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . liewt1idy0 [ 0 ] + 0 ) ; } } }
{ real_T * pDataValues = ( real_T * ) rtDW . ly2u0svbhz . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . ly2u0svbhz . TimePtr ; int_T currTimeIndex
= rtDW . gcwskomyjc . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
ly2u0svbhz . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . gcwskomyjc .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
fdzewummhp_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . fdzewummhp_kkiq3xxxve [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . jtcicpj2sm ; int_T * zcTimeIndicesIdx = & rtDW . pjfm2molyz ; int_T
zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( *
zcTimeIndicesIdx < numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t >
pTimeValues [ zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) &&
( t > pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx =
zcTimeIndices [ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [
zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 =
pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; }
else { t1 = pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 -
t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 =
pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
fdzewummhp_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . k4pmebkxm0 . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . k4pmebkxm0 . TimePtr ; int_T currTimeIndex = rtDW . pzdmkrguwq .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . k4pmebkxm0 . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . pzdmkrguwq . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . cenecddxru_cxarnvbvui [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . cenecddxru_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . lsq2kpx252 ; int_T *
zcTimeIndicesIdx = & rtDW . pcu5b3ghhi ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
cenecddxru_cxarnvbvui [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . c3f5xp54js [ i ] = ( ( rtB . fdzewummhp_kkiq3xxxve [ i ] !=
0.0 ) && ( rtB . cenecddxru_cxarnvbvui [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . h2tvi3e4zc
. LoggedData ) , & rtB . c3f5xp54js [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . c5vk0yu1pa_guugdwf2m3 [ i ] = ( ( rtB .
fdzewummhp_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [ i ]
!= 0.0 ) ) ; } { real_T * pDataValues = ( real_T * ) rtDW . dvrypl0qlq .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . dvrypl0qlq . TimePtr ;
int_T currTimeIndex = rtDW . j310mstkss . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . dvrypl0qlq . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . j310mstkss . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . jjfqup1kdt_bhxxfovxdy [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . jjfqup1kdt_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . eabcjupldh ; int_T *
zcTimeIndicesIdx = & rtDW . hmjfatyrl4 ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
jjfqup1kdt_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { bh3x0txmep = rtB . c5vk0yu1pa_guugdwf2m3 [ i ] ; hllmepvouh = ( (
rtB . jjfqup1kdt_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . cenecddxru_cxarnvbvui [
i ] != 0.0 ) ) ; rtB . lqx12b0xy1 [ i ] = ( ( bh3x0txmep && hllmepvouh && (
rtP . Constant1_Value != 0.0 ) ) || ( ( ! bh3x0txmep ) && ( ! hllmepvouh ) &&
( rtP . Constant1_Value != 0.0 ) ) ) ; rtB . bxmusuqb2k_ldqodwenvz [ i ] =
hllmepvouh ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . nmd0gdzcmn . LoggedData ) , & rtB . lqx12b0xy1 [ 0 ] , 0
) ; } } } } { real_T * pDataValues = ( real_T * ) rtDW . k43hkxinwx . DataPtr
; real_T * pTimeValues = ( real_T * ) rtDW . k43hkxinwx . TimePtr ; int_T
currTimeIndex = rtDW . mwqvaddvfl . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . k43hkxinwx . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
mwqvaddvfl . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . dywfleyaaj_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . dywfleyaaj_pbm3vprmfu [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . nwn5t1uwqp ; int_T * zcTimeIndicesIdx = & rtDW .
f3iigipiku ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
numZcTimes = 1 ; if ( * zcTimeIndicesIdx < numZcTimes ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [ zcIdx ] ) { while ( *
zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t > pTimeValues [ zcIdx ] ) ) { (
* zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; } }
} else { if ( t >= pTimeValues [ zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) <
pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) {
TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 = pTimeValues [ zcIdx - 1 ] ;
TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } }
} { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 =
pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; if ( zcIdx
== 0 ) { d2 = d1 ; } ( & rtB . dywfleyaaj_pbm3vprmfu [ 0 ] ) [ elIdx ] = (
real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } }
} } } { real_T * pDataValues = ( real_T * ) rtDW . nnintsv2v5 . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . nnintsv2v5 . TimePtr ; int_T
currTimeIndex = rtDW . jw3bgkm4th . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . nnintsv2v5 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
jw3bgkm4th . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . jsancbgopo_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . jsancbgopo_cv5hdgrwft [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . dl1isdhfyz ; int_T * zcTimeIndicesIdx = & rtDW .
a11comamzj ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
numZcTimes = 1 ; if ( * zcTimeIndicesIdx < numZcTimes ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [ zcIdx ] ) { while ( *
zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t > pTimeValues [ zcIdx ] ) ) { (
* zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; } }
} else { if ( t >= pTimeValues [ zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) <
pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) {
TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 = pTimeValues [ zcIdx - 1 ] ;
TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } }
} { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 =
pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; if ( zcIdx
== 0 ) { d2 = d1 ; } ( & rtB . jsancbgopo_cv5hdgrwft [ 0 ] ) [ elIdx ] = (
real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } }
} } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . jecipoa5if_dhamdvybc1 [ i ] =
( ( rtB . dywfleyaaj_pbm3vprmfu [ i ] != 0.0 ) && ( rtB .
jsancbgopo_cv5hdgrwft [ i ] != 0.0 ) ) ; ocxqcdf3dl = ( ( rtB .
jjfqup1kdt_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . jsancbgopo_cv5hdgrwft [ i ]
!= 0.0 ) ) ; rtB . d5yq5izpze_lxo5edjg3c [ i ] = ( ocxqcdf3dl || rtB .
gtqmwx3mzy ) ; rtB . bion2p5x4o_dypejvacrn [ i ] = ocxqcdf3dl ; } { real_T *
pDataValues = ( real_T * ) rtDW . glchecpn25 . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . glchecpn25 . TimePtr ; int_T currTimeIndex = rtDW .
djvjedwkym . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . glchecpn25 .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . djvjedwkym . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
dtfzsplxv3_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . dtfzsplxv3_fqdqrf4qbc [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . oniqdvpsin ; int_T * zcTimeIndicesIdx = & rtDW . h3gwww4axl ; int_T
zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( *
zcTimeIndicesIdx < numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t >
pTimeValues [ zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) &&
( t > pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx =
zcTimeIndices [ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [
zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 =
pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; }
else { t1 = pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 -
t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 =
pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
dtfzsplxv3_fqdqrf4qbc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { nazzybkhxz = rtB . jecipoa5if_dhamdvybc1 [ i ] ; faz35ftyoo = ( (
rtB . dtfzsplxv3_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . jsancbgopo_cv5hdgrwft [
i ] != 0.0 ) ) ; ocxqcdf3dl = ( rtB . d5yq5izpze_lxo5edjg3c [ i ] || (
faz35ftyoo && ( rtP . Constant9_Value != 0.0 ) ) ) ; rtB .
leszdn4qzy_nuebgmauvi [ i ] = ( ( nazzybkhxz && ocxqcdf3dl && ( rtP .
Constant10_Value != 0.0 ) ) || ( ( ! nazzybkhxz ) && ( ! ocxqcdf3dl ) && (
rtP . Constant10_Value != 0.0 ) ) ) ; rtB . o4ybcku3w0_owjr1h1vqy [ i ] =
faz35ftyoo ; rtB . dsv5ciwjm3_bjbgfqrolh [ i ] = ocxqcdf3dl ; } { real_T *
pDataValues = ( real_T * ) rtDW . fghyjkm11b . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . fghyjkm11b . TimePtr ; int_T currTimeIndex = rtDW .
nxq3votgjx . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . fghyjkm11b .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . nxq3votgjx . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
pxtugw21md_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . pxtugw21md_g2mlkqadfk [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . fbuzu2oh1p ; int_T * zcTimeIndicesIdx = & rtDW . jvs3kxs40w ; int_T
zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( *
zcTimeIndicesIdx < numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t >
pTimeValues [ zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) &&
( t > pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx =
zcTimeIndices [ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [
zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 =
pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; }
else { t1 = pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 -
t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 =
pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
pxtugw21md_g2mlkqadfk [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . ofdt3igasd . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . ofdt3igasd . TimePtr ; int_T currTimeIndex = rtDW . hlmig0afwy .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ofdt3igasd . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hlmig0afwy . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . g4thlbnlje_g1smspu5ke [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . g4thlbnlje_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . obilf4y22j ; int_T *
zcTimeIndicesIdx = & rtDW . c0y1ylaiwq ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
g4thlbnlje_g1smspu5ke [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { faz35ftyoo = rtB . o4ybcku3w0_owjr1h1vqy [ i ] ; bh3x0txmep = rtB .
d5yq5izpze_lxo5edjg3c [ i ] ; ocxqcdf3dl = rtB . bion2p5x4o_dypejvacrn [ i ]
; ovtnararkh = rtB . leszdn4qzy_nuebgmauvi [ i ] ; jzelessou3 = ( ( rtB .
pxtugw21md_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . g4thlbnlje_g1smspu5ke [ i ]
!= 0.0 ) ) ; nazzybkhxz = ( ( rtB . dywfleyaaj_pbm3vprmfu [ i ] != 0.0 ) && (
rtB . g4thlbnlje_g1smspu5ke [ i ] != 0.0 ) ) ; faz35ftyoo = ( ( faz35ftyoo &&
bh3x0txmep && ( rtP . Constant9_Value != 0.0 ) ) || ( ( ! faz35ftyoo ) && ( !
bh3x0txmep ) && ( rtP . Constant9_Value != 0.0 ) ) ) ; bh3x0txmep = ( ( rtB .
dtfzsplxv3_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . g4thlbnlje_g1smspu5ke [ i ]
!= 0.0 ) ) ; ocxqcdf3dl = ( ( ( rtP . Constant_Value != 0.0 ) && ocxqcdf3dl
&& ( rtP . Constant_Value != 0.0 ) ) || ( rtB . d55hvhulp0 && ( ! ocxqcdf3dl
) && ( rtP . Constant_Value != 0.0 ) ) ) ; lmrwahoeoz = ( ( rtB .
jjfqup1kdt_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . g4thlbnlje_g1smspu5ke [ i ]
!= 0.0 ) ) ; j1yh4neqyt = ( ( rtB . fdzewummhp_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . jsancbgopo_cv5hdgrwft [ i ] != 0.0 ) ) ; nonu0dvgna = ( lmrwahoeoz || (
j1yh4neqyt && ( rtP . Constant7_Value != 0.0 ) ) ) ; dx0jrmvjat = (
bh3x0txmep || ( ocxqcdf3dl && nonu0dvgna ) ) ; cmu5r52zus = ( nazzybkhxz || (
faz35ftyoo && dx0jrmvjat ) ) ; rtB . jq3zaop5cn_jzx3amusab [ i ] = ( (
ovtnararkh && jzelessou3 && cmu5r52zus ) || ( ( ! ovtnararkh ) && ( !
jzelessou3 ) && cmu5r52zus ) ) ; rtB . jzubkqmxb5_bsqwvugooi [ i ] =
jzelessou3 ; rtB . mgwgq5lwlt_lnjdk5wtww [ i ] = nazzybkhxz ; rtB .
etwythiorx_hv2ho1zopz [ i ] = lmrwahoeoz ; rtB . ozim03upna_bnlywzniup [ i ]
= j1yh4neqyt ; rtB . m15wwk5ouv_dapv3jlyq5 [ i ] = nonu0dvgna ; rtB .
dwlcmrswsg_ezqlmfzvpq [ i ] = dx0jrmvjat ; rtB . lejryoy10m_bjvjhhzy4i [ i ]
= cmu5r52zus ; rtB . bion2p5x4o_dypejvacrn [ i ] = ocxqcdf3dl ; rtB .
d5yq5izpze_lxo5edjg3c [ i ] = bh3x0txmep ; rtB . o4ybcku3w0_owjr1h1vqy [ i ]
= faz35ftyoo ; } { real_T * pDataValues = ( real_T * ) rtDW . nxbtbx35wl .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . nxbtbx35wl . TimePtr ;
int_T currTimeIndex = rtDW . hol1rnwm5o . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . nxbtbx35wl . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hol1rnwm5o . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . hg35nvtbow_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . hg35nvtbow_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . mxzvbg4ftd ; int_T *
zcTimeIndicesIdx = & rtDW . ljlsms1abt ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
hg35nvtbow_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . cggw1zeixd . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . cggw1zeixd . TimePtr ; int_T currTimeIndex = rtDW . ddavbq1tqq .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . cggw1zeixd . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ddavbq1tqq . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . dyys5czzzo_nz4o0shxby [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . dyys5czzzo_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . ozpe3grulu ; int_T *
zcTimeIndicesIdx = & rtDW . czletarm4o ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
dyys5czzzo_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { faz35ftyoo = rtB . o4ybcku3w0_owjr1h1vqy [ i ] ; nazzybkhxz = rtB .
mgwgq5lwlt_lnjdk5wtww [ i ] ; dx0jrmvjat = rtB . dwlcmrswsg_ezqlmfzvpq [ i ]
; ocxqcdf3dl = rtB . bion2p5x4o_dypejvacrn [ i ] ; bh3x0txmep = rtB .
d5yq5izpze_lxo5edjg3c [ i ] ; nonu0dvgna = rtB . m15wwk5ouv_dapv3jlyq5 [ i ]
; j1yh4neqyt = rtB . ozim03upna_bnlywzniup [ i ] ; lmrwahoeoz = rtB .
etwythiorx_hv2ho1zopz [ i ] ; htj2ju4onh = rtB . jq3zaop5cn_jzx3amusab [ i ]
; dff1womlyo = ( ( rtB . hg35nvtbow_merlcviukg [ i ] != 0.0 ) && ( rtB .
dyys5czzzo_nz4o0shxby [ i ] != 0.0 ) ) ; ovtnararkh = ( ( rtB .
pxtugw21md_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . dyys5czzzo_nz4o0shxby [ i ]
!= 0.0 ) ) ; dx0jrmvjat = ( ( faz35ftyoo && nazzybkhxz && dx0jrmvjat ) || ( (
! faz35ftyoo ) && ( ! nazzybkhxz ) && dx0jrmvjat ) ) ; nazzybkhxz = ( ( rtB .
dywfleyaaj_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . dyys5czzzo_nz4o0shxby [ i ]
!= 0.0 ) ) ; nonu0dvgna = ( ( ocxqcdf3dl && bh3x0txmep && nonu0dvgna ) || ( (
! ocxqcdf3dl ) && ( ! bh3x0txmep ) && nonu0dvgna ) ) ; faz35ftyoo = ( ( rtB .
dtfzsplxv3_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . dyys5czzzo_nz4o0shxby [ i ]
!= 0.0 ) ) ; j1yh4neqyt = ( ( j1yh4neqyt && lmrwahoeoz && ( rtP .
Constant7_Value != 0.0 ) ) || ( ( ! j1yh4neqyt ) && ( ! lmrwahoeoz ) && ( rtP
. Constant7_Value != 0.0 ) ) ) ; lmrwahoeoz = ( ( rtB . jjfqup1kdt_bhxxfovxdy
[ i ] != 0.0 ) && ( rtB . dyys5czzzo_nz4o0shxby [ i ] != 0.0 ) ) ; bh3x0txmep
= ( ( rtB . fdzewummhp_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
g4thlbnlje_g1smspu5ke [ i ] != 0.0 ) ) ; ocxqcdf3dl = ( lmrwahoeoz || (
bh3x0txmep && ( rtP . Constant6_Value != 0.0 ) ) ) ; cmu5r52zus = (
faz35ftyoo || ( j1yh4neqyt && ocxqcdf3dl ) ) ; ii5cdjkgoe = ( nazzybkhxz || (
nonu0dvgna && cmu5r52zus ) ) ; nrz5hhizo5 = ( ovtnararkh || ( dx0jrmvjat &&
ii5cdjkgoe ) ) ; rtB . kvv0apejuc_nyxm0bsxsn [ i ] = ( ( htj2ju4onh &&
dff1womlyo && nrz5hhizo5 ) || ( ( ! htj2ju4onh ) && ( ! dff1womlyo ) &&
nrz5hhizo5 ) ) ; rtB . pk2wucixbq_fdinthrxmb [ i ] = dff1womlyo ; rtB .
ehhud2fofx_al00mdgrv4 [ i ] = ovtnararkh ; rtB . lkht5ggrzj_ju13rw2h0m [ i ]
= cmu5r52zus ; rtB . hu3zsxmvrk_jz50ptvnrg [ i ] = ii5cdjkgoe ; rtB .
eahpsmgiif_o4f35lbcvx [ i ] = nrz5hhizo5 ; rtB . etwythiorx_hv2ho1zopz [ i ]
= lmrwahoeoz ; rtB . ozim03upna_bnlywzniup [ i ] = j1yh4neqyt ; rtB .
m15wwk5ouv_dapv3jlyq5 [ i ] = nonu0dvgna ; rtB . d5yq5izpze_lxo5edjg3c [ i ]
= bh3x0txmep ; rtB . bion2p5x4o_dypejvacrn [ i ] = ocxqcdf3dl ; rtB .
dwlcmrswsg_ezqlmfzvpq [ i ] = dx0jrmvjat ; rtB . mgwgq5lwlt_lnjdk5wtww [ i ]
= nazzybkhxz ; rtB . o4ybcku3w0_owjr1h1vqy [ i ] = faz35ftyoo ; } { real_T *
pDataValues = ( real_T * ) rtDW . koghksg1kx . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . koghksg1kx . TimePtr ; int_T currTimeIndex = rtDW .
gj4wn3ah3r . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . koghksg1kx .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . gj4wn3ah3r . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
fhepxarbas_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . fhepxarbas_ppxrqq0gsf [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . daspqe2aoe ; int_T * zcTimeIndicesIdx = & rtDW . hjp4ic2mxc ; int_T
zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( *
zcTimeIndicesIdx < numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t >
pTimeValues [ zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) &&
( t > pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx =
zcTimeIndices [ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [
zcIdx ] && ( ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 =
pTimeValues [ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; }
else { t1 = pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 -
t ) / ( t2 - t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 =
pDataValues [ TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
fhepxarbas_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . g3jmse5nhb . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . g3jmse5nhb . TimePtr ; int_T currTimeIndex = rtDW . a42hiitwvh .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . g3jmse5nhb . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . a42hiitwvh . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . i0sfrtsgjw_llw0u2ae0v [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . i0sfrtsgjw_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . mv5dusxviz ; int_T *
zcTimeIndicesIdx = & rtDW . atu2lxmomi ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
i0sfrtsgjw_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { dx0jrmvjat = rtB . dwlcmrswsg_ezqlmfzvpq [ i ] ; ovtnararkh = rtB .
ehhud2fofx_al00mdgrv4 [ i ] ; ii5cdjkgoe = rtB . hu3zsxmvrk_jz50ptvnrg [ i ]
; nonu0dvgna = rtB . m15wwk5ouv_dapv3jlyq5 [ i ] ; nazzybkhxz = rtB .
mgwgq5lwlt_lnjdk5wtww [ i ] ; cmu5r52zus = rtB . lkht5ggrzj_ju13rw2h0m [ i ]
; j1yh4neqyt = rtB . ozim03upna_bnlywzniup [ i ] ; faz35ftyoo = rtB .
o4ybcku3w0_owjr1h1vqy [ i ] ; ocxqcdf3dl = rtB . bion2p5x4o_dypejvacrn [ i ]
; bh3x0txmep = rtB . d5yq5izpze_lxo5edjg3c [ i ] ; lmrwahoeoz = rtB .
etwythiorx_hv2ho1zopz [ i ] ; pnrhg4ujxe = rtB . kvv0apejuc_nyxm0bsxsn [ i ]
; bpiyyozbli = ( ( rtB . fhepxarbas_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
i0sfrtsgjw_llw0u2ae0v [ i ] != 0.0 ) ) ; htj2ju4onh = ( ( rtB .
hg35nvtbow_merlcviukg [ i ] != 0.0 ) && ( rtB . i0sfrtsgjw_llw0u2ae0v [ i ]
!= 0.0 ) ) ; ii5cdjkgoe = ( ( dx0jrmvjat && ovtnararkh && ii5cdjkgoe ) || ( (
! dx0jrmvjat ) && ( ! ovtnararkh ) && ii5cdjkgoe ) ) ; ovtnararkh = ( ( rtB .
pxtugw21md_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . i0sfrtsgjw_llw0u2ae0v [ i ]
!= 0.0 ) ) ; cmu5r52zus = ( ( nonu0dvgna && nazzybkhxz && cmu5r52zus ) || ( (
! nonu0dvgna ) && ( ! nazzybkhxz ) && cmu5r52zus ) ) ; dx0jrmvjat = ( ( rtB .
dywfleyaaj_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . i0sfrtsgjw_llw0u2ae0v [ i ]
!= 0.0 ) ) ; nonu0dvgna = ( ( j1yh4neqyt && faz35ftyoo && ocxqcdf3dl ) || ( (
! j1yh4neqyt ) && ( ! faz35ftyoo ) && ocxqcdf3dl ) ) ; j1yh4neqyt = ( ( rtB .
dtfzsplxv3_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . i0sfrtsgjw_llw0u2ae0v [ i ]
!= 0.0 ) ) ; lmrwahoeoz = ( ( bh3x0txmep && lmrwahoeoz && ( rtP .
Constant6_Value != 0.0 ) ) || ( ( ! bh3x0txmep ) && ( ! lmrwahoeoz ) && ( rtP
. Constant6_Value != 0.0 ) ) ) ; nazzybkhxz = ( ( rtB . jjfqup1kdt_bhxxfovxdy
[ i ] != 0.0 ) && ( rtB . i0sfrtsgjw_llw0u2ae0v [ i ] != 0.0 ) ) ; faz35ftyoo
= ( ( rtB . fdzewummhp_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
dyys5czzzo_nz4o0shxby [ i ] != 0.0 ) ) ; bh3x0txmep = ( nazzybkhxz || (
faz35ftyoo && ( rtP . Constant5_Value != 0.0 ) ) ) ; ocxqcdf3dl = (
j1yh4neqyt || ( lmrwahoeoz && bh3x0txmep ) ) ; dff1womlyo = ( dx0jrmvjat || (
nonu0dvgna && ocxqcdf3dl ) ) ; nrz5hhizo5 = ( ovtnararkh || ( cmu5r52zus &&
dff1womlyo ) ) ; cdlkwc2ls5 = ( htj2ju4onh || ( ii5cdjkgoe && nrz5hhizo5 ) )
; rtB . evegbo0243_mdoasc5av4 [ i ] = ( ( pnrhg4ujxe && bpiyyozbli &&
cdlkwc2ls5 ) || ( ( ! pnrhg4ujxe ) && ( ! bpiyyozbli ) && cdlkwc2ls5 ) ) ;
rtB . p1cktqllvf_icdfyazkhu [ i ] = bpiyyozbli ; rtB . i2aceuk4bc_oyypvi4boh
[ i ] = htj2ju4onh ; rtB . guqm4hnyxs_nvsvtgkap4 [ i ] = dff1womlyo ; rtB .
c4wwzzbop5_m3yhjduhi1 [ i ] = nrz5hhizo5 ; rtB . jnuvgxve5h_czkfpwuzm5 [ i ]
= cdlkwc2ls5 ; rtB . etwythiorx_hv2ho1zopz [ i ] = lmrwahoeoz ; rtB .
d5yq5izpze_lxo5edjg3c [ i ] = bh3x0txmep ; rtB . bion2p5x4o_dypejvacrn [ i ]
= ocxqcdf3dl ; rtB . o4ybcku3w0_owjr1h1vqy [ i ] = faz35ftyoo ; rtB .
ozim03upna_bnlywzniup [ i ] = j1yh4neqyt ; rtB . lkht5ggrzj_ju13rw2h0m [ i ]
= cmu5r52zus ; rtB . mgwgq5lwlt_lnjdk5wtww [ i ] = nazzybkhxz ; rtB .
m15wwk5ouv_dapv3jlyq5 [ i ] = nonu0dvgna ; rtB . hu3zsxmvrk_jz50ptvnrg [ i ]
= ii5cdjkgoe ; rtB . ehhud2fofx_al00mdgrv4 [ i ] = ovtnararkh ; rtB .
dwlcmrswsg_ezqlmfzvpq [ i ] = dx0jrmvjat ; } { real_T * pDataValues = (
real_T * ) rtDW . nbr0vpfhyq . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . nbr0vpfhyq . TimePtr ; int_T currTimeIndex = rtDW . ghhsf1sxoz .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . nbr0vpfhyq . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ghhsf1sxoz . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . lbobocaz11_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . lbobocaz11_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . oakvbgle2d ; int_T *
zcTimeIndicesIdx = & rtDW . omkjsjveyj ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
lbobocaz11_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { ii5cdjkgoe = rtB . hu3zsxmvrk_jz50ptvnrg [ i ] ; htj2ju4onh = rtB .
i2aceuk4bc_oyypvi4boh [ i ] ; nrz5hhizo5 = rtB . c4wwzzbop5_m3yhjduhi1 [ i ]
; cmu5r52zus = rtB . lkht5ggrzj_ju13rw2h0m [ i ] ; ovtnararkh = rtB .
ehhud2fofx_al00mdgrv4 [ i ] ; dff1womlyo = rtB . guqm4hnyxs_nvsvtgkap4 [ i ]
; nonu0dvgna = rtB . m15wwk5ouv_dapv3jlyq5 [ i ] ; dx0jrmvjat = rtB .
dwlcmrswsg_ezqlmfzvpq [ i ] ; ocxqcdf3dl = rtB . bion2p5x4o_dypejvacrn [ i ]
; lmrwahoeoz = rtB . etwythiorx_hv2ho1zopz [ i ] ; j1yh4neqyt = rtB .
ozim03upna_bnlywzniup [ i ] ; bh3x0txmep = rtB . d5yq5izpze_lxo5edjg3c [ i ]
; faz35ftyoo = rtB . o4ybcku3w0_owjr1h1vqy [ i ] ; nazzybkhxz = rtB .
mgwgq5lwlt_lnjdk5wtww [ i ] ; g0vtxlenkf = rtB . evegbo0243_mdoasc5av4 [ i ]
; hllmepvouh = ( ( rtB . b00nhbi1vn_mbvzarwird [ i ] != 0.0 ) && ( rtB .
lbobocaz11_jwzvbuczlb [ i ] != 0.0 ) ) ; bpiyyozbli = ( ( rtB .
fhepxarbas_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . lbobocaz11_jwzvbuczlb [ i ]
!= 0.0 ) ) ; nrz5hhizo5 = ( ( ii5cdjkgoe && htj2ju4onh && nrz5hhizo5 ) || ( (
! ii5cdjkgoe ) && ( ! htj2ju4onh ) && nrz5hhizo5 ) ) ; htj2ju4onh = ( ( rtB .
hg35nvtbow_merlcviukg [ i ] != 0.0 ) && ( rtB . lbobocaz11_jwzvbuczlb [ i ]
!= 0.0 ) ) ; dff1womlyo = ( ( cmu5r52zus && ovtnararkh && dff1womlyo ) || ( (
! cmu5r52zus ) && ( ! ovtnararkh ) && dff1womlyo ) ) ; ii5cdjkgoe = ( ( rtB .
pxtugw21md_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . lbobocaz11_jwzvbuczlb [ i ]
!= 0.0 ) ) ; cmu5r52zus = ( ( nonu0dvgna && dx0jrmvjat && ocxqcdf3dl ) || ( (
! nonu0dvgna ) && ( ! dx0jrmvjat ) && ocxqcdf3dl ) ) ; ovtnararkh = ( ( rtB .
dywfleyaaj_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . lbobocaz11_jwzvbuczlb [ i ]
!= 0.0 ) ) ; dx0jrmvjat = ( ( lmrwahoeoz && j1yh4neqyt && bh3x0txmep ) || ( (
! lmrwahoeoz ) && ( ! j1yh4neqyt ) && bh3x0txmep ) ) ; nonu0dvgna = ( ( rtB .
dtfzsplxv3_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . lbobocaz11_jwzvbuczlb [ i ]
!= 0.0 ) ) ; j1yh4neqyt = ( ( faz35ftyoo && nazzybkhxz && ( rtP .
Constant5_Value != 0.0 ) ) || ( ( ! faz35ftyoo ) && ( ! nazzybkhxz ) && ( rtP
. Constant5_Value != 0.0 ) ) ) ; lmrwahoeoz = ( ( rtB . jjfqup1kdt_bhxxfovxdy
[ i ] != 0.0 ) && ( rtB . lbobocaz11_jwzvbuczlb [ i ] != 0.0 ) ) ; nazzybkhxz
= ( ( rtB . fdzewummhp_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
i0sfrtsgjw_llw0u2ae0v [ i ] != 0.0 ) ) ; faz35ftyoo = ( lmrwahoeoz || (
nazzybkhxz && ( rtP . Constant4_Value != 0.0 ) ) ) ; bh3x0txmep = (
nonu0dvgna || ( j1yh4neqyt && faz35ftyoo ) ) ; ocxqcdf3dl = ( ovtnararkh || (
dx0jrmvjat && bh3x0txmep ) ) ; cdlkwc2ls5 = ( ii5cdjkgoe || ( cmu5r52zus &&
ocxqcdf3dl ) ) ; pnrhg4ujxe = ( htj2ju4onh || ( dff1womlyo && cdlkwc2ls5 ) )
; pmcq3pvib0 = ( bpiyyozbli || ( nrz5hhizo5 && pnrhg4ujxe ) ) ; rtB .
j4op4jbgty_pxqvlbal2i [ i ] = ( ( g0vtxlenkf && hllmepvouh && pmcq3pvib0 ) ||
( ( ! g0vtxlenkf ) && ( ! hllmepvouh ) && pmcq3pvib0 ) ) ; rtB .
dkicah4qrk_m3ybdk4ikc [ i ] = hllmepvouh ; rtB . kpasnofzyu_jacdjrqyev [ i ]
= bpiyyozbli ; rtB . chps1fuyu5_h522xzlxvt [ i ] = cdlkwc2ls5 ; rtB .
pw5myprmlg_c0dok3111h [ i ] = pnrhg4ujxe ; rtB . nuqu1uarye_ctvw0tpkon [ i ]
= pmcq3pvib0 ; rtB . mgwgq5lwlt_lnjdk5wtww [ i ] = nazzybkhxz ; rtB .
o4ybcku3w0_owjr1h1vqy [ i ] = faz35ftyoo ; rtB . d5yq5izpze_lxo5edjg3c [ i ]
= bh3x0txmep ; rtB . ozim03upna_bnlywzniup [ i ] = j1yh4neqyt ; rtB .
etwythiorx_hv2ho1zopz [ i ] = lmrwahoeoz ; rtB . bion2p5x4o_dypejvacrn [ i ]
= ocxqcdf3dl ; rtB . dwlcmrswsg_ezqlmfzvpq [ i ] = dx0jrmvjat ; rtB .
m15wwk5ouv_dapv3jlyq5 [ i ] = nonu0dvgna ; rtB . guqm4hnyxs_nvsvtgkap4 [ i ]
= dff1womlyo ; rtB . ehhud2fofx_al00mdgrv4 [ i ] = ovtnararkh ; rtB .
lkht5ggrzj_ju13rw2h0m [ i ] = cmu5r52zus ; rtB . c4wwzzbop5_m3yhjduhi1 [ i ]
= nrz5hhizo5 ; rtB . i2aceuk4bc_oyypvi4boh [ i ] = htj2ju4onh ; rtB .
hu3zsxmvrk_jz50ptvnrg [ i ] = ii5cdjkgoe ; } { real_T * pDataValues = (
real_T * ) rtDW . m5n310htgl . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . m5n310htgl . TimePtr ; int_T currTimeIndex = rtDW . lrtzlied03 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . m5n310htgl . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . lrtzlied03 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . asys2wkcon_dhmrxtyqop [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . asys2wkcon_dhmrxtyqop [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . heuczihubc ; int_T *
zcTimeIndicesIdx = & rtDW . f0skiflgxl ; int_T zcIdx = zcTimeIndices [ *
zcTimeIndicesIdx ] ; int_T numZcTimes = 1 ; if ( * zcTimeIndicesIdx <
numZcTimes ) { if ( ssIsMajorTimeStep ( rtS ) ) { if ( t > pTimeValues [
zcIdx ] ) { while ( * zcTimeIndicesIdx < ( numZcTimes - 1 ) && ( t >
pTimeValues [ zcIdx ] ) ) { ( * zcTimeIndicesIdx ) ++ ; zcIdx = zcTimeIndices
[ * zcTimeIndicesIdx ] ; } } } else { if ( t >= pTimeValues [ zcIdx ] && (
ssGetTimeOfLastOutput ( rtS ) < pTimeValues [ zcIdx ] ) ) { t2 = pTimeValues
[ zcIdx ] ; if ( zcIdx == 0 ) { TimeIndex = 0 ; t1 = t2 - 1 ; } else { t1 =
pTimeValues [ zcIdx - 1 ] ; TimeIndex = zcIdx - 1 ; } f1 = ( t2 - t ) / ( t2
- t1 ) ; f2 = 1.0 - f1 ; } } } { int_T elIdx ; for ( elIdx = 0 ; elIdx <
65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [
TimeIndex + 1 ] ; if ( zcIdx == 0 ) { d2 = d1 ; } ( & rtB .
asys2wkcon_dhmrxtyqop [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { nrz5hhizo5 = rtB . c4wwzzbop5_m3yhjduhi1 [ i ] ; bpiyyozbli = rtB .
kpasnofzyu_jacdjrqyev [ i ] ; pnrhg4ujxe = rtB . pw5myprmlg_c0dok3111h [ i ]
; dff1womlyo = rtB . guqm4hnyxs_nvsvtgkap4 [ i ] ; htj2ju4onh = rtB .
i2aceuk4bc_oyypvi4boh [ i ] ; cdlkwc2ls5 = rtB . chps1fuyu5_h522xzlxvt [ i ]
; cmu5r52zus = rtB . lkht5ggrzj_ju13rw2h0m [ i ] ; ii5cdjkgoe = rtB .
hu3zsxmvrk_jz50ptvnrg [ i ] ; ocxqcdf3dl = rtB . bion2p5x4o_dypejvacrn [ i ]
; dx0jrmvjat = rtB . dwlcmrswsg_ezqlmfzvpq [ i ] ; ovtnararkh = rtB .
ehhud2fofx_al00mdgrv4 [ i ] ; bh3x0txmep = rtB . d5yq5izpze_lxo5edjg3c [ i ]
; j1yh4neqyt = rtB . ozim03upna_bnlywzniup [ i ] ; nonu0dvgna = rtB .
m15wwk5ouv_dapv3jlyq5 [ i ] ; faz35ftyoo = rtB . o4ybcku3w0_owjr1h1vqy [ i ]
; nazzybkhxz = rtB . mgwgq5lwlt_lnjdk5wtww [ i ] ; lmrwahoeoz = rtB .
etwythiorx_hv2ho1zopz [ i ] ; jzelessou3 = rtB . j4op4jbgty_pxqvlbal2i [ i ]
; g0vtxlenkf = ( ( rtB . b00nhbi1vn_mbvzarwird [ i ] != 0.0 ) && ( rtB .
asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; pnrhg4ujxe = ( ( nrz5hhizo5 &&
bpiyyozbli && pnrhg4ujxe ) || ( ( ! nrz5hhizo5 ) && ( ! bpiyyozbli ) &&
pnrhg4ujxe ) ) ; bpiyyozbli = ( ( rtB . fhepxarbas_ppxrqq0gsf [ i ] != 0.0 )
&& ( rtB . asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; cdlkwc2ls5 = ( (
dff1womlyo && htj2ju4onh && cdlkwc2ls5 ) || ( ( ! dff1womlyo ) && ( !
htj2ju4onh ) && cdlkwc2ls5 ) ) ; nrz5hhizo5 = ( ( rtB . hg35nvtbow_merlcviukg
[ i ] != 0.0 ) && ( rtB . asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; dff1womlyo
= ( ( cmu5r52zus && ii5cdjkgoe && ocxqcdf3dl ) || ( ( ! cmu5r52zus ) && ( !
ii5cdjkgoe ) && ocxqcdf3dl ) ) ; htj2ju4onh = ( ( rtB . pxtugw21md_g2mlkqadfk
[ i ] != 0.0 ) && ( rtB . asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; ii5cdjkgoe
= ( ( dx0jrmvjat && ovtnararkh && bh3x0txmep ) || ( ( ! dx0jrmvjat ) && ( !
ovtnararkh ) && bh3x0txmep ) ) ; cmu5r52zus = ( ( rtB . dywfleyaaj_pbm3vprmfu
[ i ] != 0.0 ) && ( rtB . asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; ovtnararkh
= ( ( j1yh4neqyt && nonu0dvgna && faz35ftyoo ) || ( ( ! j1yh4neqyt ) && ( !
nonu0dvgna ) && faz35ftyoo ) ) ; dx0jrmvjat = ( ( rtB . dtfzsplxv3_fqdqrf4qbc
[ i ] != 0.0 ) && ( rtB . asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; nonu0dvgna
= ( ( nazzybkhxz && lmrwahoeoz && ( rtP . Constant4_Value != 0.0 ) ) || ( ( !
nazzybkhxz ) && ( ! lmrwahoeoz ) && ( rtP . Constant4_Value != 0.0 ) ) ) ;
j1yh4neqyt = ( ( rtB . jjfqup1kdt_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; lmrwahoeoz = ( ( rtB .
fdzewummhp_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . lbobocaz11_jwzvbuczlb [ i ]
!= 0.0 ) ) ; nazzybkhxz = ( j1yh4neqyt || ( lmrwahoeoz && ( rtP .
Constant3_Value != 0.0 ) ) ) ; faz35ftyoo = ( dx0jrmvjat || ( nonu0dvgna &&
nazzybkhxz ) ) ; bh3x0txmep = ( cmu5r52zus || ( ovtnararkh && faz35ftyoo ) )
; ocxqcdf3dl = ( htj2ju4onh || ( ii5cdjkgoe && bh3x0txmep ) ) ; pmcq3pvib0 =
( nrz5hhizo5 || ( dff1womlyo && ocxqcdf3dl ) ) ; cjrls0qj5w = ( bpiyyozbli ||
( cdlkwc2ls5 && pmcq3pvib0 ) ) ; gbtzjeidoo = ( g0vtxlenkf || ( pnrhg4ujxe &&
cjrls0qj5w ) ) ; pmcq3pvib0 = ( ( cdlkwc2ls5 && bpiyyozbli && pmcq3pvib0 ) ||
( ( ! cdlkwc2ls5 ) && ( ! bpiyyozbli ) && pmcq3pvib0 ) ) ; cdlkwc2ls5 = ( (
rtB . fhepxarbas_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [
i ] != 0.0 ) ) ; bpiyyozbli = ( ( dff1womlyo && nrz5hhizo5 && ocxqcdf3dl ) ||
( ( ! dff1womlyo ) && ( ! nrz5hhizo5 ) && ocxqcdf3dl ) ) ; nrz5hhizo5 = ( (
rtB . hg35nvtbow_merlcviukg [ i ] != 0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [
i ] != 0.0 ) ) ; dff1womlyo = ( ( ii5cdjkgoe && htj2ju4onh && bh3x0txmep ) ||
( ( ! ii5cdjkgoe ) && ( ! htj2ju4onh ) && bh3x0txmep ) ) ; htj2ju4onh = ( (
rtB . pxtugw21md_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [
i ] != 0.0 ) ) ; ii5cdjkgoe = ( ( ovtnararkh && cmu5r52zus && faz35ftyoo ) ||
( ( ! ovtnararkh ) && ( ! cmu5r52zus ) && faz35ftyoo ) ) ; cmu5r52zus = ( (
rtB . dywfleyaaj_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [
i ] != 0.0 ) ) ; ovtnararkh = ( ( nonu0dvgna && dx0jrmvjat && nazzybkhxz ) ||
( ( ! nonu0dvgna ) && ( ! dx0jrmvjat ) && nazzybkhxz ) ) ; dx0jrmvjat = ( (
rtB . dtfzsplxv3_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [
i ] != 0.0 ) ) ; nonu0dvgna = ( ( lmrwahoeoz && j1yh4neqyt && ( rtP .
Constant3_Value != 0.0 ) ) || ( ( ! lmrwahoeoz ) && ( ! j1yh4neqyt ) && ( rtP
. Constant3_Value != 0.0 ) ) ) ; j1yh4neqyt = ( ( rtB . jjfqup1kdt_bhxxfovxdy
[ i ] != 0.0 ) && ( rtB . erimzpqpyv_cl54gopm0x [ i ] != 0.0 ) ) ; lmrwahoeoz
= ( ( rtB . fdzewummhp_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
asys2wkcon_dhmrxtyqop [ i ] != 0.0 ) ) ; nazzybkhxz = ( j1yh4neqyt || (
lmrwahoeoz && ( rtP . Constant2_Value != 0.0 ) ) ) ; faz35ftyoo = (
dx0jrmvjat || ( nonu0dvgna && nazzybkhxz ) ) ; bh3x0txmep = ( cmu5r52zus || (
ovtnararkh && faz35ftyoo ) ) ; ocxqcdf3dl = ( htj2ju4onh || ( ii5cdjkgoe &&
bh3x0txmep ) ) ; n154m1grse = ( nrz5hhizo5 || ( dff1womlyo && ocxqcdf3dl ) )
; iwfl35rfeu = ( cdlkwc2ls5 || ( bpiyyozbli && n154m1grse ) ) ; dp3ky5mqwb =
( rtB . liewt1idy0 [ i ] || ( pmcq3pvib0 && iwfl35rfeu ) ) ; cjrls0qj5w = ( (
pnrhg4ujxe && g0vtxlenkf && cjrls0qj5w ) || ( ( ! pnrhg4ujxe ) && ( !
g0vtxlenkf ) && cjrls0qj5w ) ) ; g0vtxlenkf = ( ( rtB . b00nhbi1vn_mbvzarwird
[ i ] != 0.0 ) && ( rtB . cenecddxru_cxarnvbvui [ i ] != 0.0 ) ) ; n154m1grse
= ( ( bpiyyozbli && cdlkwc2ls5 && n154m1grse ) || ( ( ! bpiyyozbli ) && ( !
cdlkwc2ls5 ) && n154m1grse ) ) ; pnrhg4ujxe = ( ( rtB . fhepxarbas_ppxrqq0gsf
[ i ] != 0.0 ) && ( rtB . cenecddxru_cxarnvbvui [ i ] != 0.0 ) ) ; cdlkwc2ls5
= ( ( dff1womlyo && nrz5hhizo5 && ocxqcdf3dl ) || ( ( ! dff1womlyo ) && ( !
nrz5hhizo5 ) && ocxqcdf3dl ) ) ; bpiyyozbli = ( ( rtB . hg35nvtbow_merlcviukg
[ i ] != 0.0 ) && ( rtB . cenecddxru_cxarnvbvui [ i ] != 0.0 ) ) ; nrz5hhizo5
= ( ( ii5cdjkgoe && htj2ju4onh && bh3x0txmep ) || ( ( ! ii5cdjkgoe ) && ( !
htj2ju4onh ) && bh3x0txmep ) ) ; dff1womlyo = ( ( rtB . pxtugw21md_g2mlkqadfk
[ i ] != 0.0 ) && ( rtB . cenecddxru_cxarnvbvui [ i ] != 0.0 ) ) ; htj2ju4onh
= ( ( ovtnararkh && cmu5r52zus && faz35ftyoo ) || ( ( ! ovtnararkh ) && ( !
cmu5r52zus ) && faz35ftyoo ) ) ; ii5cdjkgoe = ( ( rtB . dywfleyaaj_pbm3vprmfu
[ i ] != 0.0 ) && ( rtB . cenecddxru_cxarnvbvui [ i ] != 0.0 ) ) ; cmu5r52zus
= ( ( nonu0dvgna && dx0jrmvjat && nazzybkhxz ) || ( ( ! nonu0dvgna ) && ( !
dx0jrmvjat ) && nazzybkhxz ) ) ; ovtnararkh = ( ( rtB . dtfzsplxv3_fqdqrf4qbc
[ i ] != 0.0 ) && ( rtB . cenecddxru_cxarnvbvui [ i ] != 0.0 ) ) ; dx0jrmvjat
= ( ( lmrwahoeoz && j1yh4neqyt && ( rtP . Constant2_Value != 0.0 ) ) || ( ( !
lmrwahoeoz ) && ( ! j1yh4neqyt ) && ( rtP . Constant2_Value != 0.0 ) ) ) ;
hllmepvouh = ( rtB . bxmusuqb2k_ldqodwenvz [ i ] || ( rtB .
c5vk0yu1pa_guugdwf2m3 [ i ] && ( rtP . Constant1_Value != 0.0 ) ) ) ;
nonu0dvgna = ( ovtnararkh || ( dx0jrmvjat && hllmepvouh ) ) ; j1yh4neqyt = (
ii5cdjkgoe || ( cmu5r52zus && nonu0dvgna ) ) ; lmrwahoeoz = ( dff1womlyo || (
htj2ju4onh && j1yh4neqyt ) ) ; nazzybkhxz = ( bpiyyozbli || ( nrz5hhizo5 &&
lmrwahoeoz ) ) ; faz35ftyoo = ( pnrhg4ujxe || ( cdlkwc2ls5 && nazzybkhxz ) )
; bh3x0txmep = ( g0vtxlenkf || ( n154m1grse && faz35ftyoo ) ) ; iwfl35rfeu =
( ( pmcq3pvib0 && rtB . liewt1idy0 [ i ] && iwfl35rfeu ) || ( ( ! pmcq3pvib0
) && ( ! rtB . liewt1idy0 [ i ] ) && iwfl35rfeu ) ) ; pmcq3pvib0 = (
bh3x0txmep || ( iwfl35rfeu && ( rtP . Constant8_Value != 0.0 ) ) ) ;
ocxqcdf3dl = ( dp3ky5mqwb || ( cjrls0qj5w && pmcq3pvib0 ) ) ; rtB .
c5x4egfo3o [ i ] = ( ( jzelessou3 && gbtzjeidoo && ocxqcdf3dl ) || ( ( !
jzelessou3 ) && ( ! gbtzjeidoo ) && ocxqcdf3dl ) ) ; rtB .
pmlsnhnbfs_p5h3gwuwqg [ i ] = g0vtxlenkf ; rtB . lmfmqrlxe1_afnsueciae [ i ]
= pmcq3pvib0 ; rtB . btuwy4jmme_evg4t2fsev [ i ] = cjrls0qj5w ; rtB .
hpjvcoqpnh_ax3wx1gs5w [ i ] = gbtzjeidoo ; rtB . pjqnvz1cq1_as0qznsxlv [ i ]
= n154m1grse ; rtB . ghvxlhnfsd_ifotjnizh4 [ i ] = iwfl35rfeu ; rtB .
mczgpv2tly_ltu3syw14q [ i ] = dp3ky5mqwb ; rtB . etwythiorx_hv2ho1zopz [ i ]
= lmrwahoeoz ; rtB . mgwgq5lwlt_lnjdk5wtww [ i ] = nazzybkhxz ; rtB .
o4ybcku3w0_owjr1h1vqy [ i ] = faz35ftyoo ; rtB . m15wwk5ouv_dapv3jlyq5 [ i ]
= nonu0dvgna ; rtB . ozim03upna_bnlywzniup [ i ] = j1yh4neqyt ; rtB .
d5yq5izpze_lxo5edjg3c [ i ] = bh3x0txmep ; rtB . ehhud2fofx_al00mdgrv4 [ i ]
= ovtnararkh ; rtB . dwlcmrswsg_ezqlmfzvpq [ i ] = dx0jrmvjat ; rtB .
bion2p5x4o_dypejvacrn [ i ] = ocxqcdf3dl ; rtB . hu3zsxmvrk_jz50ptvnrg [ i ]
= ii5cdjkgoe ; rtB . lkht5ggrzj_ju13rw2h0m [ i ] = cmu5r52zus ; rtB .
chps1fuyu5_h522xzlxvt [ i ] = cdlkwc2ls5 ; rtB . i2aceuk4bc_oyypvi4boh [ i ]
= htj2ju4onh ; rtB . guqm4hnyxs_nvsvtgkap4 [ i ] = dff1womlyo ; rtB .
pw5myprmlg_c0dok3111h [ i ] = pnrhg4ujxe ; rtB . kpasnofzyu_jacdjrqyev [ i ]
= bpiyyozbli ; rtB . c4wwzzbop5_m3yhjduhi1 [ i ] = nrz5hhizo5 ; rtB .
bxmusuqb2k_ldqodwenvz [ i ] = hllmepvouh ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . f4eplfx1zr . LoggedData
) , & rtB . c5x4egfo3o [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ bh3x0txmep = ( ( rtB . pxtugw21md_g2mlkqadfk [ i ] != 0.0 ) && ( rtB .
jsancbgopo_cv5hdgrwft [ i ] != 0.0 ) ) ; ocxqcdf3dl = ( rtB .
dsv5ciwjm3_bjbgfqrolh [ i ] || ( rtB . jecipoa5if_dhamdvybc1 [ i ] && ( rtP .
Constant10_Value != 0.0 ) ) ) ; nazzybkhxz = ( ( bh3x0txmep && ocxqcdf3dl &&
( rtP . Constant11_Value != 0.0 ) ) || ( ( ! bh3x0txmep ) && ( ! ocxqcdf3dl )
&& ( rtP . Constant11_Value != 0.0 ) ) ) ; faz35ftyoo = ( ( rtB .
hg35nvtbow_merlcviukg [ i ] != 0.0 ) && ( rtB . g4thlbnlje_g1smspu5ke [ i ]
!= 0.0 ) ) ; jzelessou3 = ( rtB . jzubkqmxb5_bsqwvugooi [ i ] || ( rtB .
leszdn4qzy_nuebgmauvi [ i ] && rtB . lejryoy10m_bjvjhhzy4i [ i ] ) ) ;
cmu5r52zus = ( ( nazzybkhxz && faz35ftyoo && jzelessou3 ) || ( ( ! nazzybkhxz
) && ( ! faz35ftyoo ) && jzelessou3 ) ) ; ovtnararkh = ( ( rtB .
fhepxarbas_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . dyys5czzzo_nz4o0shxby [ i ]
!= 0.0 ) ) ; dff1womlyo = ( rtB . pk2wucixbq_fdinthrxmb [ i ] || ( rtB .
jq3zaop5cn_jzx3amusab [ i ] && rtB . eahpsmgiif_o4f35lbcvx [ i ] ) ) ;
nrz5hhizo5 = ( ( cmu5r52zus && ovtnararkh && dff1womlyo ) || ( ( ! cmu5r52zus
) && ( ! ovtnararkh ) && dff1womlyo ) ) ; htj2ju4onh = ( ( rtB .
b00nhbi1vn_mbvzarwird [ i ] != 0.0 ) && ( rtB . i0sfrtsgjw_llw0u2ae0v [ i ]
!= 0.0 ) ) ; bpiyyozbli = ( rtB . p1cktqllvf_icdfyazkhu [ i ] || ( rtB .
kvv0apejuc_nyxm0bsxsn [ i ] && rtB . jnuvgxve5h_czkfpwuzm5 [ i ] ) ) ;
cdlkwc2ls5 = ( ( nrz5hhizo5 && htj2ju4onh && bpiyyozbli ) || ( ( ! nrz5hhizo5
) && ( ! htj2ju4onh ) && bpiyyozbli ) ) ; hllmepvouh = ( rtB .
dkicah4qrk_m3ybdk4ikc [ i ] || ( rtB . evegbo0243_mdoasc5av4 [ i ] && rtB .
nuqu1uarye_ctvw0tpkon [ i ] ) ) ; gbtzjeidoo = ( rtB . hpjvcoqpnh_ax3wx1gs5w
[ i ] || ( rtB . j4op4jbgty_pxqvlbal2i [ i ] && rtB . bion2p5x4o_dypejvacrn [
i ] ) ) ; rtB . a1ssold0cf [ i ] = ( ( cdlkwc2ls5 && hllmepvouh && gbtzjeidoo
) || ( ( ! cdlkwc2ls5 ) && ( ! hllmepvouh ) && gbtzjeidoo ) ) ; rtB .
c5vk0yu1pa_guugdwf2m3 [ i ] = bh3x0txmep ; rtB . asqu2y3to5_ojunzewo4f [ i ]
= faz35ftyoo ; rtB . dsv5ciwjm3_bjbgfqrolh [ i ] = ocxqcdf3dl ; rtB .
jecipoa5if_dhamdvybc1 [ i ] = nazzybkhxz ; rtB . jzubkqmxb5_bsqwvugooi [ i ]
= jzelessou3 ; rtB . leszdn4qzy_nuebgmauvi [ i ] = ovtnararkh ; rtB .
lejryoy10m_bjvjhhzy4i [ i ] = cmu5r52zus ; rtB . pk2wucixbq_fdinthrxmb [ i ]
= dff1womlyo ; rtB . jq3zaop5cn_jzx3amusab [ i ] = htj2ju4onh ; rtB .
eahpsmgiif_o4f35lbcvx [ i ] = nrz5hhizo5 ; rtB . p1cktqllvf_icdfyazkhu [ i ]
= bpiyyozbli ; rtB . jnuvgxve5h_czkfpwuzm5 [ i ] = cdlkwc2ls5 ; rtB .
dkicah4qrk_m3ybdk4ikc [ i ] = hllmepvouh ; rtB . hpjvcoqpnh_ax3wx1gs5w [ i ]
= gbtzjeidoo ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . luyniqswml . LoggedData ) , & rtB . a1ssold0cf [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { hllmepvouh = ( rtB .
dkicah4qrk_m3ybdk4ikc [ i ] || ( rtB . jnuvgxve5h_czkfpwuzm5 [ i ] && rtB .
hpjvcoqpnh_ax3wx1gs5w [ i ] ) ) ; ovtnararkh = ( rtB . leszdn4qzy_nuebgmauvi
[ i ] || ( rtB . lejryoy10m_bjvjhhzy4i [ i ] && rtB . pk2wucixbq_fdinthrxmb [
i ] ) ) ; faz35ftyoo = ( rtB . asqu2y3to5_ojunzewo4f [ i ] || ( rtB .
jecipoa5if_dhamdvybc1 [ i ] && rtB . jzubkqmxb5_bsqwvugooi [ i ] ) ) ;
gbtzjeidoo = ( ( rtB . hg35nvtbow_merlcviukg [ i ] != 0.0 ) && ( rtB .
jsancbgopo_cv5hdgrwft [ i ] != 0.0 ) ) ; ocxqcdf3dl = ( rtB .
dsv5ciwjm3_bjbgfqrolh [ i ] || ( rtB . c5vk0yu1pa_guugdwf2m3 [ i ] && ( rtP .
Constant11_Value != 0.0 ) ) ) ; jzelessou3 = gbtzjeidoo ^ ocxqcdf3dl ;
pmcq3pvib0 = ( ( rtB . fhepxarbas_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
g4thlbnlje_g1smspu5ke [ i ] != 0.0 ) ) ; g0vtxlenkf = jzelessou3 ^ pmcq3pvib0
; cdlkwc2ls5 = faz35ftyoo ^ g0vtxlenkf ; pnrhg4ujxe = ( ( rtB .
b00nhbi1vn_mbvzarwird [ i ] != 0.0 ) && ( rtB . dyys5czzzo_nz4o0shxby [ i ]
!= 0.0 ) ) ; dff1womlyo = cdlkwc2ls5 ^ pnrhg4ujxe ; cmu5r52zus = ovtnararkh ^
dff1womlyo ; htj2ju4onh = ( rtB . jq3zaop5cn_jzx3amusab [ i ] || ( rtB .
eahpsmgiif_o4f35lbcvx [ i ] && rtB . p1cktqllvf_icdfyazkhu [ i ] ) ) ;
bpiyyozbli = cmu5r52zus ^ htj2ju4onh ; rtB . gpflyyrvgw [ i ] = hllmepvouh ^
bpiyyozbli ; rtB . j4op4jbgty_pxqvlbal2i [ i ] = jzelessou3 ; rtB .
nuqu1uarye_ctvw0tpkon [ i ] = pmcq3pvib0 ; rtB . evegbo0243_mdoasc5av4 [ i ]
= g0vtxlenkf ; rtB . kvv0apejuc_nyxm0bsxsn [ i ] = pnrhg4ujxe ; rtB .
dkicah4qrk_m3ybdk4ikc [ i ] = hllmepvouh ; rtB . jnuvgxve5h_czkfpwuzm5 [ i ]
= cdlkwc2ls5 ; rtB . hpjvcoqpnh_ax3wx1gs5w [ i ] = gbtzjeidoo ; rtB .
leszdn4qzy_nuebgmauvi [ i ] = ovtnararkh ; rtB . lejryoy10m_bjvjhhzy4i [ i ]
= cmu5r52zus ; rtB . pk2wucixbq_fdinthrxmb [ i ] = dff1womlyo ; rtB .
asqu2y3to5_ojunzewo4f [ i ] = faz35ftyoo ; rtB . dsv5ciwjm3_bjbgfqrolh [ i ]
= ocxqcdf3dl ; rtB . jq3zaop5cn_jzx3amusab [ i ] = htj2ju4onh ; rtB .
p1cktqllvf_icdfyazkhu [ i ] = bpiyyozbli ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . nog1w1hukz . LoggedData
) , & rtB . gpflyyrvgw [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ hllmepvouh = ( ( rtB . dkicah4qrk_m3ybdk4ikc [ i ] && rtB .
p1cktqllvf_icdfyazkhu [ i ] ) || ( rtB . lejryoy10m_bjvjhhzy4i [ i ] && rtB .
jq3zaop5cn_jzx3amusab [ i ] ) ) ; faz35ftyoo = ( ( rtB .
asqu2y3to5_ojunzewo4f [ i ] && rtB . evegbo0243_mdoasc5av4 [ i ] ) || ( rtB .
j4op4jbgty_pxqvlbal2i [ i ] && rtB . nuqu1uarye_ctvw0tpkon [ i ] ) ) ;
jzelessou3 = ( ( rtB . fhepxarbas_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
jsancbgopo_cv5hdgrwft [ i ] != 0.0 ) ) ; gbtzjeidoo = ( rtB .
hpjvcoqpnh_ax3wx1gs5w [ i ] && rtB . dsv5ciwjm3_bjbgfqrolh [ i ] ) ;
pmcq3pvib0 = jzelessou3 ^ gbtzjeidoo ; g0vtxlenkf = ( ( rtB .
b00nhbi1vn_mbvzarwird [ i ] != 0.0 ) && ( rtB . g4thlbnlje_g1smspu5ke [ i ]
!= 0.0 ) ) ; bpiyyozbli = pmcq3pvib0 ^ g0vtxlenkf ; nrz5hhizo5 = faz35ftyoo ^
bpiyyozbli ; cdlkwc2ls5 = ( ( rtB . leszdn4qzy_nuebgmauvi [ i ] && rtB .
pk2wucixbq_fdinthrxmb [ i ] ) || ( rtB . jnuvgxve5h_czkfpwuzm5 [ i ] && rtB .
kvv0apejuc_nyxm0bsxsn [ i ] ) ) ; pnrhg4ujxe = nrz5hhizo5 ^ cdlkwc2ls5 ; rtB
. dwutuz3ccd [ i ] = hllmepvouh ^ pnrhg4ujxe ; rtB . eahpsmgiif_o4f35lbcvx [
i ] = nrz5hhizo5 ; rtB . dkicah4qrk_m3ybdk4ikc [ i ] = hllmepvouh ; rtB .
p1cktqllvf_icdfyazkhu [ i ] = bpiyyozbli ; rtB . asqu2y3to5_ojunzewo4f [ i ]
= faz35ftyoo ; rtB . evegbo0243_mdoasc5av4 [ i ] = g0vtxlenkf ; rtB .
j4op4jbgty_pxqvlbal2i [ i ] = jzelessou3 ; rtB . nuqu1uarye_ctvw0tpkon [ i ]
= pmcq3pvib0 ; rtB . hpjvcoqpnh_ax3wx1gs5w [ i ] = gbtzjeidoo ; rtB .
jnuvgxve5h_czkfpwuzm5 [ i ] = cdlkwc2ls5 ; rtB . kvv0apejuc_nyxm0bsxsn [ i ]
= pnrhg4ujxe ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . kh4yvixqbe . LoggedData ) , & rtB . dwutuz3ccd [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { hllmepvouh = ( ( rtB .
dkicah4qrk_m3ybdk4ikc [ i ] && rtB . kvv0apejuc_nyxm0bsxsn [ i ] ) || ( rtB .
eahpsmgiif_o4f35lbcvx [ i ] && rtB . jnuvgxve5h_czkfpwuzm5 [ i ] ) ) ;
cdlkwc2ls5 = ( ( rtB . b00nhbi1vn_mbvzarwird [ i ] != 0.0 ) && ( rtB .
jsancbgopo_cv5hdgrwft [ i ] != 0.0 ) ) ; jzelessou3 = ( rtB .
j4op4jbgty_pxqvlbal2i [ i ] && rtB . hpjvcoqpnh_ax3wx1gs5w [ i ] ) ;
gbtzjeidoo = cdlkwc2ls5 ^ jzelessou3 ; faz35ftyoo = ( ( rtB .
asqu2y3to5_ojunzewo4f [ i ] && rtB . p1cktqllvf_icdfyazkhu [ i ] ) || ( rtB .
nuqu1uarye_ctvw0tpkon [ i ] && rtB . evegbo0243_mdoasc5av4 [ i ] ) ) ;
pmcq3pvib0 = gbtzjeidoo ^ faz35ftyoo ; rtB . nk3kxgqrrj [ i ] = hllmepvouh ^
pmcq3pvib0 ; rtB . dkicah4qrk_m3ybdk4ikc [ i ] = hllmepvouh ; rtB .
jnuvgxve5h_czkfpwuzm5 [ i ] = cdlkwc2ls5 ; rtB . j4op4jbgty_pxqvlbal2i [ i ]
= jzelessou3 ; rtB . hpjvcoqpnh_ax3wx1gs5w [ i ] = gbtzjeidoo ; rtB .
asqu2y3to5_ojunzewo4f [ i ] = faz35ftyoo ; rtB . nuqu1uarye_ctvw0tpkon [ i ]
= pmcq3pvib0 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . cjcdkzuapp . LoggedData ) , & rtB . nk3kxgqrrj [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . bctdqm3hqv [ i ] = ( (
rtB . dkicah4qrk_m3ybdk4ikc [ i ] && rtB . nuqu1uarye_ctvw0tpkon [ i ] ) || (
rtB . hpjvcoqpnh_ax3wx1gs5w [ i ] && rtB . asqu2y3to5_ojunzewo4f [ i ] ) || (
rtB . jnuvgxve5h_czkfpwuzm5 [ i ] && rtB . j4op4jbgty_pxqvlbal2i [ i ] ) ) ;
} if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . cg0bxzudwl
. LoggedData ) , & rtB . bctdqm3hqv [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { hllmepvouh = rtB . bxmusuqb2k_ldqodwenvz [ i ] ; ovtnararkh
= rtB . ehhud2fofx_al00mdgrv4 [ i ] ; dx0jrmvjat = rtB .
dwlcmrswsg_ezqlmfzvpq [ i ] ; rtB . puuhl5bfrb [ i ] = ( ( dx0jrmvjat &&
ovtnararkh && hllmepvouh ) || ( ( ! dx0jrmvjat ) && ( ! ovtnararkh ) &&
hllmepvouh ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput
( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . eiur0wrcts . LoggedData ) , & rtB . puuhl5bfrb [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { nonu0dvgna = rtB .
m15wwk5ouv_dapv3jlyq5 [ i ] ; ii5cdjkgoe = rtB . hu3zsxmvrk_jz50ptvnrg [ i ]
; cmu5r52zus = rtB . lkht5ggrzj_ju13rw2h0m [ i ] ; rtB . jg4g51cq5r [ i ] = (
( cmu5r52zus && ii5cdjkgoe && nonu0dvgna ) || ( ( ! cmu5r52zus ) && ( !
ii5cdjkgoe ) && nonu0dvgna ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . penqdnwkab . LoggedData ) , & rtB . jg4g51cq5r [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { j1yh4neqyt = rtB .
ozim03upna_bnlywzniup [ i ] ; dff1womlyo = rtB . guqm4hnyxs_nvsvtgkap4 [ i ]
; htj2ju4onh = rtB . i2aceuk4bc_oyypvi4boh [ i ] ; rtB . dkwsdhcmgi [ i ] = (
( htj2ju4onh && dff1womlyo && j1yh4neqyt ) || ( ( ! htj2ju4onh ) && ( !
dff1womlyo ) && j1yh4neqyt ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . arch5uuns0 . LoggedData ) , & rtB . dkwsdhcmgi [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { lmrwahoeoz = rtB .
etwythiorx_hv2ho1zopz [ i ] ; bpiyyozbli = rtB . kpasnofzyu_jacdjrqyev [ i ]
; nrz5hhizo5 = rtB . c4wwzzbop5_m3yhjduhi1 [ i ] ; rtB . nzzrf3025p [ i ] = (
( nrz5hhizo5 && bpiyyozbli && lmrwahoeoz ) || ( ( ! nrz5hhizo5 ) && ( !
bpiyyozbli ) && lmrwahoeoz ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ondinwor10 . LoggedData ) , & rtB . nzzrf3025p [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { nazzybkhxz = rtB .
mgwgq5lwlt_lnjdk5wtww [ i ] ; pnrhg4ujxe = rtB . pw5myprmlg_c0dok3111h [ i ]
; cdlkwc2ls5 = rtB . chps1fuyu5_h522xzlxvt [ i ] ; rtB . homs2h42w5 [ i ] = (
( cdlkwc2ls5 && pnrhg4ujxe && nazzybkhxz ) || ( ( ! cdlkwc2ls5 ) && ( !
pnrhg4ujxe ) && nazzybkhxz ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . j5unx1snrf . LoggedData ) , & rtB . homs2h42w5 [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { faz35ftyoo = rtB .
o4ybcku3w0_owjr1h1vqy [ i ] ; g0vtxlenkf = rtB . pmlsnhnbfs_p5h3gwuwqg [ i ]
; n154m1grse = rtB . pjqnvz1cq1_as0qznsxlv [ i ] ; rtB . dja5cpo1bk [ i ] = (
( n154m1grse && g0vtxlenkf && faz35ftyoo ) || ( ( ! n154m1grse ) && ( !
g0vtxlenkf ) && faz35ftyoo ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . lqtv55rxal . LoggedData ) , & rtB . dja5cpo1bk [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { bh3x0txmep = rtB .
d5yq5izpze_lxo5edjg3c [ i ] ; iwfl35rfeu = rtB . ghvxlhnfsd_ifotjnizh4 [ i ]
; rtB . ftgyvdtej5 [ i ] = ( ( iwfl35rfeu && bh3x0txmep && ( rtP .
Constant8_Value != 0.0 ) ) || ( ( ! iwfl35rfeu ) && ( ! bh3x0txmep ) && ( rtP
. Constant8_Value != 0.0 ) ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . nugueput5p . LoggedData ) , & rtB . ftgyvdtej5 [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { pmcq3pvib0 = rtB .
lmfmqrlxe1_afnsueciae [ i ] ; dp3ky5mqwb = rtB . mczgpv2tly_ltu3syw14q [ i ]
; cjrls0qj5w = rtB . btuwy4jmme_evg4t2fsev [ i ] ; rtB . faktrlkhtc [ i ] = (
( cjrls0qj5w && dp3ky5mqwb && pmcq3pvib0 ) || ( ( ! cjrls0qj5w ) && ( !
dp3ky5mqwb ) && pmcq3pvib0 ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . e50hwlfetp . LoggedData ) , & rtB . faktrlkhtc [ 0 ] , 0
) ; } } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) {
rtB . gtqmwx3mzy = ( rtP . Constant_Value != 0.0 ) ; rtB . d55hvhulp0 = ! (
rtP . Constant_Value != 0.0 ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlZeroCrossings ( void ) { { const double
* timePtr = ( double * ) rtDW . g0xb4l5keh . TimePtr ; int_T * zcTimeIndices
= & rtDW . knljyxljhx ; int_T zcTimeIndicesIdx = rtDW . a4ka45qq3i ; ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) -> hno4cx35g4 = ssGetT ( rtS ) -
timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr =
( double * ) rtDW . guvwlab5cj . TimePtr ; int_T * zcTimeIndices = & rtDW .
cibzpdmmhr ; int_T zcTimeIndicesIdx = rtDW . liwlvxel1g ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> b3w33141pz = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ly2u0svbhz . TimePtr ; int_T * zcTimeIndices = & rtDW .
jtcicpj2sm ; int_T zcTimeIndicesIdx = rtDW . pjfm2molyz ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> ewabdelywv = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . k4pmebkxm0 . TimePtr ; int_T * zcTimeIndices = & rtDW .
lsq2kpx252 ; int_T zcTimeIndicesIdx = rtDW . pcu5b3ghhi ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> hjwjrzxqw1 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . dvrypl0qlq . TimePtr ; int_T * zcTimeIndices = & rtDW .
eabcjupldh ; int_T zcTimeIndicesIdx = rtDW . hmjfatyrl4 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> jyzv5vhv2x = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . k43hkxinwx . TimePtr ; int_T * zcTimeIndices = & rtDW .
nwn5t1uwqp ; int_T zcTimeIndicesIdx = rtDW . f3iigipiku ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> fxmlwwdmnu = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . nnintsv2v5 . TimePtr ; int_T * zcTimeIndices = & rtDW .
dl1isdhfyz ; int_T zcTimeIndicesIdx = rtDW . a11comamzj ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> nrlttrgcpm = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . glchecpn25 . TimePtr ; int_T * zcTimeIndices = & rtDW .
oniqdvpsin ; int_T zcTimeIndicesIdx = rtDW . h3gwww4axl ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> h2gustonxi = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . fghyjkm11b . TimePtr ; int_T * zcTimeIndices = & rtDW .
fbuzu2oh1p ; int_T zcTimeIndicesIdx = rtDW . jvs3kxs40w ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> c4xs13odpo = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ofdt3igasd . TimePtr ; int_T * zcTimeIndices = & rtDW .
obilf4y22j ; int_T zcTimeIndicesIdx = rtDW . c0y1ylaiwq ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> bpl3i4duyd = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . nxbtbx35wl . TimePtr ; int_T * zcTimeIndices = & rtDW .
mxzvbg4ftd ; int_T zcTimeIndicesIdx = rtDW . ljlsms1abt ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> pbx0gzcmgv = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . cggw1zeixd . TimePtr ; int_T * zcTimeIndices = & rtDW .
ozpe3grulu ; int_T zcTimeIndicesIdx = rtDW . czletarm4o ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> laqlnvhkhp = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . koghksg1kx . TimePtr ; int_T * zcTimeIndices = & rtDW .
daspqe2aoe ; int_T zcTimeIndicesIdx = rtDW . hjp4ic2mxc ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> ovxvk1vtm1 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . g3jmse5nhb . TimePtr ; int_T * zcTimeIndices = & rtDW .
mv5dusxviz ; int_T zcTimeIndicesIdx = rtDW . atu2lxmomi ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> lvv32kc5iz = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . nbr0vpfhyq . TimePtr ; int_T * zcTimeIndices = & rtDW .
oakvbgle2d ; int_T zcTimeIndicesIdx = rtDW . omkjsjveyj ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> ecdbtztlj3 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . m5n310htgl . TimePtr ; int_T * zcTimeIndices = & rtDW .
heuczihubc ; int_T zcTimeIndicesIdx = rtDW . f0skiflgxl ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> crmwhgquwu = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } } void MdlTerminate ( void ) {
rt_FREE ( rtDW . g0xb4l5keh . RSimInfoPtr ) ; rt_FREE ( rtDW . guvwlab5cj .
RSimInfoPtr ) ; rt_FREE ( rtDW . ly2u0svbhz . RSimInfoPtr ) ; rt_FREE ( rtDW
. k4pmebkxm0 . RSimInfoPtr ) ; rt_FREE ( rtDW . dvrypl0qlq . RSimInfoPtr ) ;
rt_FREE ( rtDW . k43hkxinwx . RSimInfoPtr ) ; rt_FREE ( rtDW . nnintsv2v5 .
RSimInfoPtr ) ; rt_FREE ( rtDW . glchecpn25 . RSimInfoPtr ) ; rt_FREE ( rtDW
. fghyjkm11b . RSimInfoPtr ) ; rt_FREE ( rtDW . ofdt3igasd . RSimInfoPtr ) ;
rt_FREE ( rtDW . nxbtbx35wl . RSimInfoPtr ) ; rt_FREE ( rtDW . cggw1zeixd .
RSimInfoPtr ) ; rt_FREE ( rtDW . koghksg1kx . RSimInfoPtr ) ; rt_FREE ( rtDW
. g3jmse5nhb . RSimInfoPtr ) ; rt_FREE ( rtDW . nbr0vpfhyq . RSimInfoPtr ) ;
rt_FREE ( rtDW . m5n310htgl . RSimInfoPtr ) ; { if ( rtDW . azi3a5jqgt .
AQHandles ) { sdiTerminateStreaming ( & rtDW . azi3a5jqgt . AQHandles ) ; } }
} static void mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_Approx_Multiplier_M1_AMA1_NAB12_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Approx_Multiplier_M1_AMA1_NAB12_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_Approx_Multiplier_M1_AMA1_NAB12_extractBitFieldFromMxArray ( const
mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Approx_Multiplier_M1_AMA1_NAB12_extractBitFieldFromMxArray ( const mxArray
* srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) ; static void
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Approx_Multiplier_M1_AMA1_NAB12_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_Approx_Multiplier_M1_AMA1_NAB12_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Approx_Multiplier_M1_AMA1_NAB12_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_Approx_Multiplier_M1_AMA1_NAB12_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray *
mr_Approx_Multiplier_M1_AMA1_NAB12_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 48 ] = { "rtDW.knljyxljhx" , "rtDW.a4ka45qq3i" ,
"rtDW.e0resaer1z" , "rtDW.cibzpdmmhr" , "rtDW.liwlvxel1g" , "rtDW.b5vx33zofm"
, "rtDW.jtcicpj2sm" , "rtDW.pjfm2molyz" , "rtDW.gcwskomyjc" ,
"rtDW.lsq2kpx252" , "rtDW.pcu5b3ghhi" , "rtDW.pzdmkrguwq" , "rtDW.eabcjupldh"
, "rtDW.hmjfatyrl4" , "rtDW.j310mstkss" , "rtDW.nwn5t1uwqp" ,
"rtDW.f3iigipiku" , "rtDW.mwqvaddvfl" , "rtDW.dl1isdhfyz" , "rtDW.a11comamzj"
, "rtDW.jw3bgkm4th" , "rtDW.oniqdvpsin" , "rtDW.h3gwww4axl" ,
"rtDW.djvjedwkym" , "rtDW.fbuzu2oh1p" , "rtDW.jvs3kxs40w" , "rtDW.nxq3votgjx"
, "rtDW.obilf4y22j" , "rtDW.c0y1ylaiwq" , "rtDW.hlmig0afwy" ,
"rtDW.mxzvbg4ftd" , "rtDW.ljlsms1abt" , "rtDW.hol1rnwm5o" , "rtDW.ozpe3grulu"
, "rtDW.czletarm4o" , "rtDW.ddavbq1tqq" , "rtDW.daspqe2aoe" ,
"rtDW.hjp4ic2mxc" , "rtDW.gj4wn3ah3r" , "rtDW.mv5dusxviz" , "rtDW.atu2lxmomi"
, "rtDW.a42hiitwvh" , "rtDW.oakvbgle2d" , "rtDW.omkjsjveyj" ,
"rtDW.ghhsf1sxoz" , "rtDW.heuczihubc" , "rtDW.f0skiflgxl" , "rtDW.lrtzlied03"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 48 ,
rtdwDataFieldNames ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray
( rtdwData , 0 , 0 , ( const void * ) & ( rtDW . knljyxljhx ) , sizeof ( rtDW
. knljyxljhx ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . a4ka45qq3i ) , sizeof ( rtDW .
a4ka45qq3i ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 2 , ( const void * ) & ( rtDW . e0resaer1z ) , sizeof ( rtDW .
e0resaer1z ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 3 , ( const void * ) & ( rtDW . cibzpdmmhr ) , sizeof ( rtDW .
cibzpdmmhr ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . liwlvxel1g ) , sizeof ( rtDW .
liwlvxel1g ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( rtDW . b5vx33zofm ) , sizeof ( rtDW .
b5vx33zofm ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 6 , ( const void * ) & ( rtDW . jtcicpj2sm ) , sizeof ( rtDW .
jtcicpj2sm ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . pjfm2molyz ) , sizeof ( rtDW .
pjfm2molyz ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 8 , ( const void * ) & ( rtDW . gcwskomyjc ) , sizeof ( rtDW .
gcwskomyjc ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( rtDW . lsq2kpx252 ) , sizeof ( rtDW .
lsq2kpx252 ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( rtDW . pcu5b3ghhi ) , sizeof ( rtDW
. pcu5b3ghhi ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 11 , ( const void * ) & ( rtDW . pzdmkrguwq ) , sizeof ( rtDW
. pzdmkrguwq ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 12 , ( const void * ) & ( rtDW . eabcjupldh ) , sizeof ( rtDW
. eabcjupldh ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( rtDW . hmjfatyrl4 ) , sizeof ( rtDW
. hmjfatyrl4 ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 14 , ( const void * ) & ( rtDW . j310mstkss ) , sizeof ( rtDW
. j310mstkss ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( rtDW . nwn5t1uwqp ) , sizeof ( rtDW
. nwn5t1uwqp ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( rtDW . f3iigipiku ) , sizeof ( rtDW
. f3iigipiku ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( rtDW . mwqvaddvfl ) , sizeof ( rtDW
. mwqvaddvfl ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 18 , ( const void * ) & ( rtDW . dl1isdhfyz ) , sizeof ( rtDW
. dl1isdhfyz ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( rtDW . a11comamzj ) , sizeof ( rtDW
. a11comamzj ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( rtDW . jw3bgkm4th ) , sizeof ( rtDW
. jw3bgkm4th ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 21 , ( const void * ) & ( rtDW . oniqdvpsin ) , sizeof ( rtDW
. oniqdvpsin ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( rtDW . h3gwww4axl ) , sizeof ( rtDW
. h3gwww4axl ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( rtDW . djvjedwkym ) , sizeof ( rtDW
. djvjedwkym ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 24 , ( const void * ) & ( rtDW . fbuzu2oh1p ) , sizeof ( rtDW
. fbuzu2oh1p ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( rtDW . jvs3kxs40w ) , sizeof ( rtDW
. jvs3kxs40w ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 26 , ( const void * ) & ( rtDW . nxq3votgjx ) , sizeof ( rtDW
. nxq3votgjx ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( rtDW . obilf4y22j ) , sizeof ( rtDW
. obilf4y22j ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 28 , ( const void * ) & ( rtDW . c0y1ylaiwq ) , sizeof ( rtDW
. c0y1ylaiwq ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( rtDW . hlmig0afwy ) , sizeof ( rtDW
. hlmig0afwy ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( rtDW . mxzvbg4ftd ) , sizeof ( rtDW
. mxzvbg4ftd ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 31 , ( const void * ) & ( rtDW . ljlsms1abt ) , sizeof ( rtDW
. ljlsms1abt ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( rtDW . hol1rnwm5o ) , sizeof ( rtDW
. hol1rnwm5o ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( rtDW . ozpe3grulu ) , sizeof ( rtDW
. ozpe3grulu ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 34 , ( const void * ) & ( rtDW . czletarm4o ) , sizeof ( rtDW
. czletarm4o ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( rtDW . ddavbq1tqq ) , sizeof ( rtDW
. ddavbq1tqq ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( rtDW . daspqe2aoe ) , sizeof ( rtDW
. daspqe2aoe ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( rtDW . hjp4ic2mxc ) , sizeof ( rtDW
. hjp4ic2mxc ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 38 , ( const void * ) & ( rtDW . gj4wn3ah3r ) , sizeof ( rtDW
. gj4wn3ah3r ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( rtDW . mv5dusxviz ) , sizeof ( rtDW
. mv5dusxviz ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( rtDW . atu2lxmomi ) , sizeof ( rtDW
. atu2lxmomi ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( rtDW . a42hiitwvh ) , sizeof ( rtDW
. a42hiitwvh ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( rtDW . oakvbgle2d ) , sizeof ( rtDW
. oakvbgle2d ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 43 , ( const void * ) & ( rtDW . omkjsjveyj ) , sizeof ( rtDW
. omkjsjveyj ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 44 , ( const void * ) & ( rtDW . ghhsf1sxoz ) , sizeof ( rtDW
. ghhsf1sxoz ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( rtDW . heuczihubc ) , sizeof ( rtDW
. heuczihubc ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 46 , ( const void * ) & ( rtDW . f0skiflgxl ) , sizeof ( rtDW
. f0skiflgxl ) ) ; mr_Approx_Multiplier_M1_AMA1_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( rtDW . lrtzlied03 ) , sizeof ( rtDW
. lrtzlied03 ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_Approx_Multiplier_M1_AMA1_NAB12_SetDWork ( const mxArray *
ssDW ) { ( void ) ssDW ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . knljyxljhx ) , rtdwData , 0 , 0 , sizeof ( rtDW . knljyxljhx ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . a4ka45qq3i ) , rtdwData , 0 , 1 , sizeof ( rtDW . a4ka45qq3i ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . e0resaer1z ) , rtdwData , 0 , 2 , sizeof ( rtDW . e0resaer1z ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . cibzpdmmhr ) , rtdwData , 0 , 3 , sizeof ( rtDW . cibzpdmmhr ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . liwlvxel1g ) , rtdwData , 0 , 4 , sizeof ( rtDW . liwlvxel1g ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . b5vx33zofm ) , rtdwData , 0 , 5 , sizeof ( rtDW . b5vx33zofm ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jtcicpj2sm ) , rtdwData , 0 , 6 , sizeof ( rtDW . jtcicpj2sm ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . pjfm2molyz ) , rtdwData , 0 , 7 , sizeof ( rtDW . pjfm2molyz ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . gcwskomyjc ) , rtdwData , 0 , 8 , sizeof ( rtDW . gcwskomyjc ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . lsq2kpx252 ) , rtdwData , 0 , 9 , sizeof ( rtDW . lsq2kpx252 ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . pcu5b3ghhi ) , rtdwData , 0 , 10 , sizeof ( rtDW . pcu5b3ghhi ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . pzdmkrguwq ) , rtdwData , 0 , 11 , sizeof ( rtDW . pzdmkrguwq ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . eabcjupldh ) , rtdwData , 0 , 12 , sizeof ( rtDW . eabcjupldh ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hmjfatyrl4 ) , rtdwData , 0 , 13 , sizeof ( rtDW . hmjfatyrl4 ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . j310mstkss ) , rtdwData , 0 , 14 , sizeof ( rtDW . j310mstkss ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . nwn5t1uwqp ) , rtdwData , 0 , 15 , sizeof ( rtDW . nwn5t1uwqp ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . f3iigipiku ) , rtdwData , 0 , 16 , sizeof ( rtDW . f3iigipiku ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . mwqvaddvfl ) , rtdwData , 0 , 17 , sizeof ( rtDW . mwqvaddvfl ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . dl1isdhfyz ) , rtdwData , 0 , 18 , sizeof ( rtDW . dl1isdhfyz ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . a11comamzj ) , rtdwData , 0 , 19 , sizeof ( rtDW . a11comamzj ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jw3bgkm4th ) , rtdwData , 0 , 20 , sizeof ( rtDW . jw3bgkm4th ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . oniqdvpsin ) , rtdwData , 0 , 21 , sizeof ( rtDW . oniqdvpsin ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . h3gwww4axl ) , rtdwData , 0 , 22 , sizeof ( rtDW . h3gwww4axl ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . djvjedwkym ) , rtdwData , 0 , 23 , sizeof ( rtDW . djvjedwkym ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . fbuzu2oh1p ) , rtdwData , 0 , 24 , sizeof ( rtDW . fbuzu2oh1p ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jvs3kxs40w ) , rtdwData , 0 , 25 , sizeof ( rtDW . jvs3kxs40w ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . nxq3votgjx ) , rtdwData , 0 , 26 , sizeof ( rtDW . nxq3votgjx ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . obilf4y22j ) , rtdwData , 0 , 27 , sizeof ( rtDW . obilf4y22j ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . c0y1ylaiwq ) , rtdwData , 0 , 28 , sizeof ( rtDW . c0y1ylaiwq ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hlmig0afwy ) , rtdwData , 0 , 29 , sizeof ( rtDW . hlmig0afwy ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . mxzvbg4ftd ) , rtdwData , 0 , 30 , sizeof ( rtDW . mxzvbg4ftd ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ljlsms1abt ) , rtdwData , 0 , 31 , sizeof ( rtDW . ljlsms1abt ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hol1rnwm5o ) , rtdwData , 0 , 32 , sizeof ( rtDW . hol1rnwm5o ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ozpe3grulu ) , rtdwData , 0 , 33 , sizeof ( rtDW . ozpe3grulu ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . czletarm4o ) , rtdwData , 0 , 34 , sizeof ( rtDW . czletarm4o ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ddavbq1tqq ) , rtdwData , 0 , 35 , sizeof ( rtDW . ddavbq1tqq ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . daspqe2aoe ) , rtdwData , 0 , 36 , sizeof ( rtDW . daspqe2aoe ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hjp4ic2mxc ) , rtdwData , 0 , 37 , sizeof ( rtDW . hjp4ic2mxc ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . gj4wn3ah3r ) , rtdwData , 0 , 38 , sizeof ( rtDW . gj4wn3ah3r ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . mv5dusxviz ) , rtdwData , 0 , 39 , sizeof ( rtDW . mv5dusxviz ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . atu2lxmomi ) , rtdwData , 0 , 40 , sizeof ( rtDW . atu2lxmomi ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . a42hiitwvh ) , rtdwData , 0 , 41 , sizeof ( rtDW . a42hiitwvh ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . oakvbgle2d ) , rtdwData , 0 , 42 , sizeof ( rtDW . oakvbgle2d ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . omkjsjveyj ) , rtdwData , 0 , 43 , sizeof ( rtDW . omkjsjveyj ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ghhsf1sxoz ) , rtdwData , 0 , 44 , sizeof ( rtDW . ghhsf1sxoz ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . heuczihubc ) , rtdwData , 0 , 45 , sizeof ( rtDW . heuczihubc ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . f0skiflgxl ) , rtdwData , 0 , 46 , sizeof ( rtDW . f0skiflgxl ) ) ;
mr_Approx_Multiplier_M1_AMA1_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . lrtzlied03 ) , rtdwData , 0 , 47 , sizeof ( rtDW . lrtzlied03 ) ) ; }
} mxArray * mr_Approx_Multiplier_M1_AMA1_NAB12_GetSimStateDisallowedBlocks (
) { return NULL ; } void MdlInitializeSizes ( void ) { ssSetNumContStates (
rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ;
ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ;
ssSetNumBlocks ( rtS , 632 ) ; ssSetNumBlockIO ( rtS , 19 ) ;
ssSetNumBlockParams ( rtS , 2097196 ) ; } void MdlInitializeSampleTimes (
void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0
) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 1583969531U ) ;
ssSetChecksumVal ( rtS , 1 , 2007326612U ) ; ssSetChecksumVal ( rtS , 2 ,
437079099U ) ; ssSetChecksumVal ( rtS , 3 , 3818319278U ) ; }
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
Approx_Multiplier_M1_AMA1_NAB12_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Approx_Multiplier_M1_AMA1_NAB12" ) ; ssSetPath ( rtS ,
"Approx_Multiplier_M1_AMA1_NAB12" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo )
; } { rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; static uint8_T zcAttributes [ 16 ] = { (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL_UP ) } ; ssSetStepSize ( rtS , 0.0002 ) ; ssSetMinStepSize ( rtS
, 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS
, 0 ) ; ssSetMaxStepSize ( rtS , 0.0002 ) ; ssSetSolverMaxOrder ( rtS , - 1 )
; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetSolverZcSignalAttrib ( rtS ,
zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 16 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 16 ) ; } ssSetChecksumVal ( rtS , 0 ,
1583969531U ) ; ssSetChecksumVal ( rtS , 1 , 2007326612U ) ; ssSetChecksumVal
( rtS , 2 , 437079099U ) ; ssSetChecksumVal ( rtS , 3 , 3818319278U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Approx_Multiplier_M1_AMA1_NAB12_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_Approx_Multiplier_M1_AMA1_NAB12_GetDWork ) ; slsaSetWorkFcnForSimTargetOP
( rtS , mr_Approx_Multiplier_M1_AMA1_NAB12_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
