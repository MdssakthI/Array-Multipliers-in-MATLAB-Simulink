#include "rt_logging_mmi.h"
#include "Approx_Multiplier_M3_AMA3_capi.h"
#include <math.h>
#include "Approx_Multiplier_M3_AMA3.h"
#include "Approx_Multiplier_M3_AMA3_private.h"
#include "Approx_Multiplier_M3_AMA3_dt.h"
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
= sdiGetLabelFromChars ( "Approx_Multiplier_M3_AMA3/Partial Product Row 8" )
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
. i1idkhyivn . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"130add7d-fe02-4bfe-8433-5297d4f550bc" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . i1idkhyivn . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . i1idkhyivn . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . i1idkhyivn .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . i1idkhyivn . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . i1idkhyivn . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 65536 } ; rtDW . htr1izgrwz . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . htr1izgrwz . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . bwdrbajjum . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . bwdrbajjum . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . nzc5cbptd2 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nzc5cbptd2 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . db5tg4f432 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . db5tg4f432 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . nvzvmncc32 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nvzvmncc32 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ey2q1a0juo . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ey2q1a0juo . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . dcjvfvqrrm . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . dcjvfvqrrm . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . pmwyrvpwuv . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . pmwyrvpwuv . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ef2tbr3zkc . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ef2tbr3zkc . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . h4kgvkhif3 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . h4kgvkhif3 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . duoloaq3l3 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . duoloaq3l3 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . dcmmg3x1y2 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . dcmmg3x1y2 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . lgjsik0a1v . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . lgjsik0a1v . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . haw1uambsf . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . haw1uambsf . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ppq01k01ro . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ppq01k01ro . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ocx3rwgp5n . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ocx3rwgp5n . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . oxtg0nrans . TimePtr = fromwksInfo -> time ;
rtDW . oxtg0nrans . DataPtr = fromwksInfo -> data ; rtDW . oxtg0nrans .
RSimInfoPtr = fromwksInfo ; } rtDW . ps2znodovw . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . anbyqeqhho ; const double * timePoints = ( double *
) rtDW . oxtg0nrans . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . jsd1ksfewi
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . p2ll3502se . TimePtr = fromwksInfo -> time ;
rtDW . p2ll3502se . DataPtr = fromwksInfo -> data ; rtDW . p2ll3502se .
RSimInfoPtr = fromwksInfo ; } rtDW . jiac0cbguk . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ngfspxrd23 ; const double * timePoints = ( double *
) rtDW . p2ll3502se . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . f1vm3nfado
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . itc1nn5uma . TimePtr = fromwksInfo -> time ;
rtDW . itc1nn5uma . DataPtr = fromwksInfo -> data ; rtDW . itc1nn5uma .
RSimInfoPtr = fromwksInfo ; } rtDW . l5xsozc2ul . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . avecdpuxre ; const double * timePoints = ( double *
) rtDW . itc1nn5uma . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . ioqyqoalne
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . cbllkrk5ok . TimePtr = fromwksInfo -> time ;
rtDW . cbllkrk5ok . DataPtr = fromwksInfo -> data ; rtDW . cbllkrk5ok .
RSimInfoPtr = fromwksInfo ; } rtDW . dhnbacq5om . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . mnzge41qdh ; const double * timePoints = ( double *
) rtDW . cbllkrk5ok . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . c1whuykri1
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . cf23xd2iev . TimePtr = fromwksInfo -> time ;
rtDW . cf23xd2iev . DataPtr = fromwksInfo -> data ; rtDW . cf23xd2iev .
RSimInfoPtr = fromwksInfo ; } rtDW . fjx3qw2pbg . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . eosjlsccjz ; const double * timePoints = ( double *
) rtDW . cf23xd2iev . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . j3mhxlgarq
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . ietuenx3i2 . TimePtr = fromwksInfo -> time ;
rtDW . ietuenx3i2 . DataPtr = fromwksInfo -> data ; rtDW . ietuenx3i2 .
RSimInfoPtr = fromwksInfo ; } rtDW . lxuj2cx0tl . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . bkl45ijtav ; const double * timePoints = ( double *
) rtDW . ietuenx3i2 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . m2qlk4ptp3
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . alxkrbalx0 . TimePtr = fromwksInfo -> time ;
rtDW . alxkrbalx0 . DataPtr = fromwksInfo -> data ; rtDW . alxkrbalx0 .
RSimInfoPtr = fromwksInfo ; } rtDW . nkdrkcqhkl . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . dzb4xa21pv ; const double * timePoints = ( double *
) rtDW . alxkrbalx0 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . jvew4rz0fv
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . jnpvkmxlxy . TimePtr = fromwksInfo -> time ;
rtDW . jnpvkmxlxy . DataPtr = fromwksInfo -> data ; rtDW . jnpvkmxlxy .
RSimInfoPtr = fromwksInfo ; } rtDW . h23jwch0yf . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . lbivdgyqyw ; const double * timePoints = ( double *
) rtDW . jnpvkmxlxy . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . c1ekirrnbf
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . mqbhms4nl1 . TimePtr = fromwksInfo -> time ;
rtDW . mqbhms4nl1 . DataPtr = fromwksInfo -> data ; rtDW . mqbhms4nl1 .
RSimInfoPtr = fromwksInfo ; } rtDW . j3ak4rycm4 . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . m41ys0hbb2 ; const double * timePoints = ( double *
) rtDW . mqbhms4nl1 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . eltzdzm2xb
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . dyhvwc5vja . TimePtr = fromwksInfo -> time ;
rtDW . dyhvwc5vja . DataPtr = fromwksInfo -> data ; rtDW . dyhvwc5vja .
RSimInfoPtr = fromwksInfo ; } rtDW . cu2ifxkm3s . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ck0rx0mnxl ; const double * timePoints = ( double *
) rtDW . dyhvwc5vja . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . pkxitby4f3
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . pdy5jueqrh . TimePtr = fromwksInfo -> time ;
rtDW . pdy5jueqrh . DataPtr = fromwksInfo -> data ; rtDW . pdy5jueqrh .
RSimInfoPtr = fromwksInfo ; } rtDW . mxawas1cca . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . codeguntwv ; const double * timePoints = ( double *
) rtDW . pdy5jueqrh . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . joxwee1hat
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . c1h3ctgqpj . TimePtr = fromwksInfo -> time ;
rtDW . c1h3ctgqpj . DataPtr = fromwksInfo -> data ; rtDW . c1h3ctgqpj .
RSimInfoPtr = fromwksInfo ; } rtDW . lthjpvw2ja . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . nf5kfotlzq ; const double * timePoints = ( double *
) rtDW . c1h3ctgqpj . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . nadsikh0yy
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . etnkf1pdot . TimePtr = fromwksInfo -> time ;
rtDW . etnkf1pdot . DataPtr = fromwksInfo -> data ; rtDW . etnkf1pdot .
RSimInfoPtr = fromwksInfo ; } rtDW . ig2yyen4dq . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . fop2prr0bf ; const double * timePoints = ( double *
) rtDW . etnkf1pdot . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . dozhfgcamo
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . m0ersehk4c . TimePtr = fromwksInfo -> time ;
rtDW . m0ersehk4c . DataPtr = fromwksInfo -> data ; rtDW . m0ersehk4c .
RSimInfoPtr = fromwksInfo ; } rtDW . ktgnhdwjii . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . izqj2pp23z ; const double * timePoints = ( double *
) rtDW . m0ersehk4c . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . nlkb1imv5x
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . hin42u5r1x . TimePtr = fromwksInfo -> time ;
rtDW . hin42u5r1x . DataPtr = fromwksInfo -> data ; rtDW . hin42u5r1x .
RSimInfoPtr = fromwksInfo ; } rtDW . fqrsvzknvr . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ezsa5od0uf ; const double * timePoints = ( double *
) rtDW . hin42u5r1x . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . ip304rfffi
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . hramb0ocol . TimePtr = fromwksInfo -> time ;
rtDW . hramb0ocol . DataPtr = fromwksInfo -> data ; rtDW . hramb0ocol .
RSimInfoPtr = fromwksInfo ; } rtDW . be1ve5xyyq . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . akrsefwjhe ; const double * timePoints = ( double *
) rtDW . hramb0ocol . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . kf2ahulxfb
= 0 ; } } } void MdlOutputs ( int_T tid ) { int32_T i ; boolean_T a0fssfa4lp
; boolean_T a4h0v5gmj3 ; boolean_T a4hqrbq3xu ; boolean_T af0zmvwwi0 ;
boolean_T afqlzyqa5l ; boolean_T ainiqcduvj ; boolean_T ajrsx3apmw ;
boolean_T bw4buni0ei ; boolean_T c0s0jxazkd ; boolean_T cmn1yyt3zb ;
boolean_T cmq5noszn2 ; boolean_T cwugsvxxyn ; boolean_T djqw3yenpp ;
boolean_T eznsdhsnrd ; boolean_T f5f54dxnk0 ; boolean_T fruajt2fbj ;
boolean_T gqzdyoolsq ; boolean_T h3p4zcqmnt ; boolean_T h4qhrg0yiw ;
boolean_T hymti4ozdz ; boolean_T i3tugis54u ; boolean_T ih4n04c5yx ;
boolean_T iregdiskaa ; boolean_T jnjdyi4kyq ; boolean_T jobotw5hhl ;
boolean_T jvuk3es5r4 ; boolean_T jxdjayhgxo ; boolean_T jybmh521h3 ;
boolean_T krwzxcowid ; boolean_T lmbefl5pfz ; boolean_T lqqdumaoeo ;
boolean_T ls4tl4mdtj ; boolean_T lwv4mo23rs ; boolean_T lxeowiizhe ;
boolean_T mbwfy3rxtp ; boolean_T mhey4q1xk3 ; boolean_T npbp4zfqxt ;
boolean_T nwzhjgad2z ; boolean_T ocgjipdr44 ; boolean_T ow5kwgtv5o ;
boolean_T p1kozzcxvy ; boolean_T pjnreeombu ; boolean_T ppow0zqpb0 ;
boolean_T psgyxxqttn ; boolean_T ptdymkfbs0 ; boolean_T pw21surwng ; { real_T
* pDataValues = ( real_T * ) rtDW . oxtg0nrans . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . oxtg0nrans . TimePtr ; int_T currTimeIndex
= rtDW . ps2znodovw . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
oxtg0nrans . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . ps2znodovw .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
bwek2frsrx_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . bwek2frsrx_mbvzarwird [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . anbyqeqhho ; int_T * zcTimeIndicesIdx = & rtDW . jsd1ksfewi ; int_T
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
bwek2frsrx_mbvzarwird [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . p2ll3502se . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . p2ll3502se . TimePtr ; int_T currTimeIndex = rtDW . jiac0cbguk .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . p2ll3502se . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jiac0cbguk . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . byg02muxsq_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . byg02muxsq_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . ngfspxrd23 ; int_T *
zcTimeIndicesIdx = & rtDW . f1vm3nfado ; int_T zcIdx = zcTimeIndices [ *
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
byg02muxsq_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . cefaqd4mmo [ i ] = ( ( rtB . bwek2frsrx_mbvzarwird [ i ] !=
0.0 ) && ( rtB . byg02muxsq_cl54gopm0x [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . i1idkhyivn . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . i1idkhyivn . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . cefaqd4mmo [ 0 ] + 0 ) ; } } }
{ real_T * pDataValues = ( real_T * ) rtDW . itc1nn5uma . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . itc1nn5uma . TimePtr ; int_T currTimeIndex
= rtDW . l5xsozc2ul . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
itc1nn5uma . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . l5xsozc2ul .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
mh0t0qazkh_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . mh0t0qazkh_kkiq3xxxve [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . avecdpuxre ; int_T * zcTimeIndicesIdx = & rtDW . ioqyqoalne ; int_T
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
mh0t0qazkh_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . cbllkrk5ok . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . cbllkrk5ok . TimePtr ; int_T currTimeIndex = rtDW . dhnbacq5om .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . cbllkrk5ok . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . dhnbacq5om . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . istmbx0gkz_cxarnvbvui [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . istmbx0gkz_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . mnzge41qdh ; int_T *
zcTimeIndicesIdx = & rtDW . c1whuykri1 ; int_T zcIdx = zcTimeIndices [ *
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
istmbx0gkz_cxarnvbvui [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . h1hlsij0yt [ i ] = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] !=
0.0 ) && ( rtB . istmbx0gkz_cxarnvbvui [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . htr1izgrwz
. LoggedData ) , & rtB . h1hlsij0yt [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . jjzoxfcs22_dhmrxtyqop [ i ] = ( ( rtB .
mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . byg02muxsq_cl54gopm0x [ i ]
!= 0.0 ) ) ; } { real_T * pDataValues = ( real_T * ) rtDW . cf23xd2iev .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . cf23xd2iev . TimePtr ;
int_T currTimeIndex = rtDW . fjx3qw2pbg . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . cf23xd2iev . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fjx3qw2pbg . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . lgnt3oshyz_bhxxfovxdy [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . lgnt3oshyz_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . eosjlsccjz ; int_T *
zcTimeIndicesIdx = & rtDW . j3mhxlgarq ; int_T zcIdx = zcTimeIndices [ *
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
lgnt3oshyz_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { jobotw5hhl = ( ( rtB . lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && ( rtB
. istmbx0gkz_cxarnvbvui [ i ] != 0.0 ) ) ; lxeowiizhe = ! jobotw5hhl ; rtB .
pmm03rrn0a [ i ] = ( ( ( ! rtB . jjzoxfcs22_dhmrxtyqop [ i ] ) && lxeowiizhe
) || ( rtB . jvksohy2jj && lxeowiizhe ) ) ; rtB . kgtji31fj0_guugdwf2m3 [ i ]
= jobotw5hhl ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . bwdrbajjum . LoggedData ) , & rtB . pmm03rrn0a [ 0 ] , 0
) ; } } } } { real_T * pDataValues = ( real_T * ) rtDW . ietuenx3i2 . DataPtr
; real_T * pTimeValues = ( real_T * ) rtDW . ietuenx3i2 . TimePtr ; int_T
currTimeIndex = rtDW . lxuj2cx0tl . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . ietuenx3i2 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
lxuj2cx0tl . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . egm1y5tymt_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . egm1y5tymt_pbm3vprmfu [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . bkl45ijtav ; int_T * zcTimeIndicesIdx = & rtDW .
m2qlk4ptp3 ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
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
== 0 ) { d2 = d1 ; } ( & rtB . egm1y5tymt_pbm3vprmfu [ 0 ] ) [ elIdx ] = (
real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } }
} } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . l4qsnbyytd_ldqodwenvz [ i ] =
( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
egm1y5tymt_pbm3vprmfu [ i ] != 0.0 ) ) ; } { real_T * pDataValues = ( real_T
* ) rtDW . alxkrbalx0 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
alxkrbalx0 . TimePtr ; int_T currTimeIndex = rtDW . nkdrkcqhkl . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . alxkrbalx0 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . nkdrkcqhkl . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . hhentigwtv_cv5hdgrwft [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . hhentigwtv_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . dzb4xa21pv ; int_T *
zcTimeIndicesIdx = & rtDW . jvew4rz0fv ; int_T zcIdx = zcTimeIndices [ *
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
hhentigwtv_cv5hdgrwft [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { af0zmvwwi0 = ( ( rtB . lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && ( rtB
. hhentigwtv_cv5hdgrwft [ i ] != 0.0 ) ) ; gqzdyoolsq = ! af0zmvwwi0 ; rtB .
jha403gzgy_dypejvacrn [ i ] = ( ( ( ! rtB . l4qsnbyytd_ldqodwenvz [ i ] ) &&
gqzdyoolsq ) || ( rtB . nfioqm3gmv && gqzdyoolsq ) ) ; rtB .
cc23bv3sil_dhamdvybc1 [ i ] = af0zmvwwi0 ; } { real_T * pDataValues = (
real_T * ) rtDW . jnpvkmxlxy . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . jnpvkmxlxy . TimePtr ; int_T currTimeIndex = rtDW . h23jwch0yf .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . jnpvkmxlxy . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . h23jwch0yf . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . cnbgbob2rf_fqdqrf4qbc [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . cnbgbob2rf_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . lbivdgyqyw ; int_T *
zcTimeIndicesIdx = & rtDW . c1ekirrnbf ; int_T zcIdx = zcTimeIndices [ *
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
cnbgbob2rf_fqdqrf4qbc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . mqbhms4nl1 . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . mqbhms4nl1 . TimePtr ; int_T currTimeIndex = rtDW . j3ak4rycm4 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . mqbhms4nl1 . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . j3ak4rycm4 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . k5pdrflkwt_g2mlkqadfk [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . k5pdrflkwt_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . m41ys0hbb2 ; int_T *
zcTimeIndicesIdx = & rtDW . eltzdzm2xb ; int_T zcIdx = zcTimeIndices [ *
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
k5pdrflkwt_g2mlkqadfk [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { ptdymkfbs0 = ( ( rtB . cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB
. k5pdrflkwt_g2mlkqadfk [ i ] != 0.0 ) ) ; a4hqrbq3xu = ! ptdymkfbs0 ;
h4qhrg0yiw = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
hhentigwtv_cv5hdgrwft [ i ] != 0.0 ) ) ; jnjdyi4kyq = ( ( rtB .
lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . k5pdrflkwt_g2mlkqadfk [ i ]
!= 0.0 ) ) ; hymti4ozdz = ( ( h4qhrg0yiw && ( rtP . Constant6_Value != 0.0 )
) || jnjdyi4kyq ) ; rtB . c3oo1pm0qi_owjr1h1vqy [ i ] = ( ( ( ! rtB .
jha403gzgy_dypejvacrn [ i ] ) && a4hqrbq3xu ) || ( ( ! hymti4ozdz ) &&
a4hqrbq3xu ) ) ; rtB . gb3ekx3dta_lxo5edjg3c [ i ] = ptdymkfbs0 ; rtB .
nsf230vtki_bjbgfqrolh [ i ] = h4qhrg0yiw ; rtB . dmlhfbitdf_nuebgmauvi [ i ]
= jnjdyi4kyq ; rtB . mt5gte5wob_bsqwvugooi [ i ] = hymti4ozdz ; } { real_T *
pDataValues = ( real_T * ) rtDW . dyhvwc5vja . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . dyhvwc5vja . TimePtr ; int_T currTimeIndex = rtDW .
cu2ifxkm3s . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . dyhvwc5vja .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . cu2ifxkm3s . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
kgxa5vxksy_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . kgxa5vxksy_g1smspu5ke [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . ck0rx0mnxl ; int_T * zcTimeIndicesIdx = & rtDW . pkxitby4f3 ; int_T
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
kgxa5vxksy_g1smspu5ke [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . pdy5jueqrh . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . pdy5jueqrh . TimePtr ; int_T currTimeIndex = rtDW . mxawas1cca .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . pdy5jueqrh . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . mxawas1cca . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . c1aigrb2r4_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . c1aigrb2r4_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . codeguntwv ; int_T *
zcTimeIndicesIdx = & rtDW . joxwee1hat ; int_T zcIdx = zcTimeIndices [ *
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
c1aigrb2r4_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { i3tugis54u = ( ( rtB . kgxa5vxksy_g1smspu5ke [ i ] != 0.0 ) && ( rtB
. c1aigrb2r4_merlcviukg [ i ] != 0.0 ) ) ; mbwfy3rxtp = ! i3tugis54u ;
jnjdyi4kyq = ! rtB . dmlhfbitdf_nuebgmauvi [ i ] ; jnjdyi4kyq = ( ( ( ! rtB .
nsf230vtki_bjbgfqrolh [ i ] ) && jnjdyi4kyq ) || ( rtB . klitm0zcu3 &&
jnjdyi4kyq ) ) ; h4qhrg0yiw = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 )
&& ( rtB . k5pdrflkwt_g2mlkqadfk [ i ] != 0.0 ) ) ; lmbefl5pfz = ( ( rtB .
lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . c1aigrb2r4_merlcviukg [ i ]
!= 0.0 ) ) ; psgyxxqttn = ( ( h4qhrg0yiw && ( rtP . Constant5_Value != 0.0 )
) || lmbefl5pfz ) ; cmn1yyt3zb = ( ( rtB . cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0
) && ( rtB . c1aigrb2r4_merlcviukg [ i ] != 0.0 ) ) ; ls4tl4mdtj = ( (
jnjdyi4kyq && psgyxxqttn ) || cmn1yyt3zb ) ; rtB . oxwfgl1gu1_hv2ho1zopz [ i
] = ( ( ( ! rtB . c3oo1pm0qi_owjr1h1vqy [ i ] ) && mbwfy3rxtp ) || ( ( !
ls4tl4mdtj ) && mbwfy3rxtp ) ) ; rtB . k2g3v1tstw_lnjdk5wtww [ i ] =
i3tugis54u ; rtB . pimwsxq0m2_bnlywzniup [ i ] = lmbefl5pfz ; rtB .
bviem430jn_dapv3jlyq5 [ i ] = psgyxxqttn ; rtB . o1dvgrsvnz_ezqlmfzvpq [ i ]
= cmn1yyt3zb ; rtB . hh5bcxgew2_bjvjhhzy4i [ i ] = ls4tl4mdtj ; rtB .
dmlhfbitdf_nuebgmauvi [ i ] = jnjdyi4kyq ; rtB . nsf230vtki_bjbgfqrolh [ i ]
= h4qhrg0yiw ; } { real_T * pDataValues = ( real_T * ) rtDW . c1h3ctgqpj .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . c1h3ctgqpj . TimePtr ;
int_T currTimeIndex = rtDW . lthjpvw2ja . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . c1h3ctgqpj . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . lthjpvw2ja . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . n2ttkgo302_nz4o0shxby [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . n2ttkgo302_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . nf5kfotlzq ; int_T *
zcTimeIndicesIdx = & rtDW . nadsikh0yy ; int_T zcIdx = zcTimeIndices [ *
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
n2ttkgo302_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . etnkf1pdot . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . etnkf1pdot . TimePtr ; int_T currTimeIndex = rtDW . ig2yyen4dq .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . etnkf1pdot . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ig2yyen4dq . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . e35f24wuar_ppxrqq0gsf [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . e35f24wuar_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . fop2prr0bf ; int_T *
zcTimeIndicesIdx = & rtDW . dozhfgcamo ; int_T zcIdx = zcTimeIndices [ *
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
e35f24wuar_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { fruajt2fbj = ( ( rtB . n2ttkgo302_nz4o0shxby [ i ] != 0.0 ) && ( rtB
. e35f24wuar_ppxrqq0gsf [ i ] != 0.0 ) ) ; jxdjayhgxo = ! fruajt2fbj ;
cmn1yyt3zb = ! rtB . o1dvgrsvnz_ezqlmfzvpq [ i ] ; cmn1yyt3zb = ( ( ( ! rtB .
dmlhfbitdf_nuebgmauvi [ i ] ) && cmn1yyt3zb ) || ( ( ! rtB .
bviem430jn_dapv3jlyq5 [ i ] ) && cmn1yyt3zb ) ) ; lmbefl5pfz = ! rtB .
pimwsxq0m2_bnlywzniup [ i ] ; psgyxxqttn = ( ( ( ! rtB .
nsf230vtki_bjbgfqrolh [ i ] ) && lmbefl5pfz ) || ( rtB . nbczllmynw &&
lmbefl5pfz ) ) ; lmbefl5pfz = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 )
&& ( rtB . c1aigrb2r4_merlcviukg [ i ] != 0.0 ) ) ; jnjdyi4kyq = ( ( rtB .
lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . e35f24wuar_ppxrqq0gsf [ i ]
!= 0.0 ) ) ; h4qhrg0yiw = ( ( lmbefl5pfz && ( rtP . Constant4_Value != 0.0 )
) || jnjdyi4kyq ) ; iregdiskaa = ( ( rtB . cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0
) && ( rtB . e35f24wuar_ppxrqq0gsf [ i ] != 0.0 ) ) ; p1kozzcxvy = ( (
psgyxxqttn && h4qhrg0yiw ) || iregdiskaa ) ; a4h0v5gmj3 = ( ( rtB .
kgxa5vxksy_g1smspu5ke [ i ] != 0.0 ) && ( rtB . e35f24wuar_ppxrqq0gsf [ i ]
!= 0.0 ) ) ; cwugsvxxyn = ( ( cmn1yyt3zb && p1kozzcxvy ) || a4h0v5gmj3 ) ;
rtB . g0hkbcnjzb_fdinthrxmb [ i ] = ( ( ( ! rtB . oxwfgl1gu1_hv2ho1zopz [ i ]
) && jxdjayhgxo ) || ( ( ! cwugsvxxyn ) && jxdjayhgxo ) ) ; rtB .
dk15jsqdzx_jzx3amusab [ i ] = fruajt2fbj ; rtB . cg3sbmjtm4_al00mdgrv4 [ i ]
= iregdiskaa ; rtB . jeh2md4eax_ju13rw2h0m [ i ] = p1kozzcxvy ; rtB .
dnxip1xmnc_jz50ptvnrg [ i ] = a4h0v5gmj3 ; rtB . evzazxjhn1_o4f35lbcvx [ i ]
= cwugsvxxyn ; rtB . o1dvgrsvnz_ezqlmfzvpq [ i ] = cmn1yyt3zb ; rtB .
dmlhfbitdf_nuebgmauvi [ i ] = jnjdyi4kyq ; rtB . bviem430jn_dapv3jlyq5 [ i ]
= psgyxxqttn ; rtB . pimwsxq0m2_bnlywzniup [ i ] = lmbefl5pfz ; rtB .
nsf230vtki_bjbgfqrolh [ i ] = h4qhrg0yiw ; } { real_T * pDataValues = (
real_T * ) rtDW . m0ersehk4c . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . m0ersehk4c . TimePtr ; int_T currTimeIndex = rtDW . ktgnhdwjii .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . m0ersehk4c . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ktgnhdwjii . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ppvdxaszlo_llw0u2ae0v [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . ppvdxaszlo_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . izqj2pp23z ; int_T *
zcTimeIndicesIdx = & rtDW . nlkb1imv5x ; int_T zcIdx = zcTimeIndices [ *
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
ppvdxaszlo_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . hin42u5r1x . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . hin42u5r1x . TimePtr ; int_T currTimeIndex = rtDW . fqrsvzknvr .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . hin42u5r1x . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fqrsvzknvr . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . jmmse02z3f_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . jmmse02z3f_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . ezsa5od0uf ; int_T *
zcTimeIndicesIdx = & rtDW . ip304rfffi ; int_T zcIdx = zcTimeIndices [ *
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
jmmse02z3f_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { cmq5noszn2 = ( ( rtB . ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && ( rtB
. jmmse02z3f_jwzvbuczlb [ i ] != 0.0 ) ) ; h3p4zcqmnt = ! cmq5noszn2 ;
a4h0v5gmj3 = ! rtB . dnxip1xmnc_jz50ptvnrg [ i ] ; a4h0v5gmj3 = ( ( ( ! rtB .
o1dvgrsvnz_ezqlmfzvpq [ i ] ) && a4h0v5gmj3 ) || ( ( ! rtB .
jeh2md4eax_ju13rw2h0m [ i ] ) && a4h0v5gmj3 ) ) ; iregdiskaa = ! rtB .
cg3sbmjtm4_al00mdgrv4 [ i ] ; p1kozzcxvy = ( ( ( ! rtB .
bviem430jn_dapv3jlyq5 [ i ] ) && iregdiskaa ) || ( ( ! rtB .
nsf230vtki_bjbgfqrolh [ i ] ) && iregdiskaa ) ) ; jnjdyi4kyq = ! rtB .
dmlhfbitdf_nuebgmauvi [ i ] ; iregdiskaa = ( ( ( ! rtB .
pimwsxq0m2_bnlywzniup [ i ] ) && jnjdyi4kyq ) || ( rtB . eehjfds1zp &&
jnjdyi4kyq ) ) ; cmn1yyt3zb = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 )
&& ( rtB . e35f24wuar_ppxrqq0gsf [ i ] != 0.0 ) ) ; psgyxxqttn = ( ( rtB .
lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . jmmse02z3f_jwzvbuczlb [ i ]
!= 0.0 ) ) ; lmbefl5pfz = ( ( cmn1yyt3zb && ( rtP . Constant3_Value != 0.0 )
) || psgyxxqttn ) ; jnjdyi4kyq = ( ( rtB . cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0
) && ( rtB . jmmse02z3f_jwzvbuczlb [ i ] != 0.0 ) ) ; h4qhrg0yiw = ( (
iregdiskaa && lmbefl5pfz ) || jnjdyi4kyq ) ; krwzxcowid = ( ( rtB .
kgxa5vxksy_g1smspu5ke [ i ] != 0.0 ) && ( rtB . jmmse02z3f_jwzvbuczlb [ i ]
!= 0.0 ) ) ; ocgjipdr44 = ( ( p1kozzcxvy && h4qhrg0yiw ) || krwzxcowid ) ;
lwv4mo23rs = ( ( rtB . n2ttkgo302_nz4o0shxby [ i ] != 0.0 ) && ( rtB .
jmmse02z3f_jwzvbuczlb [ i ] != 0.0 ) ) ; jvuk3es5r4 = ( ( a4h0v5gmj3 &&
ocgjipdr44 ) || lwv4mo23rs ) ; rtB . axocrh1aqb_icdfyazkhu [ i ] = ( ( ( !
rtB . g0hkbcnjzb_fdinthrxmb [ i ] ) && h3p4zcqmnt ) || ( ( ! jvuk3es5r4 ) &&
h3p4zcqmnt ) ) ; lwv4mo23rs = ! lwv4mo23rs ; lwv4mo23rs = ( ( ( ! a4h0v5gmj3
) && lwv4mo23rs ) || ( ( ! ocgjipdr44 ) && lwv4mo23rs ) ) ; krwzxcowid = !
krwzxcowid ; ocgjipdr44 = ( ( ( ! p1kozzcxvy ) && krwzxcowid ) || ( ( !
h4qhrg0yiw ) && krwzxcowid ) ) ; jnjdyi4kyq = ! jnjdyi4kyq ; krwzxcowid = ( (
( ! iregdiskaa ) && jnjdyi4kyq ) || ( ( ! lmbefl5pfz ) && jnjdyi4kyq ) ) ;
psgyxxqttn = ! psgyxxqttn ; a4h0v5gmj3 = ( ( ( ! cmn1yyt3zb ) && psgyxxqttn )
|| ( rtB . hhlvjssrul && psgyxxqttn ) ) ; p1kozzcxvy = ( ( rtB .
mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . jmmse02z3f_jwzvbuczlb [ i ]
!= 0.0 ) ) ; iregdiskaa = ( ( rtB . lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && (
rtB . byg02muxsq_cl54gopm0x [ i ] != 0.0 ) ) ; cmn1yyt3zb = ( ( p1kozzcxvy &&
( rtP . Constant2_Value != 0.0 ) ) || iregdiskaa ) ; psgyxxqttn = ( ( rtB .
cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . byg02muxsq_cl54gopm0x [ i ]
!= 0.0 ) ) ; lmbefl5pfz = ( ( a4h0v5gmj3 && cmn1yyt3zb ) || psgyxxqttn ) ;
jnjdyi4kyq = ( ( rtB . kgxa5vxksy_g1smspu5ke [ i ] != 0.0 ) && ( rtB .
byg02muxsq_cl54gopm0x [ i ] != 0.0 ) ) ; h4qhrg0yiw = ( ( krwzxcowid &&
lmbefl5pfz ) || jnjdyi4kyq ) ; nwzhjgad2z = ( ( rtB . n2ttkgo302_nz4o0shxby [
i ] != 0.0 ) && ( rtB . byg02muxsq_cl54gopm0x [ i ] != 0.0 ) ) ; mhey4q1xk3 =
( ( ocgjipdr44 && h4qhrg0yiw ) || nwzhjgad2z ) ; pw21surwng = ( ( rtB .
ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . byg02muxsq_cl54gopm0x [ i ]
!= 0.0 ) ) ; rtB . jdwlbtpfyp_h522xzlxvt [ i ] = ( ( lwv4mo23rs && mhey4q1xk3
) || pw21surwng ) ; rtB . evdvzmtvdh_nyxm0bsxsn [ i ] = cmq5noszn2 ; rtB .
j5ue52sjoc_oyypvi4boh [ i ] = krwzxcowid ; rtB . b00jcfy4kq_nvsvtgkap4 [ i ]
= ocgjipdr44 ; rtB . nn3ajoiiu0_m3yhjduhi1 [ i ] = lwv4mo23rs ; rtB .
jclpberqiu_czkfpwuzm5 [ i ] = jvuk3es5r4 ; rtB . jn3iz5vxc4_mdoasc5av4 [ i ]
= nwzhjgad2z ; rtB . ctaorfqsug_m3ybdk4ikc [ i ] = mhey4q1xk3 ; rtB .
f1f00nxyge_jacdjrqyev [ i ] = pw21surwng ; rtB . dnxip1xmnc_jz50ptvnrg [ i ]
= a4h0v5gmj3 ; rtB . o1dvgrsvnz_ezqlmfzvpq [ i ] = cmn1yyt3zb ; rtB .
jeh2md4eax_ju13rw2h0m [ i ] = p1kozzcxvy ; rtB . cg3sbmjtm4_al00mdgrv4 [ i ]
= iregdiskaa ; rtB . bviem430jn_dapv3jlyq5 [ i ] = psgyxxqttn ; rtB .
nsf230vtki_bjbgfqrolh [ i ] = h4qhrg0yiw ; rtB . dmlhfbitdf_nuebgmauvi [ i ]
= jnjdyi4kyq ; rtB . pimwsxq0m2_bnlywzniup [ i ] = lmbefl5pfz ; } { real_T *
pDataValues = ( real_T * ) rtDW . hramb0ocol . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . hramb0ocol . TimePtr ; int_T currTimeIndex = rtDW .
be1ve5xyyq . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . hramb0ocol .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . be1ve5xyyq . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
mh0t0qazkh_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . mh0t0qazkh_kkiq3xxxve [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . akrsefwjhe ; int_T * zcTimeIndicesIdx = & rtDW . kf2ahulxfb ; int_T
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
mh0t0qazkh_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { h3p4zcqmnt = rtB . axocrh1aqb_icdfyazkhu [ i ] ; bw4buni0ei = rtB .
jdwlbtpfyp_h522xzlxvt [ i ] ; c0s0jxazkd = ( ( rtB . mh0t0qazkh_kkiq3xxxve [
i ] != 0.0 ) && ( rtB . byg02muxsq_cl54gopm0x [ i ] != 0.0 ) ) ; pjnreeombu =
( ( h3p4zcqmnt && bw4buni0ei ) || c0s0jxazkd ) ; cmq5noszn2 = ( ( rtB .
g0hkbcnjzb_fdinthrxmb [ i ] && rtB . jclpberqiu_czkfpwuzm5 [ i ] ) || rtB .
evdvzmtvdh_nyxm0bsxsn [ i ] ) ; fruajt2fbj = ( ( rtB . oxwfgl1gu1_hv2ho1zopz
[ i ] && rtB . evzazxjhn1_o4f35lbcvx [ i ] ) || rtB . dk15jsqdzx_jzx3amusab [
i ] ) ; i3tugis54u = ( ( rtB . c3oo1pm0qi_owjr1h1vqy [ i ] && rtB .
hh5bcxgew2_bjvjhhzy4i [ i ] ) || rtB . k2g3v1tstw_lnjdk5wtww [ i ] ) ;
ptdymkfbs0 = ( ( rtB . jha403gzgy_dypejvacrn [ i ] && rtB .
mt5gte5wob_bsqwvugooi [ i ] ) || rtB . gb3ekx3dta_lxo5edjg3c [ i ] ) ;
af0zmvwwi0 = ( ( rtB . l4qsnbyytd_ldqodwenvz [ i ] && ( rtP . Constant7_Value
!= 0.0 ) ) || rtB . cc23bv3sil_dhamdvybc1 [ i ] ) ; jvuk3es5r4 = ( ( rtB .
lgnt3oshyz_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . egm1y5tymt_pbm3vprmfu [ i ]
!= 0.0 ) ) ; cwugsvxxyn = ( rtP . Constant_Value != 0.0 ) ^ jvuk3es5r4 ;
jxdjayhgxo = ( ( rtB . cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB .
hhentigwtv_cv5hdgrwft [ i ] != 0.0 ) ) ; ls4tl4mdtj = cwugsvxxyn ^ jxdjayhgxo
; mbwfy3rxtp = af0zmvwwi0 ^ ls4tl4mdtj ; hymti4ozdz = ( ( rtB .
kgxa5vxksy_g1smspu5ke [ i ] != 0.0 ) && ( rtB . k5pdrflkwt_g2mlkqadfk [ i ]
!= 0.0 ) ) ; a4hqrbq3xu = mbwfy3rxtp ^ hymti4ozdz ; gqzdyoolsq = ptdymkfbs0 ^
a4hqrbq3xu ; lxeowiizhe = ( ( rtB . n2ttkgo302_nz4o0shxby [ i ] != 0.0 ) && (
rtB . c1aigrb2r4_merlcviukg [ i ] != 0.0 ) ) ; jybmh521h3 = gqzdyoolsq ^
lxeowiizhe ; ih4n04c5yx = i3tugis54u ^ jybmh521h3 ; f5f54dxnk0 = ( ( rtB .
ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . e35f24wuar_ppxrqq0gsf [ i ]
!= 0.0 ) ) ; lqqdumaoeo = ih4n04c5yx ^ f5f54dxnk0 ; a0fssfa4lp = fruajt2fbj ^
lqqdumaoeo ; npbp4zfqxt = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . jmmse02z3f_jwzvbuczlb [ i ] != 0.0 ) ) ; ainiqcduvj = a0fssfa4lp ^
npbp4zfqxt ; ajrsx3apmw = cmq5noszn2 ^ ainiqcduvj ; eznsdhsnrd = ajrsx3apmw ^
rtB . cefaqd4mmo [ i ] ; ppow0zqpb0 = pjnreeombu ^ eznsdhsnrd ; c0s0jxazkd =
! c0s0jxazkd ; c0s0jxazkd = ( ( ( ! h3p4zcqmnt ) && c0s0jxazkd ) || ( ( !
bw4buni0ei ) && c0s0jxazkd ) ) ; pw21surwng = ! rtB . f1f00nxyge_jacdjrqyev [
i ] ; bw4buni0ei = ( ( ( ! rtB . nn3ajoiiu0_m3yhjduhi1 [ i ] ) && pw21surwng
) || ( ( ! rtB . ctaorfqsug_m3ybdk4ikc [ i ] ) && pw21surwng ) ) ; nwzhjgad2z
= ! rtB . jn3iz5vxc4_mdoasc5av4 [ i ] ; pw21surwng = ( ( ( ! rtB .
b00jcfy4kq_nvsvtgkap4 [ i ] ) && nwzhjgad2z ) || ( ( ! rtB .
nsf230vtki_bjbgfqrolh [ i ] ) && nwzhjgad2z ) ) ; jnjdyi4kyq = ! rtB .
dmlhfbitdf_nuebgmauvi [ i ] ; mhey4q1xk3 = ( ( ( ! rtB .
j5ue52sjoc_oyypvi4boh [ i ] ) && jnjdyi4kyq ) || ( ( ! rtB .
pimwsxq0m2_bnlywzniup [ i ] ) && jnjdyi4kyq ) ) ; psgyxxqttn = ! rtB .
bviem430jn_dapv3jlyq5 [ i ] ; nwzhjgad2z = ( ( ( ! rtB .
dnxip1xmnc_jz50ptvnrg [ i ] ) && psgyxxqttn ) || ( ( ! rtB .
o1dvgrsvnz_ezqlmfzvpq [ i ] ) && psgyxxqttn ) ) ; iregdiskaa = ! rtB .
cg3sbmjtm4_al00mdgrv4 [ i ] ; lwv4mo23rs = ( ( ( ! rtB .
jeh2md4eax_ju13rw2h0m [ i ] ) && iregdiskaa ) || ( rtB . kjtqep3s42 &&
iregdiskaa ) ) ; jobotw5hhl = ( ( rtB . jjzoxfcs22_dhmrxtyqop [ i ] && ( rtP
. Constant1_Value != 0.0 ) ) || rtB . kgtji31fj0_guugdwf2m3 [ i ] ) ;
ocgjipdr44 = ( ( rtB . cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB .
istmbx0gkz_cxarnvbvui [ i ] != 0.0 ) ) ; krwzxcowid = ( ( lwv4mo23rs &&
jobotw5hhl ) || ocgjipdr44 ) ; h3p4zcqmnt = ( ( rtB . kgxa5vxksy_g1smspu5ke [
i ] != 0.0 ) && ( rtB . istmbx0gkz_cxarnvbvui [ i ] != 0.0 ) ) ; a4h0v5gmj3 =
( ( nwzhjgad2z && krwzxcowid ) || h3p4zcqmnt ) ; p1kozzcxvy = ( ( rtB .
n2ttkgo302_nz4o0shxby [ i ] != 0.0 ) && ( rtB . istmbx0gkz_cxarnvbvui [ i ]
!= 0.0 ) ) ; iregdiskaa = ( ( mhey4q1xk3 && a4h0v5gmj3 ) || p1kozzcxvy ) ;
cmn1yyt3zb = ( ( rtB . ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && ( rtB .
istmbx0gkz_cxarnvbvui [ i ] != 0.0 ) ) ; psgyxxqttn = ( ( pw21surwng &&
iregdiskaa ) || cmn1yyt3zb ) ; lmbefl5pfz = ( ( rtB . mh0t0qazkh_kkiq3xxxve [
i ] != 0.0 ) && ( rtB . istmbx0gkz_cxarnvbvui [ i ] != 0.0 ) ) ; jnjdyi4kyq =
( ( bw4buni0ei && psgyxxqttn ) || lmbefl5pfz ) ; h4qhrg0yiw = ( ( rtB .
bwek2frsrx_mbvzarwird [ i ] != 0.0 ) && ( rtB . istmbx0gkz_cxarnvbvui [ i ]
!= 0.0 ) ) ; djqw3yenpp = ( ( c0s0jxazkd && jnjdyi4kyq ) || h4qhrg0yiw ) ;
ow5kwgtv5o = ppow0zqpb0 ^ djqw3yenpp ; ppow0zqpb0 = ( ( rtP . Zero_Value &&
ow5kwgtv5o ) || ( ppow0zqpb0 && djqw3yenpp ) ) ; ainiqcduvj = ( ( cmq5noszn2
&& ainiqcduvj ) || ( a0fssfa4lp && npbp4zfqxt ) ) ; npbp4zfqxt = ( (
fruajt2fbj && lqqdumaoeo ) || ( ih4n04c5yx && f5f54dxnk0 ) ) ; a0fssfa4lp = (
( i3tugis54u && jybmh521h3 ) || ( gqzdyoolsq && lxeowiizhe ) ) ; lqqdumaoeo =
( ( ptdymkfbs0 && a4hqrbq3xu ) || ( mbwfy3rxtp && hymti4ozdz ) ) ; f5f54dxnk0
= ( ( af0zmvwwi0 && ls4tl4mdtj ) || ( cwugsvxxyn && jxdjayhgxo ) ) ;
ih4n04c5yx = ( ( rtB . cnbgbob2rf_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB .
egm1y5tymt_pbm3vprmfu [ i ] != 0.0 ) ) ; jybmh521h3 = ( jvuk3es5r4 && ( rtP .
Constant_Value != 0.0 ) ) ; jvuk3es5r4 = ih4n04c5yx ^ jybmh521h3 ; cmq5noszn2
= ( ( rtB . kgxa5vxksy_g1smspu5ke [ i ] != 0.0 ) && ( rtB .
hhentigwtv_cv5hdgrwft [ i ] != 0.0 ) ) ; cwugsvxxyn = jvuk3es5r4 ^ cmq5noszn2
; jxdjayhgxo = f5f54dxnk0 ^ cwugsvxxyn ; fruajt2fbj = ( ( rtB .
n2ttkgo302_nz4o0shxby [ i ] != 0.0 ) && ( rtB . k5pdrflkwt_g2mlkqadfk [ i ]
!= 0.0 ) ) ; ls4tl4mdtj = jxdjayhgxo ^ fruajt2fbj ; mbwfy3rxtp = lqqdumaoeo ^
ls4tl4mdtj ; i3tugis54u = ( ( rtB . ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && (
rtB . c1aigrb2r4_merlcviukg [ i ] != 0.0 ) ) ; hymti4ozdz = mbwfy3rxtp ^
i3tugis54u ; a4hqrbq3xu = a0fssfa4lp ^ hymti4ozdz ; ptdymkfbs0 = ( ( rtB .
mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . e35f24wuar_ppxrqq0gsf [ i ]
!= 0.0 ) ) ; gqzdyoolsq = a4hqrbq3xu ^ ptdymkfbs0 ; af0zmvwwi0 = npbp4zfqxt ^
gqzdyoolsq ; lxeowiizhe = ( ( rtB . bwek2frsrx_mbvzarwird [ i ] != 0.0 ) && (
rtB . jmmse02z3f_jwzvbuczlb [ i ] != 0.0 ) ) ; djqw3yenpp = af0zmvwwi0 ^
lxeowiizhe ; afqlzyqa5l = ainiqcduvj ^ djqw3yenpp ; eznsdhsnrd = ( (
pjnreeombu && eznsdhsnrd ) || ( ajrsx3apmw && rtB . cefaqd4mmo [ i ] ) ) ;
ajrsx3apmw = afqlzyqa5l ^ eznsdhsnrd ; afqlzyqa5l = ( ( ppow0zqpb0 &&
ajrsx3apmw ) || ( afqlzyqa5l && eznsdhsnrd ) ) ; eznsdhsnrd = ( ( npbp4zfqxt
&& gqzdyoolsq ) || ( a4hqrbq3xu && ptdymkfbs0 ) ) ; npbp4zfqxt = ( (
a0fssfa4lp && hymti4ozdz ) || ( mbwfy3rxtp && i3tugis54u ) ) ; a0fssfa4lp = (
( lqqdumaoeo && ls4tl4mdtj ) || ( jxdjayhgxo && fruajt2fbj ) ) ; lqqdumaoeo =
( ( f5f54dxnk0 && cwugsvxxyn ) || ( jvuk3es5r4 && cmq5noszn2 ) ) ; f5f54dxnk0
= ( ( rtB . kgxa5vxksy_g1smspu5ke [ i ] != 0.0 ) && ( rtB .
egm1y5tymt_pbm3vprmfu [ i ] != 0.0 ) ) ; ih4n04c5yx = ( ih4n04c5yx &&
jybmh521h3 ) ; jybmh521h3 = f5f54dxnk0 ^ ih4n04c5yx ; pjnreeombu = ( ( rtB .
n2ttkgo302_nz4o0shxby [ i ] != 0.0 ) && ( rtB . hhentigwtv_cv5hdgrwft [ i ]
!= 0.0 ) ) ; jvuk3es5r4 = jybmh521h3 ^ pjnreeombu ; cmq5noszn2 = lqqdumaoeo ^
jvuk3es5r4 ; cwugsvxxyn = ( ( rtB . ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && (
rtB . k5pdrflkwt_g2mlkqadfk [ i ] != 0.0 ) ) ; jxdjayhgxo = cmq5noszn2 ^
cwugsvxxyn ; fruajt2fbj = a0fssfa4lp ^ jxdjayhgxo ; ls4tl4mdtj = ( ( rtB .
mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . c1aigrb2r4_merlcviukg [ i ]
!= 0.0 ) ) ; mbwfy3rxtp = fruajt2fbj ^ ls4tl4mdtj ; i3tugis54u = npbp4zfqxt ^
mbwfy3rxtp ; hymti4ozdz = ( ( rtB . bwek2frsrx_mbvzarwird [ i ] != 0.0 ) && (
rtB . e35f24wuar_ppxrqq0gsf [ i ] != 0.0 ) ) ; a4hqrbq3xu = i3tugis54u ^
hymti4ozdz ; ptdymkfbs0 = eznsdhsnrd ^ a4hqrbq3xu ; ainiqcduvj = ( (
ainiqcduvj && djqw3yenpp ) || ( af0zmvwwi0 && lxeowiizhe ) ) ; gqzdyoolsq =
ptdymkfbs0 ^ ainiqcduvj ; rtB . n1rh2tbdzh [ i ] = afqlzyqa5l ^ gqzdyoolsq ;
rtB . mmvboh2qw5_c0dok3111h [ i ] = c0s0jxazkd ; rtB . jqz205cgkh_ctvw0tpkon
[ i ] = pjnreeombu ; rtB . gxgeue2pk4_pxqvlbal2i [ i ] = jybmh521h3 ; rtB .
nw4hfz5q1h_p5h3gwuwqg [ i ] = ih4n04c5yx ; rtB . pl32mxtr31_afnsueciae [ i ]
= f5f54dxnk0 ; rtB . kbwvhw4jfv_evg4t2fsev [ i ] = lqqdumaoeo ; rtB .
bw5fitnsvj_ax3wx1gs5w [ i ] = a0fssfa4lp ; rtB . f5j42u3exo_as0qznsxlv [ i ]
= npbp4zfqxt ; rtB . cnbifjo3g0_ifotjnizh4 [ i ] = ainiqcduvj ; rtB .
iwvsra1cda_ltu3syw14q [ i ] = ajrsx3apmw ; rtB . n5yqftfcz1_ojunzewo4f [ i ]
= eznsdhsnrd ; rtB . fryzhzfyel_o2tow3gxzm [ i ] = ppow0zqpb0 ; rtB .
nuvybv2uxg_ipgns4eet5 [ i ] = ow5kwgtv5o ; rtB . aerchojn4b_fkr0r45bcn [ i ]
= afqlzyqa5l ; rtB . jdwlbtpfyp_h522xzlxvt [ i ] = bw4buni0ei ; rtB .
axocrh1aqb_icdfyazkhu [ i ] = h3p4zcqmnt ; rtB . g0hkbcnjzb_fdinthrxmb [ i ]
= jxdjayhgxo ; rtB . jclpberqiu_czkfpwuzm5 [ i ] = jvuk3es5r4 ; rtB .
evdvzmtvdh_nyxm0bsxsn [ i ] = cmq5noszn2 ; rtB . oxwfgl1gu1_hv2ho1zopz [ i ]
= mbwfy3rxtp ; rtB . evzazxjhn1_o4f35lbcvx [ i ] = cwugsvxxyn ; rtB .
dk15jsqdzx_jzx3amusab [ i ] = fruajt2fbj ; rtB . c3oo1pm0qi_owjr1h1vqy [ i ]
= a4hqrbq3xu ; rtB . hh5bcxgew2_bjvjhhzy4i [ i ] = ls4tl4mdtj ; rtB .
k2g3v1tstw_lnjdk5wtww [ i ] = i3tugis54u ; rtB . jha403gzgy_dypejvacrn [ i ]
= gqzdyoolsq ; rtB . mt5gte5wob_bsqwvugooi [ i ] = hymti4ozdz ; rtB .
gb3ekx3dta_lxo5edjg3c [ i ] = ptdymkfbs0 ; rtB . l4qsnbyytd_ldqodwenvz [ i ]
= lxeowiizhe ; rtB . cc23bv3sil_dhamdvybc1 [ i ] = af0zmvwwi0 ; rtB .
f1f00nxyge_jacdjrqyev [ i ] = pw21surwng ; rtB . nn3ajoiiu0_m3yhjduhi1 [ i ]
= lwv4mo23rs ; rtB . ctaorfqsug_m3ybdk4ikc [ i ] = mhey4q1xk3 ; rtB .
jn3iz5vxc4_mdoasc5av4 [ i ] = nwzhjgad2z ; rtB . b00jcfy4kq_nvsvtgkap4 [ i ]
= ocgjipdr44 ; rtB . nsf230vtki_bjbgfqrolh [ i ] = h4qhrg0yiw ; rtB .
dmlhfbitdf_nuebgmauvi [ i ] = jnjdyi4kyq ; rtB . j5ue52sjoc_oyypvi4boh [ i ]
= krwzxcowid ; rtB . pimwsxq0m2_bnlywzniup [ i ] = lmbefl5pfz ; rtB .
bviem430jn_dapv3jlyq5 [ i ] = psgyxxqttn ; rtB . dnxip1xmnc_jz50ptvnrg [ i ]
= a4h0v5gmj3 ; rtB . o1dvgrsvnz_ezqlmfzvpq [ i ] = cmn1yyt3zb ; rtB .
cg3sbmjtm4_al00mdgrv4 [ i ] = iregdiskaa ; rtB . jeh2md4eax_ju13rw2h0m [ i ]
= p1kozzcxvy ; rtB . jjzoxfcs22_dhmrxtyqop [ i ] = djqw3yenpp ; rtB .
kgtji31fj0_guugdwf2m3 [ i ] = jobotw5hhl ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . nzc5cbptd2 . LoggedData
) , & rtB . n1rh2tbdzh [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ afqlzyqa5l = ( ( rtB . aerchojn4b_fkr0r45bcn [ i ] && rtB .
jha403gzgy_dypejvacrn [ i ] ) || ( rtB . gb3ekx3dta_lxo5edjg3c [ i ] && rtB .
cnbifjo3g0_ifotjnizh4 [ i ] ) ) ; ainiqcduvj = ( ( rtB .
f5j42u3exo_as0qznsxlv [ i ] && rtB . oxwfgl1gu1_hv2ho1zopz [ i ] ) || ( rtB .
dk15jsqdzx_jzx3amusab [ i ] && rtB . hh5bcxgew2_bjvjhhzy4i [ i ] ) ) ;
npbp4zfqxt = ( ( rtB . bw5fitnsvj_ax3wx1gs5w [ i ] && rtB .
g0hkbcnjzb_fdinthrxmb [ i ] ) || ( rtB . evdvzmtvdh_nyxm0bsxsn [ i ] && rtB .
evzazxjhn1_o4f35lbcvx [ i ] ) ) ; a0fssfa4lp = ( ( rtB .
kbwvhw4jfv_evg4t2fsev [ i ] && rtB . jclpberqiu_czkfpwuzm5 [ i ] ) || ( rtB .
gxgeue2pk4_pxqvlbal2i [ i ] && rtB . jqz205cgkh_ctvw0tpkon [ i ] ) ) ;
lqqdumaoeo = ( ( rtB . n2ttkgo302_nz4o0shxby [ i ] != 0.0 ) && ( rtB .
egm1y5tymt_pbm3vprmfu [ i ] != 0.0 ) ) ; f5f54dxnk0 = ( rtB .
pl32mxtr31_afnsueciae [ i ] && rtB . nw4hfz5q1h_p5h3gwuwqg [ i ] ) ;
ih4n04c5yx = lqqdumaoeo ^ f5f54dxnk0 ; jybmh521h3 = ( ( rtB .
ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . hhentigwtv_cv5hdgrwft [ i ]
!= 0.0 ) ) ; pjnreeombu = ih4n04c5yx ^ jybmh521h3 ; jvuk3es5r4 = a0fssfa4lp ^
pjnreeombu ; cmq5noszn2 = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . k5pdrflkwt_g2mlkqadfk [ i ] != 0.0 ) ) ; cwugsvxxyn = jvuk3es5r4 ^
cmq5noszn2 ; jxdjayhgxo = npbp4zfqxt ^ cwugsvxxyn ; fruajt2fbj = ( ( rtB .
bwek2frsrx_mbvzarwird [ i ] != 0.0 ) && ( rtB . c1aigrb2r4_merlcviukg [ i ]
!= 0.0 ) ) ; ls4tl4mdtj = jxdjayhgxo ^ fruajt2fbj ; mbwfy3rxtp = ainiqcduvj ^
ls4tl4mdtj ; eznsdhsnrd = ( ( rtB . n5yqftfcz1_ojunzewo4f [ i ] && rtB .
c3oo1pm0qi_owjr1h1vqy [ i ] ) || ( rtB . k2g3v1tstw_lnjdk5wtww [ i ] && rtB .
mt5gte5wob_bsqwvugooi [ i ] ) ) ; i3tugis54u = mbwfy3rxtp ^ eznsdhsnrd ; rtB
. dassz0pmrw [ i ] = afqlzyqa5l ^ i3tugis54u ; rtB . aerchojn4b_fkr0r45bcn [
i ] = afqlzyqa5l ; rtB . cnbifjo3g0_ifotjnizh4 [ i ] = ainiqcduvj ; rtB .
f5j42u3exo_as0qznsxlv [ i ] = npbp4zfqxt ; rtB . oxwfgl1gu1_hv2ho1zopz [ i ]
= mbwfy3rxtp ; rtB . dk15jsqdzx_jzx3amusab [ i ] = fruajt2fbj ; rtB .
hh5bcxgew2_bjvjhhzy4i [ i ] = ls4tl4mdtj ; rtB . bw5fitnsvj_ax3wx1gs5w [ i ]
= a0fssfa4lp ; rtB . g0hkbcnjzb_fdinthrxmb [ i ] = jxdjayhgxo ; rtB .
evdvzmtvdh_nyxm0bsxsn [ i ] = cmq5noszn2 ; rtB . evzazxjhn1_o4f35lbcvx [ i ]
= cwugsvxxyn ; rtB . kbwvhw4jfv_evg4t2fsev [ i ] = lqqdumaoeo ; rtB .
jclpberqiu_czkfpwuzm5 [ i ] = jvuk3es5r4 ; rtB . gxgeue2pk4_pxqvlbal2i [ i ]
= jybmh521h3 ; rtB . jqz205cgkh_ctvw0tpkon [ i ] = pjnreeombu ; rtB .
pl32mxtr31_afnsueciae [ i ] = f5f54dxnk0 ; rtB . nw4hfz5q1h_p5h3gwuwqg [ i ]
= ih4n04c5yx ; rtB . n5yqftfcz1_ojunzewo4f [ i ] = eznsdhsnrd ; rtB .
k2g3v1tstw_lnjdk5wtww [ i ] = i3tugis54u ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . db5tg4f432 . LoggedData
) , & rtB . dassz0pmrw [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ afqlzyqa5l = ( ( rtB . aerchojn4b_fkr0r45bcn [ i ] && rtB .
k2g3v1tstw_lnjdk5wtww [ i ] ) || ( rtB . oxwfgl1gu1_hv2ho1zopz [ i ] && rtB .
n5yqftfcz1_ojunzewo4f [ i ] ) ) ; eznsdhsnrd = ( ( rtB .
f5j42u3exo_as0qznsxlv [ i ] && rtB . evzazxjhn1_o4f35lbcvx [ i ] ) || ( rtB .
jclpberqiu_czkfpwuzm5 [ i ] && rtB . evdvzmtvdh_nyxm0bsxsn [ i ] ) ) ;
npbp4zfqxt = ( ( rtB . bw5fitnsvj_ax3wx1gs5w [ i ] && rtB .
jqz205cgkh_ctvw0tpkon [ i ] ) || ( rtB . nw4hfz5q1h_p5h3gwuwqg [ i ] && rtB .
gxgeue2pk4_pxqvlbal2i [ i ] ) ) ; a0fssfa4lp = ( ( rtB .
ppvdxaszlo_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . egm1y5tymt_pbm3vprmfu [ i ]
!= 0.0 ) ) ; lqqdumaoeo = ( rtB . kbwvhw4jfv_evg4t2fsev [ i ] && rtB .
pl32mxtr31_afnsueciae [ i ] ) ; f5f54dxnk0 = a0fssfa4lp ^ lqqdumaoeo ;
ih4n04c5yx = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
hhentigwtv_cv5hdgrwft [ i ] != 0.0 ) ) ; jybmh521h3 = f5f54dxnk0 ^ ih4n04c5yx
; pjnreeombu = npbp4zfqxt ^ jybmh521h3 ; jvuk3es5r4 = ( ( rtB .
bwek2frsrx_mbvzarwird [ i ] != 0.0 ) && ( rtB . k5pdrflkwt_g2mlkqadfk [ i ]
!= 0.0 ) ) ; cmq5noszn2 = pjnreeombu ^ jvuk3es5r4 ; cwugsvxxyn = eznsdhsnrd ^
cmq5noszn2 ; ainiqcduvj = ( ( rtB . cnbifjo3g0_ifotjnizh4 [ i ] && rtB .
hh5bcxgew2_bjvjhhzy4i [ i ] ) || ( rtB . g0hkbcnjzb_fdinthrxmb [ i ] && rtB .
dk15jsqdzx_jzx3amusab [ i ] ) ) ; jxdjayhgxo = cwugsvxxyn ^ ainiqcduvj ; rtB
. muuf4tphh2 [ i ] = afqlzyqa5l ^ jxdjayhgxo ; rtB . aerchojn4b_fkr0r45bcn [
i ] = afqlzyqa5l ; rtB . n5yqftfcz1_ojunzewo4f [ i ] = eznsdhsnrd ; rtB .
f5j42u3exo_as0qznsxlv [ i ] = npbp4zfqxt ; rtB . evzazxjhn1_o4f35lbcvx [ i ]
= cwugsvxxyn ; rtB . jclpberqiu_czkfpwuzm5 [ i ] = jvuk3es5r4 ; rtB .
evdvzmtvdh_nyxm0bsxsn [ i ] = cmq5noszn2 ; rtB . bw5fitnsvj_ax3wx1gs5w [ i ]
= a0fssfa4lp ; rtB . jqz205cgkh_ctvw0tpkon [ i ] = pjnreeombu ; rtB .
nw4hfz5q1h_p5h3gwuwqg [ i ] = ih4n04c5yx ; rtB . gxgeue2pk4_pxqvlbal2i [ i ]
= jybmh521h3 ; rtB . kbwvhw4jfv_evg4t2fsev [ i ] = lqqdumaoeo ; rtB .
pl32mxtr31_afnsueciae [ i ] = f5f54dxnk0 ; rtB . cnbifjo3g0_ifotjnizh4 [ i ]
= ainiqcduvj ; rtB . g0hkbcnjzb_fdinthrxmb [ i ] = jxdjayhgxo ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . nvzvmncc32
. LoggedData ) , & rtB . muuf4tphh2 [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { afqlzyqa5l = ( ( rtB . aerchojn4b_fkr0r45bcn [ i ] && rtB .
g0hkbcnjzb_fdinthrxmb [ i ] ) || ( rtB . evzazxjhn1_o4f35lbcvx [ i ] && rtB .
cnbifjo3g0_ifotjnizh4 [ i ] ) ) ; ainiqcduvj = ( ( rtB .
f5j42u3exo_as0qznsxlv [ i ] && rtB . gxgeue2pk4_pxqvlbal2i [ i ] ) || ( rtB .
pl32mxtr31_afnsueciae [ i ] && rtB . nw4hfz5q1h_p5h3gwuwqg [ i ] ) ) ;
npbp4zfqxt = ( ( rtB . mh0t0qazkh_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
egm1y5tymt_pbm3vprmfu [ i ] != 0.0 ) ) ; a0fssfa4lp = ( rtB .
bw5fitnsvj_ax3wx1gs5w [ i ] && rtB . kbwvhw4jfv_evg4t2fsev [ i ] ) ;
lqqdumaoeo = npbp4zfqxt ^ a0fssfa4lp ; f5f54dxnk0 = ( ( rtB .
bwek2frsrx_mbvzarwird [ i ] != 0.0 ) && ( rtB . hhentigwtv_cv5hdgrwft [ i ]
!= 0.0 ) ) ; ih4n04c5yx = lqqdumaoeo ^ f5f54dxnk0 ; jybmh521h3 = ainiqcduvj ^
ih4n04c5yx ; eznsdhsnrd = ( ( rtB . n5yqftfcz1_ojunzewo4f [ i ] && rtB .
evdvzmtvdh_nyxm0bsxsn [ i ] ) || ( rtB . jqz205cgkh_ctvw0tpkon [ i ] && rtB .
jclpberqiu_czkfpwuzm5 [ i ] ) ) ; pjnreeombu = jybmh521h3 ^ eznsdhsnrd ; rtB
. klpdnkjsg2 [ i ] = afqlzyqa5l ^ pjnreeombu ; rtB . aerchojn4b_fkr0r45bcn [
i ] = afqlzyqa5l ; rtB . cnbifjo3g0_ifotjnizh4 [ i ] = ainiqcduvj ; rtB .
f5j42u3exo_as0qznsxlv [ i ] = npbp4zfqxt ; rtB . gxgeue2pk4_pxqvlbal2i [ i ]
= jybmh521h3 ; rtB . pl32mxtr31_afnsueciae [ i ] = f5f54dxnk0 ; rtB .
nw4hfz5q1h_p5h3gwuwqg [ i ] = ih4n04c5yx ; rtB . bw5fitnsvj_ax3wx1gs5w [ i ]
= a0fssfa4lp ; rtB . kbwvhw4jfv_evg4t2fsev [ i ] = lqqdumaoeo ; rtB .
n5yqftfcz1_ojunzewo4f [ i ] = eznsdhsnrd ; rtB . jqz205cgkh_ctvw0tpkon [ i ]
= pjnreeombu ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ey2q1a0juo . LoggedData ) , & rtB . klpdnkjsg2 [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { afqlzyqa5l = ( ( rtB .
aerchojn4b_fkr0r45bcn [ i ] && rtB . jqz205cgkh_ctvw0tpkon [ i ] ) || ( rtB .
gxgeue2pk4_pxqvlbal2i [ i ] && rtB . n5yqftfcz1_ojunzewo4f [ i ] ) ) ;
eznsdhsnrd = ( ( rtB . bwek2frsrx_mbvzarwird [ i ] != 0.0 ) && ( rtB .
egm1y5tymt_pbm3vprmfu [ i ] != 0.0 ) ) ; npbp4zfqxt = ( rtB .
f5j42u3exo_as0qznsxlv [ i ] && rtB . bw5fitnsvj_ax3wx1gs5w [ i ] ) ;
a0fssfa4lp = eznsdhsnrd ^ npbp4zfqxt ; ainiqcduvj = ( ( rtB .
cnbifjo3g0_ifotjnizh4 [ i ] && rtB . nw4hfz5q1h_p5h3gwuwqg [ i ] ) || ( rtB .
kbwvhw4jfv_evg4t2fsev [ i ] && rtB . pl32mxtr31_afnsueciae [ i ] ) ) ;
lqqdumaoeo = a0fssfa4lp ^ ainiqcduvj ; rtB . li4o0hildc [ i ] = afqlzyqa5l ^
lqqdumaoeo ; rtB . aerchojn4b_fkr0r45bcn [ i ] = afqlzyqa5l ; rtB .
n5yqftfcz1_ojunzewo4f [ i ] = eznsdhsnrd ; rtB . f5j42u3exo_as0qznsxlv [ i ]
= npbp4zfqxt ; rtB . bw5fitnsvj_ax3wx1gs5w [ i ] = a0fssfa4lp ; rtB .
cnbifjo3g0_ifotjnizh4 [ i ] = ainiqcduvj ; rtB . kbwvhw4jfv_evg4t2fsev [ i ]
= lqqdumaoeo ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . dcjvfvqrrm . LoggedData ) , & rtB . li4o0hildc [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . ohekoapafv [ i ] = ( (
rtB . n5yqftfcz1_ojunzewo4f [ i ] && rtB . f5j42u3exo_as0qznsxlv [ i ] ) || (
( rtB . aerchojn4b_fkr0r45bcn [ i ] && rtB . kbwvhw4jfv_evg4t2fsev [ i ] ) ||
( rtB . bw5fitnsvj_ax3wx1gs5w [ i ] && rtB . cnbifjo3g0_ifotjnizh4 [ i ] ) )
) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) {
{ double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . pmwyrvpwuv . LoggedData ) , & rtB . ohekoapafv [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { ocgjipdr44 = ! rtB .
b00jcfy4kq_nvsvtgkap4 [ i ] ; rtB . lyv0zmdkxz [ i ] = ( ( ( ! rtB .
nn3ajoiiu0_m3yhjduhi1 [ i ] ) && ocgjipdr44 ) || ( ( ! rtB .
kgtji31fj0_guugdwf2m3 [ i ] ) && ocgjipdr44 ) ) ; rtB . b00jcfy4kq_nvsvtgkap4
[ i ] = ocgjipdr44 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ef2tbr3zkc . LoggedData ) , & rtB . lyv0zmdkxz [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { h3p4zcqmnt = ! rtB .
axocrh1aqb_icdfyazkhu [ i ] ; rtB . dkwoqzqhxy [ i ] = ( ( ( ! rtB .
jn3iz5vxc4_mdoasc5av4 [ i ] ) && h3p4zcqmnt ) || ( ( ! rtB .
j5ue52sjoc_oyypvi4boh [ i ] ) && h3p4zcqmnt ) ) ; rtB . axocrh1aqb_icdfyazkhu
[ i ] = h3p4zcqmnt ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . h4kgvkhif3 . LoggedData ) , & rtB . dkwoqzqhxy [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { p1kozzcxvy = ! rtB .
jeh2md4eax_ju13rw2h0m [ i ] ; rtB . cgd0ee2uwi [ i ] = ( ( ( ! rtB .
ctaorfqsug_m3ybdk4ikc [ i ] ) && p1kozzcxvy ) || ( ( ! rtB .
dnxip1xmnc_jz50ptvnrg [ i ] ) && p1kozzcxvy ) ) ; rtB . jeh2md4eax_ju13rw2h0m
[ i ] = p1kozzcxvy ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . duoloaq3l3 . LoggedData ) , & rtB . cgd0ee2uwi [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { cmn1yyt3zb = ! rtB .
o1dvgrsvnz_ezqlmfzvpq [ i ] ; rtB . dlorqfbkxe [ i ] = ( ( ( ! rtB .
f1f00nxyge_jacdjrqyev [ i ] ) && cmn1yyt3zb ) || ( ( ! rtB .
cg3sbmjtm4_al00mdgrv4 [ i ] ) && cmn1yyt3zb ) ) ; rtB . o1dvgrsvnz_ezqlmfzvpq
[ i ] = cmn1yyt3zb ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . dcmmg3x1y2 . LoggedData ) , & rtB . dlorqfbkxe [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { lmbefl5pfz = ! rtB .
pimwsxq0m2_bnlywzniup [ i ] ; rtB . mdsfzgmvpb [ i ] = ( ( ( ! rtB .
jdwlbtpfyp_h522xzlxvt [ i ] ) && lmbefl5pfz ) || ( ( ! rtB .
bviem430jn_dapv3jlyq5 [ i ] ) && lmbefl5pfz ) ) ; rtB . pimwsxq0m2_bnlywzniup
[ i ] = lmbefl5pfz ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . lgjsik0a1v . LoggedData ) , & rtB . mdsfzgmvpb [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { h4qhrg0yiw = ! rtB .
nsf230vtki_bjbgfqrolh [ i ] ; rtB . djm2pikxpj [ i ] = ( ( ( ! rtB .
mmvboh2qw5_c0dok3111h [ i ] ) && h4qhrg0yiw ) || ( ( ! rtB .
dmlhfbitdf_nuebgmauvi [ i ] ) && h4qhrg0yiw ) ) ; rtB . nsf230vtki_bjbgfqrolh
[ i ] = h4qhrg0yiw ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . haw1uambsf . LoggedData ) , & rtB . djm2pikxpj [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . e3p0mcsrbm [ i ] = rtP .
Zero_Value ^ rtB . nuvybv2uxg_ipgns4eet5 [ i ] ; } if ( ssIsSampleHit ( rtS ,
2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime
( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ppq01k01ro . LoggedData
) , & rtB . e3p0mcsrbm [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ rtB . op44in5v5j [ i ] = rtB . fryzhzfyel_o2tow3gxzm [ i ] ^ rtB .
iwvsra1cda_ltu3syw14q [ i ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ocx3rwgp5n . LoggedData ) , & rtB . op44in5v5j [ 0 ] , 0
) ; } } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) {
rtB . jvksohy2jj = ! ( rtP . Constant1_Value != 0.0 ) ; rtB . kjtqep3s42 = !
( rtP . Constant2_Value != 0.0 ) ; rtB . hhlvjssrul = ! ( rtP .
Constant3_Value != 0.0 ) ; rtB . eehjfds1zp = ! ( rtP . Constant4_Value !=
0.0 ) ; rtB . nbczllmynw = ! ( rtP . Constant5_Value != 0.0 ) ; rtB .
klitm0zcu3 = ! ( rtP . Constant6_Value != 0.0 ) ; rtB . nfioqm3gmv = ! ( rtP
. Constant7_Value != 0.0 ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlZeroCrossings ( void ) { { const double
* timePtr = ( double * ) rtDW . oxtg0nrans . TimePtr ; int_T * zcTimeIndices
= & rtDW . anbyqeqhho ; int_T zcTimeIndicesIdx = rtDW . jsd1ksfewi ; ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) -> kkp1jv0wi2 = ssGetT ( rtS ) -
timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr =
( double * ) rtDW . p2ll3502se . TimePtr ; int_T * zcTimeIndices = & rtDW .
ngfspxrd23 ; int_T zcTimeIndicesIdx = rtDW . f1vm3nfado ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> clan53bkeh = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . itc1nn5uma . TimePtr ; int_T * zcTimeIndices = & rtDW .
avecdpuxre ; int_T zcTimeIndicesIdx = rtDW . ioqyqoalne ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> eillvelz3l = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . cbllkrk5ok . TimePtr ; int_T * zcTimeIndices = & rtDW .
mnzge41qdh ; int_T zcTimeIndicesIdx = rtDW . c1whuykri1 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> jwifvvvplg = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . cf23xd2iev . TimePtr ; int_T * zcTimeIndices = & rtDW .
eosjlsccjz ; int_T zcTimeIndicesIdx = rtDW . j3mhxlgarq ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> evx5ukddl1 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ietuenx3i2 . TimePtr ; int_T * zcTimeIndices = & rtDW .
bkl45ijtav ; int_T zcTimeIndicesIdx = rtDW . m2qlk4ptp3 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> mplzctuvvd = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . alxkrbalx0 . TimePtr ; int_T * zcTimeIndices = & rtDW .
dzb4xa21pv ; int_T zcTimeIndicesIdx = rtDW . jvew4rz0fv ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> bryryf34wg = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . jnpvkmxlxy . TimePtr ; int_T * zcTimeIndices = & rtDW .
lbivdgyqyw ; int_T zcTimeIndicesIdx = rtDW . c1ekirrnbf ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> l5ygtprdlc = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . mqbhms4nl1 . TimePtr ; int_T * zcTimeIndices = & rtDW .
m41ys0hbb2 ; int_T zcTimeIndicesIdx = rtDW . eltzdzm2xb ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> jzjqwtalzb = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . dyhvwc5vja . TimePtr ; int_T * zcTimeIndices = & rtDW .
ck0rx0mnxl ; int_T zcTimeIndicesIdx = rtDW . pkxitby4f3 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> k31zx4rguf = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . pdy5jueqrh . TimePtr ; int_T * zcTimeIndices = & rtDW .
codeguntwv ; int_T zcTimeIndicesIdx = rtDW . joxwee1hat ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> jfcmuprzzt = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . c1h3ctgqpj . TimePtr ; int_T * zcTimeIndices = & rtDW .
nf5kfotlzq ; int_T zcTimeIndicesIdx = rtDW . nadsikh0yy ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> fjqw3ovxrg = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . etnkf1pdot . TimePtr ; int_T * zcTimeIndices = & rtDW .
fop2prr0bf ; int_T zcTimeIndicesIdx = rtDW . dozhfgcamo ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> kbvestfqdv = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . m0ersehk4c . TimePtr ; int_T * zcTimeIndices = & rtDW .
izqj2pp23z ; int_T zcTimeIndicesIdx = rtDW . nlkb1imv5x ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> f4jifospjy = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . hin42u5r1x . TimePtr ; int_T * zcTimeIndices = & rtDW .
ezsa5od0uf ; int_T zcTimeIndicesIdx = rtDW . ip304rfffi ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> kcjea1dewo = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . hramb0ocol . TimePtr ; int_T * zcTimeIndices = & rtDW .
akrsefwjhe ; int_T zcTimeIndicesIdx = rtDW . kf2ahulxfb ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> dwupncylup = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } } void MdlTerminate ( void ) {
rt_FREE ( rtDW . oxtg0nrans . RSimInfoPtr ) ; rt_FREE ( rtDW . p2ll3502se .
RSimInfoPtr ) ; rt_FREE ( rtDW . itc1nn5uma . RSimInfoPtr ) ; rt_FREE ( rtDW
. cbllkrk5ok . RSimInfoPtr ) ; rt_FREE ( rtDW . cf23xd2iev . RSimInfoPtr ) ;
rt_FREE ( rtDW . ietuenx3i2 . RSimInfoPtr ) ; rt_FREE ( rtDW . alxkrbalx0 .
RSimInfoPtr ) ; rt_FREE ( rtDW . jnpvkmxlxy . RSimInfoPtr ) ; rt_FREE ( rtDW
. mqbhms4nl1 . RSimInfoPtr ) ; rt_FREE ( rtDW . dyhvwc5vja . RSimInfoPtr ) ;
rt_FREE ( rtDW . pdy5jueqrh . RSimInfoPtr ) ; rt_FREE ( rtDW . c1h3ctgqpj .
RSimInfoPtr ) ; rt_FREE ( rtDW . etnkf1pdot . RSimInfoPtr ) ; rt_FREE ( rtDW
. m0ersehk4c . RSimInfoPtr ) ; rt_FREE ( rtDW . hin42u5r1x . RSimInfoPtr ) ;
rt_FREE ( rtDW . hramb0ocol . RSimInfoPtr ) ; { if ( rtDW . i1idkhyivn .
AQHandles ) { sdiTerminateStreaming ( & rtDW . i1idkhyivn . AQHandles ) ; } }
} static void mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Approx_Multiplier_M3_AMA3_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Approx_Multiplier_M3_AMA3_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Approx_Multiplier_M3_AMA3_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Approx_Multiplier_M3_AMA3_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Approx_Multiplier_M3_AMA3_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Approx_Multiplier_M3_AMA3_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Approx_Multiplier_M3_AMA3_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_Approx_Multiplier_M3_AMA3_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Approx_Multiplier_M3_AMA3_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_Approx_Multiplier_M3_AMA3_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Approx_Multiplier_M3_AMA3_GetDWork (
) { static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( ssDW , 0
, 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 48 ] = { "rtDW.anbyqeqhho" , "rtDW.jsd1ksfewi" ,
"rtDW.ps2znodovw" , "rtDW.ngfspxrd23" , "rtDW.f1vm3nfado" , "rtDW.jiac0cbguk"
, "rtDW.avecdpuxre" , "rtDW.ioqyqoalne" , "rtDW.l5xsozc2ul" ,
"rtDW.mnzge41qdh" , "rtDW.c1whuykri1" , "rtDW.dhnbacq5om" , "rtDW.eosjlsccjz"
, "rtDW.j3mhxlgarq" , "rtDW.fjx3qw2pbg" , "rtDW.bkl45ijtav" ,
"rtDW.m2qlk4ptp3" , "rtDW.lxuj2cx0tl" , "rtDW.dzb4xa21pv" , "rtDW.jvew4rz0fv"
, "rtDW.nkdrkcqhkl" , "rtDW.lbivdgyqyw" , "rtDW.c1ekirrnbf" ,
"rtDW.h23jwch0yf" , "rtDW.m41ys0hbb2" , "rtDW.eltzdzm2xb" , "rtDW.j3ak4rycm4"
, "rtDW.ck0rx0mnxl" , "rtDW.pkxitby4f3" , "rtDW.cu2ifxkm3s" ,
"rtDW.codeguntwv" , "rtDW.joxwee1hat" , "rtDW.mxawas1cca" , "rtDW.nf5kfotlzq"
, "rtDW.nadsikh0yy" , "rtDW.lthjpvw2ja" , "rtDW.fop2prr0bf" ,
"rtDW.dozhfgcamo" , "rtDW.ig2yyen4dq" , "rtDW.izqj2pp23z" , "rtDW.nlkb1imv5x"
, "rtDW.ktgnhdwjii" , "rtDW.ezsa5od0uf" , "rtDW.ip304rfffi" ,
"rtDW.fqrsvzknvr" , "rtDW.akrsefwjhe" , "rtDW.kf2ahulxfb" , "rtDW.be1ve5xyyq"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 48 ,
rtdwDataFieldNames ) ; mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . anbyqeqhho ) , sizeof ( rtDW .
anbyqeqhho ) ) ; mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( rtDW . jsd1ksfewi ) , sizeof ( rtDW . jsd1ksfewi
) ) ; mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( rtDW . ps2znodovw ) , sizeof ( rtDW . ps2znodovw ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . ngfspxrd23 ) , sizeof ( rtDW . ngfspxrd23 ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . f1vm3nfado ) , sizeof ( rtDW . f1vm3nfado ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . jiac0cbguk ) , sizeof ( rtDW . jiac0cbguk ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . avecdpuxre ) , sizeof ( rtDW . avecdpuxre ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . ioqyqoalne ) , sizeof ( rtDW . ioqyqoalne ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . l5xsozc2ul ) , sizeof ( rtDW . l5xsozc2ul ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . mnzge41qdh ) , sizeof ( rtDW . mnzge41qdh ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( rtDW . c1whuykri1 ) , sizeof ( rtDW . c1whuykri1 ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . dhnbacq5om ) , sizeof ( rtDW . dhnbacq5om ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( rtDW . eosjlsccjz ) , sizeof ( rtDW . eosjlsccjz ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const
void * ) & ( rtDW . j3mhxlgarq ) , sizeof ( rtDW . j3mhxlgarq ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . fjx3qw2pbg ) , sizeof ( rtDW . fjx3qw2pbg ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const
void * ) & ( rtDW . bkl45ijtav ) , sizeof ( rtDW . bkl45ijtav ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( rtDW . m2qlk4ptp3 ) , sizeof ( rtDW . m2qlk4ptp3 ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . lxuj2cx0tl ) , sizeof ( rtDW . lxuj2cx0tl ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( rtDW . dzb4xa21pv ) , sizeof ( rtDW . dzb4xa21pv ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( rtDW . jvew4rz0fv ) , sizeof ( rtDW . jvew4rz0fv ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( rtDW . nkdrkcqhkl ) , sizeof ( rtDW . nkdrkcqhkl ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const
void * ) & ( rtDW . lbivdgyqyw ) , sizeof ( rtDW . lbivdgyqyw ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( rtDW . c1ekirrnbf ) , sizeof ( rtDW . c1ekirrnbf ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const
void * ) & ( rtDW . h23jwch0yf ) , sizeof ( rtDW . h23jwch0yf ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( rtDW . m41ys0hbb2 ) , sizeof ( rtDW . m41ys0hbb2 ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const
void * ) & ( rtDW . eltzdzm2xb ) , sizeof ( rtDW . eltzdzm2xb ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( rtDW . j3ak4rycm4 ) , sizeof ( rtDW . j3ak4rycm4 ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( rtDW . ck0rx0mnxl ) , sizeof ( rtDW . ck0rx0mnxl ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const
void * ) & ( rtDW . pkxitby4f3 ) , sizeof ( rtDW . pkxitby4f3 ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const
void * ) & ( rtDW . cu2ifxkm3s ) , sizeof ( rtDW . cu2ifxkm3s ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( rtDW . codeguntwv ) , sizeof ( rtDW . codeguntwv ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const
void * ) & ( rtDW . joxwee1hat ) , sizeof ( rtDW . joxwee1hat ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const
void * ) & ( rtDW . mxawas1cca ) , sizeof ( rtDW . mxawas1cca ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const
void * ) & ( rtDW . nf5kfotlzq ) , sizeof ( rtDW . nf5kfotlzq ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const
void * ) & ( rtDW . nadsikh0yy ) , sizeof ( rtDW . nadsikh0yy ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const
void * ) & ( rtDW . lthjpvw2ja ) , sizeof ( rtDW . lthjpvw2ja ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const
void * ) & ( rtDW . fop2prr0bf ) , sizeof ( rtDW . fop2prr0bf ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const
void * ) & ( rtDW . dozhfgcamo ) , sizeof ( rtDW . dozhfgcamo ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const
void * ) & ( rtDW . ig2yyen4dq ) , sizeof ( rtDW . ig2yyen4dq ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const
void * ) & ( rtDW . izqj2pp23z ) , sizeof ( rtDW . izqj2pp23z ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const
void * ) & ( rtDW . nlkb1imv5x ) , sizeof ( rtDW . nlkb1imv5x ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const
void * ) & ( rtDW . ktgnhdwjii ) , sizeof ( rtDW . ktgnhdwjii ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const
void * ) & ( rtDW . ezsa5od0uf ) , sizeof ( rtDW . ezsa5od0uf ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const
void * ) & ( rtDW . ip304rfffi ) , sizeof ( rtDW . ip304rfffi ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const
void * ) & ( rtDW . fqrsvzknvr ) , sizeof ( rtDW . fqrsvzknvr ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const
void * ) & ( rtDW . akrsefwjhe ) , sizeof ( rtDW . akrsefwjhe ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const
void * ) & ( rtDW . kf2ahulxfb ) , sizeof ( rtDW . kf2ahulxfb ) ) ;
mr_Approx_Multiplier_M3_AMA3_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const
void * ) & ( rtDW . be1ve5xyyq ) , sizeof ( rtDW . be1ve5xyyq ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Approx_Multiplier_M3_AMA3_SetDWork ( const mxArray * ssDW ) { ( void )
ssDW ; mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
anbyqeqhho ) , rtdwData , 0 , 0 , sizeof ( rtDW . anbyqeqhho ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jsd1ksfewi ) , rtdwData , 0 , 1 , sizeof ( rtDW . jsd1ksfewi ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ps2znodovw ) , rtdwData , 0 , 2 , sizeof ( rtDW . ps2znodovw ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ngfspxrd23 ) , rtdwData , 0 , 3 , sizeof ( rtDW . ngfspxrd23 ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f1vm3nfado ) , rtdwData , 0 , 4 , sizeof ( rtDW . f1vm3nfado ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jiac0cbguk ) , rtdwData , 0 , 5 , sizeof ( rtDW . jiac0cbguk ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
avecdpuxre ) , rtdwData , 0 , 6 , sizeof ( rtDW . avecdpuxre ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ioqyqoalne ) , rtdwData , 0 , 7 , sizeof ( rtDW . ioqyqoalne ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l5xsozc2ul ) , rtdwData , 0 , 8 , sizeof ( rtDW . l5xsozc2ul ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mnzge41qdh ) , rtdwData , 0 , 9 , sizeof ( rtDW . mnzge41qdh ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c1whuykri1 ) , rtdwData , 0 , 10 , sizeof ( rtDW . c1whuykri1 ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dhnbacq5om ) , rtdwData , 0 , 11 , sizeof ( rtDW . dhnbacq5om ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eosjlsccjz ) , rtdwData , 0 , 12 , sizeof ( rtDW . eosjlsccjz ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j3mhxlgarq ) , rtdwData , 0 , 13 , sizeof ( rtDW . j3mhxlgarq ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fjx3qw2pbg ) , rtdwData , 0 , 14 , sizeof ( rtDW . fjx3qw2pbg ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bkl45ijtav ) , rtdwData , 0 , 15 , sizeof ( rtDW . bkl45ijtav ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m2qlk4ptp3 ) , rtdwData , 0 , 16 , sizeof ( rtDW . m2qlk4ptp3 ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lxuj2cx0tl ) , rtdwData , 0 , 17 , sizeof ( rtDW . lxuj2cx0tl ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dzb4xa21pv ) , rtdwData , 0 , 18 , sizeof ( rtDW . dzb4xa21pv ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jvew4rz0fv ) , rtdwData , 0 , 19 , sizeof ( rtDW . jvew4rz0fv ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nkdrkcqhkl ) , rtdwData , 0 , 20 , sizeof ( rtDW . nkdrkcqhkl ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lbivdgyqyw ) , rtdwData , 0 , 21 , sizeof ( rtDW . lbivdgyqyw ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c1ekirrnbf ) , rtdwData , 0 , 22 , sizeof ( rtDW . c1ekirrnbf ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h23jwch0yf ) , rtdwData , 0 , 23 , sizeof ( rtDW . h23jwch0yf ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m41ys0hbb2 ) , rtdwData , 0 , 24 , sizeof ( rtDW . m41ys0hbb2 ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eltzdzm2xb ) , rtdwData , 0 , 25 , sizeof ( rtDW . eltzdzm2xb ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j3ak4rycm4 ) , rtdwData , 0 , 26 , sizeof ( rtDW . j3ak4rycm4 ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ck0rx0mnxl ) , rtdwData , 0 , 27 , sizeof ( rtDW . ck0rx0mnxl ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pkxitby4f3 ) , rtdwData , 0 , 28 , sizeof ( rtDW . pkxitby4f3 ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cu2ifxkm3s ) , rtdwData , 0 , 29 , sizeof ( rtDW . cu2ifxkm3s ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
codeguntwv ) , rtdwData , 0 , 30 , sizeof ( rtDW . codeguntwv ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
joxwee1hat ) , rtdwData , 0 , 31 , sizeof ( rtDW . joxwee1hat ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mxawas1cca ) , rtdwData , 0 , 32 , sizeof ( rtDW . mxawas1cca ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nf5kfotlzq ) , rtdwData , 0 , 33 , sizeof ( rtDW . nf5kfotlzq ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nadsikh0yy ) , rtdwData , 0 , 34 , sizeof ( rtDW . nadsikh0yy ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lthjpvw2ja ) , rtdwData , 0 , 35 , sizeof ( rtDW . lthjpvw2ja ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fop2prr0bf ) , rtdwData , 0 , 36 , sizeof ( rtDW . fop2prr0bf ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dozhfgcamo ) , rtdwData , 0 , 37 , sizeof ( rtDW . dozhfgcamo ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ig2yyen4dq ) , rtdwData , 0 , 38 , sizeof ( rtDW . ig2yyen4dq ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
izqj2pp23z ) , rtdwData , 0 , 39 , sizeof ( rtDW . izqj2pp23z ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nlkb1imv5x ) , rtdwData , 0 , 40 , sizeof ( rtDW . nlkb1imv5x ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ktgnhdwjii ) , rtdwData , 0 , 41 , sizeof ( rtDW . ktgnhdwjii ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ezsa5od0uf ) , rtdwData , 0 , 42 , sizeof ( rtDW . ezsa5od0uf ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ip304rfffi ) , rtdwData , 0 , 43 , sizeof ( rtDW . ip304rfffi ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fqrsvzknvr ) , rtdwData , 0 , 44 , sizeof ( rtDW . fqrsvzknvr ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
akrsefwjhe ) , rtdwData , 0 , 45 , sizeof ( rtDW . akrsefwjhe ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kf2ahulxfb ) , rtdwData , 0 , 46 , sizeof ( rtDW . kf2ahulxfb ) ) ;
mr_Approx_Multiplier_M3_AMA3_restoreDataFromMxArray ( ( void * ) & ( rtDW .
be1ve5xyyq ) , rtdwData , 0 , 47 , sizeof ( rtDW . be1ve5xyyq ) ) ; } }
mxArray * mr_Approx_Multiplier_M3_AMA3_GetSimStateDisallowedBlocks ( ) {
return NULL ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 485 )
; ssSetNumBlockIO ( rtS , 24 ) ; ssSetNumBlockParams ( rtS , 2097193 ) ; }
void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 634033103U ) ; ssSetChecksumVal ( rtS , 1 ,
1460873130U ) ; ssSetChecksumVal ( rtS , 2 , 2732228506U ) ; ssSetChecksumVal
( rtS , 3 , 146304284U ) ; }
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
Approx_Multiplier_M3_AMA3_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Approx_Multiplier_M3_AMA3" ) ; ssSetPath ( rtS , "Approx_Multiplier_M3_AMA3"
) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 0.01 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL
) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
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
634033103U ) ; ssSetChecksumVal ( rtS , 1 , 1460873130U ) ; ssSetChecksumVal
( rtS , 2 , 2732228506U ) ; ssSetChecksumVal ( rtS , 3 , 146304284U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Approx_Multiplier_M3_AMA3_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Approx_Multiplier_M3_AMA3_GetDWork )
; slsaSetWorkFcnForSimTargetOP ( rtS , mr_Approx_Multiplier_M3_AMA3_SetDWork
) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS
) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
