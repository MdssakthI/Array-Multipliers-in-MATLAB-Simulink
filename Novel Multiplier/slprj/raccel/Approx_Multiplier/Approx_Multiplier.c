#include "rt_logging_mmi.h"
#include "Approx_Multiplier_capi.h"
#include <math.h>
#include "Approx_Multiplier.h"
#include "Approx_Multiplier_private.h"
#include "Approx_Multiplier_dt.h"
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
= sdiGetLabelFromChars ( "Approx_Multiplier/Partial Product Row 8" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 32256 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 6 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. koh20ckr1d . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9e9c58a6-b172-4822-a9fb-09f7541551d3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . koh20ckr1d . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . koh20ckr1d . AQHandles , "0.01" ,
0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . koh20ckr1d .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . koh20ckr1d . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . koh20ckr1d . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 32256 } ; rtDW . p3tek1h1w5 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . p3tek1h1w5 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . ljsicej2jp . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ljsicej2jp . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . pzqes4pt3b . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . pzqes4pt3b . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . az5i4ez2mn . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . az5i4ez2mn . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . cnii2el242 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . cnii2el242 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . fsbz2syvej . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . fsbz2syvej . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . ltksrcauy3 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ltksrcauy3 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . giqqxavhg0 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . giqqxavhg0 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . hpf4srv5wy . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . hpf4srv5wy . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . psnduconoe . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . psnduconoe . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . iqm3yzt00e . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . iqm3yzt00e . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . deeahv0ozb . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . deeahv0ozb . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . hnunn5lfsf . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . hnunn5lfsf . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . c2ng0zd0ro . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . c2ng0zd0ro . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . a1e2wlem3f . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . a1e2wlem3f . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 32256 } ; rtDW . m1l3bctojx . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 32256 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . m1l3bctojx . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . fh1xf5ew32 . TimePtr = fromwksInfo -> time ;
rtDW . fh1xf5ew32 . DataPtr = fromwksInfo -> data ; rtDW . fh1xf5ew32 .
RSimInfoPtr = fromwksInfo ; } rtDW . ntvaixwdrn . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . m4rjf4ewan . TimePtr = fromwksInfo -> time ;
rtDW . m4rjf4ewan . DataPtr = fromwksInfo -> data ; rtDW . m4rjf4ewan .
RSimInfoPtr = fromwksInfo ; } rtDW . fzbhpbbfed . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . lixywmk45f . TimePtr = fromwksInfo -> time ;
rtDW . lixywmk45f . DataPtr = fromwksInfo -> data ; rtDW . lixywmk45f .
RSimInfoPtr = fromwksInfo ; } rtDW . hk2jnl5nld . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . njqi5gn3wz . TimePtr = fromwksInfo -> time ;
rtDW . njqi5gn3wz . DataPtr = fromwksInfo -> data ; rtDW . njqi5gn3wz .
RSimInfoPtr = fromwksInfo ; } rtDW . pqg4hz3zh4 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . eqxemamok3 . TimePtr = fromwksInfo -> time ;
rtDW . eqxemamok3 . DataPtr = fromwksInfo -> data ; rtDW . eqxemamok3 .
RSimInfoPtr = fromwksInfo ; } rtDW . latid21dux . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . c3ark0gajy . TimePtr = fromwksInfo -> time ;
rtDW . c3ark0gajy . DataPtr = fromwksInfo -> data ; rtDW . c3ark0gajy .
RSimInfoPtr = fromwksInfo ; } rtDW . gn31hrfwar . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . kymi3cbjki . TimePtr = fromwksInfo -> time ;
rtDW . kymi3cbjki . DataPtr = fromwksInfo -> data ; rtDW . kymi3cbjki .
RSimInfoPtr = fromwksInfo ; } rtDW . hmq1mmtxes . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . aauzmjdxqq . TimePtr = fromwksInfo -> time ;
rtDW . aauzmjdxqq . DataPtr = fromwksInfo -> data ; rtDW . aauzmjdxqq .
RSimInfoPtr = fromwksInfo ; } rtDW . kmn3pgmyg5 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . dlkjiluyo1 . TimePtr = fromwksInfo -> time ;
rtDW . dlkjiluyo1 . DataPtr = fromwksInfo -> data ; rtDW . dlkjiluyo1 .
RSimInfoPtr = fromwksInfo ; } rtDW . ntgl42hmkr . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . gla14t4n1o . TimePtr = fromwksInfo -> time ;
rtDW . gla14t4n1o . DataPtr = fromwksInfo -> data ; rtDW . gla14t4n1o .
RSimInfoPtr = fromwksInfo ; } rtDW . acnbzrcojc . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . c3uuk2d4op . TimePtr = fromwksInfo -> time ;
rtDW . c3uuk2d4op . DataPtr = fromwksInfo -> data ; rtDW . c3uuk2d4op .
RSimInfoPtr = fromwksInfo ; } rtDW . ot5xfv5sth . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . ange1qf3ku . TimePtr = fromwksInfo -> time ;
rtDW . ange1qf3ku . DataPtr = fromwksInfo -> data ; rtDW . ange1qf3ku .
RSimInfoPtr = fromwksInfo ; } rtDW . k4wjhynsm1 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . lzinrftzd0 . TimePtr = fromwksInfo -> time ;
rtDW . lzinrftzd0 . DataPtr = fromwksInfo -> data ; rtDW . lzinrftzd0 .
RSimInfoPtr = fromwksInfo ; } rtDW . b3n5ni3cpl . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . pvced405zq . TimePtr = fromwksInfo -> time ;
rtDW . pvced405zq . DataPtr = fromwksInfo -> data ; rtDW . pvced405zq .
RSimInfoPtr = fromwksInfo ; } rtDW . hwff2qevzk . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . g4udu5uvvb . TimePtr = fromwksInfo -> time ;
rtDW . g4udu5uvvb . DataPtr = fromwksInfo -> data ; rtDW . g4udu5uvvb .
RSimInfoPtr = fromwksInfo ; } rtDW . ngarqyvhaz . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 32256 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . no1io2ovug . TimePtr = fromwksInfo -> time ;
rtDW . no1io2ovug . DataPtr = fromwksInfo -> data ; rtDW . no1io2ovug .
RSimInfoPtr = fromwksInfo ; } rtDW . bzjl2bpanr . PrevIndex = 0 ; } } void
MdlOutputs ( int_T tid ) { int32_T i ; boolean_T ah1tuytwes ; boolean_T
anupfjg1uu ; boolean_T bavejanqag ; boolean_T bgbp5ghmwo ; boolean_T
bu0j1o554q ; boolean_T c1ptn0ync0 ; boolean_T campykoil0 ; boolean_T
d2mz5jrhtr ; boolean_T dbeitdgewe ; boolean_T djnm0z0vox ; boolean_T
dnfbn0xbwo ; boolean_T e13yfxn2yf ; boolean_T ejw2zphiyg ; boolean_T
eopxuynkdw ; boolean_T ew2uib3jt0 ; boolean_T exduqiaqz5 ; boolean_T
f2w45r2bby ; boolean_T fehibxhn45 ; boolean_T fzmjd4rrl2 ; boolean_T
gl2obt5k0r ; boolean_T h1bwtk4dh0 ; boolean_T hetgucpepc ; boolean_T
hh0u1vwf2g ; boolean_T hrkxcvh2gz ; boolean_T ih4n04c5yx ; boolean_T
j31pip22fu ; boolean_T ja5gfozxwn ; boolean_T jutuqdtawd ; boolean_T
jvr1pqy4wo ; boolean_T ketdv24bs5 ; boolean_T ldbqp1e4fx ; boolean_T
lv44buxncm ; boolean_T n3qvrl4x03 ; boolean_T nl4eenjcqc ; boolean_T
nsr4ydnvvc ; boolean_T og10t2adss ; boolean_T p2ij5y4ovl ; boolean_T
p5sfuyrcif ; boolean_T pnrh3e1gnp ; boolean_T pptwhvvehy ; { real_T *
pDataValues = ( real_T * ) rtDW . fh1xf5ew32 . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . fh1xf5ew32 . TimePtr ; int_T currTimeIndex = rtDW .
ntvaixwdrn . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . fh1xf5ew32 .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . ntvaixwdrn . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB .
mq50jvptur_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 32256 ; ++ elIdx ) { ( & rtB . mq50jvptur_mbvzarwird [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . mq50jvptur_mbvzarwird [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } { real_T * pDataValues = ( real_T * ) rtDW . m4rjf4ewan
. DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . m4rjf4ewan . TimePtr ;
int_T currTimeIndex = rtDW . fzbhpbbfed . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . m4rjf4ewan . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fzbhpbbfed . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . dwqidckvui_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . dwqidckvui_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . dwqidckvui_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { rtB . ns4p5qffbs [ i ] = ( ( rtB . mq50jvptur_mbvzarwird [ i
] != 0.0 ) && ( rtB . dwqidckvui_cl54gopm0x [ i ] != 0.0 ) ) ; } { if ( rtDW
. koh20ckr1d . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW
. koh20ckr1d . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
ns4p5qffbs [ 0 ] + 0 ) ; } } { real_T * pDataValues = ( real_T * ) rtDW .
lixywmk45f . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . lixywmk45f
. TimePtr ; int_T currTimeIndex = rtDW . hk2jnl5nld . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . lixywmk45f . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hk2jnl5nld . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . elyq3ovpdi_kkiq3xxxve [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . elyq3ovpdi_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . elyq3ovpdi_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T *
pDataValues = ( real_T * ) rtDW . njqi5gn3wz . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . njqi5gn3wz . TimePtr ; int_T currTimeIndex = rtDW .
pqg4hz3zh4 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . njqi5gn3wz .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . pqg4hz3zh4 . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB .
eket2vquys_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 32256 ; ++ elIdx ) { ( & rtB . eket2vquys_cxarnvbvui [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . eket2vquys_cxarnvbvui [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . nq0kqahirn [ i
] = ( ( rtB . elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
eket2vquys_cxarnvbvui [ i ] != 0.0 ) ) ; } if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . p3tek1h1w5
. LoggedData ) , & rtB . nq0kqahirn [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
32256 ; i ++ ) { rtB . hldnf33ttj_dhmrxtyqop [ i ] = ( ( rtB .
elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . dwqidckvui_cl54gopm0x [ i ]
!= 0.0 ) ) ; } { real_T * pDataValues = ( real_T * ) rtDW . eqxemamok3 .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . eqxemamok3 . TimePtr ;
int_T currTimeIndex = rtDW . latid21dux . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . eqxemamok3 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . latid21dux . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . fls2ushv1r_bhxxfovxdy [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . fls2ushv1r_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . fls2ushv1r_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { og10t2adss = ( ( rtB . fls2ushv1r_bhxxfovxdy [ i ] != 0.0 )
&& ( rtB . eket2vquys_cxarnvbvui [ i ] != 0.0 ) ) ; rtB . p05b2tos5x [ i ] =
rtB . hldnf33ttj_dhmrxtyqop [ i ] ^ og10t2adss ; rtB . ctjzv3tsia_guugdwf2m3
[ i ] = og10t2adss ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ljsicej2jp
. LoggedData ) , & rtB . p05b2tos5x [ 0 ] , 0 ) ; } } } { real_T *
pDataValues = ( real_T * ) rtDW . c3ark0gajy . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . c3ark0gajy . TimePtr ; int_T currTimeIndex = rtDW .
gn31hrfwar . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . c3ark0gajy .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . gn31hrfwar . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB .
of2o5ejcsl_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 32256 ; ++ elIdx ) { ( & rtB . of2o5ejcsl_pbm3vprmfu [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . of2o5ejcsl_pbm3vprmfu [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 32256 ; i ++ ) { dnfbn0xbwo = ( ( rtB
. elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . of2o5ejcsl_pbm3vprmfu [ i ]
!= 0.0 ) ) ; jvr1pqy4wo = ( ( rtB . fls2ushv1r_bhxxfovxdy [ i ] != 0.0 ) && (
rtB . dwqidckvui_cl54gopm0x [ i ] != 0.0 ) ) ; rtB . fwrony54hx_dypejvacrn [
i ] = ( dnfbn0xbwo && jvr1pqy4wo ) ; rtB . cw4f3mrdnq_ldqodwenvz [ i ] =
dnfbn0xbwo ; rtB . i2uql2cb34_dhamdvybc1 [ i ] = jvr1pqy4wo ; } { real_T *
pDataValues = ( real_T * ) rtDW . kymi3cbjki . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . kymi3cbjki . TimePtr ; int_T currTimeIndex = rtDW .
hmq1mmtxes . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . kymi3cbjki .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . hmq1mmtxes . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB .
ckx15ldawn_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 32256 ; ++ elIdx ) { ( & rtB . ckx15ldawn_cv5hdgrwft [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . ckx15ldawn_cv5hdgrwft [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 32256 ; i ++ ) { ketdv24bs5 = ( ( rtB
. elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . ckx15ldawn_cv5hdgrwft [ i ]
!= 0.0 ) ) ; ldbqp1e4fx = ( ( rtB . fls2ushv1r_bhxxfovxdy [ i ] != 0.0 ) && (
rtB . of2o5ejcsl_pbm3vprmfu [ i ] != 0.0 ) ) ; rtB . j0ljlivjih_bjbgfqrolh [
i ] = ketdv24bs5 ^ ldbqp1e4fx ; rtB . fj5oaeqzvd_lxo5edjg3c [ i ] =
ketdv24bs5 ; rtB . kfcjj0zt4l_owjr1h1vqy [ i ] = ldbqp1e4fx ; } { real_T *
pDataValues = ( real_T * ) rtDW . aauzmjdxqq . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . aauzmjdxqq . TimePtr ; int_T currTimeIndex = rtDW .
kmn3pgmyg5 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . aauzmjdxqq .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . kmn3pgmyg5 . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB .
pohwiinx2a_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 32256 ; ++ elIdx ) { ( & rtB . pohwiinx2a_fqdqrf4qbc [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . pohwiinx2a_fqdqrf4qbc [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 32256 ; i ++ ) { bgbp5ghmwo = rtB .
j0ljlivjih_bjbgfqrolh [ i ] ; ew2uib3jt0 = ( ( rtB . pohwiinx2a_fqdqrf4qbc [
i ] != 0.0 ) && ( rtB . dwqidckvui_cl54gopm0x [ i ] != 0.0 ) ) ; j31pip22fu =
bgbp5ghmwo ^ ew2uib3jt0 ; rtB . mdkwyjghw4_nuebgmauvi [ i ] = ( ( rtB .
fwrony54hx_dypejvacrn [ i ] && j31pip22fu ) || ( bgbp5ghmwo && ew2uib3jt0 ) )
; rtB . nywspodlcd_bsqwvugooi [ i ] = j31pip22fu ; rtB .
fj5oaeqzvd_lxo5edjg3c [ i ] = ( rtB . fj5oaeqzvd_lxo5edjg3c [ i ] && rtB .
kfcjj0zt4l_owjr1h1vqy [ i ] ) ; } { real_T * pDataValues = ( real_T * ) rtDW
. dlkjiluyo1 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
dlkjiluyo1 . TimePtr ; int_T currTimeIndex = rtDW . ntgl42hmkr . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . dlkjiluyo1 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ntgl42hmkr . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . me05lckdul_g2mlkqadfk [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . me05lckdul_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . me05lckdul_g2mlkqadfk [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { bgbp5ghmwo = ( ( rtB . elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 )
&& ( rtB . me05lckdul_g2mlkqadfk [ i ] != 0.0 ) ) ; ldbqp1e4fx = ( ( rtB .
fls2ushv1r_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . ckx15ldawn_cv5hdgrwft [ i ]
!= 0.0 ) ) ; e13yfxn2yf = bgbp5ghmwo ^ ldbqp1e4fx ; fzmjd4rrl2 = ( ( rtB .
pohwiinx2a_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . of2o5ejcsl_pbm3vprmfu [ i ]
!= 0.0 ) ) ; d2mz5jrhtr = e13yfxn2yf ^ fzmjd4rrl2 ; rtB .
iq1vhps35r_dapv3jlyq5 [ i ] = rtB . fj5oaeqzvd_lxo5edjg3c [ i ] ^ d2mz5jrhtr
; rtB . j0ljlivjih_bjbgfqrolh [ i ] = bgbp5ghmwo ; rtB .
kfcjj0zt4l_owjr1h1vqy [ i ] = ldbqp1e4fx ; rtB . cfuihetunu_lnjdk5wtww [ i ]
= e13yfxn2yf ; rtB . gxpcvuigpp_hv2ho1zopz [ i ] = fzmjd4rrl2 ; rtB .
eq4o4zndfi_bnlywzniup [ i ] = d2mz5jrhtr ; } { real_T * pDataValues = (
real_T * ) rtDW . gla14t4n1o . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . gla14t4n1o . TimePtr ; int_T currTimeIndex = rtDW . acnbzrcojc .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . gla14t4n1o . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . acnbzrcojc . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . bmzbl5dzop_g1smspu5ke [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . bmzbl5dzop_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . bmzbl5dzop_g1smspu5ke [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { exduqiaqz5 = rtB . iq1vhps35r_dapv3jlyq5 [ i ] ; h1bwtk4dh0
= ( ( rtB . bmzbl5dzop_g1smspu5ke [ i ] != 0.0 ) && ( rtB .
dwqidckvui_cl54gopm0x [ i ] != 0.0 ) ) ; ih4n04c5yx = exduqiaqz5 ^ h1bwtk4dh0
; rtB . g3vgmiycdt_ezqlmfzvpq [ i ] = ( ( rtB . mdkwyjghw4_nuebgmauvi [ i ]
&& ih4n04c5yx ) || ( exduqiaqz5 && h1bwtk4dh0 ) ) ; rtB .
ovapon50jo_bjvjhhzy4i [ i ] = ih4n04c5yx ; rtB . iq1vhps35r_dapv3jlyq5 [ i ]
= ( ( rtB . fj5oaeqzvd_lxo5edjg3c [ i ] && rtB . eq4o4zndfi_bnlywzniup [ i ]
) || ( rtB . cfuihetunu_lnjdk5wtww [ i ] && rtB . gxpcvuigpp_hv2ho1zopz [ i ]
) ) ; rtB . j0ljlivjih_bjbgfqrolh [ i ] = ( rtB . j0ljlivjih_bjbgfqrolh [ i ]
&& rtB . kfcjj0zt4l_owjr1h1vqy [ i ] ) ; } { real_T * pDataValues = ( real_T
* ) rtDW . c3uuk2d4op . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
c3uuk2d4op . TimePtr ; int_T currTimeIndex = rtDW . ot5xfv5sth . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . c3uuk2d4op . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ot5xfv5sth . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . b1skymi2sp_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . b1skymi2sp_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . b1skymi2sp_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { d2mz5jrhtr = ( ( rtB . elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 )
&& ( rtB . b1skymi2sp_merlcviukg [ i ] != 0.0 ) ) ; fzmjd4rrl2 = ( ( rtB .
fls2ushv1r_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . me05lckdul_g2mlkqadfk [ i ]
!= 0.0 ) ) ; e13yfxn2yf = d2mz5jrhtr ^ fzmjd4rrl2 ; ldbqp1e4fx = ( ( rtB .
pohwiinx2a_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . ckx15ldawn_cv5hdgrwft [ i ]
!= 0.0 ) ) ; ketdv24bs5 = e13yfxn2yf ^ ldbqp1e4fx ; anupfjg1uu = rtB .
j0ljlivjih_bjbgfqrolh [ i ] ^ ketdv24bs5 ; p2ij5y4ovl = ( ( rtB .
bmzbl5dzop_g1smspu5ke [ i ] != 0.0 ) && ( rtB . of2o5ejcsl_pbm3vprmfu [ i ]
!= 0.0 ) ) ; pptwhvvehy = anupfjg1uu ^ p2ij5y4ovl ; rtB .
cwyzf4th33_ju13rw2h0m [ i ] = rtB . iq1vhps35r_dapv3jlyq5 [ i ] ^ pptwhvvehy
; rtB . eq4o4zndfi_bnlywzniup [ i ] = d2mz5jrhtr ; rtB .
gxpcvuigpp_hv2ho1zopz [ i ] = fzmjd4rrl2 ; rtB . cfuihetunu_lnjdk5wtww [ i ]
= e13yfxn2yf ; rtB . kfcjj0zt4l_owjr1h1vqy [ i ] = ldbqp1e4fx ; rtB .
fj5oaeqzvd_lxo5edjg3c [ i ] = ketdv24bs5 ; rtB . pztlvcfter_jzx3amusab [ i ]
= anupfjg1uu ; rtB . cvrtnobxce_fdinthrxmb [ i ] = p2ij5y4ovl ; rtB .
fezjads5pr_al00mdgrv4 [ i ] = pptwhvvehy ; } { real_T * pDataValues = (
real_T * ) rtDW . ange1qf3ku . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . ange1qf3ku . TimePtr ; int_T currTimeIndex = rtDW . k4wjhynsm1 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ange1qf3ku . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . k4wjhynsm1 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . l2zoclotwx_nz4o0shxby [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . l2zoclotwx_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . l2zoclotwx_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { ja5gfozxwn = rtB . cwyzf4th33_ju13rw2h0m [ i ] ; ejw2zphiyg
= ( ( rtB . l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && ( rtB .
dwqidckvui_cl54gopm0x [ i ] != 0.0 ) ) ; fehibxhn45 = ja5gfozxwn ^ ejw2zphiyg
; rtB . iszwf3z3th_jz50ptvnrg [ i ] = ( ( rtB . g3vgmiycdt_ezqlmfzvpq [ i ]
&& fehibxhn45 ) || ( ja5gfozxwn && ejw2zphiyg ) ) ; rtB .
fnpd230qbv_o4f35lbcvx [ i ] = fehibxhn45 ; rtB . cwyzf4th33_ju13rw2h0m [ i ]
= ( ( rtB . iq1vhps35r_dapv3jlyq5 [ i ] && rtB . fezjads5pr_al00mdgrv4 [ i ]
) || ( rtB . pztlvcfter_jzx3amusab [ i ] && rtB . cvrtnobxce_fdinthrxmb [ i ]
) ) ; rtB . fezjads5pr_al00mdgrv4 [ i ] = ( ( rtB . j0ljlivjih_bjbgfqrolh [ i
] && rtB . fj5oaeqzvd_lxo5edjg3c [ i ] ) || ( rtB . cfuihetunu_lnjdk5wtww [ i
] && rtB . kfcjj0zt4l_owjr1h1vqy [ i ] ) ) ; rtB . eq4o4zndfi_bnlywzniup [ i
] = ( rtB . eq4o4zndfi_bnlywzniup [ i ] && rtB . gxpcvuigpp_hv2ho1zopz [ i ]
) ; } { real_T * pDataValues = ( real_T * ) rtDW . lzinrftzd0 . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . lzinrftzd0 . TimePtr ; int_T
currTimeIndex = rtDW . b3n5ni3cpl . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . lzinrftzd0 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
b3n5ni3cpl . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++
elIdx ) { ( & rtB . mm1vji4hfw_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . mm1vji4hfw_ppxrqq0gsf [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
mm1vji4hfw_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 32256 ;
i ++ ) { p2ij5y4ovl = ( ( rtB . elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB
. mm1vji4hfw_ppxrqq0gsf [ i ] != 0.0 ) ) ; anupfjg1uu = ( ( rtB .
fls2ushv1r_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . b1skymi2sp_merlcviukg [ i ]
!= 0.0 ) ) ; exduqiaqz5 = p2ij5y4ovl ^ anupfjg1uu ; fzmjd4rrl2 = ( ( rtB .
pohwiinx2a_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . me05lckdul_g2mlkqadfk [ i ]
!= 0.0 ) ) ; e13yfxn2yf = exduqiaqz5 ^ fzmjd4rrl2 ; bgbp5ghmwo = rtB .
eq4o4zndfi_bnlywzniup [ i ] ^ e13yfxn2yf ; ldbqp1e4fx = ( ( rtB .
bmzbl5dzop_g1smspu5ke [ i ] != 0.0 ) && ( rtB . ckx15ldawn_cv5hdgrwft [ i ]
!= 0.0 ) ) ; ketdv24bs5 = bgbp5ghmwo ^ ldbqp1e4fx ; campykoil0 = rtB .
fezjads5pr_al00mdgrv4 [ i ] ^ ketdv24bs5 ; nl4eenjcqc = ( ( rtB .
l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && ( rtB . of2o5ejcsl_pbm3vprmfu [ i ]
!= 0.0 ) ) ; dbeitdgewe = campykoil0 ^ nl4eenjcqc ; rtB .
esfbqyxry2_nvsvtgkap4 [ i ] = rtB . cwyzf4th33_ju13rw2h0m [ i ] ^ dbeitdgewe
; rtB . cvrtnobxce_fdinthrxmb [ i ] = p2ij5y4ovl ; rtB .
pztlvcfter_jzx3amusab [ i ] = anupfjg1uu ; rtB . iq1vhps35r_dapv3jlyq5 [ i ]
= exduqiaqz5 ; rtB . gxpcvuigpp_hv2ho1zopz [ i ] = fzmjd4rrl2 ; rtB .
cfuihetunu_lnjdk5wtww [ i ] = e13yfxn2yf ; rtB . j0ljlivjih_bjbgfqrolh [ i ]
= bgbp5ghmwo ; rtB . kfcjj0zt4l_owjr1h1vqy [ i ] = ldbqp1e4fx ; rtB .
fj5oaeqzvd_lxo5edjg3c [ i ] = ketdv24bs5 ; rtB . lfsmdilohy_nyxm0bsxsn [ i ]
= campykoil0 ; rtB . ikdc5bq52i_icdfyazkhu [ i ] = nl4eenjcqc ; rtB .
a2xtlu3chx_oyypvi4boh [ i ] = dbeitdgewe ; } { real_T * pDataValues = (
real_T * ) rtDW . pvced405zq . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . pvced405zq . TimePtr ; int_T currTimeIndex = rtDW . hwff2qevzk .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . pvced405zq . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hwff2qevzk . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . i44kffcrow_llw0u2ae0v [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . i44kffcrow_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . i44kffcrow_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { nsr4ydnvvc = rtB . esfbqyxry2_nvsvtgkap4 [ i ] ; bavejanqag
= ( ( rtB . i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && ( rtB .
dwqidckvui_cl54gopm0x [ i ] != 0.0 ) ) ; lv44buxncm = nsr4ydnvvc ^ bavejanqag
; rtB . mywg3wje5f_m3yhjduhi1 [ i ] = ( ( rtB . iszwf3z3th_jz50ptvnrg [ i ]
&& lv44buxncm ) || ( nsr4ydnvvc && bavejanqag ) ) ; rtB .
aaoxpt2emy_czkfpwuzm5 [ i ] = lv44buxncm ; rtB . esfbqyxry2_nvsvtgkap4 [ i ]
= ( ( rtB . cwyzf4th33_ju13rw2h0m [ i ] && rtB . a2xtlu3chx_oyypvi4boh [ i ]
) || ( rtB . lfsmdilohy_nyxm0bsxsn [ i ] && rtB . ikdc5bq52i_icdfyazkhu [ i ]
) ) ; rtB . a2xtlu3chx_oyypvi4boh [ i ] = ( ( rtB . fezjads5pr_al00mdgrv4 [ i
] && rtB . fj5oaeqzvd_lxo5edjg3c [ i ] ) || ( rtB . j0ljlivjih_bjbgfqrolh [ i
] && rtB . kfcjj0zt4l_owjr1h1vqy [ i ] ) ) ; rtB . ikdc5bq52i_icdfyazkhu [ i
] = ( ( rtB . eq4o4zndfi_bnlywzniup [ i ] && rtB . cfuihetunu_lnjdk5wtww [ i
] ) || ( rtB . iq1vhps35r_dapv3jlyq5 [ i ] && rtB . gxpcvuigpp_hv2ho1zopz [ i
] ) ) ; rtB . cvrtnobxce_fdinthrxmb [ i ] = ( rtB . cvrtnobxce_fdinthrxmb [ i
] && rtB . pztlvcfter_jzx3amusab [ i ] ) ; } { real_T * pDataValues = (
real_T * ) rtDW . g4udu5uvvb . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . g4udu5uvvb . TimePtr ; int_T currTimeIndex = rtDW . ngarqyvhaz .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . g4udu5uvvb . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ngarqyvhaz . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . nupgifaxvk_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . nupgifaxvk_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . nupgifaxvk_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { campykoil0 = ( ( rtB . elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 )
&& ( rtB . nupgifaxvk_jwzvbuczlb [ i ] != 0.0 ) ) ; ja5gfozxwn = ( ( rtB .
fls2ushv1r_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . mm1vji4hfw_ppxrqq0gsf [ i ]
!= 0.0 ) ) ; pptwhvvehy = campykoil0 ^ ja5gfozxwn ; anupfjg1uu = ( ( rtB .
pohwiinx2a_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . b1skymi2sp_merlcviukg [ i ]
!= 0.0 ) ) ; exduqiaqz5 = pptwhvvehy ^ anupfjg1uu ; d2mz5jrhtr = rtB .
cvrtnobxce_fdinthrxmb [ i ] ^ exduqiaqz5 ; fzmjd4rrl2 = ( ( rtB .
bmzbl5dzop_g1smspu5ke [ i ] != 0.0 ) && ( rtB . me05lckdul_g2mlkqadfk [ i ]
!= 0.0 ) ) ; e13yfxn2yf = d2mz5jrhtr ^ fzmjd4rrl2 ; bgbp5ghmwo = rtB .
ikdc5bq52i_icdfyazkhu [ i ] ^ e13yfxn2yf ; ldbqp1e4fx = ( ( rtB .
l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && ( rtB . ckx15ldawn_cv5hdgrwft [ i ]
!= 0.0 ) ) ; ketdv24bs5 = bgbp5ghmwo ^ ldbqp1e4fx ; eopxuynkdw = rtB .
a2xtlu3chx_oyypvi4boh [ i ] ^ ketdv24bs5 ; ah1tuytwes = ( ( rtB .
i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . of2o5ejcsl_pbm3vprmfu [ i ]
!= 0.0 ) ) ; pnrh3e1gnp = eopxuynkdw ^ ah1tuytwes ; rtB .
k0qqmsn3vm_h522xzlxvt [ i ] = rtB . esfbqyxry2_nvsvtgkap4 [ i ] ^ pnrh3e1gnp
; rtB . lfsmdilohy_nyxm0bsxsn [ i ] = campykoil0 ; rtB .
cwyzf4th33_ju13rw2h0m [ i ] = ja5gfozxwn ; rtB . fezjads5pr_al00mdgrv4 [ i ]
= pptwhvvehy ; rtB . pztlvcfter_jzx3amusab [ i ] = anupfjg1uu ; rtB .
iq1vhps35r_dapv3jlyq5 [ i ] = exduqiaqz5 ; rtB . eq4o4zndfi_bnlywzniup [ i ]
= d2mz5jrhtr ; rtB . gxpcvuigpp_hv2ho1zopz [ i ] = fzmjd4rrl2 ; rtB .
cfuihetunu_lnjdk5wtww [ i ] = e13yfxn2yf ; rtB . j0ljlivjih_bjbgfqrolh [ i ]
= bgbp5ghmwo ; rtB . kfcjj0zt4l_owjr1h1vqy [ i ] = ldbqp1e4fx ; rtB .
fj5oaeqzvd_lxo5edjg3c [ i ] = ketdv24bs5 ; rtB . b1qrewew24_mdoasc5av4 [ i ]
= eopxuynkdw ; rtB . fwqmokhoxn_m3ybdk4ikc [ i ] = ah1tuytwes ; rtB .
hddnttfglr_jacdjrqyev [ i ] = pnrh3e1gnp ; } { real_T * pDataValues = (
real_T * ) rtDW . no1io2ovug . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . no1io2ovug . TimePtr ; int_T currTimeIndex = rtDW . bzjl2bpanr .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . no1io2ovug . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . bzjl2bpanr . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( & rtB . elyq3ovpdi_kkiq3xxxve [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx ) { ( &
rtB . elyq3ovpdi_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 32256 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . elyq3ovpdi_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
32256 ; i ++ ) { djnm0z0vox = rtB . k0qqmsn3vm_h522xzlxvt [ i ] ; bavejanqag
= rtB . mywg3wje5f_m3yhjduhi1 [ i ] ; p5sfuyrcif = ( ( rtB .
elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . dwqidckvui_cl54gopm0x [ i ]
!= 0.0 ) ) ; hh0u1vwf2g = djnm0z0vox ^ p5sfuyrcif ; p5sfuyrcif = ( (
bavejanqag && hh0u1vwf2g ) || ( djnm0z0vox && p5sfuyrcif ) ) ; djnm0z0vox = (
( rtB . esfbqyxry2_nvsvtgkap4 [ i ] && rtB . hddnttfglr_jacdjrqyev [ i ] ) ||
( rtB . b1qrewew24_mdoasc5av4 [ i ] && rtB . fwqmokhoxn_m3ybdk4ikc [ i ] ) )
; pnrh3e1gnp = ( ( rtB . a2xtlu3chx_oyypvi4boh [ i ] && rtB .
fj5oaeqzvd_lxo5edjg3c [ i ] ) || ( rtB . j0ljlivjih_bjbgfqrolh [ i ] && rtB .
kfcjj0zt4l_owjr1h1vqy [ i ] ) ) ; ah1tuytwes = ( ( rtB .
ikdc5bq52i_icdfyazkhu [ i ] && rtB . cfuihetunu_lnjdk5wtww [ i ] ) || ( rtB .
eq4o4zndfi_bnlywzniup [ i ] && rtB . gxpcvuigpp_hv2ho1zopz [ i ] ) ) ;
eopxuynkdw = ( ( rtB . cvrtnobxce_fdinthrxmb [ i ] && rtB .
iq1vhps35r_dapv3jlyq5 [ i ] ) || ( rtB . fezjads5pr_al00mdgrv4 [ i ] && rtB .
pztlvcfter_jzx3amusab [ i ] ) ) ; campykoil0 = ( rtB . lfsmdilohy_nyxm0bsxsn
[ i ] && rtB . cwyzf4th33_ju13rw2h0m [ i ] ) ; nsr4ydnvvc = ( ( rtB .
fls2ushv1r_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . nupgifaxvk_jwzvbuczlb [ i ]
!= 0.0 ) ) ; dbeitdgewe = ( rtP . Constant_Value != 0.0 ) ^ nsr4ydnvvc ;
nl4eenjcqc = ( ( rtB . pohwiinx2a_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB .
mm1vji4hfw_ppxrqq0gsf [ i ] != 0.0 ) ) ; ja5gfozxwn = dbeitdgewe ^ nl4eenjcqc
; pptwhvvehy = campykoil0 ^ ja5gfozxwn ; p2ij5y4ovl = ( ( rtB .
bmzbl5dzop_g1smspu5ke [ i ] != 0.0 ) && ( rtB . b1skymi2sp_merlcviukg [ i ]
!= 0.0 ) ) ; anupfjg1uu = pptwhvvehy ^ p2ij5y4ovl ; exduqiaqz5 = eopxuynkdw ^
anupfjg1uu ; d2mz5jrhtr = ( ( rtB . l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && (
rtB . me05lckdul_g2mlkqadfk [ i ] != 0.0 ) ) ; fzmjd4rrl2 = exduqiaqz5 ^
d2mz5jrhtr ; e13yfxn2yf = ah1tuytwes ^ fzmjd4rrl2 ; bgbp5ghmwo = ( ( rtB .
i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . ckx15ldawn_cv5hdgrwft [ i ]
!= 0.0 ) ) ; ldbqp1e4fx = e13yfxn2yf ^ bgbp5ghmwo ; ketdv24bs5 = pnrh3e1gnp ^
ldbqp1e4fx ; gl2obt5k0r = ( ( rtB . elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . of2o5ejcsl_pbm3vprmfu [ i ] != 0.0 ) ) ; f2w45r2bby = ketdv24bs5 ^
gl2obt5k0r ; c1ptn0ync0 = djnm0z0vox ^ f2w45r2bby ; jutuqdtawd = c1ptn0ync0 ^
rtB . ns4p5qffbs [ i ] ; hrkxcvh2gz = p5sfuyrcif ^ jutuqdtawd ; n3qvrl4x03 =
( rtB . hldnf33ttj_dhmrxtyqop [ i ] && rtB . ctjzv3tsia_guugdwf2m3 [ i ] ) ;
dnfbn0xbwo = rtB . cw4f3mrdnq_ldqodwenvz [ i ] ^ rtB . i2uql2cb34_dhamdvybc1
[ i ] ; jvr1pqy4wo = ( ( rtB . pohwiinx2a_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB
. eket2vquys_cxarnvbvui [ i ] != 0.0 ) ) ; og10t2adss = dnfbn0xbwo ^
jvr1pqy4wo ; jvr1pqy4wo = ( ( n3qvrl4x03 && og10t2adss ) || ( dnfbn0xbwo &&
jvr1pqy4wo ) ) ; bu0j1o554q = rtB . fwrony54hx_dypejvacrn [ i ] ^ rtB .
nywspodlcd_bsqwvugooi [ i ] ; j31pip22fu = ( ( rtB . bmzbl5dzop_g1smspu5ke [
i ] != 0.0 ) && ( rtB . eket2vquys_cxarnvbvui [ i ] != 0.0 ) ) ; dnfbn0xbwo =
bu0j1o554q ^ j31pip22fu ; j31pip22fu = ( ( jvr1pqy4wo && dnfbn0xbwo ) || (
bu0j1o554q && j31pip22fu ) ) ; ew2uib3jt0 = rtB . mdkwyjghw4_nuebgmauvi [ i ]
^ rtB . ovapon50jo_bjvjhhzy4i [ i ] ; ih4n04c5yx = ( ( rtB .
l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && ( rtB . eket2vquys_cxarnvbvui [ i ]
!= 0.0 ) ) ; bu0j1o554q = ew2uib3jt0 ^ ih4n04c5yx ; ih4n04c5yx = ( (
j31pip22fu && bu0j1o554q ) || ( ew2uib3jt0 && ih4n04c5yx ) ) ; h1bwtk4dh0 =
rtB . g3vgmiycdt_ezqlmfzvpq [ i ] ^ rtB . fnpd230qbv_o4f35lbcvx [ i ] ;
fehibxhn45 = ( ( rtB . i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && ( rtB .
eket2vquys_cxarnvbvui [ i ] != 0.0 ) ) ; ew2uib3jt0 = h1bwtk4dh0 ^ fehibxhn45
; fehibxhn45 = ( ( ih4n04c5yx && ew2uib3jt0 ) || ( h1bwtk4dh0 && fehibxhn45 )
) ; ejw2zphiyg = rtB . iszwf3z3th_jz50ptvnrg [ i ] ^ rtB .
aaoxpt2emy_czkfpwuzm5 [ i ] ; lv44buxncm = ( ( rtB . elyq3ovpdi_kkiq3xxxve [
i ] != 0.0 ) && ( rtB . eket2vquys_cxarnvbvui [ i ] != 0.0 ) ) ; h1bwtk4dh0 =
ejw2zphiyg ^ lv44buxncm ; lv44buxncm = ( ( fehibxhn45 && h1bwtk4dh0 ) || (
ejw2zphiyg && lv44buxncm ) ) ; bavejanqag = bavejanqag ^ hh0u1vwf2g ;
hh0u1vwf2g = ( ( rtB . mq50jvptur_mbvzarwird [ i ] != 0.0 ) && ( rtB .
eket2vquys_cxarnvbvui [ i ] != 0.0 ) ) ; ejw2zphiyg = bavejanqag ^ hh0u1vwf2g
; hh0u1vwf2g = ( ( lv44buxncm && ejw2zphiyg ) || ( bavejanqag && hh0u1vwf2g )
) ; bavejanqag = hrkxcvh2gz ^ hh0u1vwf2g ; hrkxcvh2gz = ( ( ( rtP .
Constant1_Value != 0.0 ) && bavejanqag ) || ( hrkxcvh2gz && hh0u1vwf2g ) ) ;
f2w45r2bby = ( ( djnm0z0vox && f2w45r2bby ) || ( ketdv24bs5 && gl2obt5k0r ) )
; gl2obt5k0r = ( ( pnrh3e1gnp && ldbqp1e4fx ) || ( e13yfxn2yf && bgbp5ghmwo )
) ; hh0u1vwf2g = ( ( ah1tuytwes && fzmjd4rrl2 ) || ( exduqiaqz5 && d2mz5jrhtr
) ) ; djnm0z0vox = ( ( eopxuynkdw && anupfjg1uu ) || ( pptwhvvehy &&
p2ij5y4ovl ) ) ; pnrh3e1gnp = ( ( campykoil0 && ja5gfozxwn ) || ( dbeitdgewe
&& nl4eenjcqc ) ) ; ah1tuytwes = ( ( rtB . pohwiinx2a_fqdqrf4qbc [ i ] != 0.0
) && ( rtB . nupgifaxvk_jwzvbuczlb [ i ] != 0.0 ) ) ; eopxuynkdw = (
nsr4ydnvvc && ( rtP . Constant_Value != 0.0 ) ) ; nsr4ydnvvc = ah1tuytwes ^
eopxuynkdw ; dbeitdgewe = ( ( rtB . bmzbl5dzop_g1smspu5ke [ i ] != 0.0 ) && (
rtB . mm1vji4hfw_ppxrqq0gsf [ i ] != 0.0 ) ) ; nl4eenjcqc = nsr4ydnvvc ^
dbeitdgewe ; campykoil0 = pnrh3e1gnp ^ nl4eenjcqc ; ja5gfozxwn = ( ( rtB .
l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && ( rtB . b1skymi2sp_merlcviukg [ i ]
!= 0.0 ) ) ; pptwhvvehy = campykoil0 ^ ja5gfozxwn ; p2ij5y4ovl = djnm0z0vox ^
pptwhvvehy ; anupfjg1uu = ( ( rtB . i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && (
rtB . me05lckdul_g2mlkqadfk [ i ] != 0.0 ) ) ; exduqiaqz5 = p2ij5y4ovl ^
anupfjg1uu ; d2mz5jrhtr = hh0u1vwf2g ^ exduqiaqz5 ; fzmjd4rrl2 = ( ( rtB .
elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . ckx15ldawn_cv5hdgrwft [ i ]
!= 0.0 ) ) ; e13yfxn2yf = d2mz5jrhtr ^ fzmjd4rrl2 ; bgbp5ghmwo = gl2obt5k0r ^
e13yfxn2yf ; ldbqp1e4fx = ( ( rtB . mq50jvptur_mbvzarwird [ i ] != 0.0 ) && (
rtB . of2o5ejcsl_pbm3vprmfu [ i ] != 0.0 ) ) ; ketdv24bs5 = bgbp5ghmwo ^
ldbqp1e4fx ; hetgucpepc = f2w45r2bby ^ ketdv24bs5 ; jutuqdtawd = ( (
p5sfuyrcif && jutuqdtawd ) || ( c1ptn0ync0 && rtB . ns4p5qffbs [ i ] ) ) ;
c1ptn0ync0 = hetgucpepc ^ jutuqdtawd ; hetgucpepc = ( ( hrkxcvh2gz &&
c1ptn0ync0 ) || ( hetgucpepc && jutuqdtawd ) ) ; jutuqdtawd = ( ( gl2obt5k0r
&& e13yfxn2yf ) || ( d2mz5jrhtr && fzmjd4rrl2 ) ) ; gl2obt5k0r = ( (
hh0u1vwf2g && exduqiaqz5 ) || ( p2ij5y4ovl && anupfjg1uu ) ) ; hh0u1vwf2g = (
( djnm0z0vox && pptwhvvehy ) || ( campykoil0 && ja5gfozxwn ) ) ; p5sfuyrcif =
( ( pnrh3e1gnp && nl4eenjcqc ) || ( nsr4ydnvvc && dbeitdgewe ) ) ; djnm0z0vox
= ( ( rtB . bmzbl5dzop_g1smspu5ke [ i ] != 0.0 ) && ( rtB .
nupgifaxvk_jwzvbuczlb [ i ] != 0.0 ) ) ; ah1tuytwes = ( ah1tuytwes &&
eopxuynkdw ) ; pnrh3e1gnp = djnm0z0vox ^ ah1tuytwes ; eopxuynkdw = ( ( rtB .
l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && ( rtB . mm1vji4hfw_ppxrqq0gsf [ i ]
!= 0.0 ) ) ; nsr4ydnvvc = pnrh3e1gnp ^ eopxuynkdw ; dbeitdgewe = p5sfuyrcif ^
nsr4ydnvvc ; nl4eenjcqc = ( ( rtB . i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && (
rtB . b1skymi2sp_merlcviukg [ i ] != 0.0 ) ) ; campykoil0 = dbeitdgewe ^
nl4eenjcqc ; ja5gfozxwn = hh0u1vwf2g ^ campykoil0 ; pptwhvvehy = ( ( rtB .
elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . me05lckdul_g2mlkqadfk [ i ]
!= 0.0 ) ) ; p2ij5y4ovl = ja5gfozxwn ^ pptwhvvehy ; anupfjg1uu = gl2obt5k0r ^
p2ij5y4ovl ; exduqiaqz5 = ( ( rtB . mq50jvptur_mbvzarwird [ i ] != 0.0 ) && (
rtB . ckx15ldawn_cv5hdgrwft [ i ] != 0.0 ) ) ; d2mz5jrhtr = anupfjg1uu ^
exduqiaqz5 ; fzmjd4rrl2 = jutuqdtawd ^ d2mz5jrhtr ; f2w45r2bby = ( (
f2w45r2bby && ketdv24bs5 ) || ( bgbp5ghmwo && ldbqp1e4fx ) ) ; e13yfxn2yf =
fzmjd4rrl2 ^ f2w45r2bby ; rtB . a1kxek0qf0 [ i ] = hetgucpepc ^ e13yfxn2yf ;
rtB . aobmzp0243_c0dok3111h [ i ] = p5sfuyrcif ; rtB . eoh5h30i3q_ctvw0tpkon
[ i ] = hh0u1vwf2g ; rtB . oyb4bibsjg_pxqvlbal2i [ i ] = gl2obt5k0r ; rtB .
p5ni3b50ny_p5h3gwuwqg [ i ] = f2w45r2bby ; rtB . elioxtdq1r_afnsueciae [ i ]
= c1ptn0ync0 ; rtB . fc4jnjbjtq_evg4t2fsev [ i ] = jutuqdtawd ; rtB .
hankpcor1h_ax3wx1gs5w [ i ] = hrkxcvh2gz ; rtB . mzpsbegwow_as0qznsxlv [ i ]
= hetgucpepc ; rtB . mywg3wje5f_m3yhjduhi1 [ i ] = bavejanqag ; rtB .
k0qqmsn3vm_h522xzlxvt [ i ] = djnm0z0vox ; rtB . esfbqyxry2_nvsvtgkap4 [ i ]
= nsr4ydnvvc ; rtB . hddnttfglr_jacdjrqyev [ i ] = pnrh3e1gnp ; rtB .
b1qrewew24_mdoasc5av4 [ i ] = eopxuynkdw ; rtB . fwqmokhoxn_m3ybdk4ikc [ i ]
= ah1tuytwes ; rtB . a2xtlu3chx_oyypvi4boh [ i ] = dbeitdgewe ; rtB .
fj5oaeqzvd_lxo5edjg3c [ i ] = ketdv24bs5 ; rtB . j0ljlivjih_bjbgfqrolh [ i ]
= bgbp5ghmwo ; rtB . kfcjj0zt4l_owjr1h1vqy [ i ] = ldbqp1e4fx ; rtB .
ikdc5bq52i_icdfyazkhu [ i ] = nl4eenjcqc ; rtB . cfuihetunu_lnjdk5wtww [ i ]
= e13yfxn2yf ; rtB . eq4o4zndfi_bnlywzniup [ i ] = d2mz5jrhtr ; rtB .
gxpcvuigpp_hv2ho1zopz [ i ] = fzmjd4rrl2 ; rtB . cvrtnobxce_fdinthrxmb [ i ]
= p2ij5y4ovl ; rtB . iq1vhps35r_dapv3jlyq5 [ i ] = exduqiaqz5 ; rtB .
fezjads5pr_al00mdgrv4 [ i ] = pptwhvvehy ; rtB . pztlvcfter_jzx3amusab [ i ]
= anupfjg1uu ; rtB . lfsmdilohy_nyxm0bsxsn [ i ] = campykoil0 ; rtB .
cwyzf4th33_ju13rw2h0m [ i ] = ja5gfozxwn ; rtB . hldnf33ttj_dhmrxtyqop [ i ]
= n3qvrl4x03 ; rtB . ctjzv3tsia_guugdwf2m3 [ i ] = og10t2adss ; rtB .
cw4f3mrdnq_ldqodwenvz [ i ] = dnfbn0xbwo ; rtB . i2uql2cb34_dhamdvybc1 [ i ]
= jvr1pqy4wo ; rtB . fwrony54hx_dypejvacrn [ i ] = bu0j1o554q ; rtB .
nywspodlcd_bsqwvugooi [ i ] = j31pip22fu ; rtB . mdkwyjghw4_nuebgmauvi [ i ]
= ew2uib3jt0 ; rtB . ovapon50jo_bjvjhhzy4i [ i ] = ih4n04c5yx ; rtB .
g3vgmiycdt_ezqlmfzvpq [ i ] = h1bwtk4dh0 ; rtB . fnpd230qbv_o4f35lbcvx [ i ]
= fehibxhn45 ; rtB . iszwf3z3th_jz50ptvnrg [ i ] = ejw2zphiyg ; rtB .
aaoxpt2emy_czkfpwuzm5 [ i ] = lv44buxncm ; } if ( ssGetLogOutput ( rtS ) ) {
{ double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . pzqes4pt3b . LoggedData ) , & rtB . a1kxek0qf0 [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { hetgucpepc = ( ( rtB .
mzpsbegwow_as0qznsxlv [ i ] && rtB . cfuihetunu_lnjdk5wtww [ i ] ) || ( rtB .
gxpcvuigpp_hv2ho1zopz [ i ] && rtB . p5ni3b50ny_p5h3gwuwqg [ i ] ) ) ;
f2w45r2bby = ( ( rtB . oyb4bibsjg_pxqvlbal2i [ i ] && rtB .
cvrtnobxce_fdinthrxmb [ i ] ) || ( rtB . cwyzf4th33_ju13rw2h0m [ i ] && rtB .
fezjads5pr_al00mdgrv4 [ i ] ) ) ; gl2obt5k0r = ( ( rtB .
eoh5h30i3q_ctvw0tpkon [ i ] && rtB . lfsmdilohy_nyxm0bsxsn [ i ] ) || ( rtB .
a2xtlu3chx_oyypvi4boh [ i ] && rtB . ikdc5bq52i_icdfyazkhu [ i ] ) ) ;
hh0u1vwf2g = ( ( rtB . aobmzp0243_c0dok3111h [ i ] && rtB .
esfbqyxry2_nvsvtgkap4 [ i ] ) || ( rtB . hddnttfglr_jacdjrqyev [ i ] && rtB .
b1qrewew24_mdoasc5av4 [ i ] ) ) ; p5sfuyrcif = ( ( rtB .
l2zoclotwx_nz4o0shxby [ i ] != 0.0 ) && ( rtB . nupgifaxvk_jwzvbuczlb [ i ]
!= 0.0 ) ) ; djnm0z0vox = ( rtB . k0qqmsn3vm_h522xzlxvt [ i ] && rtB .
fwqmokhoxn_m3ybdk4ikc [ i ] ) ; pnrh3e1gnp = p5sfuyrcif ^ djnm0z0vox ;
ah1tuytwes = ( ( rtB . i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && ( rtB .
mm1vji4hfw_ppxrqq0gsf [ i ] != 0.0 ) ) ; eopxuynkdw = pnrh3e1gnp ^ ah1tuytwes
; nsr4ydnvvc = hh0u1vwf2g ^ eopxuynkdw ; dbeitdgewe = ( ( rtB .
elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . b1skymi2sp_merlcviukg [ i ]
!= 0.0 ) ) ; nl4eenjcqc = nsr4ydnvvc ^ dbeitdgewe ; campykoil0 = gl2obt5k0r ^
nl4eenjcqc ; ja5gfozxwn = ( ( rtB . mq50jvptur_mbvzarwird [ i ] != 0.0 ) && (
rtB . me05lckdul_g2mlkqadfk [ i ] != 0.0 ) ) ; pptwhvvehy = campykoil0 ^
ja5gfozxwn ; p2ij5y4ovl = f2w45r2bby ^ pptwhvvehy ; jutuqdtawd = ( ( rtB .
fc4jnjbjtq_evg4t2fsev [ i ] && rtB . eq4o4zndfi_bnlywzniup [ i ] ) || ( rtB .
pztlvcfter_jzx3amusab [ i ] && rtB . iq1vhps35r_dapv3jlyq5 [ i ] ) ) ;
anupfjg1uu = p2ij5y4ovl ^ jutuqdtawd ; rtB . pzuiisq4h5 [ i ] = hetgucpepc ^
anupfjg1uu ; rtB . mzpsbegwow_as0qznsxlv [ i ] = hetgucpepc ; rtB .
p5ni3b50ny_p5h3gwuwqg [ i ] = f2w45r2bby ; rtB . oyb4bibsjg_pxqvlbal2i [ i ]
= gl2obt5k0r ; rtB . cvrtnobxce_fdinthrxmb [ i ] = p2ij5y4ovl ; rtB .
cwyzf4th33_ju13rw2h0m [ i ] = ja5gfozxwn ; rtB . fezjads5pr_al00mdgrv4 [ i ]
= pptwhvvehy ; rtB . eoh5h30i3q_ctvw0tpkon [ i ] = hh0u1vwf2g ; rtB .
lfsmdilohy_nyxm0bsxsn [ i ] = campykoil0 ; rtB . a2xtlu3chx_oyypvi4boh [ i ]
= dbeitdgewe ; rtB . ikdc5bq52i_icdfyazkhu [ i ] = nl4eenjcqc ; rtB .
aobmzp0243_c0dok3111h [ i ] = p5sfuyrcif ; rtB . esfbqyxry2_nvsvtgkap4 [ i ]
= nsr4ydnvvc ; rtB . hddnttfglr_jacdjrqyev [ i ] = pnrh3e1gnp ; rtB .
b1qrewew24_mdoasc5av4 [ i ] = eopxuynkdw ; rtB . k0qqmsn3vm_h522xzlxvt [ i ]
= djnm0z0vox ; rtB . fwqmokhoxn_m3ybdk4ikc [ i ] = ah1tuytwes ; rtB .
fc4jnjbjtq_evg4t2fsev [ i ] = jutuqdtawd ; rtB . pztlvcfter_jzx3amusab [ i ]
= anupfjg1uu ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . az5i4ez2mn
. LoggedData ) , & rtB . pzuiisq4h5 [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
32256 ; i ++ ) { hetgucpepc = ( ( rtB . mzpsbegwow_as0qznsxlv [ i ] && rtB .
pztlvcfter_jzx3amusab [ i ] ) || ( rtB . cvrtnobxce_fdinthrxmb [ i ] && rtB .
fc4jnjbjtq_evg4t2fsev [ i ] ) ) ; jutuqdtawd = ( ( rtB .
oyb4bibsjg_pxqvlbal2i [ i ] && rtB . ikdc5bq52i_icdfyazkhu [ i ] ) || ( rtB .
esfbqyxry2_nvsvtgkap4 [ i ] && rtB . a2xtlu3chx_oyypvi4boh [ i ] ) ) ;
gl2obt5k0r = ( ( rtB . eoh5h30i3q_ctvw0tpkon [ i ] && rtB .
b1qrewew24_mdoasc5av4 [ i ] ) || ( rtB . hddnttfglr_jacdjrqyev [ i ] && rtB .
fwqmokhoxn_m3ybdk4ikc [ i ] ) ) ; hh0u1vwf2g = ( ( rtB .
i44kffcrow_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . nupgifaxvk_jwzvbuczlb [ i ]
!= 0.0 ) ) ; p5sfuyrcif = ( rtB . aobmzp0243_c0dok3111h [ i ] && rtB .
k0qqmsn3vm_h522xzlxvt [ i ] ) ; djnm0z0vox = hh0u1vwf2g ^ p5sfuyrcif ;
pnrh3e1gnp = ( ( rtB . elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
mm1vji4hfw_ppxrqq0gsf [ i ] != 0.0 ) ) ; ah1tuytwes = djnm0z0vox ^ pnrh3e1gnp
; eopxuynkdw = gl2obt5k0r ^ ah1tuytwes ; nsr4ydnvvc = ( ( rtB .
mq50jvptur_mbvzarwird [ i ] != 0.0 ) && ( rtB . b1skymi2sp_merlcviukg [ i ]
!= 0.0 ) ) ; dbeitdgewe = eopxuynkdw ^ nsr4ydnvvc ; nl4eenjcqc = jutuqdtawd ^
dbeitdgewe ; f2w45r2bby = ( ( rtB . p5ni3b50ny_p5h3gwuwqg [ i ] && rtB .
fezjads5pr_al00mdgrv4 [ i ] ) || ( rtB . lfsmdilohy_nyxm0bsxsn [ i ] && rtB .
cwyzf4th33_ju13rw2h0m [ i ] ) ) ; campykoil0 = nl4eenjcqc ^ f2w45r2bby ; rtB
. h3x1apuddp [ i ] = hetgucpepc ^ campykoil0 ; rtB . mzpsbegwow_as0qznsxlv [
i ] = hetgucpepc ; rtB . fc4jnjbjtq_evg4t2fsev [ i ] = jutuqdtawd ; rtB .
oyb4bibsjg_pxqvlbal2i [ i ] = gl2obt5k0r ; rtB . ikdc5bq52i_icdfyazkhu [ i ]
= nl4eenjcqc ; rtB . esfbqyxry2_nvsvtgkap4 [ i ] = nsr4ydnvvc ; rtB .
a2xtlu3chx_oyypvi4boh [ i ] = dbeitdgewe ; rtB . eoh5h30i3q_ctvw0tpkon [ i ]
= hh0u1vwf2g ; rtB . b1qrewew24_mdoasc5av4 [ i ] = eopxuynkdw ; rtB .
hddnttfglr_jacdjrqyev [ i ] = pnrh3e1gnp ; rtB . fwqmokhoxn_m3ybdk4ikc [ i ]
= ah1tuytwes ; rtB . aobmzp0243_c0dok3111h [ i ] = p5sfuyrcif ; rtB .
k0qqmsn3vm_h522xzlxvt [ i ] = djnm0z0vox ; rtB . p5ni3b50ny_p5h3gwuwqg [ i ]
= f2w45r2bby ; rtB . lfsmdilohy_nyxm0bsxsn [ i ] = campykoil0 ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . cnii2el242 . LoggedData ) , & rtB . h3x1apuddp [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { hetgucpepc = ( ( rtB .
mzpsbegwow_as0qznsxlv [ i ] && rtB . lfsmdilohy_nyxm0bsxsn [ i ] ) || ( rtB .
ikdc5bq52i_icdfyazkhu [ i ] && rtB . p5ni3b50ny_p5h3gwuwqg [ i ] ) ) ;
f2w45r2bby = ( ( rtB . oyb4bibsjg_pxqvlbal2i [ i ] && rtB .
fwqmokhoxn_m3ybdk4ikc [ i ] ) || ( rtB . k0qqmsn3vm_h522xzlxvt [ i ] && rtB .
hddnttfglr_jacdjrqyev [ i ] ) ) ; gl2obt5k0r = ( ( rtB .
elyq3ovpdi_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . nupgifaxvk_jwzvbuczlb [ i ]
!= 0.0 ) ) ; hh0u1vwf2g = ( rtB . eoh5h30i3q_ctvw0tpkon [ i ] && rtB .
aobmzp0243_c0dok3111h [ i ] ) ; p5sfuyrcif = gl2obt5k0r ^ hh0u1vwf2g ;
djnm0z0vox = ( ( rtB . mq50jvptur_mbvzarwird [ i ] != 0.0 ) && ( rtB .
mm1vji4hfw_ppxrqq0gsf [ i ] != 0.0 ) ) ; pnrh3e1gnp = p5sfuyrcif ^ djnm0z0vox
; ah1tuytwes = f2w45r2bby ^ pnrh3e1gnp ; jutuqdtawd = ( ( rtB .
fc4jnjbjtq_evg4t2fsev [ i ] && rtB . a2xtlu3chx_oyypvi4boh [ i ] ) || ( rtB .
b1qrewew24_mdoasc5av4 [ i ] && rtB . esfbqyxry2_nvsvtgkap4 [ i ] ) ) ;
eopxuynkdw = ah1tuytwes ^ jutuqdtawd ; rtB . k0ww0ahqju [ i ] = hetgucpepc ^
eopxuynkdw ; rtB . mzpsbegwow_as0qznsxlv [ i ] = hetgucpepc ; rtB .
p5ni3b50ny_p5h3gwuwqg [ i ] = f2w45r2bby ; rtB . oyb4bibsjg_pxqvlbal2i [ i ]
= gl2obt5k0r ; rtB . fwqmokhoxn_m3ybdk4ikc [ i ] = ah1tuytwes ; rtB .
k0qqmsn3vm_h522xzlxvt [ i ] = djnm0z0vox ; rtB . hddnttfglr_jacdjrqyev [ i ]
= pnrh3e1gnp ; rtB . eoh5h30i3q_ctvw0tpkon [ i ] = hh0u1vwf2g ; rtB .
aobmzp0243_c0dok3111h [ i ] = p5sfuyrcif ; rtB . fc4jnjbjtq_evg4t2fsev [ i ]
= jutuqdtawd ; rtB . b1qrewew24_mdoasc5av4 [ i ] = eopxuynkdw ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . fsbz2syvej . LoggedData ) , & rtB . k0ww0ahqju [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { hetgucpepc = ( ( rtB .
mzpsbegwow_as0qznsxlv [ i ] && rtB . b1qrewew24_mdoasc5av4 [ i ] ) || ( rtB .
fwqmokhoxn_m3ybdk4ikc [ i ] && rtB . fc4jnjbjtq_evg4t2fsev [ i ] ) ) ;
jutuqdtawd = ( ( rtB . mq50jvptur_mbvzarwird [ i ] != 0.0 ) && ( rtB .
nupgifaxvk_jwzvbuczlb [ i ] != 0.0 ) ) ; gl2obt5k0r = ( rtB .
oyb4bibsjg_pxqvlbal2i [ i ] && rtB . eoh5h30i3q_ctvw0tpkon [ i ] ) ;
hh0u1vwf2g = jutuqdtawd ^ gl2obt5k0r ; f2w45r2bby = ( ( rtB .
p5ni3b50ny_p5h3gwuwqg [ i ] && rtB . hddnttfglr_jacdjrqyev [ i ] ) || ( rtB .
aobmzp0243_c0dok3111h [ i ] && rtB . k0qqmsn3vm_h522xzlxvt [ i ] ) ) ;
p5sfuyrcif = hh0u1vwf2g ^ f2w45r2bby ; rtB . lbojjlhp3e [ i ] = hetgucpepc ^
p5sfuyrcif ; rtB . mzpsbegwow_as0qznsxlv [ i ] = hetgucpepc ; rtB .
fc4jnjbjtq_evg4t2fsev [ i ] = jutuqdtawd ; rtB . oyb4bibsjg_pxqvlbal2i [ i ]
= gl2obt5k0r ; rtB . eoh5h30i3q_ctvw0tpkon [ i ] = hh0u1vwf2g ; rtB .
p5ni3b50ny_p5h3gwuwqg [ i ] = f2w45r2bby ; rtB . aobmzp0243_c0dok3111h [ i ]
= p5sfuyrcif ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ltksrcauy3
. LoggedData ) , & rtB . lbojjlhp3e [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
32256 ; i ++ ) { rtB . cf1q1sywfs [ i ] = ( ( rtB . fc4jnjbjtq_evg4t2fsev [ i
] && rtB . oyb4bibsjg_pxqvlbal2i [ i ] ) || ( ( rtB . mzpsbegwow_as0qznsxlv [
i ] && rtB . aobmzp0243_c0dok3111h [ i ] ) || ( rtB . eoh5h30i3q_ctvw0tpkon [
i ] && rtB . p5ni3b50ny_p5h3gwuwqg [ i ] ) ) ) ; } if ( ssGetLogOutput ( rtS
) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . giqqxavhg0 . LoggedData ) , & rtB . cf1q1sywfs [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . ganzexiptk [ i ] = rtB .
hldnf33ttj_dhmrxtyqop [ i ] ^ rtB . ctjzv3tsia_guugdwf2m3 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . hpf4srv5wy . LoggedData ) , & rtB . ganzexiptk [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . gwaczjbsbb [ i ] = rtB .
i2uql2cb34_dhamdvybc1 [ i ] ^ rtB . cw4f3mrdnq_ldqodwenvz [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . psnduconoe . LoggedData ) , & rtB . gwaczjbsbb [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . dwosdq14jq [ i ] = rtB .
nywspodlcd_bsqwvugooi [ i ] ^ rtB . fwrony54hx_dypejvacrn [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . iqm3yzt00e . LoggedData ) , & rtB . dwosdq14jq [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . mthgiu4zzb [ i ] = rtB .
ovapon50jo_bjvjhhzy4i [ i ] ^ rtB . mdkwyjghw4_nuebgmauvi [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . deeahv0ozb . LoggedData ) , & rtB . mthgiu4zzb [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . b03wo0vlnc [ i ] = rtB .
fnpd230qbv_o4f35lbcvx [ i ] ^ rtB . g3vgmiycdt_ezqlmfzvpq [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . hnunn5lfsf . LoggedData ) , & rtB . b03wo0vlnc [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . jro0v4a1vj [ i ] = rtB .
aaoxpt2emy_czkfpwuzm5 [ i ] ^ rtB . iszwf3z3th_jz50ptvnrg [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . c2ng0zd0ro . LoggedData ) , & rtB . jro0v4a1vj [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . nogjdhu301 [ i ] = ( rtP .
Constant1_Value != 0.0 ) ^ rtB . mywg3wje5f_m3yhjduhi1 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . a1e2wlem3f . LoggedData ) , & rtB . nogjdhu301 [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 32256 ; i ++ ) { rtB . kyixvogo0m [ i ] = rtB .
hankpcor1h_ax3wx1gs5w [ i ] ^ rtB . elioxtdq1r_afnsueciae [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . m1l3bctojx . LoggedData ) , & rtB . kyixvogo0m [ 0 ] , 0
) ; } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER
( tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlTerminate ( void ) { rt_FREE ( rtDW . fh1xf5ew32 . RSimInfoPtr ) ;
rt_FREE ( rtDW . m4rjf4ewan . RSimInfoPtr ) ; rt_FREE ( rtDW . lixywmk45f .
RSimInfoPtr ) ; rt_FREE ( rtDW . njqi5gn3wz . RSimInfoPtr ) ; rt_FREE ( rtDW
. eqxemamok3 . RSimInfoPtr ) ; rt_FREE ( rtDW . c3ark0gajy . RSimInfoPtr ) ;
rt_FREE ( rtDW . kymi3cbjki . RSimInfoPtr ) ; rt_FREE ( rtDW . aauzmjdxqq .
RSimInfoPtr ) ; rt_FREE ( rtDW . dlkjiluyo1 . RSimInfoPtr ) ; rt_FREE ( rtDW
. gla14t4n1o . RSimInfoPtr ) ; rt_FREE ( rtDW . c3uuk2d4op . RSimInfoPtr ) ;
rt_FREE ( rtDW . ange1qf3ku . RSimInfoPtr ) ; rt_FREE ( rtDW . lzinrftzd0 .
RSimInfoPtr ) ; rt_FREE ( rtDW . pvced405zq . RSimInfoPtr ) ; rt_FREE ( rtDW
. g4udu5uvvb . RSimInfoPtr ) ; rt_FREE ( rtDW . no1io2ovug . RSimInfoPtr ) ;
{ if ( rtDW . koh20ckr1d . AQHandles ) { sdiTerminateStreaming ( & rtDW .
koh20ckr1d . AQHandles ) ; } } } static void
mr_Approx_Multiplier_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_Approx_Multiplier_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_Approx_Multiplier_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Approx_Multiplier_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Approx_Multiplier_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_Approx_Multiplier_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Approx_Multiplier_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Approx_Multiplier_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_Approx_Multiplier_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_Approx_Multiplier_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Approx_Multiplier_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void
mr_Approx_Multiplier_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Approx_Multiplier_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_Approx_Multiplier_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Approx_Multiplier_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_Approx_Multiplier_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Approx_Multiplier_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
rtB ) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 16 ] =
{ "rtDW.ntvaixwdrn" , "rtDW.fzbhpbbfed" , "rtDW.hk2jnl5nld" ,
"rtDW.pqg4hz3zh4" , "rtDW.latid21dux" , "rtDW.gn31hrfwar" , "rtDW.hmq1mmtxes"
, "rtDW.kmn3pgmyg5" , "rtDW.ntgl42hmkr" , "rtDW.acnbzrcojc" ,
"rtDW.ot5xfv5sth" , "rtDW.k4wjhynsm1" , "rtDW.b3n5ni3cpl" , "rtDW.hwff2qevzk"
, "rtDW.ngarqyvhaz" , "rtDW.bzjl2bpanr" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 16 , rtdwDataFieldNames ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * )
& ( rtDW . ntvaixwdrn ) , sizeof ( rtDW . ntvaixwdrn ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * )
& ( rtDW . fzbhpbbfed ) , sizeof ( rtDW . fzbhpbbfed ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( rtDW . hk2jnl5nld ) , sizeof ( rtDW . hk2jnl5nld ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * )
& ( rtDW . pqg4hz3zh4 ) , sizeof ( rtDW . pqg4hz3zh4 ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * )
& ( rtDW . latid21dux ) , sizeof ( rtDW . latid21dux ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * )
& ( rtDW . gn31hrfwar ) , sizeof ( rtDW . gn31hrfwar ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( rtDW . hmq1mmtxes ) , sizeof ( rtDW . hmq1mmtxes ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * )
& ( rtDW . kmn3pgmyg5 ) , sizeof ( rtDW . kmn3pgmyg5 ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * )
& ( rtDW . ntgl42hmkr ) , sizeof ( rtDW . ntgl42hmkr ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * )
& ( rtDW . acnbzrcojc ) , sizeof ( rtDW . acnbzrcojc ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void *
) & ( rtDW . ot5xfv5sth ) , sizeof ( rtDW . ot5xfv5sth ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void *
) & ( rtDW . k4wjhynsm1 ) , sizeof ( rtDW . k4wjhynsm1 ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void *
) & ( rtDW . b3n5ni3cpl ) , sizeof ( rtDW . b3n5ni3cpl ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void *
) & ( rtDW . hwff2qevzk ) , sizeof ( rtDW . hwff2qevzk ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void *
) & ( rtDW . ngarqyvhaz ) , sizeof ( rtDW . ngarqyvhaz ) ) ;
mr_Approx_Multiplier_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void *
) & ( rtDW . bzjl2bpanr ) , sizeof ( rtDW . bzjl2bpanr ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Approx_Multiplier_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0
, 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & (
rtDW . ntvaixwdrn ) , rtdwData , 0 , 0 , sizeof ( rtDW . ntvaixwdrn ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fzbhpbbfed ) , rtdwData , 0 , 1 , sizeof ( rtDW . fzbhpbbfed ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hk2jnl5nld ) , rtdwData , 0 , 2 , sizeof ( rtDW . hk2jnl5nld ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pqg4hz3zh4 ) , rtdwData , 0 , 3 , sizeof ( rtDW . pqg4hz3zh4 ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
latid21dux ) , rtdwData , 0 , 4 , sizeof ( rtDW . latid21dux ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gn31hrfwar ) , rtdwData , 0 , 5 , sizeof ( rtDW . gn31hrfwar ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hmq1mmtxes ) , rtdwData , 0 , 6 , sizeof ( rtDW . hmq1mmtxes ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kmn3pgmyg5 ) , rtdwData , 0 , 7 , sizeof ( rtDW . kmn3pgmyg5 ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ntgl42hmkr ) , rtdwData , 0 , 8 , sizeof ( rtDW . ntgl42hmkr ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
acnbzrcojc ) , rtdwData , 0 , 9 , sizeof ( rtDW . acnbzrcojc ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ot5xfv5sth ) , rtdwData , 0 , 10 , sizeof ( rtDW . ot5xfv5sth ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k4wjhynsm1 ) , rtdwData , 0 , 11 , sizeof ( rtDW . k4wjhynsm1 ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b3n5ni3cpl ) , rtdwData , 0 , 12 , sizeof ( rtDW . b3n5ni3cpl ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hwff2qevzk ) , rtdwData , 0 , 13 , sizeof ( rtDW . hwff2qevzk ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ngarqyvhaz ) , rtdwData , 0 , 14 , sizeof ( rtDW . ngarqyvhaz ) ) ;
mr_Approx_Multiplier_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bzjl2bpanr ) , rtdwData , 0 , 15 , sizeof ( rtDW . bzjl2bpanr ) ) ; } }
mxArray * mr_Approx_Multiplier_GetSimStateDisallowedBlocks ( ) { return NULL
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 373 ) ;
ssSetNumBlockIO ( rtS , 17 ) ; ssSetNumBlockParams ( rtS , 1032226 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 801067691U ) ; ssSetChecksumVal ( rtS , 1 ,
2198617057U ) ; ssSetChecksumVal ( rtS , 2 , 3912794828U ) ; ssSetChecksumVal
( rtS , 3 , 102128146U ) ; }
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
Approx_Multiplier_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Approx_Multiplier" ) ;
ssSetPath ( rtS , "Approx_Multiplier" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 322.56 ) ; ssSetStepSize ( rtS , 0.01 ) ;
ssSetFixedStepSize ( rtS , 0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ;
rtliSetLogX ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo
( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ;
rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation (
ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" )
; rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
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
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 801067691U
) ; ssSetChecksumVal ( rtS , 1 , 2198617057U ) ; ssSetChecksumVal ( rtS , 2 ,
3912794828U ) ; ssSetChecksumVal ( rtS , 3 , 102128146U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Approx_Multiplier_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Approx_Multiplier_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_Approx_Multiplier_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
