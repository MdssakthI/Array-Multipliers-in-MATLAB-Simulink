#include "rt_logging_mmi.h"
#include "Approx_Multiplier_M1_AMA1_capi.h"
#include <math.h>
#include "Approx_Multiplier_M1_AMA1.h"
#include "Approx_Multiplier_M1_AMA1_private.h"
#include "Approx_Multiplier_M1_AMA1_dt.h"
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
= sdiGetLabelFromChars ( "Approx_Multiplier_M1_AMA1/Partial Product Row 8" )
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
. ku1ymqyi00 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"cacf4f70-fa33-491e-b49d-8ef617f525e2" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . ku1ymqyi00 . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . ku1ymqyi00 . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ku1ymqyi00 .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ku1ymqyi00 . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ku1ymqyi00 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 65536 } ; rtDW . mulhvtspg0 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . mulhvtspg0 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . i445buixam . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . i445buixam . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . hfnpvhpdnt . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . hfnpvhpdnt . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . endzapypvp . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . endzapypvp . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . k421dmfjp0 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . k421dmfjp0 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ka0kzxqfvn . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ka0kzxqfvn . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . jlkv5npnb2 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . jlkv5npnb2 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . cdofqjeb3g . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . cdofqjeb3g . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . oyhyumzi1p . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . oyhyumzi1p . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . jykhi0aw4c . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . jykhi0aw4c . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . bqdhfom4dh . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . bqdhfom4dh . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . nwzjddwmlt . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nwzjddwmlt . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . jz1moedmjn . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . jz1moedmjn . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . m5sohxlfep . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . m5sohxlfep . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . bwggfl4ro0 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . bwggfl4ro0 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . cyrkmjco0z . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . cyrkmjco0z . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . hvmusgsjaj . TimePtr = fromwksInfo -> time ;
rtDW . hvmusgsjaj . DataPtr = fromwksInfo -> data ; rtDW . hvmusgsjaj .
RSimInfoPtr = fromwksInfo ; } rtDW . jj21tf3aqg . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . iyy3h4gswe ; const double * timePoints = ( double *
) rtDW . hvmusgsjaj . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . gimltbpiry
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . cq2tozq2za . TimePtr = fromwksInfo -> time ;
rtDW . cq2tozq2za . DataPtr = fromwksInfo -> data ; rtDW . cq2tozq2za .
RSimInfoPtr = fromwksInfo ; } rtDW . mt5k3k1fq3 . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . hzagckdicv ; const double * timePoints = ( double *
) rtDW . cq2tozq2za . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . b5bqkg4ec3
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . me4b5ujdm4 . TimePtr = fromwksInfo -> time ;
rtDW . me4b5ujdm4 . DataPtr = fromwksInfo -> data ; rtDW . me4b5ujdm4 .
RSimInfoPtr = fromwksInfo ; } rtDW . b0zgrj4cs4 . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ojiqmutngz ; const double * timePoints = ( double *
) rtDW . me4b5ujdm4 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . hpsgq2e30p
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . ektnfx4uaa . TimePtr = fromwksInfo -> time ;
rtDW . ektnfx4uaa . DataPtr = fromwksInfo -> data ; rtDW . ektnfx4uaa .
RSimInfoPtr = fromwksInfo ; } rtDW . bek0aiedpm . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . jh0ot4gnxy ; const double * timePoints = ( double *
) rtDW . ektnfx4uaa . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . gd44x4ieib
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . agmzmlwl13 . TimePtr = fromwksInfo -> time ;
rtDW . agmzmlwl13 . DataPtr = fromwksInfo -> data ; rtDW . agmzmlwl13 .
RSimInfoPtr = fromwksInfo ; } rtDW . fbllcg1p1z . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . mt5wpxud3j ; const double * timePoints = ( double *
) rtDW . agmzmlwl13 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . pkw1xn0vyi
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . aohxatn10f . TimePtr = fromwksInfo -> time ;
rtDW . aohxatn10f . DataPtr = fromwksInfo -> data ; rtDW . aohxatn10f .
RSimInfoPtr = fromwksInfo ; } rtDW . cg04bxfexz . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . i51f2vlnlx ; const double * timePoints = ( double *
) rtDW . aohxatn10f . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . oihryju0st
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . d5rku4dap4 . TimePtr = fromwksInfo -> time ;
rtDW . d5rku4dap4 . DataPtr = fromwksInfo -> data ; rtDW . d5rku4dap4 .
RSimInfoPtr = fromwksInfo ; } rtDW . eow0gsao2v . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . mvkxhwmuht ; const double * timePoints = ( double *
) rtDW . d5rku4dap4 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . htj224anvz
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . ig3ngwc5yl . TimePtr = fromwksInfo -> time ;
rtDW . ig3ngwc5yl . DataPtr = fromwksInfo -> data ; rtDW . ig3ngwc5yl .
RSimInfoPtr = fromwksInfo ; } rtDW . g0rscqlqj0 . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . jjtry454rw ; const double * timePoints = ( double *
) rtDW . ig3ngwc5yl . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . heg0cwkv1d
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . kgseirxppw . TimePtr = fromwksInfo -> time ;
rtDW . kgseirxppw . DataPtr = fromwksInfo -> data ; rtDW . kgseirxppw .
RSimInfoPtr = fromwksInfo ; } rtDW . eufo4wecis . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . fzjqgavylo ; const double * timePoints = ( double *
) rtDW . kgseirxppw . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . puxxzfh2gf
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . ftbl3qc3ty . TimePtr = fromwksInfo -> time ;
rtDW . ftbl3qc3ty . DataPtr = fromwksInfo -> data ; rtDW . ftbl3qc3ty .
RSimInfoPtr = fromwksInfo ; } rtDW . mjv2pwkvdn . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . clxu0chp1j ; const double * timePoints = ( double *
) rtDW . ftbl3qc3ty . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . hhfxqe5rbl
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . fpfhtsns1y . TimePtr = fromwksInfo -> time ;
rtDW . fpfhtsns1y . DataPtr = fromwksInfo -> data ; rtDW . fpfhtsns1y .
RSimInfoPtr = fromwksInfo ; } rtDW . nf4j4chcke . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . p33xietry2 ; const double * timePoints = ( double *
) rtDW . fpfhtsns1y . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . ftfkp1sn1p
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . ehtjho2f5s . TimePtr = fromwksInfo -> time ;
rtDW . ehtjho2f5s . DataPtr = fromwksInfo -> data ; rtDW . ehtjho2f5s .
RSimInfoPtr = fromwksInfo ; } rtDW . icfbha544g . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . jjeu0qtul4 ; const double * timePoints = ( double *
) rtDW . ehtjho2f5s . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . j13sv11vx2
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . kolnoxowix . TimePtr = fromwksInfo -> time ;
rtDW . kolnoxowix . DataPtr = fromwksInfo -> data ; rtDW . kolnoxowix .
RSimInfoPtr = fromwksInfo ; } rtDW . jeuco21sts . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . dwj0pofozl ; const double * timePoints = ( double *
) rtDW . kolnoxowix . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . nudru5oewz
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . o3txyt5wpk . TimePtr = fromwksInfo -> time ;
rtDW . o3txyt5wpk . DataPtr = fromwksInfo -> data ; rtDW . o3txyt5wpk .
RSimInfoPtr = fromwksInfo ; } rtDW . j2tdvtytkr . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . me2df0znmf ; const double * timePoints = ( double *
) rtDW . o3txyt5wpk . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . crfwloing0
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . eggimasrah . TimePtr = fromwksInfo -> time ;
rtDW . eggimasrah . DataPtr = fromwksInfo -> data ; rtDW . eggimasrah .
RSimInfoPtr = fromwksInfo ; } rtDW . acjatji4rh . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . dah5ttseov ; const double * timePoints = ( double *
) rtDW . eggimasrah . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . emosu012ii
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . f0jb0pxd5a . TimePtr = fromwksInfo -> time ;
rtDW . f0jb0pxd5a . DataPtr = fromwksInfo -> data ; rtDW . f0jb0pxd5a .
RSimInfoPtr = fromwksInfo ; } rtDW . civkh42vvh . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ahyywxeooh ; const double * timePoints = ( double *
) rtDW . f0jb0pxd5a . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . fzwyypmdo4
= 0 ; } } } void MdlOutputs ( int_T tid ) { int32_T i ; boolean_T bpiyyozbli
; boolean_T c0owkk5h5a ; boolean_T c1ywibghiu ; boolean_T cdlkwc2ls5 ;
boolean_T cmu5r52zus ; boolean_T dc0ymgt4ks ; boolean_T dcgndgnlbx ;
boolean_T dff1womlyo ; boolean_T dx0jrmvjat ; boolean_T dxa4evtarq ;
boolean_T e121ccofde ; boolean_T ecuysndku4 ; boolean_T eeg4pfuhcl ;
boolean_T elsxw1jla1 ; boolean_T etrzf2j3oz ; boolean_T faz35ftyoo ;
boolean_T fhfj22nzcx ; boolean_T fqjogjtllw ; boolean_T g0vtxlenkf ;
boolean_T gbtzjeidoo ; boolean_T hllmepvouh ; boolean_T hn2q0g45yu ;
boolean_T ie5pgt00if ; boolean_T ii5cdjkgoe ; boolean_T iva3jluvqw ;
boolean_T j1yh4neqyt ; boolean_T jg0s4rt5d4 ; boolean_T jmosynrbiu ;
boolean_T jw5ajo3ojm ; boolean_T kwk5pem3je ; boolean_T l4j2tas4wk ;
boolean_T lmrwahoeoz ; boolean_T mkjktxffv5 ; boolean_T mlyxikc3yd ;
boolean_T mmbirx25a1 ; boolean_T n154m1grse ; boolean_T nonu0dvgna ;
boolean_T nqgpi3mylh ; boolean_T nrz5hhizo5 ; boolean_T nxvye0sg4c ;
boolean_T o4tvnj4r5v ; boolean_T oappgmqknz ; boolean_T pamphx2n0p ;
boolean_T pbhhy315dl ; boolean_T pmcq3pvib0 ; boolean_T pnrhg4ujxe ; { real_T
* pDataValues = ( real_T * ) rtDW . hvmusgsjaj . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . hvmusgsjaj . TimePtr ; int_T currTimeIndex
= rtDW . jj21tf3aqg . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
hvmusgsjaj . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . jj21tf3aqg .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
i5xwbbskyv_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . i5xwbbskyv_mbvzarwird [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . iyy3h4gswe ; int_T * zcTimeIndicesIdx = & rtDW . gimltbpiry ; int_T
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
i5xwbbskyv_mbvzarwird [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . cq2tozq2za . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . cq2tozq2za . TimePtr ; int_T currTimeIndex = rtDW . mt5k3k1fq3 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . cq2tozq2za . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . mt5k3k1fq3 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . nhe4oqppfk_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . nhe4oqppfk_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . hzagckdicv ; int_T *
zcTimeIndicesIdx = & rtDW . b5bqkg4ec3 ; int_T zcIdx = zcTimeIndices [ *
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
nhe4oqppfk_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . fojecsed5g [ i ] = ( ( rtB . i5xwbbskyv_mbvzarwird [ i ] !=
0.0 ) && ( rtB . nhe4oqppfk_cl54gopm0x [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . ku1ymqyi00 . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ku1ymqyi00 . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . fojecsed5g [ 0 ] + 0 ) ; } } }
{ real_T * pDataValues = ( real_T * ) rtDW . me4b5ujdm4 . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . me4b5ujdm4 . TimePtr ; int_T currTimeIndex
= rtDW . b0zgrj4cs4 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
me4b5ujdm4 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . b0zgrj4cs4 .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
i40qqntd4n_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . i40qqntd4n_kkiq3xxxve [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . ojiqmutngz ; int_T * zcTimeIndicesIdx = & rtDW . hpsgq2e30p ; int_T
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
i40qqntd4n_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . ektnfx4uaa . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . ektnfx4uaa . TimePtr ; int_T currTimeIndex = rtDW . bek0aiedpm .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ektnfx4uaa . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . bek0aiedpm . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . lfth1lpfgm_cxarnvbvui [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . lfth1lpfgm_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . jh0ot4gnxy ; int_T *
zcTimeIndicesIdx = & rtDW . gd44x4ieib ; int_T zcIdx = zcTimeIndices [ *
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
lfth1lpfgm_cxarnvbvui [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . mxouhlb2gw [ i ] = ( ( rtB . i40qqntd4n_kkiq3xxxve [ i ] !=
0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . mulhvtspg0
. LoggedData ) , & rtB . mxouhlb2gw [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . ilwp32etap_guugdwf2m3 [ i ] = ( ( rtB .
i40qqntd4n_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . nhe4oqppfk_cl54gopm0x [ i ]
!= 0.0 ) ) ; } { real_T * pDataValues = ( real_T * ) rtDW . agmzmlwl13 .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . agmzmlwl13 . TimePtr ;
int_T currTimeIndex = rtDW . fbllcg1p1z . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . agmzmlwl13 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fbllcg1p1z . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . gswmdpljxs_bhxxfovxdy [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . gswmdpljxs_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . mt5wpxud3j ; int_T *
zcTimeIndicesIdx = & rtDW . pkw1xn0vyi ; int_T zcIdx = zcTimeIndices [ *
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
gswmdpljxs_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { jg0s4rt5d4 = rtB . ilwp32etap_guugdwf2m3 [ i ] ; hllmepvouh = ( (
rtB . gswmdpljxs_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [
i ] != 0.0 ) ) ; rtB . pk2xdduubg [ i ] = ( ( jg0s4rt5d4 && hllmepvouh && (
rtP . Constant1_Value != 0.0 ) ) || ( ( ! jg0s4rt5d4 ) && ( ! hllmepvouh ) &&
( rtP . Constant1_Value != 0.0 ) ) ) ; rtB . fplfroqg1f_ldqodwenvz [ i ] =
hllmepvouh ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . i445buixam . LoggedData ) , & rtB . pk2xdduubg [ 0 ] , 0
) ; } } } } { real_T * pDataValues = ( real_T * ) rtDW . aohxatn10f . DataPtr
; real_T * pTimeValues = ( real_T * ) rtDW . aohxatn10f . TimePtr ; int_T
currTimeIndex = rtDW . cg04bxfexz . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . aohxatn10f . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
cg04bxfexz . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . dyh1xnvwwz_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . dyh1xnvwwz_pbm3vprmfu [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . i51f2vlnlx ; int_T * zcTimeIndicesIdx = & rtDW .
oihryju0st ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
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
== 0 ) { d2 = d1 ; } ( & rtB . dyh1xnvwwz_pbm3vprmfu [ 0 ] ) [ elIdx ] = (
real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } }
} } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . j50yegxr1p_dhamdvybc1 [ i ] =
( ( rtB . dyh1xnvwwz_pbm3vprmfu [ i ] != 0.0 ) && ( rtB .
nhe4oqppfk_cl54gopm0x [ i ] != 0.0 ) ) ; } { real_T * pDataValues = ( real_T
* ) rtDW . d5rku4dap4 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
d5rku4dap4 . TimePtr ; int_T currTimeIndex = rtDW . eow0gsao2v . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . d5rku4dap4 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . eow0gsao2v . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . phqpdpfvpu_cv5hdgrwft [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . phqpdpfvpu_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . mvkxhwmuht ; int_T *
zcTimeIndicesIdx = & rtDW . htj224anvz ; int_T zcIdx = zcTimeIndices [ *
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
phqpdpfvpu_cv5hdgrwft [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . mvkv1xi411_dypejvacrn [ i ] = ( ( rtB . i40qqntd4n_kkiq3xxxve
[ i ] != 0.0 ) && ( rtB . phqpdpfvpu_cv5hdgrwft [ i ] != 0.0 ) ) ; } { real_T
* pDataValues = ( real_T * ) rtDW . ig3ngwc5yl . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . ig3ngwc5yl . TimePtr ; int_T currTimeIndex
= rtDW . g0rscqlqj0 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
ig3ngwc5yl . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . g0rscqlqj0 .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
gtlf4tgj3o_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . gtlf4tgj3o_fqdqrf4qbc [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . jjtry454rw ; int_T * zcTimeIndicesIdx = & rtDW . heg0cwkv1d ; int_T
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
gtlf4tgj3o_fqdqrf4qbc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { dcgndgnlbx = rtB . mvkv1xi411_dypejvacrn [ i ] ; dxa4evtarq = ( (
rtB . gswmdpljxs_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . gtlf4tgj3o_fqdqrf4qbc [
i ] != 0.0 ) ) ; rtB . bhtrjfccoe_owjr1h1vqy [ i ] = ( ( dcgndgnlbx &&
dxa4evtarq && ( rtP . Constant7_Value != 0.0 ) ) || ( ( ! dcgndgnlbx ) && ( !
dxa4evtarq ) && ( rtP . Constant7_Value != 0.0 ) ) ) ; rtB .
njigvp1yvn_lxo5edjg3c [ i ] = dxa4evtarq ; } { real_T * pDataValues = (
real_T * ) rtDW . kgseirxppw . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . kgseirxppw . TimePtr ; int_T currTimeIndex = rtDW . eufo4wecis .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . kgseirxppw . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . eufo4wecis . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . b4fp0p0cjv_g2mlkqadfk [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . b4fp0p0cjv_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . fzjqgavylo ; int_T *
zcTimeIndicesIdx = & rtDW . puxxzfh2gf ; int_T zcIdx = zcTimeIndices [ *
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
b4fp0p0cjv_g2mlkqadfk [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . ftbl3qc3ty . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . ftbl3qc3ty . TimePtr ; int_T currTimeIndex = rtDW . mjv2pwkvdn .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ftbl3qc3ty . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . mjv2pwkvdn . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . mgvsfhdhz0_g1smspu5ke [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . mgvsfhdhz0_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . clxu0chp1j ; int_T *
zcTimeIndicesIdx = & rtDW . hhfxqe5rbl ; int_T zcIdx = zcTimeIndices [ *
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
mgvsfhdhz0_g1smspu5ke [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { nqgpi3mylh = rtB . bhtrjfccoe_owjr1h1vqy [ i ] ; mmbirx25a1 = ( (
rtB . b4fp0p0cjv_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . mgvsfhdhz0_g1smspu5ke [
i ] != 0.0 ) ) ; faz35ftyoo = ( ( rtB . gswmdpljxs_bhxxfovxdy [ i ] != 0.0 )
&& ( rtB . mgvsfhdhz0_g1smspu5ke [ i ] != 0.0 ) ) ; c0owkk5h5a = ( ( rtB .
i40qqntd4n_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . gtlf4tgj3o_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; dc0ymgt4ks = ( faz35ftyoo || ( c0owkk5h5a && ( rtP .
Constant6_Value != 0.0 ) ) ) ; rtB . ag45lsppu4_hv2ho1zopz [ i ] = ( (
nqgpi3mylh && mmbirx25a1 && dc0ymgt4ks ) || ( ( ! nqgpi3mylh ) && ( !
mmbirx25a1 ) && dc0ymgt4ks ) ) ; rtB . c0dr5akvfr_bjbgfqrolh [ i ] =
mmbirx25a1 ; rtB . nzjk3hstds_nuebgmauvi [ i ] = faz35ftyoo ; rtB .
oojerfme4k_bsqwvugooi [ i ] = c0owkk5h5a ; rtB . lnvxoyikyx_lnjdk5wtww [ i ]
= dc0ymgt4ks ; } { real_T * pDataValues = ( real_T * ) rtDW . fpfhtsns1y .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . fpfhtsns1y . TimePtr ;
int_T currTimeIndex = rtDW . nf4j4chcke . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . fpfhtsns1y . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . nf4j4chcke . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . iep2bzrolt_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . iep2bzrolt_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . p33xietry2 ; int_T *
zcTimeIndicesIdx = & rtDW . ftfkp1sn1p ; int_T zcIdx = zcTimeIndices [ *
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
iep2bzrolt_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . ehtjho2f5s . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . ehtjho2f5s . TimePtr ; int_T currTimeIndex = rtDW . icfbha544g .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ehtjho2f5s . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . icfbha544g . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ndy02pw3vh_nz4o0shxby [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . ndy02pw3vh_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . jjeu0qtul4 ; int_T *
zcTimeIndicesIdx = & rtDW . j13sv11vx2 ; int_T zcIdx = zcTimeIndices [ *
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
ndy02pw3vh_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { c0owkk5h5a = rtB . oojerfme4k_bsqwvugooi [ i ] ; faz35ftyoo = rtB .
nzjk3hstds_nuebgmauvi [ i ] ; e121ccofde = rtB . ag45lsppu4_hv2ho1zopz [ i ]
; c1ywibghiu = ( ( rtB . iep2bzrolt_merlcviukg [ i ] != 0.0 ) && ( rtB .
ndy02pw3vh_nz4o0shxby [ i ] != 0.0 ) ) ; lmrwahoeoz = ( ( rtB .
b4fp0p0cjv_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . ndy02pw3vh_nz4o0shxby [ i ]
!= 0.0 ) ) ; c0owkk5h5a = ( ( c0owkk5h5a && faz35ftyoo && ( rtP .
Constant6_Value != 0.0 ) ) || ( ( ! c0owkk5h5a ) && ( ! faz35ftyoo ) && ( rtP
. Constant6_Value != 0.0 ) ) ) ; faz35ftyoo = ( ( rtB . gswmdpljxs_bhxxfovxdy
[ i ] != 0.0 ) && ( rtB . ndy02pw3vh_nz4o0shxby [ i ] != 0.0 ) ) ; j1yh4neqyt
= ( ( rtB . i40qqntd4n_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
mgvsfhdhz0_g1smspu5ke [ i ] != 0.0 ) ) ; nonu0dvgna = ( faz35ftyoo || (
j1yh4neqyt && ( rtP . Constant5_Value != 0.0 ) ) ) ; o4tvnj4r5v = (
lmrwahoeoz || ( c0owkk5h5a && nonu0dvgna ) ) ; rtB . iy3xhv3qlp_fdinthrxmb [
i ] = ( ( e121ccofde && c1ywibghiu && o4tvnj4r5v ) || ( ( ! e121ccofde ) && (
! c1ywibghiu ) && o4tvnj4r5v ) ) ; rtB . ejj5lmv3b3_bnlywzniup [ i ] =
c1ywibghiu ; rtB . o5dwiothzc_dapv3jlyq5 [ i ] = lmrwahoeoz ; rtB .
gx5ayalycg_ezqlmfzvpq [ i ] = j1yh4neqyt ; rtB . clnlcw5jz0_bjvjhhzy4i [ i ]
= nonu0dvgna ; rtB . pt1r4h5v5u_jzx3amusab [ i ] = o4tvnj4r5v ; rtB .
nzjk3hstds_nuebgmauvi [ i ] = faz35ftyoo ; rtB . oojerfme4k_bsqwvugooi [ i ]
= c0owkk5h5a ; } { real_T * pDataValues = ( real_T * ) rtDW . kolnoxowix .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . kolnoxowix . TimePtr ;
int_T currTimeIndex = rtDW . jeuco21sts . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . kolnoxowix . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jeuco21sts . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . owfdrccodm_ppxrqq0gsf [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . owfdrccodm_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . dwj0pofozl ; int_T *
zcTimeIndicesIdx = & rtDW . nudru5oewz ; int_T zcIdx = zcTimeIndices [ *
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
owfdrccodm_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . o3txyt5wpk . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . o3txyt5wpk . TimePtr ; int_T currTimeIndex = rtDW . j2tdvtytkr .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . o3txyt5wpk . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . j2tdvtytkr . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . lolzlyi2sv_llw0u2ae0v [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . lolzlyi2sv_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . me2df0znmf ; int_T *
zcTimeIndicesIdx = & rtDW . crfwloing0 ; int_T zcIdx = zcTimeIndices [ *
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
lolzlyi2sv_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { c0owkk5h5a = rtB . oojerfme4k_bsqwvugooi [ i ] ; lmrwahoeoz = rtB .
o5dwiothzc_dapv3jlyq5 [ i ] ; nonu0dvgna = rtB . clnlcw5jz0_bjvjhhzy4i [ i ]
; j1yh4neqyt = rtB . gx5ayalycg_ezqlmfzvpq [ i ] ; faz35ftyoo = rtB .
nzjk3hstds_nuebgmauvi [ i ] ; fhfj22nzcx = rtB . iy3xhv3qlp_fdinthrxmb [ i ]
; elsxw1jla1 = ( ( rtB . owfdrccodm_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
lolzlyi2sv_llw0u2ae0v [ i ] != 0.0 ) ) ; dx0jrmvjat = ( ( rtB .
iep2bzrolt_merlcviukg [ i ] != 0.0 ) && ( rtB . lolzlyi2sv_llw0u2ae0v [ i ]
!= 0.0 ) ) ; nonu0dvgna = ( ( c0owkk5h5a && lmrwahoeoz && nonu0dvgna ) || ( (
! c0owkk5h5a ) && ( ! lmrwahoeoz ) && nonu0dvgna ) ) ; lmrwahoeoz = ( ( rtB .
b4fp0p0cjv_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . lolzlyi2sv_llw0u2ae0v [ i ]
!= 0.0 ) ) ; j1yh4neqyt = ( ( j1yh4neqyt && faz35ftyoo && ( rtP .
Constant5_Value != 0.0 ) ) || ( ( ! j1yh4neqyt ) && ( ! faz35ftyoo ) && ( rtP
. Constant5_Value != 0.0 ) ) ) ; c0owkk5h5a = ( ( rtB . gswmdpljxs_bhxxfovxdy
[ i ] != 0.0 ) && ( rtB . lolzlyi2sv_llw0u2ae0v [ i ] != 0.0 ) ) ; faz35ftyoo
= ( ( rtB . i40qqntd4n_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
ndy02pw3vh_nz4o0shxby [ i ] != 0.0 ) ) ; jmosynrbiu = ( c0owkk5h5a || (
faz35ftyoo && ( rtP . Constant4_Value != 0.0 ) ) ) ; iva3jluvqw = (
lmrwahoeoz || ( j1yh4neqyt && jmosynrbiu ) ) ; ie5pgt00if = ( dx0jrmvjat || (
nonu0dvgna && iva3jluvqw ) ) ; rtB . habe30dmq5_icdfyazkhu [ i ] = ( (
fhfj22nzcx && elsxw1jla1 && ie5pgt00if ) || ( ( ! fhfj22nzcx ) && ( !
elsxw1jla1 ) && ie5pgt00if ) ) ; rtB . ohsmn4htvi_al00mdgrv4 [ i ] =
elsxw1jla1 ; rtB . f5vxcibspd_ju13rw2h0m [ i ] = dx0jrmvjat ; rtB .
mhrawqjfnz_jz50ptvnrg [ i ] = jmosynrbiu ; rtB . ajdwhsu3e4_o4f35lbcvx [ i ]
= iva3jluvqw ; rtB . okj2hr3lrx_nyxm0bsxsn [ i ] = ie5pgt00if ; rtB .
nzjk3hstds_nuebgmauvi [ i ] = faz35ftyoo ; rtB . gx5ayalycg_ezqlmfzvpq [ i ]
= j1yh4neqyt ; rtB . clnlcw5jz0_bjvjhhzy4i [ i ] = nonu0dvgna ; rtB .
o5dwiothzc_dapv3jlyq5 [ i ] = lmrwahoeoz ; rtB . oojerfme4k_bsqwvugooi [ i ]
= c0owkk5h5a ; } { real_T * pDataValues = ( real_T * ) rtDW . eggimasrah .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . eggimasrah . TimePtr ;
int_T currTimeIndex = rtDW . acjatji4rh . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . eggimasrah . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . acjatji4rh . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . kjgqno1zb3_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . kjgqno1zb3_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . dah5ttseov ; int_T *
zcTimeIndicesIdx = & rtDW . emosu012ii ; int_T zcIdx = zcTimeIndices [ *
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
kjgqno1zb3_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . f0jb0pxd5a . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . f0jb0pxd5a . TimePtr ; int_T currTimeIndex = rtDW . civkh42vvh .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . f0jb0pxd5a . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . civkh42vvh . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . eis1ry5qdh_dhmrxtyqop [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . eis1ry5qdh_dhmrxtyqop [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . ahyywxeooh ; int_T *
zcTimeIndicesIdx = & rtDW . fzwyypmdo4 ; int_T zcIdx = zcTimeIndices [ *
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
eis1ry5qdh_dhmrxtyqop [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { nonu0dvgna = rtB . clnlcw5jz0_bjvjhhzy4i [ i ] ; dx0jrmvjat = rtB .
f5vxcibspd_ju13rw2h0m [ i ] ; iva3jluvqw = rtB . ajdwhsu3e4_o4f35lbcvx [ i ]
; j1yh4neqyt = rtB . gx5ayalycg_ezqlmfzvpq [ i ] ; lmrwahoeoz = rtB .
o5dwiothzc_dapv3jlyq5 [ i ] ; jmosynrbiu = rtB . mhrawqjfnz_jz50ptvnrg [ i ]
; faz35ftyoo = rtB . nzjk3hstds_nuebgmauvi [ i ] ; c0owkk5h5a = rtB .
oojerfme4k_bsqwvugooi [ i ] ; cmu5r52zus = rtB . habe30dmq5_icdfyazkhu [ i ]
; jw5ajo3ojm = rtB . j50yegxr1p_dhamdvybc1 [ i ] ; dff1womlyo = ( ( rtB .
kjgqno1zb3_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . eis1ry5qdh_dhmrxtyqop [ i ]
!= 0.0 ) ) ; ii5cdjkgoe = ( ( rtB . owfdrccodm_ppxrqq0gsf [ i ] != 0.0 ) && (
rtB . eis1ry5qdh_dhmrxtyqop [ i ] != 0.0 ) ) ; iva3jluvqw = ( ( nonu0dvgna &&
dx0jrmvjat && iva3jluvqw ) || ( ( ! nonu0dvgna ) && ( ! dx0jrmvjat ) &&
iva3jluvqw ) ) ; dx0jrmvjat = ( ( rtB . iep2bzrolt_merlcviukg [ i ] != 0.0 )
&& ( rtB . eis1ry5qdh_dhmrxtyqop [ i ] != 0.0 ) ) ; jmosynrbiu = ( (
j1yh4neqyt && lmrwahoeoz && jmosynrbiu ) || ( ( ! j1yh4neqyt ) && ( !
lmrwahoeoz ) && jmosynrbiu ) ) ; nonu0dvgna = ( ( rtB . b4fp0p0cjv_g2mlkqadfk
[ i ] != 0.0 ) && ( rtB . eis1ry5qdh_dhmrxtyqop [ i ] != 0.0 ) ) ; j1yh4neqyt
= ( ( faz35ftyoo && c0owkk5h5a && ( rtP . Constant4_Value != 0.0 ) ) || ( ( !
faz35ftyoo ) && ( ! c0owkk5h5a ) && ( rtP . Constant4_Value != 0.0 ) ) ) ;
lmrwahoeoz = ( ( rtB . gswmdpljxs_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
eis1ry5qdh_dhmrxtyqop [ i ] != 0.0 ) ) ; c0owkk5h5a = ( ( rtB .
i40qqntd4n_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . lolzlyi2sv_llw0u2ae0v [ i ]
!= 0.0 ) ) ; faz35ftyoo = ( lmrwahoeoz || ( c0owkk5h5a && ( rtP .
Constant3_Value != 0.0 ) ) ) ; pbhhy315dl = ( nonu0dvgna || ( j1yh4neqyt &&
faz35ftyoo ) ) ; fqjogjtllw = ( dx0jrmvjat || ( jmosynrbiu && pbhhy315dl ) )
; eeg4pfuhcl = ( ii5cdjkgoe || ( iva3jluvqw && fqjogjtllw ) ) ; etrzf2j3oz =
( ( cmu5r52zus && dff1womlyo && eeg4pfuhcl ) || ( ( ! cmu5r52zus ) && ( !
dff1womlyo ) && eeg4pfuhcl ) ) ; ecuysndku4 = ( ( rtB . kjgqno1zb3_jwzvbuczlb
[ i ] != 0.0 ) && ( rtB . nhe4oqppfk_cl54gopm0x [ i ] != 0.0 ) ) ; fqjogjtllw
= ( ( iva3jluvqw && ii5cdjkgoe && fqjogjtllw ) || ( ( ! iva3jluvqw ) && ( !
ii5cdjkgoe ) && fqjogjtllw ) ) ; ii5cdjkgoe = ( ( rtB . owfdrccodm_ppxrqq0gsf
[ i ] != 0.0 ) && ( rtB . nhe4oqppfk_cl54gopm0x [ i ] != 0.0 ) ) ; pbhhy315dl
= ( ( jmosynrbiu && dx0jrmvjat && pbhhy315dl ) || ( ( ! jmosynrbiu ) && ( !
dx0jrmvjat ) && pbhhy315dl ) ) ; iva3jluvqw = ( ( rtB . iep2bzrolt_merlcviukg
[ i ] != 0.0 ) && ( rtB . nhe4oqppfk_cl54gopm0x [ i ] != 0.0 ) ) ; jmosynrbiu
= ( ( j1yh4neqyt && nonu0dvgna && faz35ftyoo ) || ( ( ! j1yh4neqyt ) && ( !
nonu0dvgna ) && faz35ftyoo ) ) ; dx0jrmvjat = ( ( rtB . b4fp0p0cjv_g2mlkqadfk
[ i ] != 0.0 ) && ( rtB . nhe4oqppfk_cl54gopm0x [ i ] != 0.0 ) ) ; nonu0dvgna
= ( ( c0owkk5h5a && lmrwahoeoz && ( rtP . Constant3_Value != 0.0 ) ) || ( ( !
c0owkk5h5a ) && ( ! lmrwahoeoz ) && ( rtP . Constant3_Value != 0.0 ) ) ) ;
j1yh4neqyt = ( ( rtB . gswmdpljxs_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
nhe4oqppfk_cl54gopm0x [ i ] != 0.0 ) ) ; lmrwahoeoz = ( ( rtB .
i40qqntd4n_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . eis1ry5qdh_dhmrxtyqop [ i ]
!= 0.0 ) ) ; c0owkk5h5a = ( j1yh4neqyt || ( lmrwahoeoz && ( rtP .
Constant2_Value != 0.0 ) ) ) ; faz35ftyoo = ( dx0jrmvjat || ( nonu0dvgna &&
c0owkk5h5a ) ) ; mlyxikc3yd = ( iva3jluvqw || ( jmosynrbiu && faz35ftyoo ) )
; mkjktxffv5 = ( ii5cdjkgoe || ( pbhhy315dl && mlyxikc3yd ) ) ; n154m1grse =
( ecuysndku4 || ( fqjogjtllw && mkjktxffv5 ) ) ; pnrhg4ujxe = ( jw5ajo3ojm ||
( etrzf2j3oz && n154m1grse ) ) ; dff1womlyo = ( dff1womlyo || ( cmu5r52zus &&
eeg4pfuhcl ) ) ; elsxw1jla1 = ( rtB . ohsmn4htvi_al00mdgrv4 [ i ] || ( rtB .
iy3xhv3qlp_fdinthrxmb [ i ] && rtB . okj2hr3lrx_nyxm0bsxsn [ i ] ) ) ;
c1ywibghiu = ( rtB . ejj5lmv3b3_bnlywzniup [ i ] || ( rtB .
ag45lsppu4_hv2ho1zopz [ i ] && rtB . pt1r4h5v5u_jzx3amusab [ i ] ) ) ;
mmbirx25a1 = ( rtB . c0dr5akvfr_bjbgfqrolh [ i ] || ( rtB .
bhtrjfccoe_owjr1h1vqy [ i ] && rtB . lnvxoyikyx_lnjdk5wtww [ i ] ) ) ;
dxa4evtarq = ( rtB . njigvp1yvn_lxo5edjg3c [ i ] || ( rtB .
mvkv1xi411_dypejvacrn [ i ] && ( rtP . Constant7_Value != 0.0 ) ) ) ;
eeg4pfuhcl = ( ( rtB . gswmdpljxs_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
phqpdpfvpu_cv5hdgrwft [ i ] != 0.0 ) ) ; cmu5r52zus = ( rtP . Constant_Value
!= 0.0 ) ^ eeg4pfuhcl ; ie5pgt00if = ( ( rtB . b4fp0p0cjv_g2mlkqadfk [ i ] !=
0.0 ) && ( rtB . gtlf4tgj3o_fqdqrf4qbc [ i ] != 0.0 ) ) ; fhfj22nzcx =
cmu5r52zus ^ ie5pgt00if ; o4tvnj4r5v = dxa4evtarq ^ fhfj22nzcx ; e121ccofde =
( ( rtB . iep2bzrolt_merlcviukg [ i ] != 0.0 ) && ( rtB .
mgvsfhdhz0_g1smspu5ke [ i ] != 0.0 ) ) ; dc0ymgt4ks = o4tvnj4r5v ^ e121ccofde
; nqgpi3mylh = mmbirx25a1 ^ dc0ymgt4ks ; dcgndgnlbx = ( ( rtB .
owfdrccodm_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . ndy02pw3vh_nz4o0shxby [ i ]
!= 0.0 ) ) ; nrz5hhizo5 = nqgpi3mylh ^ dcgndgnlbx ; bpiyyozbli = c1ywibghiu ^
nrz5hhizo5 ; g0vtxlenkf = ( ( rtB . kjgqno1zb3_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . lolzlyi2sv_llw0u2ae0v [ i ] != 0.0 ) ) ; pmcq3pvib0 = bpiyyozbli ^
g0vtxlenkf ; gbtzjeidoo = elsxw1jla1 ^ pmcq3pvib0 ; pamphx2n0p = ( ( rtB .
dyh1xnvwwz_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . eis1ry5qdh_dhmrxtyqop [ i ]
!= 0.0 ) ) ; hn2q0g45yu = gbtzjeidoo ^ pamphx2n0p ; oappgmqknz = dff1womlyo ^
hn2q0g45yu ; cdlkwc2ls5 = oappgmqknz ^ rtB . fojecsed5g [ i ] ; l4j2tas4wk =
pnrhg4ujxe ^ cdlkwc2ls5 ; kwk5pem3je = ( ( rtB . i5xwbbskyv_mbvzarwird [ i ]
!= 0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [ i ] != 0.0 ) ) ; n154m1grse = ( (
etrzf2j3oz && jw5ajo3ojm && n154m1grse ) || ( ( ! etrzf2j3oz ) && ( !
jw5ajo3ojm ) && n154m1grse ) ) ; etrzf2j3oz = ( ( rtB . dyh1xnvwwz_pbm3vprmfu
[ i ] != 0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [ i ] != 0.0 ) ) ; mkjktxffv5
= ( ( fqjogjtllw && ecuysndku4 && mkjktxffv5 ) || ( ( ! fqjogjtllw ) && ( !
ecuysndku4 ) && mkjktxffv5 ) ) ; ecuysndku4 = ( ( rtB . kjgqno1zb3_jwzvbuczlb
[ i ] != 0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [ i ] != 0.0 ) ) ; mlyxikc3yd
= ( ( pbhhy315dl && ii5cdjkgoe && mlyxikc3yd ) || ( ( ! pbhhy315dl ) && ( !
ii5cdjkgoe ) && mlyxikc3yd ) ) ; fqjogjtllw = ( ( rtB . owfdrccodm_ppxrqq0gsf
[ i ] != 0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [ i ] != 0.0 ) ) ; pbhhy315dl
= ( ( jmosynrbiu && iva3jluvqw && faz35ftyoo ) || ( ( ! jmosynrbiu ) && ( !
iva3jluvqw ) && faz35ftyoo ) ) ; ii5cdjkgoe = ( ( rtB . iep2bzrolt_merlcviukg
[ i ] != 0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [ i ] != 0.0 ) ) ; iva3jluvqw
= ( ( nonu0dvgna && dx0jrmvjat && c0owkk5h5a ) || ( ( ! nonu0dvgna ) && ( !
dx0jrmvjat ) && c0owkk5h5a ) ) ; jmosynrbiu = ( ( rtB . b4fp0p0cjv_g2mlkqadfk
[ i ] != 0.0 ) && ( rtB . lfth1lpfgm_cxarnvbvui [ i ] != 0.0 ) ) ; dx0jrmvjat
= ( ( lmrwahoeoz && j1yh4neqyt && ( rtP . Constant2_Value != 0.0 ) ) || ( ( !
lmrwahoeoz ) && ( ! j1yh4neqyt ) && ( rtP . Constant2_Value != 0.0 ) ) ) ;
hllmepvouh = ( rtB . fplfroqg1f_ldqodwenvz [ i ] || ( rtB .
ilwp32etap_guugdwf2m3 [ i ] && ( rtP . Constant1_Value != 0.0 ) ) ) ;
nonu0dvgna = ( jmosynrbiu || ( dx0jrmvjat && hllmepvouh ) ) ; j1yh4neqyt = (
ii5cdjkgoe || ( iva3jluvqw && nonu0dvgna ) ) ; lmrwahoeoz = ( fqjogjtllw || (
pbhhy315dl && j1yh4neqyt ) ) ; c0owkk5h5a = ( ecuysndku4 || ( mlyxikc3yd &&
lmrwahoeoz ) ) ; faz35ftyoo = ( etrzf2j3oz || ( mkjktxffv5 && c0owkk5h5a ) )
; jw5ajo3ojm = ( kwk5pem3je || ( n154m1grse && faz35ftyoo ) ) ; jg0s4rt5d4 =
l4j2tas4wk ^ jw5ajo3ojm ; l4j2tas4wk = ( ( ( rtP . Constant8_Value != 0.0 )
&& jg0s4rt5d4 ) || ( l4j2tas4wk && jw5ajo3ojm ) ) ; hn2q0g45yu = ( (
dff1womlyo && hn2q0g45yu ) || ( gbtzjeidoo && pamphx2n0p ) ) ; pamphx2n0p = (
( elsxw1jla1 && pmcq3pvib0 ) || ( bpiyyozbli && g0vtxlenkf ) ) ; gbtzjeidoo =
( ( c1ywibghiu && nrz5hhizo5 ) || ( nqgpi3mylh && dcgndgnlbx ) ) ; pmcq3pvib0
= ( ( mmbirx25a1 && dc0ymgt4ks ) || ( o4tvnj4r5v && e121ccofde ) ) ;
g0vtxlenkf = ( ( dxa4evtarq && fhfj22nzcx ) || ( cmu5r52zus && ie5pgt00if ) )
; bpiyyozbli = ( ( rtB . b4fp0p0cjv_g2mlkqadfk [ i ] != 0.0 ) && ( rtB .
phqpdpfvpu_cv5hdgrwft [ i ] != 0.0 ) ) ; nrz5hhizo5 = ( eeg4pfuhcl && ( rtP .
Constant_Value != 0.0 ) ) ; eeg4pfuhcl = bpiyyozbli ^ nrz5hhizo5 ; dff1womlyo
= ( ( rtB . iep2bzrolt_merlcviukg [ i ] != 0.0 ) && ( rtB .
gtlf4tgj3o_fqdqrf4qbc [ i ] != 0.0 ) ) ; cmu5r52zus = eeg4pfuhcl ^ dff1womlyo
; ie5pgt00if = g0vtxlenkf ^ cmu5r52zus ; elsxw1jla1 = ( ( rtB .
owfdrccodm_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . mgvsfhdhz0_g1smspu5ke [ i ]
!= 0.0 ) ) ; fhfj22nzcx = ie5pgt00if ^ elsxw1jla1 ; o4tvnj4r5v = pmcq3pvib0 ^
fhfj22nzcx ; c1ywibghiu = ( ( rtB . kjgqno1zb3_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . ndy02pw3vh_nz4o0shxby [ i ] != 0.0 ) ) ; e121ccofde = o4tvnj4r5v ^
c1ywibghiu ; dc0ymgt4ks = gbtzjeidoo ^ e121ccofde ; mmbirx25a1 = ( ( rtB .
dyh1xnvwwz_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . lolzlyi2sv_llw0u2ae0v [ i ]
!= 0.0 ) ) ; nqgpi3mylh = dc0ymgt4ks ^ mmbirx25a1 ; dxa4evtarq = pamphx2n0p ^
nqgpi3mylh ; dcgndgnlbx = ( ( rtB . i5xwbbskyv_mbvzarwird [ i ] != 0.0 ) && (
rtB . eis1ry5qdh_dhmrxtyqop [ i ] != 0.0 ) ) ; jw5ajo3ojm = dxa4evtarq ^
dcgndgnlbx ; nxvye0sg4c = hn2q0g45yu ^ jw5ajo3ojm ; cdlkwc2ls5 = ( (
pnrhg4ujxe && cdlkwc2ls5 ) || ( oappgmqknz && rtB . fojecsed5g [ i ] ) ) ;
oappgmqknz = nxvye0sg4c ^ cdlkwc2ls5 ; nxvye0sg4c = ( ( l4j2tas4wk &&
oappgmqknz ) || ( nxvye0sg4c && cdlkwc2ls5 ) ) ; cdlkwc2ls5 = ( ( pamphx2n0p
&& nqgpi3mylh ) || ( dc0ymgt4ks && mmbirx25a1 ) ) ; pamphx2n0p = ( (
gbtzjeidoo && e121ccofde ) || ( o4tvnj4r5v && c1ywibghiu ) ) ; gbtzjeidoo = (
( pmcq3pvib0 && fhfj22nzcx ) || ( ie5pgt00if && elsxw1jla1 ) ) ; pmcq3pvib0 =
( ( g0vtxlenkf && cmu5r52zus ) || ( eeg4pfuhcl && dff1womlyo ) ) ; g0vtxlenkf
= ( ( rtB . iep2bzrolt_merlcviukg [ i ] != 0.0 ) && ( rtB .
phqpdpfvpu_cv5hdgrwft [ i ] != 0.0 ) ) ; bpiyyozbli = ( bpiyyozbli &&
nrz5hhizo5 ) ; nrz5hhizo5 = g0vtxlenkf ^ bpiyyozbli ; pnrhg4ujxe = ( ( rtB .
owfdrccodm_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . gtlf4tgj3o_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; eeg4pfuhcl = nrz5hhizo5 ^ pnrhg4ujxe ; dff1womlyo = pmcq3pvib0 ^
eeg4pfuhcl ; cmu5r52zus = ( ( rtB . kjgqno1zb3_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . mgvsfhdhz0_g1smspu5ke [ i ] != 0.0 ) ) ; ie5pgt00if = dff1womlyo ^
cmu5r52zus ; elsxw1jla1 = gbtzjeidoo ^ ie5pgt00if ; fhfj22nzcx = ( ( rtB .
dyh1xnvwwz_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . ndy02pw3vh_nz4o0shxby [ i ]
!= 0.0 ) ) ; o4tvnj4r5v = elsxw1jla1 ^ fhfj22nzcx ; c1ywibghiu = pamphx2n0p ^
o4tvnj4r5v ; e121ccofde = ( ( rtB . i5xwbbskyv_mbvzarwird [ i ] != 0.0 ) && (
rtB . lolzlyi2sv_llw0u2ae0v [ i ] != 0.0 ) ) ; dc0ymgt4ks = c1ywibghiu ^
e121ccofde ; mmbirx25a1 = cdlkwc2ls5 ^ dc0ymgt4ks ; hn2q0g45yu = ( (
hn2q0g45yu && jw5ajo3ojm ) || ( dxa4evtarq && dcgndgnlbx ) ) ; nqgpi3mylh =
mmbirx25a1 ^ hn2q0g45yu ; rtB . aznnksaihq [ i ] = nxvye0sg4c ^ nqgpi3mylh ;
rtB . ly1hltq1sj_oyypvi4boh [ i ] = dff1womlyo ; rtB . p01fqbbq3t_nvsvtgkap4
[ i ] = ii5cdjkgoe ; rtB . jtfjap1b4y_m3yhjduhi1 [ i ] = pbhhy315dl ; rtB .
c0bz4epqm0_czkfpwuzm5 [ i ] = fqjogjtllw ; rtB . mgty5o3ftb_mdoasc5av4 [ i ]
= eeg4pfuhcl ; rtB . gt3pudviqy_m3ybdk4ikc [ i ] = etrzf2j3oz ; rtB .
jr53knvsjt_jacdjrqyev [ i ] = ecuysndku4 ; rtB . b1d3r5wo42_h522xzlxvt [ i ]
= mlyxikc3yd ; rtB . arkhcshiua_c0dok3111h [ i ] = mkjktxffv5 ; rtB .
g0tljbaqep_ctvw0tpkon [ i ] = n154m1grse ; rtB . kowidp05dn_pxqvlbal2i [ i ]
= pnrhg4ujxe ; rtB . iw2cqkotdh_p5h3gwuwqg [ i ] = nrz5hhizo5 ; rtB .
a2pmr1lr1l_afnsueciae [ i ] = bpiyyozbli ; rtB . dgcj55jckc_evg4t2fsev [ i ]
= g0vtxlenkf ; rtB . ouokoecfzn_ax3wx1gs5w [ i ] = pmcq3pvib0 ; rtB .
ksu02fgcl2_as0qznsxlv [ i ] = gbtzjeidoo ; rtB . ncwnj1bbj2_ifotjnizh4 [ i ]
= pamphx2n0p ; rtB . ib23lmxsoc_ltu3syw14q [ i ] = hn2q0g45yu ; rtB .
jynbd5vxru_ojunzewo4f [ i ] = oappgmqknz ; rtB . eniphqzuob_o2tow3gxzm [ i ]
= cdlkwc2ls5 ; rtB . aqn3sasmh2_ipgns4eet5 [ i ] = l4j2tas4wk ; rtB .
d5iyxhsnkn_fkr0r45bcn [ i ] = kwk5pem3je ; rtB . hsnusvfro0_izlwqhinl5 [ i ]
= nxvye0sg4c ; rtB . j50yegxr1p_dhamdvybc1 [ i ] = jw5ajo3ojm ; rtB .
habe30dmq5_icdfyazkhu [ i ] = cmu5r52zus ; rtB . oojerfme4k_bsqwvugooi [ i ]
= c0owkk5h5a ; rtB . nzjk3hstds_nuebgmauvi [ i ] = faz35ftyoo ; rtB .
mhrawqjfnz_jz50ptvnrg [ i ] = jmosynrbiu ; rtB . o5dwiothzc_dapv3jlyq5 [ i ]
= lmrwahoeoz ; rtB . gx5ayalycg_ezqlmfzvpq [ i ] = j1yh4neqyt ; rtB .
ajdwhsu3e4_o4f35lbcvx [ i ] = iva3jluvqw ; rtB . f5vxcibspd_ju13rw2h0m [ i ]
= dx0jrmvjat ; rtB . clnlcw5jz0_bjvjhhzy4i [ i ] = nonu0dvgna ; rtB .
ohsmn4htvi_al00mdgrv4 [ i ] = elsxw1jla1 ; rtB . iy3xhv3qlp_fdinthrxmb [ i ]
= fhfj22nzcx ; rtB . okj2hr3lrx_nyxm0bsxsn [ i ] = ie5pgt00if ; rtB .
ejj5lmv3b3_bnlywzniup [ i ] = c1ywibghiu ; rtB . ag45lsppu4_hv2ho1zopz [ i ]
= e121ccofde ; rtB . pt1r4h5v5u_jzx3amusab [ i ] = o4tvnj4r5v ; rtB .
c0dr5akvfr_bjbgfqrolh [ i ] = mmbirx25a1 ; rtB . bhtrjfccoe_owjr1h1vqy [ i ]
= nqgpi3mylh ; rtB . lnvxoyikyx_lnjdk5wtww [ i ] = dc0ymgt4ks ; rtB .
njigvp1yvn_lxo5edjg3c [ i ] = dxa4evtarq ; rtB . mvkv1xi411_dypejvacrn [ i ]
= dcgndgnlbx ; rtB . fplfroqg1f_ldqodwenvz [ i ] = hllmepvouh ; rtB .
ilwp32etap_guugdwf2m3 [ i ] = jg0s4rt5d4 ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . hfnpvhpdnt . LoggedData
) , & rtB . aznnksaihq [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ nxvye0sg4c = ( ( rtB . hsnusvfro0_izlwqhinl5 [ i ] && rtB .
bhtrjfccoe_owjr1h1vqy [ i ] ) || ( rtB . c0dr5akvfr_bjbgfqrolh [ i ] && rtB .
ib23lmxsoc_ltu3syw14q [ i ] ) ) ; hn2q0g45yu = ( ( rtB .
ncwnj1bbj2_ifotjnizh4 [ i ] && rtB . pt1r4h5v5u_jzx3amusab [ i ] ) || ( rtB .
ohsmn4htvi_al00mdgrv4 [ i ] && rtB . iy3xhv3qlp_fdinthrxmb [ i ] ) ) ;
pamphx2n0p = ( ( rtB . ksu02fgcl2_as0qznsxlv [ i ] && rtB .
okj2hr3lrx_nyxm0bsxsn [ i ] ) || ( rtB . ly1hltq1sj_oyypvi4boh [ i ] && rtB .
habe30dmq5_icdfyazkhu [ i ] ) ) ; gbtzjeidoo = ( ( rtB .
ouokoecfzn_ax3wx1gs5w [ i ] && rtB . mgty5o3ftb_mdoasc5av4 [ i ] ) || ( rtB .
iw2cqkotdh_p5h3gwuwqg [ i ] && rtB . kowidp05dn_pxqvlbal2i [ i ] ) ) ;
pmcq3pvib0 = ( ( rtB . owfdrccodm_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
phqpdpfvpu_cv5hdgrwft [ i ] != 0.0 ) ) ; g0vtxlenkf = ( rtB .
dgcj55jckc_evg4t2fsev [ i ] && rtB . a2pmr1lr1l_afnsueciae [ i ] ) ;
bpiyyozbli = pmcq3pvib0 ^ g0vtxlenkf ; nrz5hhizo5 = ( ( rtB .
kjgqno1zb3_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . gtlf4tgj3o_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; pnrhg4ujxe = bpiyyozbli ^ nrz5hhizo5 ; eeg4pfuhcl = gbtzjeidoo ^
pnrhg4ujxe ; dff1womlyo = ( ( rtB . dyh1xnvwwz_pbm3vprmfu [ i ] != 0.0 ) && (
rtB . mgvsfhdhz0_g1smspu5ke [ i ] != 0.0 ) ) ; cmu5r52zus = eeg4pfuhcl ^
dff1womlyo ; ie5pgt00if = pamphx2n0p ^ cmu5r52zus ; elsxw1jla1 = ( ( rtB .
i5xwbbskyv_mbvzarwird [ i ] != 0.0 ) && ( rtB . ndy02pw3vh_nz4o0shxby [ i ]
!= 0.0 ) ) ; fhfj22nzcx = ie5pgt00if ^ elsxw1jla1 ; o4tvnj4r5v = hn2q0g45yu ^
fhfj22nzcx ; cdlkwc2ls5 = ( ( rtB . eniphqzuob_o2tow3gxzm [ i ] && rtB .
lnvxoyikyx_lnjdk5wtww [ i ] ) || ( rtB . ejj5lmv3b3_bnlywzniup [ i ] && rtB .
ag45lsppu4_hv2ho1zopz [ i ] ) ) ; c1ywibghiu = o4tvnj4r5v ^ cdlkwc2ls5 ; rtB
. epnbc4o5er [ i ] = nxvye0sg4c ^ c1ywibghiu ; rtB . hsnusvfro0_izlwqhinl5 [
i ] = nxvye0sg4c ; rtB . ib23lmxsoc_ltu3syw14q [ i ] = hn2q0g45yu ; rtB .
ncwnj1bbj2_ifotjnizh4 [ i ] = pamphx2n0p ; rtB . pt1r4h5v5u_jzx3amusab [ i ]
= o4tvnj4r5v ; rtB . ohsmn4htvi_al00mdgrv4 [ i ] = elsxw1jla1 ; rtB .
iy3xhv3qlp_fdinthrxmb [ i ] = fhfj22nzcx ; rtB . ksu02fgcl2_as0qznsxlv [ i ]
= gbtzjeidoo ; rtB . okj2hr3lrx_nyxm0bsxsn [ i ] = ie5pgt00if ; rtB .
ly1hltq1sj_oyypvi4boh [ i ] = dff1womlyo ; rtB . habe30dmq5_icdfyazkhu [ i ]
= cmu5r52zus ; rtB . ouokoecfzn_ax3wx1gs5w [ i ] = pmcq3pvib0 ; rtB .
mgty5o3ftb_mdoasc5av4 [ i ] = eeg4pfuhcl ; rtB . iw2cqkotdh_p5h3gwuwqg [ i ]
= nrz5hhizo5 ; rtB . kowidp05dn_pxqvlbal2i [ i ] = pnrhg4ujxe ; rtB .
dgcj55jckc_evg4t2fsev [ i ] = g0vtxlenkf ; rtB . a2pmr1lr1l_afnsueciae [ i ]
= bpiyyozbli ; rtB . eniphqzuob_o2tow3gxzm [ i ] = cdlkwc2ls5 ; rtB .
ejj5lmv3b3_bnlywzniup [ i ] = c1ywibghiu ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . endzapypvp . LoggedData
) , & rtB . epnbc4o5er [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ nxvye0sg4c = ( ( rtB . hsnusvfro0_izlwqhinl5 [ i ] && rtB .
ejj5lmv3b3_bnlywzniup [ i ] ) || ( rtB . pt1r4h5v5u_jzx3amusab [ i ] && rtB .
eniphqzuob_o2tow3gxzm [ i ] ) ) ; cdlkwc2ls5 = ( ( rtB .
ncwnj1bbj2_ifotjnizh4 [ i ] && rtB . habe30dmq5_icdfyazkhu [ i ] ) || ( rtB .
mgty5o3ftb_mdoasc5av4 [ i ] && rtB . ly1hltq1sj_oyypvi4boh [ i ] ) ) ;
pamphx2n0p = ( ( rtB . ksu02fgcl2_as0qznsxlv [ i ] && rtB .
kowidp05dn_pxqvlbal2i [ i ] ) || ( rtB . a2pmr1lr1l_afnsueciae [ i ] && rtB .
iw2cqkotdh_p5h3gwuwqg [ i ] ) ) ; gbtzjeidoo = ( ( rtB .
kjgqno1zb3_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . phqpdpfvpu_cv5hdgrwft [ i ]
!= 0.0 ) ) ; pmcq3pvib0 = ( rtB . ouokoecfzn_ax3wx1gs5w [ i ] && rtB .
dgcj55jckc_evg4t2fsev [ i ] ) ; g0vtxlenkf = gbtzjeidoo ^ pmcq3pvib0 ;
bpiyyozbli = ( ( rtB . dyh1xnvwwz_pbm3vprmfu [ i ] != 0.0 ) && ( rtB .
gtlf4tgj3o_fqdqrf4qbc [ i ] != 0.0 ) ) ; nrz5hhizo5 = g0vtxlenkf ^ bpiyyozbli
; pnrhg4ujxe = pamphx2n0p ^ nrz5hhizo5 ; eeg4pfuhcl = ( ( rtB .
i5xwbbskyv_mbvzarwird [ i ] != 0.0 ) && ( rtB . mgvsfhdhz0_g1smspu5ke [ i ]
!= 0.0 ) ) ; dff1womlyo = pnrhg4ujxe ^ eeg4pfuhcl ; cmu5r52zus = cdlkwc2ls5 ^
dff1womlyo ; hn2q0g45yu = ( ( rtB . ib23lmxsoc_ltu3syw14q [ i ] && rtB .
iy3xhv3qlp_fdinthrxmb [ i ] ) || ( rtB . okj2hr3lrx_nyxm0bsxsn [ i ] && rtB .
ohsmn4htvi_al00mdgrv4 [ i ] ) ) ; ie5pgt00if = cmu5r52zus ^ hn2q0g45yu ; rtB
. loiigyk0gs [ i ] = nxvye0sg4c ^ ie5pgt00if ; rtB . hsnusvfro0_izlwqhinl5 [
i ] = nxvye0sg4c ; rtB . eniphqzuob_o2tow3gxzm [ i ] = cdlkwc2ls5 ; rtB .
ncwnj1bbj2_ifotjnizh4 [ i ] = pamphx2n0p ; rtB . habe30dmq5_icdfyazkhu [ i ]
= cmu5r52zus ; rtB . mgty5o3ftb_mdoasc5av4 [ i ] = eeg4pfuhcl ; rtB .
ly1hltq1sj_oyypvi4boh [ i ] = dff1womlyo ; rtB . ksu02fgcl2_as0qznsxlv [ i ]
= gbtzjeidoo ; rtB . kowidp05dn_pxqvlbal2i [ i ] = pnrhg4ujxe ; rtB .
a2pmr1lr1l_afnsueciae [ i ] = bpiyyozbli ; rtB . iw2cqkotdh_p5h3gwuwqg [ i ]
= nrz5hhizo5 ; rtB . ouokoecfzn_ax3wx1gs5w [ i ] = pmcq3pvib0 ; rtB .
dgcj55jckc_evg4t2fsev [ i ] = g0vtxlenkf ; rtB . ib23lmxsoc_ltu3syw14q [ i ]
= hn2q0g45yu ; rtB . okj2hr3lrx_nyxm0bsxsn [ i ] = ie5pgt00if ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . k421dmfjp0
. LoggedData ) , & rtB . loiigyk0gs [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { nxvye0sg4c = ( ( rtB . hsnusvfro0_izlwqhinl5 [ i ] && rtB .
okj2hr3lrx_nyxm0bsxsn [ i ] ) || ( rtB . habe30dmq5_icdfyazkhu [ i ] && rtB .
ib23lmxsoc_ltu3syw14q [ i ] ) ) ; hn2q0g45yu = ( ( rtB .
ncwnj1bbj2_ifotjnizh4 [ i ] && rtB . iw2cqkotdh_p5h3gwuwqg [ i ] ) || ( rtB .
dgcj55jckc_evg4t2fsev [ i ] && rtB . a2pmr1lr1l_afnsueciae [ i ] ) ) ;
pamphx2n0p = ( ( rtB . dyh1xnvwwz_pbm3vprmfu [ i ] != 0.0 ) && ( rtB .
phqpdpfvpu_cv5hdgrwft [ i ] != 0.0 ) ) ; gbtzjeidoo = ( rtB .
ksu02fgcl2_as0qznsxlv [ i ] && rtB . ouokoecfzn_ax3wx1gs5w [ i ] ) ;
pmcq3pvib0 = pamphx2n0p ^ gbtzjeidoo ; g0vtxlenkf = ( ( rtB .
i5xwbbskyv_mbvzarwird [ i ] != 0.0 ) && ( rtB . gtlf4tgj3o_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; bpiyyozbli = pmcq3pvib0 ^ g0vtxlenkf ; nrz5hhizo5 = hn2q0g45yu ^
bpiyyozbli ; cdlkwc2ls5 = ( ( rtB . eniphqzuob_o2tow3gxzm [ i ] && rtB .
ly1hltq1sj_oyypvi4boh [ i ] ) || ( rtB . kowidp05dn_pxqvlbal2i [ i ] && rtB .
mgty5o3ftb_mdoasc5av4 [ i ] ) ) ; pnrhg4ujxe = nrz5hhizo5 ^ cdlkwc2ls5 ; rtB
. bh4lm1kmf0 [ i ] = nxvye0sg4c ^ pnrhg4ujxe ; rtB . hsnusvfro0_izlwqhinl5 [
i ] = nxvye0sg4c ; rtB . ib23lmxsoc_ltu3syw14q [ i ] = hn2q0g45yu ; rtB .
ncwnj1bbj2_ifotjnizh4 [ i ] = pamphx2n0p ; rtB . iw2cqkotdh_p5h3gwuwqg [ i ]
= nrz5hhizo5 ; rtB . dgcj55jckc_evg4t2fsev [ i ] = g0vtxlenkf ; rtB .
a2pmr1lr1l_afnsueciae [ i ] = bpiyyozbli ; rtB . ksu02fgcl2_as0qznsxlv [ i ]
= gbtzjeidoo ; rtB . ouokoecfzn_ax3wx1gs5w [ i ] = pmcq3pvib0 ; rtB .
eniphqzuob_o2tow3gxzm [ i ] = cdlkwc2ls5 ; rtB . kowidp05dn_pxqvlbal2i [ i ]
= pnrhg4ujxe ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ka0kzxqfvn . LoggedData ) , & rtB . bh4lm1kmf0 [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { nxvye0sg4c = ( ( rtB .
hsnusvfro0_izlwqhinl5 [ i ] && rtB . kowidp05dn_pxqvlbal2i [ i ] ) || ( rtB .
iw2cqkotdh_p5h3gwuwqg [ i ] && rtB . eniphqzuob_o2tow3gxzm [ i ] ) ) ;
cdlkwc2ls5 = ( ( rtB . i5xwbbskyv_mbvzarwird [ i ] != 0.0 ) && ( rtB .
phqpdpfvpu_cv5hdgrwft [ i ] != 0.0 ) ) ; pamphx2n0p = ( rtB .
ncwnj1bbj2_ifotjnizh4 [ i ] && rtB . ksu02fgcl2_as0qznsxlv [ i ] ) ;
gbtzjeidoo = cdlkwc2ls5 ^ pamphx2n0p ; hn2q0g45yu = ( ( rtB .
ib23lmxsoc_ltu3syw14q [ i ] && rtB . a2pmr1lr1l_afnsueciae [ i ] ) || ( rtB .
ouokoecfzn_ax3wx1gs5w [ i ] && rtB . dgcj55jckc_evg4t2fsev [ i ] ) ) ;
pmcq3pvib0 = gbtzjeidoo ^ hn2q0g45yu ; rtB . jk50dxfbpq [ i ] = nxvye0sg4c ^
pmcq3pvib0 ; rtB . hsnusvfro0_izlwqhinl5 [ i ] = nxvye0sg4c ; rtB .
eniphqzuob_o2tow3gxzm [ i ] = cdlkwc2ls5 ; rtB . ncwnj1bbj2_ifotjnizh4 [ i ]
= pamphx2n0p ; rtB . ksu02fgcl2_as0qznsxlv [ i ] = gbtzjeidoo ; rtB .
ib23lmxsoc_ltu3syw14q [ i ] = hn2q0g45yu ; rtB . ouokoecfzn_ax3wx1gs5w [ i ]
= pmcq3pvib0 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . jlkv5npnb2 . LoggedData ) , & rtB . jk50dxfbpq [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . mqmxlfrxgn [ i ] = ( (
rtB . hsnusvfro0_izlwqhinl5 [ i ] && rtB . ouokoecfzn_ax3wx1gs5w [ i ] ) || (
rtB . ksu02fgcl2_as0qznsxlv [ i ] && rtB . ib23lmxsoc_ltu3syw14q [ i ] ) || (
rtB . eniphqzuob_o2tow3gxzm [ i ] && rtB . ncwnj1bbj2_ifotjnizh4 [ i ] ) ) ;
} if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . cdofqjeb3g
. LoggedData ) , & rtB . mqmxlfrxgn [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { hllmepvouh = rtB . fplfroqg1f_ldqodwenvz [ i ] ; jmosynrbiu
= rtB . mhrawqjfnz_jz50ptvnrg [ i ] ; dx0jrmvjat = rtB .
f5vxcibspd_ju13rw2h0m [ i ] ; rtB . dmzglcd0uc [ i ] = ( ( dx0jrmvjat &&
jmosynrbiu && hllmepvouh ) || ( ( ! dx0jrmvjat ) && ( ! jmosynrbiu ) &&
hllmepvouh ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput
( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . oyhyumzi1p . LoggedData ) , & rtB . dmzglcd0uc [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { nonu0dvgna = rtB .
clnlcw5jz0_bjvjhhzy4i [ i ] ; ii5cdjkgoe = rtB . p01fqbbq3t_nvsvtgkap4 [ i ]
; iva3jluvqw = rtB . ajdwhsu3e4_o4f35lbcvx [ i ] ; rtB . l5pnlxwd5z [ i ] = (
( iva3jluvqw && ii5cdjkgoe && nonu0dvgna ) || ( ( ! iva3jluvqw ) && ( !
ii5cdjkgoe ) && nonu0dvgna ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . jykhi0aw4c . LoggedData ) , & rtB . l5pnlxwd5z [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { j1yh4neqyt = rtB .
gx5ayalycg_ezqlmfzvpq [ i ] ; fqjogjtllw = rtB . c0bz4epqm0_czkfpwuzm5 [ i ]
; pbhhy315dl = rtB . jtfjap1b4y_m3yhjduhi1 [ i ] ; rtB . anjcrie4w4 [ i ] = (
( pbhhy315dl && fqjogjtllw && j1yh4neqyt ) || ( ( ! pbhhy315dl ) && ( !
fqjogjtllw ) && j1yh4neqyt ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . bqdhfom4dh . LoggedData ) , & rtB . anjcrie4w4 [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { lmrwahoeoz = rtB .
o5dwiothzc_dapv3jlyq5 [ i ] ; ecuysndku4 = rtB . jr53knvsjt_jacdjrqyev [ i ]
; mlyxikc3yd = rtB . b1d3r5wo42_h522xzlxvt [ i ] ; rtB . dxgdj1a4jv [ i ] = (
( mlyxikc3yd && ecuysndku4 && lmrwahoeoz ) || ( ( ! mlyxikc3yd ) && ( !
ecuysndku4 ) && lmrwahoeoz ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . nwzjddwmlt . LoggedData ) , & rtB . dxgdj1a4jv [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { c0owkk5h5a = rtB .
oojerfme4k_bsqwvugooi [ i ] ; etrzf2j3oz = rtB . gt3pudviqy_m3ybdk4ikc [ i ]
; mkjktxffv5 = rtB . arkhcshiua_c0dok3111h [ i ] ; rtB . gch4jxovvp [ i ] = (
( mkjktxffv5 && etrzf2j3oz && c0owkk5h5a ) || ( ( ! mkjktxffv5 ) && ( !
etrzf2j3oz ) && c0owkk5h5a ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . jz1moedmjn . LoggedData ) , & rtB . gch4jxovvp [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { faz35ftyoo = rtB .
nzjk3hstds_nuebgmauvi [ i ] ; kwk5pem3je = rtB . d5iyxhsnkn_fkr0r45bcn [ i ]
; n154m1grse = rtB . g0tljbaqep_ctvw0tpkon [ i ] ; rtB . fehvxmn2ao [ i ] = (
( n154m1grse && kwk5pem3je && faz35ftyoo ) || ( ( ! n154m1grse ) && ( !
kwk5pem3je ) && faz35ftyoo ) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if
( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . m5sohxlfep . LoggedData ) , & rtB . fehvxmn2ao [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . nmcgphf123 [ i ] = ( rtP
. Constant8_Value != 0.0 ) ^ rtB . ilwp32etap_guugdwf2m3 [ i ] ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . bwggfl4ro0
. LoggedData ) , & rtB . nmcgphf123 [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . ljv1qoneze [ i ] = rtB . aqn3sasmh2_ipgns4eet5 [ i ] ^
rtB . jynbd5vxru_ojunzewo4f [ i ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 )
; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar *
) ( LogVar * ) ( rtDW . cyrkmjco0z . LoggedData ) , & rtB . ljv1qoneze [ 0 ]
, 0 ) ; } } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlZeroCrossings ( void ) { { const double
* timePtr = ( double * ) rtDW . hvmusgsjaj . TimePtr ; int_T * zcTimeIndices
= & rtDW . iyy3h4gswe ; int_T zcTimeIndicesIdx = rtDW . gimltbpiry ; ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) -> ioiflv2zv2 = ssGetT ( rtS ) -
timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr =
( double * ) rtDW . cq2tozq2za . TimePtr ; int_T * zcTimeIndices = & rtDW .
hzagckdicv ; int_T zcTimeIndicesIdx = rtDW . b5bqkg4ec3 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> bu4kyygrgu = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . me4b5ujdm4 . TimePtr ; int_T * zcTimeIndices = & rtDW .
ojiqmutngz ; int_T zcTimeIndicesIdx = rtDW . hpsgq2e30p ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> d1ovqiwi1e = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ektnfx4uaa . TimePtr ; int_T * zcTimeIndices = & rtDW .
jh0ot4gnxy ; int_T zcTimeIndicesIdx = rtDW . gd44x4ieib ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> c3thllphyu = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . agmzmlwl13 . TimePtr ; int_T * zcTimeIndices = & rtDW .
mt5wpxud3j ; int_T zcTimeIndicesIdx = rtDW . pkw1xn0vyi ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> l2mutkwwp4 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . aohxatn10f . TimePtr ; int_T * zcTimeIndices = & rtDW .
i51f2vlnlx ; int_T zcTimeIndicesIdx = rtDW . oihryju0st ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> ikyscoxgag = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . d5rku4dap4 . TimePtr ; int_T * zcTimeIndices = & rtDW .
mvkxhwmuht ; int_T zcTimeIndicesIdx = rtDW . htj224anvz ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> bpdtt4y3ym = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ig3ngwc5yl . TimePtr ; int_T * zcTimeIndices = & rtDW .
jjtry454rw ; int_T zcTimeIndicesIdx = rtDW . heg0cwkv1d ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> hdjfpvvffu = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . kgseirxppw . TimePtr ; int_T * zcTimeIndices = & rtDW .
fzjqgavylo ; int_T zcTimeIndicesIdx = rtDW . puxxzfh2gf ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> fh4ehknn3w = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ftbl3qc3ty . TimePtr ; int_T * zcTimeIndices = & rtDW .
clxu0chp1j ; int_T zcTimeIndicesIdx = rtDW . hhfxqe5rbl ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> k3z1v15qao = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . fpfhtsns1y . TimePtr ; int_T * zcTimeIndices = & rtDW .
p33xietry2 ; int_T zcTimeIndicesIdx = rtDW . ftfkp1sn1p ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> orygmksapw = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ehtjho2f5s . TimePtr ; int_T * zcTimeIndices = & rtDW .
jjeu0qtul4 ; int_T zcTimeIndicesIdx = rtDW . j13sv11vx2 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> nvnxsioezl = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . kolnoxowix . TimePtr ; int_T * zcTimeIndices = & rtDW .
dwj0pofozl ; int_T zcTimeIndicesIdx = rtDW . nudru5oewz ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> mlpialb4ta = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . o3txyt5wpk . TimePtr ; int_T * zcTimeIndices = & rtDW .
me2df0znmf ; int_T zcTimeIndicesIdx = rtDW . crfwloing0 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> bleblvvosy = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . eggimasrah . TimePtr ; int_T * zcTimeIndices = & rtDW .
dah5ttseov ; int_T zcTimeIndicesIdx = rtDW . emosu012ii ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> hqecjr2d2p = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . f0jb0pxd5a . TimePtr ; int_T * zcTimeIndices = & rtDW .
ahyywxeooh ; int_T zcTimeIndicesIdx = rtDW . fzwyypmdo4 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> is0zwehve2 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } } void MdlTerminate ( void ) {
rt_FREE ( rtDW . hvmusgsjaj . RSimInfoPtr ) ; rt_FREE ( rtDW . cq2tozq2za .
RSimInfoPtr ) ; rt_FREE ( rtDW . me4b5ujdm4 . RSimInfoPtr ) ; rt_FREE ( rtDW
. ektnfx4uaa . RSimInfoPtr ) ; rt_FREE ( rtDW . agmzmlwl13 . RSimInfoPtr ) ;
rt_FREE ( rtDW . aohxatn10f . RSimInfoPtr ) ; rt_FREE ( rtDW . d5rku4dap4 .
RSimInfoPtr ) ; rt_FREE ( rtDW . ig3ngwc5yl . RSimInfoPtr ) ; rt_FREE ( rtDW
. kgseirxppw . RSimInfoPtr ) ; rt_FREE ( rtDW . ftbl3qc3ty . RSimInfoPtr ) ;
rt_FREE ( rtDW . fpfhtsns1y . RSimInfoPtr ) ; rt_FREE ( rtDW . ehtjho2f5s .
RSimInfoPtr ) ; rt_FREE ( rtDW . kolnoxowix . RSimInfoPtr ) ; rt_FREE ( rtDW
. o3txyt5wpk . RSimInfoPtr ) ; rt_FREE ( rtDW . eggimasrah . RSimInfoPtr ) ;
rt_FREE ( rtDW . f0jb0pxd5a . RSimInfoPtr ) ; { if ( rtDW . ku1ymqyi00 .
AQHandles ) { sdiTerminateStreaming ( & rtDW . ku1ymqyi00 . AQHandles ) ; } }
} static void mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Approx_Multiplier_M1_AMA1_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Approx_Multiplier_M1_AMA1_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Approx_Multiplier_M1_AMA1_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Approx_Multiplier_M1_AMA1_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Approx_Multiplier_M1_AMA1_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Approx_Multiplier_M1_AMA1_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Approx_Multiplier_M1_AMA1_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_Approx_Multiplier_M1_AMA1_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Approx_Multiplier_M1_AMA1_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_Approx_Multiplier_M1_AMA1_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Approx_Multiplier_M1_AMA1_GetDWork (
) { static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( ssDW , 0
, 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 48 ] = { "rtDW.iyy3h4gswe" , "rtDW.gimltbpiry" ,
"rtDW.jj21tf3aqg" , "rtDW.hzagckdicv" , "rtDW.b5bqkg4ec3" , "rtDW.mt5k3k1fq3"
, "rtDW.ojiqmutngz" , "rtDW.hpsgq2e30p" , "rtDW.b0zgrj4cs4" ,
"rtDW.jh0ot4gnxy" , "rtDW.gd44x4ieib" , "rtDW.bek0aiedpm" , "rtDW.mt5wpxud3j"
, "rtDW.pkw1xn0vyi" , "rtDW.fbllcg1p1z" , "rtDW.i51f2vlnlx" ,
"rtDW.oihryju0st" , "rtDW.cg04bxfexz" , "rtDW.mvkxhwmuht" , "rtDW.htj224anvz"
, "rtDW.eow0gsao2v" , "rtDW.jjtry454rw" , "rtDW.heg0cwkv1d" ,
"rtDW.g0rscqlqj0" , "rtDW.fzjqgavylo" , "rtDW.puxxzfh2gf" , "rtDW.eufo4wecis"
, "rtDW.clxu0chp1j" , "rtDW.hhfxqe5rbl" , "rtDW.mjv2pwkvdn" ,
"rtDW.p33xietry2" , "rtDW.ftfkp1sn1p" , "rtDW.nf4j4chcke" , "rtDW.jjeu0qtul4"
, "rtDW.j13sv11vx2" , "rtDW.icfbha544g" , "rtDW.dwj0pofozl" ,
"rtDW.nudru5oewz" , "rtDW.jeuco21sts" , "rtDW.me2df0znmf" , "rtDW.crfwloing0"
, "rtDW.j2tdvtytkr" , "rtDW.dah5ttseov" , "rtDW.emosu012ii" ,
"rtDW.acjatji4rh" , "rtDW.ahyywxeooh" , "rtDW.fzwyypmdo4" , "rtDW.civkh42vvh"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 48 ,
rtdwDataFieldNames ) ; mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . iyy3h4gswe ) , sizeof ( rtDW .
iyy3h4gswe ) ) ; mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( rtDW . gimltbpiry ) , sizeof ( rtDW . gimltbpiry
) ) ; mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( rtDW . jj21tf3aqg ) , sizeof ( rtDW . jj21tf3aqg ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . hzagckdicv ) , sizeof ( rtDW . hzagckdicv ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . b5bqkg4ec3 ) , sizeof ( rtDW . b5bqkg4ec3 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . mt5k3k1fq3 ) , sizeof ( rtDW . mt5k3k1fq3 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . ojiqmutngz ) , sizeof ( rtDW . ojiqmutngz ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . hpsgq2e30p ) , sizeof ( rtDW . hpsgq2e30p ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . b0zgrj4cs4 ) , sizeof ( rtDW . b0zgrj4cs4 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . jh0ot4gnxy ) , sizeof ( rtDW . jh0ot4gnxy ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( rtDW . gd44x4ieib ) , sizeof ( rtDW . gd44x4ieib ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . bek0aiedpm ) , sizeof ( rtDW . bek0aiedpm ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( rtDW . mt5wpxud3j ) , sizeof ( rtDW . mt5wpxud3j ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const
void * ) & ( rtDW . pkw1xn0vyi ) , sizeof ( rtDW . pkw1xn0vyi ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . fbllcg1p1z ) , sizeof ( rtDW . fbllcg1p1z ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const
void * ) & ( rtDW . i51f2vlnlx ) , sizeof ( rtDW . i51f2vlnlx ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( rtDW . oihryju0st ) , sizeof ( rtDW . oihryju0st ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . cg04bxfexz ) , sizeof ( rtDW . cg04bxfexz ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( rtDW . mvkxhwmuht ) , sizeof ( rtDW . mvkxhwmuht ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( rtDW . htj224anvz ) , sizeof ( rtDW . htj224anvz ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( rtDW . eow0gsao2v ) , sizeof ( rtDW . eow0gsao2v ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const
void * ) & ( rtDW . jjtry454rw ) , sizeof ( rtDW . jjtry454rw ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( rtDW . heg0cwkv1d ) , sizeof ( rtDW . heg0cwkv1d ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const
void * ) & ( rtDW . g0rscqlqj0 ) , sizeof ( rtDW . g0rscqlqj0 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( rtDW . fzjqgavylo ) , sizeof ( rtDW . fzjqgavylo ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const
void * ) & ( rtDW . puxxzfh2gf ) , sizeof ( rtDW . puxxzfh2gf ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( rtDW . eufo4wecis ) , sizeof ( rtDW . eufo4wecis ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( rtDW . clxu0chp1j ) , sizeof ( rtDW . clxu0chp1j ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const
void * ) & ( rtDW . hhfxqe5rbl ) , sizeof ( rtDW . hhfxqe5rbl ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const
void * ) & ( rtDW . mjv2pwkvdn ) , sizeof ( rtDW . mjv2pwkvdn ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( rtDW . p33xietry2 ) , sizeof ( rtDW . p33xietry2 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const
void * ) & ( rtDW . ftfkp1sn1p ) , sizeof ( rtDW . ftfkp1sn1p ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const
void * ) & ( rtDW . nf4j4chcke ) , sizeof ( rtDW . nf4j4chcke ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const
void * ) & ( rtDW . jjeu0qtul4 ) , sizeof ( rtDW . jjeu0qtul4 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const
void * ) & ( rtDW . j13sv11vx2 ) , sizeof ( rtDW . j13sv11vx2 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const
void * ) & ( rtDW . icfbha544g ) , sizeof ( rtDW . icfbha544g ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const
void * ) & ( rtDW . dwj0pofozl ) , sizeof ( rtDW . dwj0pofozl ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const
void * ) & ( rtDW . nudru5oewz ) , sizeof ( rtDW . nudru5oewz ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const
void * ) & ( rtDW . jeuco21sts ) , sizeof ( rtDW . jeuco21sts ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const
void * ) & ( rtDW . me2df0znmf ) , sizeof ( rtDW . me2df0znmf ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const
void * ) & ( rtDW . crfwloing0 ) , sizeof ( rtDW . crfwloing0 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const
void * ) & ( rtDW . j2tdvtytkr ) , sizeof ( rtDW . j2tdvtytkr ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const
void * ) & ( rtDW . dah5ttseov ) , sizeof ( rtDW . dah5ttseov ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const
void * ) & ( rtDW . emosu012ii ) , sizeof ( rtDW . emosu012ii ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const
void * ) & ( rtDW . acjatji4rh ) , sizeof ( rtDW . acjatji4rh ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const
void * ) & ( rtDW . ahyywxeooh ) , sizeof ( rtDW . ahyywxeooh ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const
void * ) & ( rtDW . fzwyypmdo4 ) , sizeof ( rtDW . fzwyypmdo4 ) ) ;
mr_Approx_Multiplier_M1_AMA1_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const
void * ) & ( rtDW . civkh42vvh ) , sizeof ( rtDW . civkh42vvh ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Approx_Multiplier_M1_AMA1_SetDWork ( const mxArray * ssDW ) { ( void )
ssDW ; mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iyy3h4gswe ) , rtdwData , 0 , 0 , sizeof ( rtDW . iyy3h4gswe ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gimltbpiry ) , rtdwData , 0 , 1 , sizeof ( rtDW . gimltbpiry ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jj21tf3aqg ) , rtdwData , 0 , 2 , sizeof ( rtDW . jj21tf3aqg ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hzagckdicv ) , rtdwData , 0 , 3 , sizeof ( rtDW . hzagckdicv ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b5bqkg4ec3 ) , rtdwData , 0 , 4 , sizeof ( rtDW . b5bqkg4ec3 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mt5k3k1fq3 ) , rtdwData , 0 , 5 , sizeof ( rtDW . mt5k3k1fq3 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ojiqmutngz ) , rtdwData , 0 , 6 , sizeof ( rtDW . ojiqmutngz ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hpsgq2e30p ) , rtdwData , 0 , 7 , sizeof ( rtDW . hpsgq2e30p ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b0zgrj4cs4 ) , rtdwData , 0 , 8 , sizeof ( rtDW . b0zgrj4cs4 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jh0ot4gnxy ) , rtdwData , 0 , 9 , sizeof ( rtDW . jh0ot4gnxy ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gd44x4ieib ) , rtdwData , 0 , 10 , sizeof ( rtDW . gd44x4ieib ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bek0aiedpm ) , rtdwData , 0 , 11 , sizeof ( rtDW . bek0aiedpm ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mt5wpxud3j ) , rtdwData , 0 , 12 , sizeof ( rtDW . mt5wpxud3j ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pkw1xn0vyi ) , rtdwData , 0 , 13 , sizeof ( rtDW . pkw1xn0vyi ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fbllcg1p1z ) , rtdwData , 0 , 14 , sizeof ( rtDW . fbllcg1p1z ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
i51f2vlnlx ) , rtdwData , 0 , 15 , sizeof ( rtDW . i51f2vlnlx ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oihryju0st ) , rtdwData , 0 , 16 , sizeof ( rtDW . oihryju0st ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cg04bxfexz ) , rtdwData , 0 , 17 , sizeof ( rtDW . cg04bxfexz ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mvkxhwmuht ) , rtdwData , 0 , 18 , sizeof ( rtDW . mvkxhwmuht ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
htj224anvz ) , rtdwData , 0 , 19 , sizeof ( rtDW . htj224anvz ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eow0gsao2v ) , rtdwData , 0 , 20 , sizeof ( rtDW . eow0gsao2v ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jjtry454rw ) , rtdwData , 0 , 21 , sizeof ( rtDW . jjtry454rw ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
heg0cwkv1d ) , rtdwData , 0 , 22 , sizeof ( rtDW . heg0cwkv1d ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g0rscqlqj0 ) , rtdwData , 0 , 23 , sizeof ( rtDW . g0rscqlqj0 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fzjqgavylo ) , rtdwData , 0 , 24 , sizeof ( rtDW . fzjqgavylo ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
puxxzfh2gf ) , rtdwData , 0 , 25 , sizeof ( rtDW . puxxzfh2gf ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eufo4wecis ) , rtdwData , 0 , 26 , sizeof ( rtDW . eufo4wecis ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
clxu0chp1j ) , rtdwData , 0 , 27 , sizeof ( rtDW . clxu0chp1j ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hhfxqe5rbl ) , rtdwData , 0 , 28 , sizeof ( rtDW . hhfxqe5rbl ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mjv2pwkvdn ) , rtdwData , 0 , 29 , sizeof ( rtDW . mjv2pwkvdn ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
p33xietry2 ) , rtdwData , 0 , 30 , sizeof ( rtDW . p33xietry2 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ftfkp1sn1p ) , rtdwData , 0 , 31 , sizeof ( rtDW . ftfkp1sn1p ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nf4j4chcke ) , rtdwData , 0 , 32 , sizeof ( rtDW . nf4j4chcke ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jjeu0qtul4 ) , rtdwData , 0 , 33 , sizeof ( rtDW . jjeu0qtul4 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j13sv11vx2 ) , rtdwData , 0 , 34 , sizeof ( rtDW . j13sv11vx2 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
icfbha544g ) , rtdwData , 0 , 35 , sizeof ( rtDW . icfbha544g ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dwj0pofozl ) , rtdwData , 0 , 36 , sizeof ( rtDW . dwj0pofozl ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nudru5oewz ) , rtdwData , 0 , 37 , sizeof ( rtDW . nudru5oewz ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jeuco21sts ) , rtdwData , 0 , 38 , sizeof ( rtDW . jeuco21sts ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
me2df0znmf ) , rtdwData , 0 , 39 , sizeof ( rtDW . me2df0znmf ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
crfwloing0 ) , rtdwData , 0 , 40 , sizeof ( rtDW . crfwloing0 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j2tdvtytkr ) , rtdwData , 0 , 41 , sizeof ( rtDW . j2tdvtytkr ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dah5ttseov ) , rtdwData , 0 , 42 , sizeof ( rtDW . dah5ttseov ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
emosu012ii ) , rtdwData , 0 , 43 , sizeof ( rtDW . emosu012ii ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
acjatji4rh ) , rtdwData , 0 , 44 , sizeof ( rtDW . acjatji4rh ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ahyywxeooh ) , rtdwData , 0 , 45 , sizeof ( rtDW . ahyywxeooh ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fzwyypmdo4 ) , rtdwData , 0 , 46 , sizeof ( rtDW . fzwyypmdo4 ) ) ;
mr_Approx_Multiplier_M1_AMA1_restoreDataFromMxArray ( ( void * ) & ( rtDW .
civkh42vvh ) , rtdwData , 0 , 47 , sizeof ( rtDW . civkh42vvh ) ) ; } }
mxArray * mr_Approx_Multiplier_M1_AMA1_GetSimStateDisallowedBlocks ( ) {
return NULL ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 513 )
; ssSetNumBlockIO ( rtS , 17 ) ; ssSetNumBlockParams ( rtS , 2097193 ) ; }
void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3971233813U ) ; ssSetChecksumVal ( rtS , 1 ,
1556376683U ) ; ssSetChecksumVal ( rtS , 2 , 1017663700U ) ; ssSetChecksumVal
( rtS , 3 , 2002948275U ) ; }
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
Approx_Multiplier_M1_AMA1_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Approx_Multiplier_M1_AMA1" ) ; ssSetPath ( rtS , "Approx_Multiplier_M1_AMA1"
) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 655.36 ) ; { static
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
ZC_EVENT_ALL_UP ) } ; ssSetStepSize ( rtS , 0.01 ) ; ssSetMinStepSize ( rtS ,
0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS ,
0 ) ; ssSetMaxStepSize ( rtS , 0.01 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
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
3971233813U ) ; ssSetChecksumVal ( rtS , 1 , 1556376683U ) ; ssSetChecksumVal
( rtS , 2 , 1017663700U ) ; ssSetChecksumVal ( rtS , 3 , 2002948275U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Approx_Multiplier_M1_AMA1_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Approx_Multiplier_M1_AMA1_GetDWork )
; slsaSetWorkFcnForSimTargetOP ( rtS , mr_Approx_Multiplier_M1_AMA1_SetDWork
) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS
) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
