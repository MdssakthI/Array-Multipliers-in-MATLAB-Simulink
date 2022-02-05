#include "rt_logging_mmi.h"
#include "Normal_Multiplier_InXA2_NAB4_capi.h"
#include <math.h>
#include "Normal_Multiplier_InXA2_NAB4.h"
#include "Normal_Multiplier_InXA2_NAB4_private.h"
#include "Normal_Multiplier_InXA2_NAB4_dt.h"
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
= sdiGetLabelFromChars ( "Normal_Multiplier_InXA2_NAB4/Partial Product Row 5"
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
. cqnhljthsr . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7af74198-53a3-4558-8a13-1109cc743f19" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . cqnhljthsr . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . cqnhljthsr . AQHandles , "0.01" ,
0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . cqnhljthsr .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . cqnhljthsr . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . cqnhljthsr . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Normal_Multiplier_InXA2_NAB4/Partial Product Row 8" )
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
. gbymj2ovto . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9e9c58a6-b172-4822-a9fb-09f7541551d3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . gbymj2ovto . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . gbymj2ovto . AQHandles , "0.01" ,
0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . gbymj2ovto .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . gbymj2ovto . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . gbymj2ovto . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 65536 } ; rtDW . eq3rg3c5up . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . eq3rg3c5up . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . cfvswxfwyx . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . cfvswxfwyx . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . djfd54zveq . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . djfd54zveq . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . d5r3gt1qtk . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . d5r3gt1qtk . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . buq141ezul . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . buq141ezul . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ovr2iox4zn . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ovr2iox4zn . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . apbmqvnfyd . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . apbmqvnfyd . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . figs1pdllv . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . figs1pdllv . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ghgjezc2no . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ghgjezc2no . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . daxhxgnuhd . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . daxhxgnuhd . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ldwjz3eh43 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ldwjz3eh43 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ak2hahct4v . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ak2hahct4v . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . gqhwwusxhu . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . gqhwwusxhu . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . klzr21neu1 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . klzr21neu1 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . n3g1rf42ev . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . n3g1rf42ev . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ldp5u1kzwu . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ldp5u1kzwu . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . gnbyk1vfpw . TimePtr = fromwksInfo -> time ;
rtDW . gnbyk1vfpw . DataPtr = fromwksInfo -> data ; rtDW . gnbyk1vfpw .
RSimInfoPtr = fromwksInfo ; } rtDW . gtugm1qhhu . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . npiehoddtj . TimePtr = fromwksInfo -> time ;
rtDW . npiehoddtj . DataPtr = fromwksInfo -> data ; rtDW . npiehoddtj .
RSimInfoPtr = fromwksInfo ; } rtDW . hjbxnaclbx . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . my2hna4bv5 . TimePtr = fromwksInfo -> time ;
rtDW . my2hna4bv5 . DataPtr = fromwksInfo -> data ; rtDW . my2hna4bv5 .
RSimInfoPtr = fromwksInfo ; } rtDW . jpw5msa5vc . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . hd0v2iido5 . TimePtr = fromwksInfo -> time ;
rtDW . hd0v2iido5 . DataPtr = fromwksInfo -> data ; rtDW . hd0v2iido5 .
RSimInfoPtr = fromwksInfo ; } rtDW . lgunhngoxg . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . fmgxrjxk2n . TimePtr = fromwksInfo -> time ;
rtDW . fmgxrjxk2n . DataPtr = fromwksInfo -> data ; rtDW . fmgxrjxk2n .
RSimInfoPtr = fromwksInfo ; } rtDW . jg1qrtf2sl . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . eiqxbuesbz . TimePtr = fromwksInfo -> time ;
rtDW . eiqxbuesbz . DataPtr = fromwksInfo -> data ; rtDW . eiqxbuesbz .
RSimInfoPtr = fromwksInfo ; } rtDW . hq3pyscxok . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . luhxwyafiu . TimePtr = fromwksInfo -> time ;
rtDW . luhxwyafiu . DataPtr = fromwksInfo -> data ; rtDW . luhxwyafiu .
RSimInfoPtr = fromwksInfo ; } rtDW . j5bjhwt11y . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . hzvynktexa . TimePtr = fromwksInfo -> time ;
rtDW . hzvynktexa . DataPtr = fromwksInfo -> data ; rtDW . hzvynktexa .
RSimInfoPtr = fromwksInfo ; } rtDW . hpkbuzawxv . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . eqacg2g0mx . TimePtr = fromwksInfo -> time ;
rtDW . eqacg2g0mx . DataPtr = fromwksInfo -> data ; rtDW . eqacg2g0mx .
RSimInfoPtr = fromwksInfo ; } rtDW . fzkfbubcgq . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . kocbkcq1ny . TimePtr = fromwksInfo -> time ;
rtDW . kocbkcq1ny . DataPtr = fromwksInfo -> data ; rtDW . kocbkcq1ny .
RSimInfoPtr = fromwksInfo ; } rtDW . elnvzbtyvt . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . ejgvioxsis . TimePtr = fromwksInfo -> time ;
rtDW . ejgvioxsis . DataPtr = fromwksInfo -> data ; rtDW . ejgvioxsis .
RSimInfoPtr = fromwksInfo ; } rtDW . cnkd33dq50 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . cdedddumvu . TimePtr = fromwksInfo -> time ;
rtDW . cdedddumvu . DataPtr = fromwksInfo -> data ; rtDW . cdedddumvu .
RSimInfoPtr = fromwksInfo ; } rtDW . aahfl2c5s1 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . ewbt0atfr2 . TimePtr = fromwksInfo -> time ;
rtDW . ewbt0atfr2 . DataPtr = fromwksInfo -> data ; rtDW . ewbt0atfr2 .
RSimInfoPtr = fromwksInfo ; } rtDW . krwyoel2ll . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . bwrixaskfc . TimePtr = fromwksInfo -> time ;
rtDW . bwrixaskfc . DataPtr = fromwksInfo -> data ; rtDW . bwrixaskfc .
RSimInfoPtr = fromwksInfo ; } rtDW . lx30wb3zrx . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . kyuqkps5fr . TimePtr = fromwksInfo -> time ;
rtDW . kyuqkps5fr . DataPtr = fromwksInfo -> data ; rtDW . kyuqkps5fr .
RSimInfoPtr = fromwksInfo ; } rtDW . gighpgdqo2 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . nijly2wvbr . TimePtr = fromwksInfo -> time ;
rtDW . nijly2wvbr . DataPtr = fromwksInfo -> data ; rtDW . nijly2wvbr .
RSimInfoPtr = fromwksInfo ; } rtDW . eppx5hicmk . PrevIndex = 0 ; } } void
MdlOutputs ( int_T tid ) { int32_T i ; boolean_T ajl42h2nud ; boolean_T
anupfjg1uu ; boolean_T beuzyt1b0l ; boolean_T bf0vlo5opv ; boolean_T
c1ptn0ync0 ; boolean_T cdrxvjhgjk ; boolean_T dmzesfixdm ; boolean_T
e13yfxn2yf ; boolean_T efc3xbubya ; boolean_T eopxuynkdw ; boolean_T
exduqiaqz5 ; boolean_T fkjf3yylwo ; boolean_T grxsvmner4 ; boolean_T
ii05lwzmrl ; boolean_T ja5gfozxwn ; boolean_T jienwguhcb ; boolean_T
jiiidi153d ; boolean_T laqjanvpra ; boolean_T ldbqp1e4fx ; boolean_T
n0s3wqoaow ; boolean_T nnkm1kmeqe ; boolean_T nsr4ydnvvc ; boolean_T
oeduxrzwtv ; boolean_T ogkbxjw0bv ; boolean_T oqauzjrott ; boolean_T
p5sfuyrcif ; boolean_T pfec5f4nay ; boolean_T pvc4zbdx35 ; { real_T *
pDataValues = ( real_T * ) rtDW . gnbyk1vfpw . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . gnbyk1vfpw . TimePtr ; int_T currTimeIndex = rtDW .
gtugm1qhhu . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . gnbyk1vfpw .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . gtugm1qhhu . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
favs0j21q5_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . favs0j21q5_mbvzarwird [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . favs0j21q5_mbvzarwird [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } { real_T * pDataValues = ( real_T * ) rtDW . npiehoddtj
. DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . npiehoddtj . TimePtr ;
int_T currTimeIndex = rtDW . hjbxnaclbx . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . npiehoddtj . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hjbxnaclbx . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . it55sf43iu_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . it55sf43iu_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . it55sf43iu_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . eup54mfimv [ i ] = ( ( rtB . favs0j21q5_mbvzarwird [ i
] != 0.0 ) && ( rtB . it55sf43iu_cl54gopm0x [ i ] != 0.0 ) ) ; } { if ( rtDW
. cqnhljthsr . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW
. cqnhljthsr . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
eup54mfimv [ 0 ] + 0 ) ; } } { real_T * pDataValues = ( real_T * ) rtDW .
my2hna4bv5 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . my2hna4bv5
. TimePtr ; int_T currTimeIndex = rtDW . jpw5msa5vc . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . my2hna4bv5 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jpw5msa5vc . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . oqn1eghzmz_kkiq3xxxve [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . oqn1eghzmz_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . oqn1eghzmz_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T *
pDataValues = ( real_T * ) rtDW . hd0v2iido5 . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . hd0v2iido5 . TimePtr ; int_T currTimeIndex = rtDW .
lgunhngoxg . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . hd0v2iido5 .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . lgunhngoxg . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
fehwywh3z2_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . fehwywh3z2_cxarnvbvui [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . fehwywh3z2_cxarnvbvui [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . mnz5kle1gf [ i
] = ( ( rtB . oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
fehwywh3z2_cxarnvbvui [ i ] != 0.0 ) ) ; } { if ( rtDW . gbymj2ovto .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . gbymj2ovto .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . mnz5kle1gf [ 0 ] +
0 ) ; } } { real_T * pDataValues = ( real_T * ) rtDW . fmgxrjxk2n . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . fmgxrjxk2n . TimePtr ; int_T
currTimeIndex = rtDW . jg1qrtf2sl . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . fmgxrjxk2n . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
jg1qrtf2sl . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . eqezuwh5hf_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . eqezuwh5hf_bhxxfovxdy [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
eqezuwh5hf_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . eiqxbuesbz . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . eiqxbuesbz . TimePtr ; int_T currTimeIndex = rtDW . hq3pyscxok .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . eiqxbuesbz . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hq3pyscxok . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . jntoqqfj1w_pbm3vprmfu [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . jntoqqfj1w_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . jntoqqfj1w_pbm3vprmfu [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . h4zwj0gg5m [ i ] = ( ( rtB . eqezuwh5hf_bhxxfovxdy [ i
] != 0.0 ) && ( rtB . jntoqqfj1w_pbm3vprmfu [ i ] != 0.0 ) ) ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . eq3rg3c5up . LoggedData ) , & rtB . h4zwj0gg5m [ 0 ] , 0
) ; } } } { real_T * pDataValues = ( real_T * ) rtDW . luhxwyafiu . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . luhxwyafiu . TimePtr ; int_T
currTimeIndex = rtDW . j5bjhwt11y . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . luhxwyafiu . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
j5bjhwt11y . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . mkiy2p0nrc_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . mkiy2p0nrc_cv5hdgrwft [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
mkiy2p0nrc_cv5hdgrwft [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { c1ptn0ync0 = ( ( rtB . mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && ( rtB
. jntoqqfj1w_pbm3vprmfu [ i ] != 0.0 ) ) ; ii05lwzmrl = ( ( rtB .
eqezuwh5hf_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . fehwywh3z2_cxarnvbvui [ i ]
!= 0.0 ) ) ; ldbqp1e4fx = c1ptn0ync0 ^ ii05lwzmrl ; rtB . dtcooeqmvn [ i ] =
( ldbqp1e4fx || ( rtP . Constant2_Value != 0.0 ) ) ; rtB .
iqbpt2yppj_guugdwf2m3 [ i ] = c1ptn0ync0 ; rtB . l3n1qetxrh_ldqodwenvz [ i ]
= ii05lwzmrl ; rtB . nnuxupynsu_dhamdvybc1 [ i ] = ldbqp1e4fx ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . cfvswxfwyx . LoggedData ) , & rtB . dtcooeqmvn [ 0 ] , 0
) ; } } } { real_T * pDataValues = ( real_T * ) rtDW . hzvynktexa . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . hzvynktexa . TimePtr ; int_T
currTimeIndex = rtDW . hpkbuzawxv . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . hzvynktexa . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
hpkbuzawxv . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . gu1qqfadr5_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . gu1qqfadr5_fqdqrf4qbc [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
gu1qqfadr5_fqdqrf4qbc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { pvc4zbdx35 = ( ( rtB . eqezuwh5hf_bhxxfovxdy [ i ] != 0.0 ) && ( rtB
. gu1qqfadr5_fqdqrf4qbc [ i ] != 0.0 ) ) ; jiiidi153d = ( ( rtB .
mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . it55sf43iu_cl54gopm0x [ i ]
!= 0.0 ) ) ; anupfjg1uu = pvc4zbdx35 ^ jiiidi153d ; exduqiaqz5 = ( ( rtB .
eqezuwh5hf_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . it55sf43iu_cl54gopm0x [ i ]
!= 0.0 ) ) ; fkjf3yylwo = ( ( rtB . mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && (
rtB . fehwywh3z2_cxarnvbvui [ i ] != 0.0 ) ) ; beuzyt1b0l = exduqiaqz5 ^
fkjf3yylwo ; ldbqp1e4fx = ( ( rtB . nnuxupynsu_dhamdvybc1 [ i ] && ( rtP .
Constant2_Value != 0.0 ) ) || ( rtB . iqbpt2yppj_guugdwf2m3 [ i ] && rtB .
l3n1qetxrh_ldqodwenvz [ i ] ) ) ; fkjf3yylwo = ( ( beuzyt1b0l && ldbqp1e4fx )
|| ( exduqiaqz5 && fkjf3yylwo ) ) ; rtB . em11pkdoet_dypejvacrn [ i ] =
pvc4zbdx35 ; rtB . p2bhm0fwyt_lxo5edjg3c [ i ] = jiiidi153d ; rtB .
pfd2knai1c_owjr1h1vqy [ i ] = anupfjg1uu ; rtB . n0a2jchllj_bjbgfqrolh [ i ]
= ( anupfjg1uu || fkjf3yylwo ) ; rtB . cyqsh3akzq_nuebgmauvi [ i ] =
fkjf3yylwo ; rtB . isvadm5izm_bsqwvugooi [ i ] = beuzyt1b0l ; rtB .
nnuxupynsu_dhamdvybc1 [ i ] = ldbqp1e4fx ; } { real_T * pDataValues = (
real_T * ) rtDW . eqacg2g0mx . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . eqacg2g0mx . TimePtr ; int_T currTimeIndex = rtDW . fzkfbubcgq .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . eqacg2g0mx . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fzkfbubcgq . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ff0wb1mu4b_g2mlkqadfk [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . ff0wb1mu4b_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . ff0wb1mu4b_g2mlkqadfk [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { ii05lwzmrl = ( ( rtB . ff0wb1mu4b_g2mlkqadfk [ i ] != 0.0 )
&& ( rtB . fehwywh3z2_cxarnvbvui [ i ] != 0.0 ) ) ; c1ptn0ync0 = rtB .
n0a2jchllj_bjbgfqrolh [ i ] ^ ii05lwzmrl ; beuzyt1b0l = ( rtB .
isvadm5izm_bsqwvugooi [ i ] || rtB . nnuxupynsu_dhamdvybc1 [ i ] ) ;
ldbqp1e4fx = ( ( rtB . ff0wb1mu4b_g2mlkqadfk [ i ] != 0.0 ) && ( rtB .
jntoqqfj1w_pbm3vprmfu [ i ] != 0.0 ) ) ; cdrxvjhgjk = beuzyt1b0l ^ ldbqp1e4fx
; beuzyt1b0l = ( ( cdrxvjhgjk && ( rtP . Constant1_Value != 0.0 ) ) || (
beuzyt1b0l && ldbqp1e4fx ) ) ; rtB . l3n1qetxrh_ldqodwenvz [ i ] = ii05lwzmrl
; rtB . iqbpt2yppj_guugdwf2m3 [ i ] = c1ptn0ync0 ; rtB .
b235j3khds_lnjdk5wtww [ i ] = cdrxvjhgjk ; rtB . isvadm5izm_bsqwvugooi [ i ]
= beuzyt1b0l ; rtB . nnuxupynsu_dhamdvybc1 [ i ] = ( c1ptn0ync0 || beuzyt1b0l
) ; } { real_T * pDataValues = ( real_T * ) rtDW . kocbkcq1ny . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . kocbkcq1ny . TimePtr ; int_T
currTimeIndex = rtDW . elnvzbtyvt . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . kocbkcq1ny . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
elnvzbtyvt . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . m1tylpall1_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . m1tylpall1_g1smspu5ke [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
m1tylpall1_g1smspu5ke [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { ldbqp1e4fx = rtB . nnuxupynsu_dhamdvybc1 [ i ] ; cdrxvjhgjk = ( (
rtB . m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && ( rtB . jntoqqfj1w_pbm3vprmfu [
i ] != 0.0 ) ) ; c1ptn0ync0 = ldbqp1e4fx ^ cdrxvjhgjk ; rtB .
hrnpdvskco_hv2ho1zopz [ i ] = ( ( c1ptn0ync0 && ( rtP . Constant3_Value !=
0.0 ) ) || ( ldbqp1e4fx && cdrxvjhgjk ) ) ; rtB . lhd2bsk1u2_bnlywzniup [ i ]
= c1ptn0ync0 ; rtB . isvadm5izm_bsqwvugooi [ i ] = ( ( rtB .
iqbpt2yppj_guugdwf2m3 [ i ] && rtB . isvadm5izm_bsqwvugooi [ i ] ) || ( rtB .
n0a2jchllj_bjbgfqrolh [ i ] && rtB . l3n1qetxrh_ldqodwenvz [ i ] ) ) ; rtB .
cyqsh3akzq_nuebgmauvi [ i ] = ( ( rtB . pfd2knai1c_owjr1h1vqy [ i ] && rtB .
cyqsh3akzq_nuebgmauvi [ i ] ) || ( rtB . em11pkdoet_dypejvacrn [ i ] && rtB .
p2bhm0fwyt_lxo5edjg3c [ i ] ) ) ; } { real_T * pDataValues = ( real_T * )
rtDW . ejgvioxsis . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
ejgvioxsis . TimePtr ; int_T currTimeIndex = rtDW . cnkd33dq50 . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . ejgvioxsis . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . cnkd33dq50 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . nfnxxgcpkj_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . nfnxxgcpkj_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . nfnxxgcpkj_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { cdrxvjhgjk = rtB . hrnpdvskco_hv2ho1zopz [ i ] ; beuzyt1b0l
= rtB . isvadm5izm_bsqwvugooi [ i ] ; fkjf3yylwo = rtB .
cyqsh3akzq_nuebgmauvi [ i ] ; exduqiaqz5 = ( ( rtB . eqezuwh5hf_bhxxfovxdy [
i ] != 0.0 ) && ( rtB . nfnxxgcpkj_merlcviukg [ i ] != 0.0 ) ) ; anupfjg1uu =
( ( rtB . mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && ( rtB .
gu1qqfadr5_fqdqrf4qbc [ i ] != 0.0 ) ) ; jiiidi153d = exduqiaqz5 ^ anupfjg1uu
; pvc4zbdx35 = fkjf3yylwo ^ jiiidi153d ; ldbqp1e4fx = ( ( rtB .
ff0wb1mu4b_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . it55sf43iu_cl54gopm0x [ i ]
!= 0.0 ) ) ; ii05lwzmrl = pvc4zbdx35 ^ ldbqp1e4fx ; c1ptn0ync0 = beuzyt1b0l ^
ii05lwzmrl ; ja5gfozxwn = ( ( rtB . m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && (
rtB . fehwywh3z2_cxarnvbvui [ i ] != 0.0 ) ) ; jienwguhcb = c1ptn0ync0 ^
ja5gfozxwn ; nnkm1kmeqe = cdrxvjhgjk ^ jienwguhcb ; oqauzjrott = ( ( rtB .
favs0j21q5_mbvzarwird [ i ] != 0.0 ) && ( rtB . jntoqqfj1w_pbm3vprmfu [ i ]
!= 0.0 ) ) ; rtB . dihyb5exl5_fdinthrxmb [ i ] = ( nnkm1kmeqe && oqauzjrott )
; rtB . iy31tlyqf2_ezqlmfzvpq [ i ] = ( ( cdrxvjhgjk && jienwguhcb ) || (
c1ptn0ync0 && ja5gfozxwn ) ) ; rtB . ewwrsl3jc4_dapv3jlyq5 [ i ] = ( (
beuzyt1b0l && ii05lwzmrl ) || ( pvc4zbdx35 && ldbqp1e4fx ) ) ; rtB .
pmb0bhdbv5_bjvjhhzy4i [ i ] = nnkm1kmeqe ; rtB . euba5vafq4_jzx3amusab [ i ]
= oqauzjrott ; rtB . hrnpdvskco_hv2ho1zopz [ i ] = ( ( fkjf3yylwo &&
jiiidi153d ) || ( exduqiaqz5 && anupfjg1uu ) ) ; } { real_T * pDataValues = (
real_T * ) rtDW . cdedddumvu . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . cdedddumvu . TimePtr ; int_T currTimeIndex = rtDW . aahfl2c5s1 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . cdedddumvu . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . aahfl2c5s1 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . nwjkkgnlx0_nz4o0shxby [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . nwjkkgnlx0_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . nwjkkgnlx0_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { beuzyt1b0l = ( ( rtB . eqezuwh5hf_bhxxfovxdy [ i ] != 0.0 )
&& ( rtB . nwjkkgnlx0_nz4o0shxby [ i ] != 0.0 ) ) ; fkjf3yylwo = ( ( rtB .
mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . nfnxxgcpkj_merlcviukg [ i ]
!= 0.0 ) ) ; exduqiaqz5 = beuzyt1b0l ^ fkjf3yylwo ; anupfjg1uu = rtB .
hrnpdvskco_hv2ho1zopz [ i ] ^ exduqiaqz5 ; jiiidi153d = ( ( rtB .
ff0wb1mu4b_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . gu1qqfadr5_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; pvc4zbdx35 = anupfjg1uu ^ jiiidi153d ; ldbqp1e4fx = rtB .
ewwrsl3jc4_dapv3jlyq5 [ i ] ^ pvc4zbdx35 ; ii05lwzmrl = ( ( rtB .
m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && ( rtB . it55sf43iu_cl54gopm0x [ i ]
!= 0.0 ) ) ; c1ptn0ync0 = ldbqp1e4fx ^ ii05lwzmrl ; eopxuynkdw = rtB .
iy31tlyqf2_ezqlmfzvpq [ i ] ^ c1ptn0ync0 ; nsr4ydnvvc = ( ( rtB .
favs0j21q5_mbvzarwird [ i ] != 0.0 ) && ( rtB . fehwywh3z2_cxarnvbvui [ i ]
!= 0.0 ) ) ; nnkm1kmeqe = eopxuynkdw ^ nsr4ydnvvc ; rtB .
jrqvjh1kg5_o4f35lbcvx [ i ] = rtB . dihyb5exl5_fdinthrxmb [ i ] ^ nnkm1kmeqe
; rtB . isvadm5izm_bsqwvugooi [ i ] = beuzyt1b0l ; rtB .
cyqsh3akzq_nuebgmauvi [ i ] = fkjf3yylwo ; rtB . n0a2jchllj_bjbgfqrolh [ i ]
= exduqiaqz5 ; rtB . pfd2knai1c_owjr1h1vqy [ i ] = anupfjg1uu ; rtB .
p2bhm0fwyt_lxo5edjg3c [ i ] = jiiidi153d ; rtB . em11pkdoet_dypejvacrn [ i ]
= pvc4zbdx35 ; rtB . nnuxupynsu_dhamdvybc1 [ i ] = ldbqp1e4fx ; rtB .
l3n1qetxrh_ldqodwenvz [ i ] = ii05lwzmrl ; rtB . iqbpt2yppj_guugdwf2m3 [ i ]
= c1ptn0ync0 ; rtB . kjubst5cix_al00mdgrv4 [ i ] = eopxuynkdw ; rtB .
aqds1nisru_ju13rw2h0m [ i ] = nsr4ydnvvc ; rtB . bfblodtnnf_jz50ptvnrg [ i ]
= nnkm1kmeqe ; } { real_T * pDataValues = ( real_T * ) rtDW . ewbt0atfr2 .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . ewbt0atfr2 . TimePtr ;
int_T currTimeIndex = rtDW . krwyoel2ll . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . ewbt0atfr2 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . krwyoel2ll . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . flnxxjzl3y_ppxrqq0gsf [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . flnxxjzl3y_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . flnxxjzl3y_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { ldbqp1e4fx = ( ( rtB . flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 )
&& ( rtB . jntoqqfj1w_pbm3vprmfu [ i ] != 0.0 ) ) ; rtB .
apkkt53mz0_icdfyazkhu [ i ] = ( rtB . jrqvjh1kg5_o4f35lbcvx [ i ] &&
ldbqp1e4fx ) ; nnkm1kmeqe = ( ( rtB . dihyb5exl5_fdinthrxmb [ i ] && rtB .
bfblodtnnf_jz50ptvnrg [ i ] ) || ( rtB . kjubst5cix_al00mdgrv4 [ i ] && rtB .
aqds1nisru_ju13rw2h0m [ i ] ) ) ; rtB . lam5dywnob_nyxm0bsxsn [ i ] =
ldbqp1e4fx ; rtB . dihyb5exl5_fdinthrxmb [ i ] = ( ( rtB .
hrnpdvskco_hv2ho1zopz [ i ] && rtB . n0a2jchllj_bjbgfqrolh [ i ] ) || ( rtB .
isvadm5izm_bsqwvugooi [ i ] && rtB . cyqsh3akzq_nuebgmauvi [ i ] ) ) ; rtB .
bfblodtnnf_jz50ptvnrg [ i ] = nnkm1kmeqe ; rtB . kjubst5cix_al00mdgrv4 [ i ]
= ( ( rtB . ewwrsl3jc4_dapv3jlyq5 [ i ] && rtB . em11pkdoet_dypejvacrn [ i ]
) || ( rtB . pfd2knai1c_owjr1h1vqy [ i ] && rtB . p2bhm0fwyt_lxo5edjg3c [ i ]
) ) ; rtB . aqds1nisru_ju13rw2h0m [ i ] = ( ( rtB . iy31tlyqf2_ezqlmfzvpq [ i
] && rtB . iqbpt2yppj_guugdwf2m3 [ i ] ) || ( rtB . nnuxupynsu_dhamdvybc1 [ i
] && rtB . l3n1qetxrh_ldqodwenvz [ i ] ) ) ; } { real_T * pDataValues = (
real_T * ) rtDW . bwrixaskfc . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . bwrixaskfc . TimePtr ; int_T currTimeIndex = rtDW . lx30wb3zrx .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . bwrixaskfc . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . lx30wb3zrx . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . efxqyd5t1e_llw0u2ae0v [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . efxqyd5t1e_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . efxqyd5t1e_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { jienwguhcb = ( ( rtB . eqezuwh5hf_bhxxfovxdy [ i ] != 0.0 )
&& ( rtB . efxqyd5t1e_llw0u2ae0v [ i ] != 0.0 ) ) ; ja5gfozxwn = ( ( rtB .
mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . nwjkkgnlx0_nz4o0shxby [ i ]
!= 0.0 ) ) ; cdrxvjhgjk = jienwguhcb ^ ja5gfozxwn ; beuzyt1b0l = rtB .
dihyb5exl5_fdinthrxmb [ i ] ^ cdrxvjhgjk ; fkjf3yylwo = ( ( rtB .
ff0wb1mu4b_g2mlkqadfk [ i ] != 0.0 ) && ( rtB . nfnxxgcpkj_merlcviukg [ i ]
!= 0.0 ) ) ; exduqiaqz5 = beuzyt1b0l ^ fkjf3yylwo ; anupfjg1uu = rtB .
kjubst5cix_al00mdgrv4 [ i ] ^ exduqiaqz5 ; jiiidi153d = ( ( rtB .
m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && ( rtB . gu1qqfadr5_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; pvc4zbdx35 = anupfjg1uu ^ jiiidi153d ; ldbqp1e4fx = rtB .
aqds1nisru_ju13rw2h0m [ i ] ^ pvc4zbdx35 ; ii05lwzmrl = ldbqp1e4fx ^ rtB .
eup54mfimv [ i ] ; c1ptn0ync0 = rtB . bfblodtnnf_jz50ptvnrg [ i ] ^
ii05lwzmrl ; p5sfuyrcif = ( ( rtB . flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 ) && (
rtB . fehwywh3z2_cxarnvbvui [ i ] != 0.0 ) ) ; oqauzjrott = c1ptn0ync0 ^
p5sfuyrcif ; rtB . dr3drxnfhr_m3yhjduhi1 [ i ] = rtB . apkkt53mz0_icdfyazkhu
[ i ] ^ oqauzjrott ; rtB . iy31tlyqf2_ezqlmfzvpq [ i ] = jienwguhcb ; rtB .
ewwrsl3jc4_dapv3jlyq5 [ i ] = ja5gfozxwn ; rtB . hrnpdvskco_hv2ho1zopz [ i ]
= cdrxvjhgjk ; rtB . isvadm5izm_bsqwvugooi [ i ] = beuzyt1b0l ; rtB .
cyqsh3akzq_nuebgmauvi [ i ] = fkjf3yylwo ; rtB . n0a2jchllj_bjbgfqrolh [ i ]
= exduqiaqz5 ; rtB . pfd2knai1c_owjr1h1vqy [ i ] = anupfjg1uu ; rtB .
p2bhm0fwyt_lxo5edjg3c [ i ] = jiiidi153d ; rtB . em11pkdoet_dypejvacrn [ i ]
= pvc4zbdx35 ; rtB . nnuxupynsu_dhamdvybc1 [ i ] = ldbqp1e4fx ; rtB .
l3n1qetxrh_ldqodwenvz [ i ] = ii05lwzmrl ; rtB . iqbpt2yppj_guugdwf2m3 [ i ]
= c1ptn0ync0 ; rtB . dxvfaze2rq_oyypvi4boh [ i ] = p5sfuyrcif ; rtB .
pm0amyolyi_nvsvtgkap4 [ i ] = oqauzjrott ; } { real_T * pDataValues = (
real_T * ) rtDW . kyuqkps5fr . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . kyuqkps5fr . TimePtr ; int_T currTimeIndex = rtDW . gighpgdqo2 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . kyuqkps5fr . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . gighpgdqo2 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . hui1al2usf_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . hui1al2usf_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . hui1al2usf_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
65536 ; i ++ ) { ldbqp1e4fx = ( ( rtB . hui1al2usf_jwzvbuczlb [ i ] != 0.0 )
&& ( rtB . jntoqqfj1w_pbm3vprmfu [ i ] != 0.0 ) ) ; rtB .
dcitiizzud_mdoasc5av4 [ i ] = ( rtB . dr3drxnfhr_m3yhjduhi1 [ i ] &&
ldbqp1e4fx ) ; oqauzjrott = ( ( rtB . apkkt53mz0_icdfyazkhu [ i ] && rtB .
pm0amyolyi_nvsvtgkap4 [ i ] ) || ( rtB . iqbpt2yppj_guugdwf2m3 [ i ] && rtB .
dxvfaze2rq_oyypvi4boh [ i ] ) ) ; rtB . ihpwyzsryj_czkfpwuzm5 [ i ] =
ldbqp1e4fx ; rtB . apkkt53mz0_icdfyazkhu [ i ] = ( ( rtB .
aqds1nisru_ju13rw2h0m [ i ] && rtB . em11pkdoet_dypejvacrn [ i ] ) || ( rtB .
pfd2knai1c_owjr1h1vqy [ i ] && rtB . p2bhm0fwyt_lxo5edjg3c [ i ] ) ) ; rtB .
pm0amyolyi_nvsvtgkap4 [ i ] = oqauzjrott ; rtB . dxvfaze2rq_oyypvi4boh [ i ]
= ( ( rtB . bfblodtnnf_jz50ptvnrg [ i ] && rtB . l3n1qetxrh_ldqodwenvz [ i ]
) || ( rtB . nnuxupynsu_dhamdvybc1 [ i ] && rtB . eup54mfimv [ i ] ) ) ; rtB
. aqds1nisru_ju13rw2h0m [ i ] = ( ( rtB . dihyb5exl5_fdinthrxmb [ i ] && rtB
. hrnpdvskco_hv2ho1zopz [ i ] ) || ( rtB . iy31tlyqf2_ezqlmfzvpq [ i ] && rtB
. ewwrsl3jc4_dapv3jlyq5 [ i ] ) ) ; rtB . bfblodtnnf_jz50ptvnrg [ i ] = ( (
rtB . kjubst5cix_al00mdgrv4 [ i ] && rtB . n0a2jchllj_bjbgfqrolh [ i ] ) || (
rtB . isvadm5izm_bsqwvugooi [ i ] && rtB . cyqsh3akzq_nuebgmauvi [ i ] ) ) ;
} { real_T * pDataValues = ( real_T * ) rtDW . nijly2wvbr . DataPtr ; real_T
* pTimeValues = ( real_T * ) rtDW . nijly2wvbr . TimePtr ; int_T
currTimeIndex = rtDW . eppx5hicmk . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . nijly2wvbr . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
eppx5hicmk . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . ddwzdqluej_dhmrxtyqop [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ddwzdqluej_dhmrxtyqop [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
ddwzdqluej_dhmrxtyqop [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { nsr4ydnvvc = rtB . aqds1nisru_ju13rw2h0m [ i ] ; nnkm1kmeqe = rtB .
bfblodtnnf_jz50ptvnrg [ i ] ; dmzesfixdm = rtB . apkkt53mz0_icdfyazkhu [ i ]
; p5sfuyrcif = rtB . dxvfaze2rq_oyypvi4boh [ i ] ; oqauzjrott = rtB .
pm0amyolyi_nvsvtgkap4 [ i ] ; efc3xbubya = rtB . dcitiizzud_mdoasc5av4 [ i ]
; eopxuynkdw = ( ( rtB . eqezuwh5hf_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
ddwzdqluej_dhmrxtyqop [ i ] != 0.0 ) ) ; grxsvmner4 = ( ( rtB .
mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . efxqyd5t1e_llw0u2ae0v [ i ]
!= 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4 ; ja5gfozxwn = nsr4ydnvvc ^
jienwguhcb ; cdrxvjhgjk = ( ( rtB . ff0wb1mu4b_g2mlkqadfk [ i ] != 0.0 ) && (
rtB . nwjkkgnlx0_nz4o0shxby [ i ] != 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^
cdrxvjhgjk ; fkjf3yylwo = nnkm1kmeqe ^ beuzyt1b0l ; exduqiaqz5 = ( ( rtB .
m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && ( rtB . nfnxxgcpkj_merlcviukg [ i ]
!= 0.0 ) ) ; anupfjg1uu = fkjf3yylwo ^ exduqiaqz5 ; jiiidi153d = dmzesfixdm ^
anupfjg1uu ; pvc4zbdx35 = ( ( rtB . favs0j21q5_mbvzarwird [ i ] != 0.0 ) && (
rtB . gu1qqfadr5_fqdqrf4qbc [ i ] != 0.0 ) ) ; ldbqp1e4fx = jiiidi153d ^
pvc4zbdx35 ; ii05lwzmrl = p5sfuyrcif ^ ldbqp1e4fx ; c1ptn0ync0 = ( ( rtB .
flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . it55sf43iu_cl54gopm0x [ i ]
!= 0.0 ) ) ; ajl42h2nud = ii05lwzmrl ^ c1ptn0ync0 ; laqjanvpra = oqauzjrott ^
ajl42h2nud ; ogkbxjw0bv = ( ( rtB . hui1al2usf_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . fehwywh3z2_cxarnvbvui [ i ] != 0.0 ) ) ; bf0vlo5opv = laqjanvpra ^
ogkbxjw0bv ; oeduxrzwtv = efc3xbubya ^ bf0vlo5opv ; n0s3wqoaow = ( ( rtB .
oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . jntoqqfj1w_pbm3vprmfu [ i ]
!= 0.0 ) ) ; pfec5f4nay = ( oeduxrzwtv && n0s3wqoaow ) ; bf0vlo5opv = ( (
efc3xbubya && bf0vlo5opv ) || ( laqjanvpra && ogkbxjw0bv ) ) ; ogkbxjw0bv = (
( oqauzjrott && ajl42h2nud ) || ( ii05lwzmrl && c1ptn0ync0 ) ) ; laqjanvpra =
( ( p5sfuyrcif && ldbqp1e4fx ) || ( jiiidi153d && pvc4zbdx35 ) ) ; ajl42h2nud
= ( ( dmzesfixdm && anupfjg1uu ) || ( fkjf3yylwo && exduqiaqz5 ) ) ;
efc3xbubya = ( ( nnkm1kmeqe && beuzyt1b0l ) || ( ja5gfozxwn && cdrxvjhgjk ) )
; oqauzjrott = ( ( rtB . mkiy2p0nrc_cv5hdgrwft [ i ] != 0.0 ) && ( rtB .
ddwzdqluej_dhmrxtyqop [ i ] != 0.0 ) ) ; p5sfuyrcif = ( ( nsr4ydnvvc &&
jienwguhcb ) || ( eopxuynkdw && grxsvmner4 ) ) ; dmzesfixdm = oqauzjrott ^
p5sfuyrcif ; nnkm1kmeqe = ( ( rtB . ff0wb1mu4b_g2mlkqadfk [ i ] != 0.0 ) && (
rtB . efxqyd5t1e_llw0u2ae0v [ i ] != 0.0 ) ) ; nsr4ydnvvc = dmzesfixdm ^
nnkm1kmeqe ; eopxuynkdw = efc3xbubya ^ nsr4ydnvvc ; grxsvmner4 = ( ( rtB .
m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && ( rtB . nwjkkgnlx0_nz4o0shxby [ i ]
!= 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4 ; ja5gfozxwn = ajl42h2nud ^
jienwguhcb ; cdrxvjhgjk = ( ( rtB . favs0j21q5_mbvzarwird [ i ] != 0.0 ) && (
rtB . nfnxxgcpkj_merlcviukg [ i ] != 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^
cdrxvjhgjk ; fkjf3yylwo = laqjanvpra ^ beuzyt1b0l ; exduqiaqz5 = ( ( rtB .
flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . gu1qqfadr5_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; anupfjg1uu = fkjf3yylwo ^ exduqiaqz5 ; jiiidi153d = ogkbxjw0bv ^
anupfjg1uu ; pvc4zbdx35 = ( ( rtB . hui1al2usf_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . it55sf43iu_cl54gopm0x [ i ] != 0.0 ) ) ; ldbqp1e4fx = jiiidi153d ^
pvc4zbdx35 ; ii05lwzmrl = bf0vlo5opv ^ ldbqp1e4fx ; c1ptn0ync0 = ii05lwzmrl ^
rtB . mnz5kle1gf [ i ] ; ii05lwzmrl = ( ( pfec5f4nay && c1ptn0ync0 ) || (
ii05lwzmrl && rtB . mnz5kle1gf [ i ] ) ) ; bf0vlo5opv = ( ( bf0vlo5opv &&
ldbqp1e4fx ) || ( jiiidi153d && pvc4zbdx35 ) ) ; ogkbxjw0bv = ( ( ogkbxjw0bv
&& anupfjg1uu ) || ( fkjf3yylwo && exduqiaqz5 ) ) ; laqjanvpra = ( (
laqjanvpra && beuzyt1b0l ) || ( ja5gfozxwn && cdrxvjhgjk ) ) ; ajl42h2nud = (
( ajl42h2nud && jienwguhcb ) || ( eopxuynkdw && grxsvmner4 ) ) ; efc3xbubya =
( ( efc3xbubya && nsr4ydnvvc ) || ( dmzesfixdm && nnkm1kmeqe ) ) ; oqauzjrott
= ( oqauzjrott && p5sfuyrcif ) ; p5sfuyrcif = ( ( rtB . ff0wb1mu4b_g2mlkqadfk
[ i ] != 0.0 ) && ( rtB . ddwzdqluej_dhmrxtyqop [ i ] != 0.0 ) ) ; dmzesfixdm
= oqauzjrott ^ p5sfuyrcif ; nnkm1kmeqe = efc3xbubya ^ dmzesfixdm ; nsr4ydnvvc
= ( ( rtB . m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && ( rtB .
efxqyd5t1e_llw0u2ae0v [ i ] != 0.0 ) ) ; eopxuynkdw = nnkm1kmeqe ^ nsr4ydnvvc
; grxsvmner4 = ajl42h2nud ^ eopxuynkdw ; jienwguhcb = ( ( rtB .
favs0j21q5_mbvzarwird [ i ] != 0.0 ) && ( rtB . nwjkkgnlx0_nz4o0shxby [ i ]
!= 0.0 ) ) ; ja5gfozxwn = grxsvmner4 ^ jienwguhcb ; cdrxvjhgjk = laqjanvpra ^
ja5gfozxwn ; beuzyt1b0l = ( ( rtB . flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 ) && (
rtB . nfnxxgcpkj_merlcviukg [ i ] != 0.0 ) ) ; fkjf3yylwo = cdrxvjhgjk ^
beuzyt1b0l ; exduqiaqz5 = ogkbxjw0bv ^ fkjf3yylwo ; anupfjg1uu = ( ( rtB .
hui1al2usf_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . gu1qqfadr5_fqdqrf4qbc [ i ]
!= 0.0 ) ) ; jiiidi153d = exduqiaqz5 ^ anupfjg1uu ; pvc4zbdx35 = bf0vlo5opv ^
jiiidi153d ; ldbqp1e4fx = ( ( rtB . oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . it55sf43iu_cl54gopm0x [ i ] != 0.0 ) ) ; e13yfxn2yf = pvc4zbdx35 ^
ldbqp1e4fx ; pvc4zbdx35 = ( ( ii05lwzmrl && e13yfxn2yf ) || ( pvc4zbdx35 &&
ldbqp1e4fx ) ) ; bf0vlo5opv = ( ( bf0vlo5opv && jiiidi153d ) || ( exduqiaqz5
&& anupfjg1uu ) ) ; ogkbxjw0bv = ( ( ogkbxjw0bv && fkjf3yylwo ) || (
cdrxvjhgjk && beuzyt1b0l ) ) ; laqjanvpra = ( ( laqjanvpra && ja5gfozxwn ) ||
( grxsvmner4 && jienwguhcb ) ) ; ajl42h2nud = ( ( ajl42h2nud && eopxuynkdw )
|| ( nnkm1kmeqe && nsr4ydnvvc ) ) ; nnkm1kmeqe = ( ( rtB .
m1tylpall1_g1smspu5ke [ i ] != 0.0 ) && ( rtB . ddwzdqluej_dhmrxtyqop [ i ]
!= 0.0 ) ) ; efc3xbubya = ( ( efc3xbubya && dmzesfixdm ) || ( oqauzjrott &&
p5sfuyrcif ) ) ; oqauzjrott = nnkm1kmeqe ^ efc3xbubya ; p5sfuyrcif =
ajl42h2nud ^ oqauzjrott ; dmzesfixdm = ( ( rtB . favs0j21q5_mbvzarwird [ i ]
!= 0.0 ) && ( rtB . efxqyd5t1e_llw0u2ae0v [ i ] != 0.0 ) ) ; nsr4ydnvvc =
p5sfuyrcif ^ dmzesfixdm ; eopxuynkdw = laqjanvpra ^ nsr4ydnvvc ; grxsvmner4 =
( ( rtB . flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
nwjkkgnlx0_nz4o0shxby [ i ] != 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4
; ja5gfozxwn = ogkbxjw0bv ^ jienwguhcb ; cdrxvjhgjk = ( ( rtB .
hui1al2usf_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . nfnxxgcpkj_merlcviukg [ i ]
!= 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^ cdrxvjhgjk ; fkjf3yylwo = bf0vlo5opv ^
beuzyt1b0l ; exduqiaqz5 = ( ( rtB . oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . gu1qqfadr5_fqdqrf4qbc [ i ] != 0.0 ) ) ; anupfjg1uu = fkjf3yylwo ^
exduqiaqz5 ; rtB . hylxakpzl2 [ i ] = pvc4zbdx35 ^ anupfjg1uu ; rtB .
kjubst5cix_al00mdgrv4 [ i ] = eopxuynkdw ; rtB . dihyb5exl5_fdinthrxmb [ i ]
= grxsvmner4 ; rtB . iy31tlyqf2_ezqlmfzvpq [ i ] = jienwguhcb ; rtB .
ewwrsl3jc4_dapv3jlyq5 [ i ] = ja5gfozxwn ; rtB . hrnpdvskco_hv2ho1zopz [ i ]
= cdrxvjhgjk ; rtB . isvadm5izm_bsqwvugooi [ i ] = beuzyt1b0l ; rtB .
cyqsh3akzq_nuebgmauvi [ i ] = fkjf3yylwo ; rtB . n0a2jchllj_bjbgfqrolh [ i ]
= exduqiaqz5 ; rtB . pfd2knai1c_owjr1h1vqy [ i ] = anupfjg1uu ; rtB .
em11pkdoet_dypejvacrn [ i ] = pvc4zbdx35 ; rtB . l3n1qetxrh_ldqodwenvz [ i ]
= ii05lwzmrl ; rtB . iqbpt2yppj_guugdwf2m3 [ i ] = c1ptn0ync0 ; rtB .
nnuxupynsu_dhamdvybc1 [ i ] = ajl42h2nud ; rtB . p2bhm0fwyt_lxo5edjg3c [ i ]
= laqjanvpra ; rtB . nb32g5tgxu_m3ybdk4ikc [ i ] = ogkbxjw0bv ; rtB .
eteq0vcip4_jacdjrqyev [ i ] = bf0vlo5opv ; rtB . jvxbpouugz_h522xzlxvt [ i ]
= oeduxrzwtv ; rtB . cfl0tm1ggf_c0dok3111h [ i ] = n0s3wqoaow ; rtB .
kfhlmwytvr_ctvw0tpkon [ i ] = pfec5f4nay ; rtB . ibhgm2l1py_pxqvlbal2i [ i ]
= e13yfxn2yf ; rtB . dcitiizzud_mdoasc5av4 [ i ] = efc3xbubya ; rtB .
pm0amyolyi_nvsvtgkap4 [ i ] = oqauzjrott ; rtB . dxvfaze2rq_oyypvi4boh [ i ]
= p5sfuyrcif ; rtB . apkkt53mz0_icdfyazkhu [ i ] = dmzesfixdm ; rtB .
bfblodtnnf_jz50ptvnrg [ i ] = nnkm1kmeqe ; rtB . aqds1nisru_ju13rw2h0m [ i ]
= nsr4ydnvvc ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . djfd54zveq
. LoggedData ) , & rtB . hylxakpzl2 [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { fkjf3yylwo = ( ( rtB . em11pkdoet_dypejvacrn [ i ] && rtB .
pfd2knai1c_owjr1h1vqy [ i ] ) || ( rtB . cyqsh3akzq_nuebgmauvi [ i ] && rtB .
n0a2jchllj_bjbgfqrolh [ i ] ) ) ; bf0vlo5opv = ( ( rtB .
eteq0vcip4_jacdjrqyev [ i ] && rtB . isvadm5izm_bsqwvugooi [ i ] ) || ( rtB .
ewwrsl3jc4_dapv3jlyq5 [ i ] && rtB . hrnpdvskco_hv2ho1zopz [ i ] ) ) ;
ogkbxjw0bv = ( ( rtB . nb32g5tgxu_m3ybdk4ikc [ i ] && rtB .
iy31tlyqf2_ezqlmfzvpq [ i ] ) || ( rtB . kjubst5cix_al00mdgrv4 [ i ] && rtB .
dihyb5exl5_fdinthrxmb [ i ] ) ) ; laqjanvpra = ( ( rtB .
p2bhm0fwyt_lxo5edjg3c [ i ] && rtB . aqds1nisru_ju13rw2h0m [ i ] ) || ( rtB .
dxvfaze2rq_oyypvi4boh [ i ] && rtB . apkkt53mz0_icdfyazkhu [ i ] ) ) ;
p5sfuyrcif = ( ( rtB . favs0j21q5_mbvzarwird [ i ] != 0.0 ) && ( rtB .
ddwzdqluej_dhmrxtyqop [ i ] != 0.0 ) ) ; ajl42h2nud = ( ( rtB .
nnuxupynsu_dhamdvybc1 [ i ] && rtB . pm0amyolyi_nvsvtgkap4 [ i ] ) || ( rtB .
bfblodtnnf_jz50ptvnrg [ i ] && rtB . dcitiizzud_mdoasc5av4 [ i ] ) ) ;
efc3xbubya = p5sfuyrcif ^ ajl42h2nud ; oqauzjrott = laqjanvpra ^ efc3xbubya ;
dmzesfixdm = ( ( rtB . flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
efxqyd5t1e_llw0u2ae0v [ i ] != 0.0 ) ) ; nnkm1kmeqe = oqauzjrott ^ dmzesfixdm
; nsr4ydnvvc = ogkbxjw0bv ^ nnkm1kmeqe ; eopxuynkdw = ( ( rtB .
hui1al2usf_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . nwjkkgnlx0_nz4o0shxby [ i ]
!= 0.0 ) ) ; grxsvmner4 = nsr4ydnvvc ^ eopxuynkdw ; jienwguhcb = bf0vlo5opv ^
grxsvmner4 ; ja5gfozxwn = ( ( rtB . oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . nfnxxgcpkj_merlcviukg [ i ] != 0.0 ) ) ; cdrxvjhgjk = jienwguhcb ^
ja5gfozxwn ; rtB . e2gudbfzyg [ i ] = fkjf3yylwo ^ cdrxvjhgjk ; rtB .
cyqsh3akzq_nuebgmauvi [ i ] = fkjf3yylwo ; rtB . eteq0vcip4_jacdjrqyev [ i ]
= bf0vlo5opv ; rtB . ewwrsl3jc4_dapv3jlyq5 [ i ] = ja5gfozxwn ; rtB .
hrnpdvskco_hv2ho1zopz [ i ] = cdrxvjhgjk ; rtB . nb32g5tgxu_m3ybdk4ikc [ i ]
= ogkbxjw0bv ; rtB . iy31tlyqf2_ezqlmfzvpq [ i ] = jienwguhcb ; rtB .
kjubst5cix_al00mdgrv4 [ i ] = eopxuynkdw ; rtB . dihyb5exl5_fdinthrxmb [ i ]
= grxsvmner4 ; rtB . p2bhm0fwyt_lxo5edjg3c [ i ] = laqjanvpra ; rtB .
aqds1nisru_ju13rw2h0m [ i ] = nsr4ydnvvc ; rtB . dxvfaze2rq_oyypvi4boh [ i ]
= p5sfuyrcif ; rtB . apkkt53mz0_icdfyazkhu [ i ] = dmzesfixdm ; rtB .
nnuxupynsu_dhamdvybc1 [ i ] = ajl42h2nud ; rtB . pm0amyolyi_nvsvtgkap4 [ i ]
= oqauzjrott ; rtB . bfblodtnnf_jz50ptvnrg [ i ] = nnkm1kmeqe ; rtB .
dcitiizzud_mdoasc5av4 [ i ] = efc3xbubya ; } if ( ssGetLogOutput ( rtS ) ) {
{ double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . d5r3gt1qtk . LoggedData ) , & rtB . e2gudbfzyg [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { jienwguhcb = ( ( rtB .
cyqsh3akzq_nuebgmauvi [ i ] && rtB . hrnpdvskco_hv2ho1zopz [ i ] ) || ( rtB .
iy31tlyqf2_ezqlmfzvpq [ i ] && rtB . ewwrsl3jc4_dapv3jlyq5 [ i ] ) ) ;
bf0vlo5opv = ( ( rtB . eteq0vcip4_jacdjrqyev [ i ] && rtB .
dihyb5exl5_fdinthrxmb [ i ] ) || ( rtB . aqds1nisru_ju13rw2h0m [ i ] && rtB .
kjubst5cix_al00mdgrv4 [ i ] ) ) ; ogkbxjw0bv = ( ( rtB .
nb32g5tgxu_m3ybdk4ikc [ i ] && rtB . bfblodtnnf_jz50ptvnrg [ i ] ) || ( rtB .
pm0amyolyi_nvsvtgkap4 [ i ] && rtB . apkkt53mz0_icdfyazkhu [ i ] ) ) ;
oqauzjrott = ( ( rtB . flnxxjzl3y_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
ddwzdqluej_dhmrxtyqop [ i ] != 0.0 ) ) ; laqjanvpra = ( ( rtB .
p2bhm0fwyt_lxo5edjg3c [ i ] && rtB . dcitiizzud_mdoasc5av4 [ i ] ) || ( rtB .
dxvfaze2rq_oyypvi4boh [ i ] && rtB . nnuxupynsu_dhamdvybc1 [ i ] ) ) ;
ajl42h2nud = oqauzjrott ^ laqjanvpra ; efc3xbubya = ogkbxjw0bv ^ ajl42h2nud ;
p5sfuyrcif = ( ( rtB . hui1al2usf_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
efxqyd5t1e_llw0u2ae0v [ i ] != 0.0 ) ) ; dmzesfixdm = efc3xbubya ^ p5sfuyrcif
; nnkm1kmeqe = bf0vlo5opv ^ dmzesfixdm ; nsr4ydnvvc = ( ( rtB .
oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . nwjkkgnlx0_nz4o0shxby [ i ]
!= 0.0 ) ) ; eopxuynkdw = nnkm1kmeqe ^ nsr4ydnvvc ; rtB . cizjerxfp1 [ i ] =
jienwguhcb ^ eopxuynkdw ; rtB . iy31tlyqf2_ezqlmfzvpq [ i ] = jienwguhcb ;
rtB . eteq0vcip4_jacdjrqyev [ i ] = bf0vlo5opv ; rtB . aqds1nisru_ju13rw2h0m
[ i ] = nsr4ydnvvc ; rtB . kjubst5cix_al00mdgrv4 [ i ] = eopxuynkdw ; rtB .
nb32g5tgxu_m3ybdk4ikc [ i ] = ogkbxjw0bv ; rtB . bfblodtnnf_jz50ptvnrg [ i ]
= nnkm1kmeqe ; rtB . pm0amyolyi_nvsvtgkap4 [ i ] = oqauzjrott ; rtB .
apkkt53mz0_icdfyazkhu [ i ] = dmzesfixdm ; rtB . p2bhm0fwyt_lxo5edjg3c [ i ]
= laqjanvpra ; rtB . dcitiizzud_mdoasc5av4 [ i ] = efc3xbubya ; rtB .
dxvfaze2rq_oyypvi4boh [ i ] = p5sfuyrcif ; rtB . nnuxupynsu_dhamdvybc1 [ i ]
= ajl42h2nud ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . buq141ezul
. LoggedData ) , & rtB . cizjerxfp1 [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { nnkm1kmeqe = ( ( rtB . iy31tlyqf2_ezqlmfzvpq [ i ] && rtB .
kjubst5cix_al00mdgrv4 [ i ] ) || ( rtB . bfblodtnnf_jz50ptvnrg [ i ] && rtB .
aqds1nisru_ju13rw2h0m [ i ] ) ) ; bf0vlo5opv = ( ( rtB .
eteq0vcip4_jacdjrqyev [ i ] && rtB . apkkt53mz0_icdfyazkhu [ i ] ) || ( rtB .
dcitiizzud_mdoasc5av4 [ i ] && rtB . dxvfaze2rq_oyypvi4boh [ i ] ) ) ;
efc3xbubya = ( ( rtB . hui1al2usf_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
ddwzdqluej_dhmrxtyqop [ i ] != 0.0 ) ) ; ogkbxjw0bv = ( ( rtB .
nb32g5tgxu_m3ybdk4ikc [ i ] && rtB . nnuxupynsu_dhamdvybc1 [ i ] ) || ( rtB .
pm0amyolyi_nvsvtgkap4 [ i ] && rtB . p2bhm0fwyt_lxo5edjg3c [ i ] ) ) ;
laqjanvpra = efc3xbubya ^ ogkbxjw0bv ; ajl42h2nud = bf0vlo5opv ^ laqjanvpra ;
oqauzjrott = ( ( rtB . oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
efxqyd5t1e_llw0u2ae0v [ i ] != 0.0 ) ) ; p5sfuyrcif = ajl42h2nud ^ oqauzjrott
; rtB . lyapzwh0q0 [ i ] = nnkm1kmeqe ^ p5sfuyrcif ; rtB .
bfblodtnnf_jz50ptvnrg [ i ] = nnkm1kmeqe ; rtB . eteq0vcip4_jacdjrqyev [ i ]
= bf0vlo5opv ; rtB . dcitiizzud_mdoasc5av4 [ i ] = efc3xbubya ; rtB .
dxvfaze2rq_oyypvi4boh [ i ] = p5sfuyrcif ; rtB . nb32g5tgxu_m3ybdk4ikc [ i ]
= ogkbxjw0bv ; rtB . nnuxupynsu_dhamdvybc1 [ i ] = ajl42h2nud ; rtB .
pm0amyolyi_nvsvtgkap4 [ i ] = oqauzjrott ; rtB . p2bhm0fwyt_lxo5edjg3c [ i ]
= laqjanvpra ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ovr2iox4zn
. LoggedData ) , & rtB . lyapzwh0q0 [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { ajl42h2nud = ( ( rtB . bfblodtnnf_jz50ptvnrg [ i ] && rtB .
dxvfaze2rq_oyypvi4boh [ i ] ) || ( rtB . nnuxupynsu_dhamdvybc1 [ i ] && rtB .
pm0amyolyi_nvsvtgkap4 [ i ] ) ) ; oqauzjrott = ( ( rtB .
oqn1eghzmz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . ddwzdqluej_dhmrxtyqop [ i ]
!= 0.0 ) ) ; bf0vlo5opv = ( ( rtB . eteq0vcip4_jacdjrqyev [ i ] && rtB .
p2bhm0fwyt_lxo5edjg3c [ i ] ) || ( rtB . dcitiizzud_mdoasc5av4 [ i ] && rtB .
nb32g5tgxu_m3ybdk4ikc [ i ] ) ) ; ogkbxjw0bv = oqauzjrott ^ bf0vlo5opv ; rtB
. noqvucsf4c [ i ] = ajl42h2nud ^ ogkbxjw0bv ; rtB . nnuxupynsu_dhamdvybc1 [
i ] = ajl42h2nud ; rtB . pm0amyolyi_nvsvtgkap4 [ i ] = oqauzjrott ; rtB .
eteq0vcip4_jacdjrqyev [ i ] = bf0vlo5opv ; rtB . nb32g5tgxu_m3ybdk4ikc [ i ]
= ogkbxjw0bv ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . apbmqvnfyd
. LoggedData ) , & rtB . noqvucsf4c [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
65536 ; i ++ ) { rtB . d0ogx0dgen [ i ] = ( ( rtB . nnuxupynsu_dhamdvybc1 [ i
] && rtB . nb32g5tgxu_m3ybdk4ikc [ i ] ) || ( rtB . pm0amyolyi_nvsvtgkap4 [ i
] && rtB . eteq0vcip4_jacdjrqyev [ i ] ) ) ; } if ( ssGetLogOutput ( rtS ) )
{ { double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . figs1pdllv . LoggedData ) , & rtB . d0ogx0dgen [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . l0yxy1trsz [ i ] = ( rtB .
b235j3khds_lnjdk5wtww [ i ] || ( rtP . Constant1_Value != 0.0 ) ) ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ghgjezc2no . LoggedData ) , & rtB . l0yxy1trsz [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . aiosmdxa2l [ i ] = ( rtB .
lhd2bsk1u2_bnlywzniup [ i ] || ( rtP . Constant3_Value != 0.0 ) ) ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . daxhxgnuhd . LoggedData ) , & rtB . aiosmdxa2l [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . fexnua0eu1 [ i ] = rtB .
pmb0bhdbv5_bjvjhhzy4i [ i ] ^ rtB . euba5vafq4_jzx3amusab [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ldwjz3eh43 . LoggedData ) , & rtB . fexnua0eu1 [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . ig5johsy1x [ i ] = rtB .
jrqvjh1kg5_o4f35lbcvx [ i ] ^ rtB . lam5dywnob_nyxm0bsxsn [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ak2hahct4v . LoggedData ) , & rtB . ig5johsy1x [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . cjfjjcf1xa [ i ] = rtB .
dr3drxnfhr_m3yhjduhi1 [ i ] ^ rtB . ihpwyzsryj_czkfpwuzm5 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . gqhwwusxhu . LoggedData ) , & rtB . cjfjjcf1xa [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . jkdoicrvaa [ i ] = rtB .
jvxbpouugz_h522xzlxvt [ i ] ^ rtB . cfl0tm1ggf_c0dok3111h [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . klzr21neu1 . LoggedData ) , & rtB . jkdoicrvaa [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . oujdf1cc4w [ i ] = rtB .
kfhlmwytvr_ctvw0tpkon [ i ] ^ rtB . iqbpt2yppj_guugdwf2m3 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . n3g1rf42ev . LoggedData ) , & rtB . oujdf1cc4w [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . mtnyuvdch4 [ i ] = rtB .
l3n1qetxrh_ldqodwenvz [ i ] ^ rtB . ibhgm2l1py_pxqvlbal2i [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ldp5u1kzwu . LoggedData ) , & rtB . mtnyuvdch4 [ 0 ] , 0
) ; } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER
( tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlTerminate ( void ) { rt_FREE ( rtDW . gnbyk1vfpw . RSimInfoPtr ) ;
rt_FREE ( rtDW . npiehoddtj . RSimInfoPtr ) ; rt_FREE ( rtDW . my2hna4bv5 .
RSimInfoPtr ) ; rt_FREE ( rtDW . hd0v2iido5 . RSimInfoPtr ) ; rt_FREE ( rtDW
. fmgxrjxk2n . RSimInfoPtr ) ; rt_FREE ( rtDW . eiqxbuesbz . RSimInfoPtr ) ;
rt_FREE ( rtDW . luhxwyafiu . RSimInfoPtr ) ; rt_FREE ( rtDW . hzvynktexa .
RSimInfoPtr ) ; rt_FREE ( rtDW . eqacg2g0mx . RSimInfoPtr ) ; rt_FREE ( rtDW
. kocbkcq1ny . RSimInfoPtr ) ; rt_FREE ( rtDW . ejgvioxsis . RSimInfoPtr ) ;
rt_FREE ( rtDW . cdedddumvu . RSimInfoPtr ) ; rt_FREE ( rtDW . ewbt0atfr2 .
RSimInfoPtr ) ; rt_FREE ( rtDW . bwrixaskfc . RSimInfoPtr ) ; rt_FREE ( rtDW
. kyuqkps5fr . RSimInfoPtr ) ; rt_FREE ( rtDW . nijly2wvbr . RSimInfoPtr ) ;
{ if ( rtDW . cqnhljthsr . AQHandles ) { sdiTerminateStreaming ( & rtDW .
cqnhljthsr . AQHandles ) ; } } { if ( rtDW . gbymj2ovto . AQHandles ) {
sdiTerminateStreaming ( & rtDW . gbymj2ovto . AQHandles ) ; } } } static void
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Normal_Multiplier_InXA2_NAB4_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) ; static void
mr_Normal_Multiplier_InXA2_NAB4_cacheBitFieldToMxArray ( mxArray * destArray
, mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i ,
j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Normal_Multiplier_InXA2_NAB4_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Normal_Multiplier_InXA2_NAB4_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Normal_Multiplier_InXA2_NAB4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Normal_Multiplier_InXA2_NAB4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArrayWithOffset ( void
* destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Normal_Multiplier_InXA2_NAB4_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_Normal_Multiplier_InXA2_NAB4_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Normal_Multiplier_InXA2_NAB4_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_Normal_Multiplier_InXA2_NAB4_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Normal_Multiplier_InXA2_NAB4_GetDWork
( ) { static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( ssDW
, 0 , 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char
* rtdwDataFieldNames [ 16 ] = { "rtDW.gtugm1qhhu" , "rtDW.hjbxnaclbx" ,
"rtDW.jpw5msa5vc" , "rtDW.lgunhngoxg" , "rtDW.jg1qrtf2sl" , "rtDW.hq3pyscxok"
, "rtDW.j5bjhwt11y" , "rtDW.hpkbuzawxv" , "rtDW.fzkfbubcgq" ,
"rtDW.elnvzbtyvt" , "rtDW.cnkd33dq50" , "rtDW.aahfl2c5s1" , "rtDW.krwyoel2ll"
, "rtDW.lx30wb3zrx" , "rtDW.gighpgdqo2" , "rtDW.eppx5hicmk" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 16 , rtdwDataFieldNames ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( rtDW . gtugm1qhhu ) , sizeof ( rtDW . gtugm1qhhu ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const void * ) & ( rtDW . hjbxnaclbx ) , sizeof ( rtDW . hjbxnaclbx ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( rtDW . jpw5msa5vc ) , sizeof ( rtDW . jpw5msa5vc ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 3 , (
const void * ) & ( rtDW . lgunhngoxg ) , sizeof ( rtDW . lgunhngoxg ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( rtDW . jg1qrtf2sl ) , sizeof ( rtDW . jg1qrtf2sl ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 5 , (
const void * ) & ( rtDW . hq3pyscxok ) , sizeof ( rtDW . hq3pyscxok ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 6 , (
const void * ) & ( rtDW . j5bjhwt11y ) , sizeof ( rtDW . j5bjhwt11y ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 7 , (
const void * ) & ( rtDW . hpkbuzawxv ) , sizeof ( rtDW . hpkbuzawxv ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( rtDW . fzkfbubcgq ) , sizeof ( rtDW . fzkfbubcgq ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 9 , (
const void * ) & ( rtDW . elnvzbtyvt ) , sizeof ( rtDW . elnvzbtyvt ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 10 , (
const void * ) & ( rtDW . cnkd33dq50 ) , sizeof ( rtDW . cnkd33dq50 ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( rtDW . aahfl2c5s1 ) , sizeof ( rtDW . aahfl2c5s1 ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 12 , (
const void * ) & ( rtDW . krwyoel2ll ) , sizeof ( rtDW . krwyoel2ll ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 13 , (
const void * ) & ( rtDW . lx30wb3zrx ) , sizeof ( rtDW . lx30wb3zrx ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const void * ) & ( rtDW . gighpgdqo2 ) , sizeof ( rtDW . gighpgdqo2 ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 15 , (
const void * ) & ( rtDW . eppx5hicmk ) , sizeof ( rtDW . eppx5hicmk ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Normal_Multiplier_InXA2_NAB4_SetDWork ( const mxArray * ssDW ) { ( void )
ssDW ; mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) &
( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. gtugm1qhhu ) , rtdwData , 0 , 0 , sizeof ( rtDW . gtugm1qhhu ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. hjbxnaclbx ) , rtdwData , 0 , 1 , sizeof ( rtDW . hjbxnaclbx ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. jpw5msa5vc ) , rtdwData , 0 , 2 , sizeof ( rtDW . jpw5msa5vc ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. lgunhngoxg ) , rtdwData , 0 , 3 , sizeof ( rtDW . lgunhngoxg ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. jg1qrtf2sl ) , rtdwData , 0 , 4 , sizeof ( rtDW . jg1qrtf2sl ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. hq3pyscxok ) , rtdwData , 0 , 5 , sizeof ( rtDW . hq3pyscxok ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. j5bjhwt11y ) , rtdwData , 0 , 6 , sizeof ( rtDW . j5bjhwt11y ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. hpkbuzawxv ) , rtdwData , 0 , 7 , sizeof ( rtDW . hpkbuzawxv ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. fzkfbubcgq ) , rtdwData , 0 , 8 , sizeof ( rtDW . fzkfbubcgq ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. elnvzbtyvt ) , rtdwData , 0 , 9 , sizeof ( rtDW . elnvzbtyvt ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. cnkd33dq50 ) , rtdwData , 0 , 10 , sizeof ( rtDW . cnkd33dq50 ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. aahfl2c5s1 ) , rtdwData , 0 , 11 , sizeof ( rtDW . aahfl2c5s1 ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. krwyoel2ll ) , rtdwData , 0 , 12 , sizeof ( rtDW . krwyoel2ll ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. lx30wb3zrx ) , rtdwData , 0 , 13 , sizeof ( rtDW . lx30wb3zrx ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. gighpgdqo2 ) , rtdwData , 0 , 14 , sizeof ( rtDW . gighpgdqo2 ) ) ;
mr_Normal_Multiplier_InXA2_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW
. eppx5hicmk ) , rtdwData , 0 , 15 , sizeof ( rtDW . eppx5hicmk ) ) ; } }
mxArray * mr_Normal_Multiplier_InXA2_NAB4_GetSimStateDisallowedBlocks ( ) {
return NULL ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 366 )
; ssSetNumBlockIO ( rtS , 18 ) ; ssSetNumBlockParams ( rtS , 2097187 ) ; }
void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 48784481U ) ; ssSetChecksumVal ( rtS , 1 ,
2902915658U ) ; ssSetChecksumVal ( rtS , 2 , 2133966256U ) ; ssSetChecksumVal
( rtS , 3 , 2717791975U ) ; }
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
Normal_Multiplier_InXA2_NAB4_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Normal_Multiplier_InXA2_NAB4" ) ; ssSetPath ( rtS ,
"Normal_Multiplier_InXA2_NAB4" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
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
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 , 48784481U
) ; ssSetChecksumVal ( rtS , 1 , 2902915658U ) ; ssSetChecksumVal ( rtS , 2 ,
2133966256U ) ; ssSetChecksumVal ( rtS , 3 , 2717791975U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Normal_Multiplier_InXA2_NAB4_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Normal_Multiplier_InXA2_NAB4_GetDWork
) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Normal_Multiplier_InXA2_NAB4_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
