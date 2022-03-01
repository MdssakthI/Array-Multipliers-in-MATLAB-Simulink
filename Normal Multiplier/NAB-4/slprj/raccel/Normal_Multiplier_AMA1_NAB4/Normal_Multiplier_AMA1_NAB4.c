#include "rt_logging_mmi.h"
#include "Normal_Multiplier_AMA1_NAB4_capi.h"
#include <math.h>
#include "Normal_Multiplier_AMA1_NAB4.h"
#include "Normal_Multiplier_AMA1_NAB4_private.h"
#include "Normal_Multiplier_AMA1_NAB4_dt.h"
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
= sdiGetLabelFromChars ( "Normal_Multiplier_AMA1_NAB4/Partial Product Row 5"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 250000 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 5 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. dx5s3uwqau . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7af74198-53a3-4558-8a13-1109cc743f19" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . dx5s3uwqau . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . dx5s3uwqau . AQHandles , "0.01" ,
0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . dx5s3uwqau .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dx5s3uwqau . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dx5s3uwqau . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Normal_Multiplier_AMA1_NAB4/Partial Product Row 8" )
; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 250000 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 6 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jf0hghzqai . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"9e9c58a6-b172-4822-a9fb-09f7541551d3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . jf0hghzqai . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . jf0hghzqai . AQHandles , "0.01" ,
0.01 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . jf0hghzqai .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . jf0hghzqai . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . jf0hghzqai . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 250000 } ; rtDW . nfragcbcxx . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nfragcbcxx . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . mjbvjuyhmx . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . mjbvjuyhmx . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . m5mg4z5ebi . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . m5mg4z5ebi . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . ha1fwacylw . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ha1fwacylw . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . muz2bhjt4s . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . muz2bhjt4s . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . bukctp4lfh . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . bukctp4lfh . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . e324zd4vsk . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . e324zd4vsk . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . hjigikktg3 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . hjigikktg3 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . kj1sde5cxa . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . kj1sde5cxa . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . mqqifw5u1d . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . mqqifw5u1d . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . pvbt4rjdrv . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . pvbt4rjdrv . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . pl2tm32hqx . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . pl2tm32hqx . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . fxrziqiktn . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . fxrziqiktn . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . dly0dk4jjq . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . dly0dk4jjq . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . lgdf2zo4wc . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . lgdf2zo4wc . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 250000 } ; rtDW . lwezto5dff . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 250000 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . lwezto5dff . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . ojtbpb1yy5 . TimePtr = fromwksInfo -> time ;
rtDW . ojtbpb1yy5 . DataPtr = fromwksInfo -> data ; rtDW . ojtbpb1yy5 .
RSimInfoPtr = fromwksInfo ; } rtDW . kh0x535rb5 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . f1tmsjtqnt . TimePtr = fromwksInfo -> time ;
rtDW . f1tmsjtqnt . DataPtr = fromwksInfo -> data ; rtDW . f1tmsjtqnt .
RSimInfoPtr = fromwksInfo ; } rtDW . a5eejfdcqf . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . bfytgcxbki . TimePtr = fromwksInfo -> time ;
rtDW . bfytgcxbki . DataPtr = fromwksInfo -> data ; rtDW . bfytgcxbki .
RSimInfoPtr = fromwksInfo ; } rtDW . hfywki0r05 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . djzkjp023y . TimePtr = fromwksInfo -> time ;
rtDW . djzkjp023y . DataPtr = fromwksInfo -> data ; rtDW . djzkjp023y .
RSimInfoPtr = fromwksInfo ; } rtDW . cc3izxqqgf . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . kmna4jad2b . TimePtr = fromwksInfo -> time ;
rtDW . kmna4jad2b . DataPtr = fromwksInfo -> data ; rtDW . kmna4jad2b .
RSimInfoPtr = fromwksInfo ; } rtDW . d5ulhfztgc . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . aufaasvjgl . TimePtr = fromwksInfo -> time ;
rtDW . aufaasvjgl . DataPtr = fromwksInfo -> data ; rtDW . aufaasvjgl .
RSimInfoPtr = fromwksInfo ; } rtDW . arcmxsixf4 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . kvb5m1pcgv . TimePtr = fromwksInfo -> time ;
rtDW . kvb5m1pcgv . DataPtr = fromwksInfo -> data ; rtDW . kvb5m1pcgv .
RSimInfoPtr = fromwksInfo ; } rtDW . mlet1tetrq . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . mlk4hix5ud . TimePtr = fromwksInfo -> time ;
rtDW . mlk4hix5ud . DataPtr = fromwksInfo -> data ; rtDW . mlk4hix5ud .
RSimInfoPtr = fromwksInfo ; } rtDW . kfae21jer3 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . lrq2lg0xm3 . TimePtr = fromwksInfo -> time ;
rtDW . lrq2lg0xm3 . DataPtr = fromwksInfo -> data ; rtDW . lrq2lg0xm3 .
RSimInfoPtr = fromwksInfo ; } rtDW . kchhb3bx1t . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . e2wcgahprl . TimePtr = fromwksInfo -> time ;
rtDW . e2wcgahprl . DataPtr = fromwksInfo -> data ; rtDW . e2wcgahprl .
RSimInfoPtr = fromwksInfo ; } rtDW . k0pqdq20eu . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . prrcw4alw4 . TimePtr = fromwksInfo -> time ;
rtDW . prrcw4alw4 . DataPtr = fromwksInfo -> data ; rtDW . prrcw4alw4 .
RSimInfoPtr = fromwksInfo ; } rtDW . gxxpejzeeu . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . oahvl2yyy3 . TimePtr = fromwksInfo -> time ;
rtDW . oahvl2yyy3 . DataPtr = fromwksInfo -> data ; rtDW . oahvl2yyy3 .
RSimInfoPtr = fromwksInfo ; } rtDW . nsfyw35vta . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . eot3d5vx3e . TimePtr = fromwksInfo -> time ;
rtDW . eot3d5vx3e . DataPtr = fromwksInfo -> data ; rtDW . eot3d5vx3e .
RSimInfoPtr = fromwksInfo ; } rtDW . glsasphhw2 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . hjyyno5nqo . TimePtr = fromwksInfo -> time ;
rtDW . hjyyno5nqo . DataPtr = fromwksInfo -> data ; rtDW . hjyyno5nqo .
RSimInfoPtr = fromwksInfo ; } rtDW . ccyhxmy2qg . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . kt4kigj1cq . TimePtr = fromwksInfo -> time ;
rtDW . kt4kigj1cq . DataPtr = fromwksInfo -> data ; rtDW . kt4kigj1cq .
RSimInfoPtr = fromwksInfo ; } rtDW . axak2gonlb . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 250000 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . m2dox4smlm . TimePtr = fromwksInfo -> time ;
rtDW . m2dox4smlm . DataPtr = fromwksInfo -> data ; rtDW . m2dox4smlm .
RSimInfoPtr = fromwksInfo ; } rtDW . hnjjnciu15 . PrevIndex = 0 ; } } void
MdlOutputs ( int_T tid ) { int32_T i ; boolean_T ajl42h2nud ; boolean_T
anupfjg1uu ; boolean_T beuzyt1b0l ; boolean_T bf0vlo5opv ; boolean_T
c1ptn0ync0 ; boolean_T campykoil0 ; boolean_T dmzesfixdm ; boolean_T
duelrvvo2i ; boolean_T e13yfxn2yf ; boolean_T efc3xbubya ; boolean_T
eopxuynkdw ; boolean_T grxsvmner4 ; boolean_T ii05lwzmrl ; boolean_T
ja5gfozxwn ; boolean_T jienwguhcb ; boolean_T jiiidi153d ; boolean_T
laqjanvpra ; boolean_T ldbqp1e4fx ; boolean_T n0s3wqoaow ; boolean_T
nnkm1kmeqe ; boolean_T nsr4ydnvvc ; boolean_T nx31agpn4b ; boolean_T
oeduxrzwtv ; boolean_T ogkbxjw0bv ; boolean_T oqauzjrott ; boolean_T
p5sfuyrcif ; boolean_T pfec5f4nay ; boolean_T pvc4zbdx35 ; { real_T *
pDataValues = ( real_T * ) rtDW . ojtbpb1yy5 . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . ojtbpb1yy5 . TimePtr ; int_T currTimeIndex = rtDW .
kh0x535rb5 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ojtbpb1yy5 .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . kh0x535rb5 . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB .
lxezyz54zx_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 250000 ; ++ elIdx ) { ( & rtB . lxezyz54zx_mbvzarwird [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . lxezyz54zx_mbvzarwird [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } { real_T * pDataValues = ( real_T * ) rtDW . f1tmsjtqnt
. DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . f1tmsjtqnt . TimePtr ;
int_T currTimeIndex = rtDW . a5eejfdcqf . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . f1tmsjtqnt . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . a5eejfdcqf . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . bizyusrhcy_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . bizyusrhcy_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . bizyusrhcy_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { rtB . k0hyfnm1ch [ i ] = ( ( rtB . lxezyz54zx_mbvzarwird [
i ] != 0.0 ) && ( rtB . bizyusrhcy_cl54gopm0x [ i ] != 0.0 ) ) ; } { if (
rtDW . dx5s3uwqau . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
rtDW . dx5s3uwqau . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB
. k0hyfnm1ch [ 0 ] + 0 ) ; } } { real_T * pDataValues = ( real_T * ) rtDW .
bfytgcxbki . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . bfytgcxbki
. TimePtr ; int_T currTimeIndex = rtDW . hfywki0r05 . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . bfytgcxbki . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hfywki0r05 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . dr4ev3edcz_kkiq3xxxve [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . dr4ev3edcz_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . dr4ev3edcz_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T *
pDataValues = ( real_T * ) rtDW . djzkjp023y . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . djzkjp023y . TimePtr ; int_T currTimeIndex = rtDW .
cc3izxqqgf . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . djzkjp023y .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . cc3izxqqgf . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB .
fpakcfbngs_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 250000 ; ++ elIdx ) { ( & rtB . fpakcfbngs_cxarnvbvui [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . fpakcfbngs_cxarnvbvui [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 250000 ; i ++ ) { rtB . meiz31siww [
i ] = ( ( rtB . dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
fpakcfbngs_cxarnvbvui [ i ] != 0.0 ) ) ; } { if ( rtDW . jf0hghzqai .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . jf0hghzqai .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . meiz31siww [ 0 ] +
0 ) ; } } { real_T * pDataValues = ( real_T * ) rtDW . kmna4jad2b . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . kmna4jad2b . TimePtr ; int_T
currTimeIndex = rtDW . d5ulhfztgc . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . kmna4jad2b . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
d5ulhfztgc . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++
elIdx ) { ( & rtB . i2mcaeso2f_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . i2mcaeso2f_bhxxfovxdy [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
i2mcaeso2f_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . aufaasvjgl . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . aufaasvjgl . TimePtr ; int_T currTimeIndex = rtDW . arcmxsixf4 .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . aufaasvjgl . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . arcmxsixf4 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . bdgha0hxjx_pbm3vprmfu [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . bdgha0hxjx_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . bdgha0hxjx_pbm3vprmfu [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { rtB . d54z2dljwq [ i ] = ( ( rtB . i2mcaeso2f_bhxxfovxdy [
i ] != 0.0 ) && ( rtB . bdgha0hxjx_pbm3vprmfu [ i ] != 0.0 ) ) ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . nfragcbcxx . LoggedData ) , & rtB . d54z2dljwq [ 0 ] , 0
) ; } } } { real_T * pDataValues = ( real_T * ) rtDW . kvb5m1pcgv . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . kvb5m1pcgv . TimePtr ; int_T
currTimeIndex = rtDW . mlet1tetrq . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . kvb5m1pcgv . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
mlet1tetrq . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++
elIdx ) { ( & rtB . etcj3dyvzl_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . etcj3dyvzl_cv5hdgrwft [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
etcj3dyvzl_cv5hdgrwft [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 250000 ;
i ++ ) { c1ptn0ync0 = ( ( rtB . etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 ) && ( rtB
. bdgha0hxjx_pbm3vprmfu [ i ] != 0.0 ) ) ; duelrvvo2i = ( ( rtB .
i2mcaeso2f_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . fpakcfbngs_cxarnvbvui [ i ]
!= 0.0 ) ) ; rtB . mcbil1nyld [ i ] = ( ( c1ptn0ync0 && duelrvvo2i && ( rtP .
Constant1_Value != 0.0 ) ) || ( ( ! c1ptn0ync0 ) && ( ! duelrvvo2i ) && ( rtP
. Constant1_Value != 0.0 ) ) ) ; rtB . hbuqdxbtks_guugdwf2m3 [ i ] =
c1ptn0ync0 ; rtB . fupdsxr3pl_ldqodwenvz [ i ] = duelrvvo2i ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . mjbvjuyhmx . LoggedData ) , & rtB . mcbil1nyld [ 0 ] , 0
) ; } } } { real_T * pDataValues = ( real_T * ) rtDW . mlk4hix5ud . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . mlk4hix5ud . TimePtr ; int_T
currTimeIndex = rtDW . kfae21jer3 . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . mlk4hix5ud . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
kfae21jer3 . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++
elIdx ) { ( & rtB . bzbddphp2z_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . bzbddphp2z_fqdqrf4qbc [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
bzbddphp2z_fqdqrf4qbc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 250000 ;
i ++ ) { rtB . c2xyqx54lp_dhamdvybc1 [ i ] = ( ( rtB . bzbddphp2z_fqdqrf4qbc
[ i ] != 0.0 ) && ( rtB . bdgha0hxjx_pbm3vprmfu [ i ] != 0.0 ) ) ; } { real_T
* pDataValues = ( real_T * ) rtDW . lrq2lg0xm3 . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . lrq2lg0xm3 . TimePtr ; int_T currTimeIndex
= rtDW . kchhb3bx1t . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
lrq2lg0xm3 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . kchhb3bx1t .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB .
i41lku0xtd_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 250000 ; ++ elIdx ) { ( & rtB . i41lku0xtd_g2mlkqadfk [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { d1 = pDataValues [ TimeIndex ] ; d2
= pDataValues [ TimeIndex + 1 ] ; ( & rtB . i41lku0xtd_g2mlkqadfk [ 0 ] ) [
elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } for ( i = 0 ; i < 250000 ; i ++ ) { ii05lwzmrl = ( (
rtB . i2mcaeso2f_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . i41lku0xtd_g2mlkqadfk [
i ] != 0.0 ) ) ; ldbqp1e4fx = ( ( rtB . etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 )
&& ( rtB . bizyusrhcy_cl54gopm0x [ i ] != 0.0 ) ) ; pvc4zbdx35 = ( ( rtB .
etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . fpakcfbngs_cxarnvbvui [ i ]
!= 0.0 ) ) ; nx31agpn4b = ( ( rtB . i2mcaeso2f_bhxxfovxdy [ i ] != 0.0 ) && (
rtB . bizyusrhcy_cl54gopm0x [ i ] != 0.0 ) ) ; duelrvvo2i = ( rtB .
fupdsxr3pl_ldqodwenvz [ i ] || ( rtB . hbuqdxbtks_guugdwf2m3 [ i ] && ( rtP .
Constant1_Value != 0.0 ) ) ) ; c1ptn0ync0 = ( pvc4zbdx35 || ( nx31agpn4b &&
duelrvvo2i ) ) ; rtB . nu5mreydr0_nuebgmauvi [ i ] = ( ( ii05lwzmrl &&
ldbqp1e4fx && c1ptn0ync0 ) || ( ( ! ii05lwzmrl ) && ( ! ldbqp1e4fx ) &&
c1ptn0ync0 ) ) ; rtB . jxhdxn1zm4_dypejvacrn [ i ] = ii05lwzmrl ; rtB .
blq25rfr55_lxo5edjg3c [ i ] = ldbqp1e4fx ; rtB . oatn4x5chp_owjr1h1vqy [ i ]
= pvc4zbdx35 ; rtB . b1nzbkbzfu_bjbgfqrolh [ i ] = nx31agpn4b ; rtB .
fupdsxr3pl_ldqodwenvz [ i ] = duelrvvo2i ; rtB . hbuqdxbtks_guugdwf2m3 [ i ]
= c1ptn0ync0 ; } { real_T * pDataValues = ( real_T * ) rtDW . e2wcgahprl .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . e2wcgahprl . TimePtr ;
int_T currTimeIndex = rtDW . k0pqdq20eu . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . e2wcgahprl . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . k0pqdq20eu . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . mwy1vcjgju_g1smspu5ke [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . mwy1vcjgju_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . mwy1vcjgju_g1smspu5ke [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { nx31agpn4b = rtB . b1nzbkbzfu_bjbgfqrolh [ i ] ; pvc4zbdx35
= rtB . oatn4x5chp_owjr1h1vqy [ i ] ; duelrvvo2i = rtB .
fupdsxr3pl_ldqodwenvz [ i ] ; jiiidi153d = rtB . nu5mreydr0_nuebgmauvi [ i ]
; anupfjg1uu = ( ( rtB . mwy1vcjgju_g1smspu5ke [ i ] != 0.0 ) && ( rtB .
fpakcfbngs_cxarnvbvui [ i ] != 0.0 ) ) ; c1ptn0ync0 = ( ( rtB .
mwy1vcjgju_g1smspu5ke [ i ] != 0.0 ) && ( rtB . bdgha0hxjx_pbm3vprmfu [ i ]
!= 0.0 ) ) ; nx31agpn4b = ( ( nx31agpn4b && pvc4zbdx35 && duelrvvo2i ) || ( (
! nx31agpn4b ) && ( ! pvc4zbdx35 ) && duelrvvo2i ) ) ; pvc4zbdx35 = (
c1ptn0ync0 || ( nx31agpn4b && ( rtP . Constant2_Value != 0.0 ) ) ) ;
duelrvvo2i = ( ( jiiidi153d && anupfjg1uu && pvc4zbdx35 ) || ( ( ! jiiidi153d
) && ( ! anupfjg1uu ) && pvc4zbdx35 ) ) ; rtB . latn0didbk_hv2ho1zopz [ i ] =
( rtB . c2xyqx54lp_dhamdvybc1 [ i ] || ( duelrvvo2i && ( rtP .
Constant3_Value != 0.0 ) ) ) ; rtB . a1nvqdw5tg_bsqwvugooi [ i ] = (
anupfjg1uu || ( jiiidi153d && pvc4zbdx35 ) ) ; rtB . gfaeaqkjgu_lnjdk5wtww [
i ] = c1ptn0ync0 ; rtB . fupdsxr3pl_ldqodwenvz [ i ] = duelrvvo2i ; rtB .
oatn4x5chp_owjr1h1vqy [ i ] = pvc4zbdx35 ; rtB . b1nzbkbzfu_bjbgfqrolh [ i ]
= nx31agpn4b ; rtB . blq25rfr55_lxo5edjg3c [ i ] = ( rtB .
blq25rfr55_lxo5edjg3c [ i ] || ( rtB . jxhdxn1zm4_dypejvacrn [ i ] && rtB .
hbuqdxbtks_guugdwf2m3 [ i ] ) ) ; } { real_T * pDataValues = ( real_T * )
rtDW . prrcw4alw4 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
prrcw4alw4 . TimePtr ; int_T currTimeIndex = rtDW . gxxpejzeeu . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . prrcw4alw4 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . gxxpejzeeu . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . opvtlfe3p0_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . opvtlfe3p0_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . opvtlfe3p0_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { duelrvvo2i = rtB . latn0didbk_hv2ho1zopz [ i ] ; anupfjg1uu
= rtB . a1nvqdw5tg_bsqwvugooi [ i ] ; ldbqp1e4fx = rtB .
blq25rfr55_lxo5edjg3c [ i ] ; jiiidi153d = ( ( rtB . i2mcaeso2f_bhxxfovxdy [
i ] != 0.0 ) && ( rtB . opvtlfe3p0_merlcviukg [ i ] != 0.0 ) ) ; pvc4zbdx35 =
( ( rtB . etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 ) && ( rtB .
i41lku0xtd_g2mlkqadfk [ i ] != 0.0 ) ) ; ii05lwzmrl = jiiidi153d ^ pvc4zbdx35
; c1ptn0ync0 = ldbqp1e4fx ^ ii05lwzmrl ; nx31agpn4b = ( ( rtB .
mwy1vcjgju_g1smspu5ke [ i ] != 0.0 ) && ( rtB . bizyusrhcy_cl54gopm0x [ i ]
!= 0.0 ) ) ; beuzyt1b0l = c1ptn0ync0 ^ nx31agpn4b ; campykoil0 = anupfjg1uu ^
beuzyt1b0l ; ja5gfozxwn = ( ( rtB . bzbddphp2z_fqdqrf4qbc [ i ] != 0.0 ) && (
rtB . fpakcfbngs_cxarnvbvui [ i ] != 0.0 ) ) ; jienwguhcb = campykoil0 ^
ja5gfozxwn ; nnkm1kmeqe = duelrvvo2i ^ jienwguhcb ; oqauzjrott = ( ( rtB .
lxezyz54zx_mbvzarwird [ i ] != 0.0 ) && ( rtB . bdgha0hxjx_pbm3vprmfu [ i ]
!= 0.0 ) ) ; rtB . hywu0mda0z_ju13rw2h0m [ i ] = ( nnkm1kmeqe && oqauzjrott )
; rtB . imt2zvsj2b_jzx3amusab [ i ] = ( ( duelrvvo2i && jienwguhcb ) || (
campykoil0 && ja5gfozxwn ) ) ; rtB . fc0kwgsxph_ezqlmfzvpq [ i ] = ( (
ldbqp1e4fx && ii05lwzmrl ) || ( jiiidi153d && pvc4zbdx35 ) ) ; rtB .
e3prsozlro_bjvjhhzy4i [ i ] = ( ( anupfjg1uu && beuzyt1b0l ) || ( c1ptn0ync0
&& nx31agpn4b ) ) ; rtB . dbiuc3qm4y_fdinthrxmb [ i ] = nnkm1kmeqe ; rtB .
pintl0ode3_al00mdgrv4 [ i ] = oqauzjrott ; } { real_T * pDataValues = (
real_T * ) rtDW . oahvl2yyy3 . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . oahvl2yyy3 . TimePtr ; int_T currTimeIndex = rtDW . nsfyw35vta .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . oahvl2yyy3 . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . nsfyw35vta . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . ki5i4mxxwb_nz4o0shxby [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . ki5i4mxxwb_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . ki5i4mxxwb_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { beuzyt1b0l = ( ( rtB . i2mcaeso2f_bhxxfovxdy [ i ] != 0.0 )
&& ( rtB . ki5i4mxxwb_nz4o0shxby [ i ] != 0.0 ) ) ; nx31agpn4b = ( ( rtB .
etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . opvtlfe3p0_merlcviukg [ i ]
!= 0.0 ) ) ; duelrvvo2i = beuzyt1b0l ^ nx31agpn4b ; anupfjg1uu = rtB .
fc0kwgsxph_ezqlmfzvpq [ i ] ^ duelrvvo2i ; jiiidi153d = ( ( rtB .
mwy1vcjgju_g1smspu5ke [ i ] != 0.0 ) && ( rtB . i41lku0xtd_g2mlkqadfk [ i ]
!= 0.0 ) ) ; pvc4zbdx35 = anupfjg1uu ^ jiiidi153d ; ldbqp1e4fx = rtB .
e3prsozlro_bjvjhhzy4i [ i ] ^ pvc4zbdx35 ; ii05lwzmrl = ( ( rtB .
bzbddphp2z_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . bizyusrhcy_cl54gopm0x [ i ]
!= 0.0 ) ) ; c1ptn0ync0 = ldbqp1e4fx ^ ii05lwzmrl ; eopxuynkdw = rtB .
imt2zvsj2b_jzx3amusab [ i ] ^ c1ptn0ync0 ; nsr4ydnvvc = ( ( rtB .
lxezyz54zx_mbvzarwird [ i ] != 0.0 ) && ( rtB . fpakcfbngs_cxarnvbvui [ i ]
!= 0.0 ) ) ; nnkm1kmeqe = eopxuynkdw ^ nsr4ydnvvc ; rtB .
luzkaifer4_icdfyazkhu [ i ] = rtB . hywu0mda0z_ju13rw2h0m [ i ] ^ nnkm1kmeqe
; rtB . nmpj1pejz5_dapv3jlyq5 [ i ] = beuzyt1b0l ; rtB .
ohulmyx3aq_bnlywzniup [ i ] = nx31agpn4b ; rtB . latn0didbk_hv2ho1zopz [ i ]
= duelrvvo2i ; rtB . a1nvqdw5tg_bsqwvugooi [ i ] = anupfjg1uu ; rtB .
nu5mreydr0_nuebgmauvi [ i ] = jiiidi153d ; rtB . oatn4x5chp_owjr1h1vqy [ i ]
= pvc4zbdx35 ; rtB . blq25rfr55_lxo5edjg3c [ i ] = ldbqp1e4fx ; rtB .
jxhdxn1zm4_dypejvacrn [ i ] = ii05lwzmrl ; rtB . hbuqdxbtks_guugdwf2m3 [ i ]
= c1ptn0ync0 ; rtB . hnxlrn2ini_jz50ptvnrg [ i ] = eopxuynkdw ; rtB .
am5r4g32g5_o4f35lbcvx [ i ] = nsr4ydnvvc ; rtB . nynbbc1wgc_nyxm0bsxsn [ i ]
= nnkm1kmeqe ; } { real_T * pDataValues = ( real_T * ) rtDW . eot3d5vx3e .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . eot3d5vx3e . TimePtr ;
int_T currTimeIndex = rtDW . glsasphhw2 . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . eot3d5vx3e . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . glsasphhw2 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . c4vcer5wv1_ppxrqq0gsf [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . c4vcer5wv1_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . c4vcer5wv1_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { pvc4zbdx35 = ( ( rtB . c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 )
&& ( rtB . bdgha0hxjx_pbm3vprmfu [ i ] != 0.0 ) ) ; rtB .
jgmxnvvtez_nvsvtgkap4 [ i ] = ( rtB . luzkaifer4_icdfyazkhu [ i ] &&
pvc4zbdx35 ) ; nnkm1kmeqe = ( ( rtB . hywu0mda0z_ju13rw2h0m [ i ] && rtB .
nynbbc1wgc_nyxm0bsxsn [ i ] ) || ( rtB . hnxlrn2ini_jz50ptvnrg [ i ] && rtB .
am5r4g32g5_o4f35lbcvx [ i ] ) ) ; rtB . i5in5m11vv_oyypvi4boh [ i ] =
pvc4zbdx35 ; rtB . hywu0mda0z_ju13rw2h0m [ i ] = ( ( rtB .
fc0kwgsxph_ezqlmfzvpq [ i ] && rtB . latn0didbk_hv2ho1zopz [ i ] ) || ( rtB .
nmpj1pejz5_dapv3jlyq5 [ i ] && rtB . ohulmyx3aq_bnlywzniup [ i ] ) ) ; rtB .
nynbbc1wgc_nyxm0bsxsn [ i ] = nnkm1kmeqe ; rtB . hnxlrn2ini_jz50ptvnrg [ i ]
= ( ( rtB . e3prsozlro_bjvjhhzy4i [ i ] && rtB . oatn4x5chp_owjr1h1vqy [ i ]
) || ( rtB . a1nvqdw5tg_bsqwvugooi [ i ] && rtB . nu5mreydr0_nuebgmauvi [ i ]
) ) ; rtB . am5r4g32g5_o4f35lbcvx [ i ] = ( ( rtB . imt2zvsj2b_jzx3amusab [ i
] && rtB . hbuqdxbtks_guugdwf2m3 [ i ] ) || ( rtB . blq25rfr55_lxo5edjg3c [ i
] && rtB . jxhdxn1zm4_dypejvacrn [ i ] ) ) ; } { real_T * pDataValues = (
real_T * ) rtDW . hjyyno5nqo . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . hjyyno5nqo . TimePtr ; int_T currTimeIndex = rtDW . ccyhxmy2qg .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . hjyyno5nqo . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . ccyhxmy2qg . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . oezbaprlmk_llw0u2ae0v [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . oezbaprlmk_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . oezbaprlmk_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { jienwguhcb = ( ( rtB . i2mcaeso2f_bhxxfovxdy [ i ] != 0.0 )
&& ( rtB . oezbaprlmk_llw0u2ae0v [ i ] != 0.0 ) ) ; ja5gfozxwn = ( ( rtB .
etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . ki5i4mxxwb_nz4o0shxby [ i ]
!= 0.0 ) ) ; campykoil0 = jienwguhcb ^ ja5gfozxwn ; beuzyt1b0l = rtB .
hywu0mda0z_ju13rw2h0m [ i ] ^ campykoil0 ; nx31agpn4b = ( ( rtB .
mwy1vcjgju_g1smspu5ke [ i ] != 0.0 ) && ( rtB . opvtlfe3p0_merlcviukg [ i ]
!= 0.0 ) ) ; duelrvvo2i = beuzyt1b0l ^ nx31agpn4b ; anupfjg1uu = rtB .
hnxlrn2ini_jz50ptvnrg [ i ] ^ duelrvvo2i ; jiiidi153d = ( ( rtB .
bzbddphp2z_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . i41lku0xtd_g2mlkqadfk [ i ]
!= 0.0 ) ) ; pvc4zbdx35 = anupfjg1uu ^ jiiidi153d ; ldbqp1e4fx = rtB .
am5r4g32g5_o4f35lbcvx [ i ] ^ pvc4zbdx35 ; ii05lwzmrl = ldbqp1e4fx ^ rtB .
k0hyfnm1ch [ i ] ; c1ptn0ync0 = rtB . nynbbc1wgc_nyxm0bsxsn [ i ] ^
ii05lwzmrl ; p5sfuyrcif = ( ( rtB . c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 ) && (
rtB . fpakcfbngs_cxarnvbvui [ i ] != 0.0 ) ) ; oqauzjrott = c1ptn0ync0 ^
p5sfuyrcif ; rtB . efyr5gjqv4_mdoasc5av4 [ i ] = rtB . jgmxnvvtez_nvsvtgkap4
[ i ] ^ oqauzjrott ; rtB . imt2zvsj2b_jzx3amusab [ i ] = jienwguhcb ; rtB .
e3prsozlro_bjvjhhzy4i [ i ] = ja5gfozxwn ; rtB . fc0kwgsxph_ezqlmfzvpq [ i ]
= campykoil0 ; rtB . nmpj1pejz5_dapv3jlyq5 [ i ] = beuzyt1b0l ; rtB .
ohulmyx3aq_bnlywzniup [ i ] = nx31agpn4b ; rtB . latn0didbk_hv2ho1zopz [ i ]
= duelrvvo2i ; rtB . a1nvqdw5tg_bsqwvugooi [ i ] = anupfjg1uu ; rtB .
nu5mreydr0_nuebgmauvi [ i ] = jiiidi153d ; rtB . oatn4x5chp_owjr1h1vqy [ i ]
= pvc4zbdx35 ; rtB . blq25rfr55_lxo5edjg3c [ i ] = ldbqp1e4fx ; rtB .
jxhdxn1zm4_dypejvacrn [ i ] = ii05lwzmrl ; rtB . hbuqdxbtks_guugdwf2m3 [ i ]
= c1ptn0ync0 ; rtB . pztamq01bm_m3yhjduhi1 [ i ] = p5sfuyrcif ; rtB .
li0ipo15ob_czkfpwuzm5 [ i ] = oqauzjrott ; } { real_T * pDataValues = (
real_T * ) rtDW . kt4kigj1cq . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . kt4kigj1cq . TimePtr ; int_T currTimeIndex = rtDW . axak2gonlb .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . kt4kigj1cq . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . axak2gonlb . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . dsb5hrg2vr_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { (
& rtB . dsb5hrg2vr_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex
+ 1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / (
t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx )
{ d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( &
rtB . dsb5hrg2vr_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1
, d2 , f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i <
250000 ; i ++ ) { pvc4zbdx35 = ( ( rtB . dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 )
&& ( rtB . bdgha0hxjx_pbm3vprmfu [ i ] != 0.0 ) ) ; rtB .
ktqohtoiph_jacdjrqyev [ i ] = ( rtB . efyr5gjqv4_mdoasc5av4 [ i ] &&
pvc4zbdx35 ) ; oqauzjrott = ( ( rtB . jgmxnvvtez_nvsvtgkap4 [ i ] && rtB .
li0ipo15ob_czkfpwuzm5 [ i ] ) || ( rtB . hbuqdxbtks_guugdwf2m3 [ i ] && rtB .
pztamq01bm_m3yhjduhi1 [ i ] ) ) ; rtB . l45k1mqf4x_m3ybdk4ikc [ i ] =
pvc4zbdx35 ; rtB . jgmxnvvtez_nvsvtgkap4 [ i ] = ( ( rtB .
am5r4g32g5_o4f35lbcvx [ i ] && rtB . oatn4x5chp_owjr1h1vqy [ i ] ) || ( rtB .
a1nvqdw5tg_bsqwvugooi [ i ] && rtB . nu5mreydr0_nuebgmauvi [ i ] ) ) ; rtB .
li0ipo15ob_czkfpwuzm5 [ i ] = oqauzjrott ; rtB . pztamq01bm_m3yhjduhi1 [ i ]
= ( ( rtB . nynbbc1wgc_nyxm0bsxsn [ i ] && rtB . jxhdxn1zm4_dypejvacrn [ i ]
) || ( rtB . blq25rfr55_lxo5edjg3c [ i ] && rtB . k0hyfnm1ch [ i ] ) ) ; rtB
. am5r4g32g5_o4f35lbcvx [ i ] = ( ( rtB . hywu0mda0z_ju13rw2h0m [ i ] && rtB
. fc0kwgsxph_ezqlmfzvpq [ i ] ) || ( rtB . imt2zvsj2b_jzx3amusab [ i ] && rtB
. e3prsozlro_bjvjhhzy4i [ i ] ) ) ; rtB . nynbbc1wgc_nyxm0bsxsn [ i ] = ( (
rtB . hnxlrn2ini_jz50ptvnrg [ i ] && rtB . latn0didbk_hv2ho1zopz [ i ] ) || (
rtB . nmpj1pejz5_dapv3jlyq5 [ i ] && rtB . ohulmyx3aq_bnlywzniup [ i ] ) ) ;
} { real_T * pDataValues = ( real_T * ) rtDW . m2dox4smlm . DataPtr ; real_T
* pTimeValues = ( real_T * ) rtDW . m2dox4smlm . TimePtr ; int_T
currTimeIndex = rtDW . hnjjnciu15 . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . m2dox4smlm . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
hnjjnciu15 . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++
elIdx ) { ( & rtB . asd3npleup_dhmrxtyqop [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { ( & rtB . asd3npleup_dhmrxtyqop [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 250000 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
asd3npleup_dhmrxtyqop [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 250000 ;
i ++ ) { nsr4ydnvvc = rtB . am5r4g32g5_o4f35lbcvx [ i ] ; nnkm1kmeqe = rtB .
nynbbc1wgc_nyxm0bsxsn [ i ] ; dmzesfixdm = rtB . jgmxnvvtez_nvsvtgkap4 [ i ]
; p5sfuyrcif = rtB . pztamq01bm_m3yhjduhi1 [ i ] ; oqauzjrott = rtB .
li0ipo15ob_czkfpwuzm5 [ i ] ; efc3xbubya = rtB . ktqohtoiph_jacdjrqyev [ i ]
; eopxuynkdw = ( ( rtB . i2mcaeso2f_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
asd3npleup_dhmrxtyqop [ i ] != 0.0 ) ) ; grxsvmner4 = ( ( rtB .
etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 ) && ( rtB . oezbaprlmk_llw0u2ae0v [ i ]
!= 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4 ; ja5gfozxwn = nsr4ydnvvc ^
jienwguhcb ; campykoil0 = ( ( rtB . mwy1vcjgju_g1smspu5ke [ i ] != 0.0 ) && (
rtB . ki5i4mxxwb_nz4o0shxby [ i ] != 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^
campykoil0 ; nx31agpn4b = nnkm1kmeqe ^ beuzyt1b0l ; duelrvvo2i = ( ( rtB .
bzbddphp2z_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . opvtlfe3p0_merlcviukg [ i ]
!= 0.0 ) ) ; anupfjg1uu = nx31agpn4b ^ duelrvvo2i ; jiiidi153d = dmzesfixdm ^
anupfjg1uu ; pvc4zbdx35 = ( ( rtB . lxezyz54zx_mbvzarwird [ i ] != 0.0 ) && (
rtB . i41lku0xtd_g2mlkqadfk [ i ] != 0.0 ) ) ; ldbqp1e4fx = jiiidi153d ^
pvc4zbdx35 ; ii05lwzmrl = p5sfuyrcif ^ ldbqp1e4fx ; c1ptn0ync0 = ( ( rtB .
c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . bizyusrhcy_cl54gopm0x [ i ]
!= 0.0 ) ) ; ajl42h2nud = ii05lwzmrl ^ c1ptn0ync0 ; laqjanvpra = oqauzjrott ^
ajl42h2nud ; ogkbxjw0bv = ( ( rtB . dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . fpakcfbngs_cxarnvbvui [ i ] != 0.0 ) ) ; bf0vlo5opv = laqjanvpra ^
ogkbxjw0bv ; oeduxrzwtv = efc3xbubya ^ bf0vlo5opv ; n0s3wqoaow = ( ( rtB .
dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . bdgha0hxjx_pbm3vprmfu [ i ]
!= 0.0 ) ) ; pfec5f4nay = ( oeduxrzwtv && n0s3wqoaow ) ; bf0vlo5opv = ( (
efc3xbubya && bf0vlo5opv ) || ( laqjanvpra && ogkbxjw0bv ) ) ; ogkbxjw0bv = (
( oqauzjrott && ajl42h2nud ) || ( ii05lwzmrl && c1ptn0ync0 ) ) ; laqjanvpra =
( ( p5sfuyrcif && ldbqp1e4fx ) || ( jiiidi153d && pvc4zbdx35 ) ) ; ajl42h2nud
= ( ( dmzesfixdm && anupfjg1uu ) || ( nx31agpn4b && duelrvvo2i ) ) ;
efc3xbubya = ( ( nnkm1kmeqe && beuzyt1b0l ) || ( ja5gfozxwn && campykoil0 ) )
; oqauzjrott = ( ( rtB . etcj3dyvzl_cv5hdgrwft [ i ] != 0.0 ) && ( rtB .
asd3npleup_dhmrxtyqop [ i ] != 0.0 ) ) ; p5sfuyrcif = ( ( nsr4ydnvvc &&
jienwguhcb ) || ( eopxuynkdw && grxsvmner4 ) ) ; dmzesfixdm = oqauzjrott ^
p5sfuyrcif ; nnkm1kmeqe = ( ( rtB . mwy1vcjgju_g1smspu5ke [ i ] != 0.0 ) && (
rtB . oezbaprlmk_llw0u2ae0v [ i ] != 0.0 ) ) ; nsr4ydnvvc = dmzesfixdm ^
nnkm1kmeqe ; eopxuynkdw = efc3xbubya ^ nsr4ydnvvc ; grxsvmner4 = ( ( rtB .
bzbddphp2z_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . ki5i4mxxwb_nz4o0shxby [ i ]
!= 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4 ; ja5gfozxwn = ajl42h2nud ^
jienwguhcb ; campykoil0 = ( ( rtB . lxezyz54zx_mbvzarwird [ i ] != 0.0 ) && (
rtB . opvtlfe3p0_merlcviukg [ i ] != 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^
campykoil0 ; nx31agpn4b = laqjanvpra ^ beuzyt1b0l ; duelrvvo2i = ( ( rtB .
c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB . i41lku0xtd_g2mlkqadfk [ i ]
!= 0.0 ) ) ; anupfjg1uu = nx31agpn4b ^ duelrvvo2i ; jiiidi153d = ogkbxjw0bv ^
anupfjg1uu ; pvc4zbdx35 = ( ( rtB . dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 ) && (
rtB . bizyusrhcy_cl54gopm0x [ i ] != 0.0 ) ) ; ldbqp1e4fx = jiiidi153d ^
pvc4zbdx35 ; ii05lwzmrl = bf0vlo5opv ^ ldbqp1e4fx ; c1ptn0ync0 = ii05lwzmrl ^
rtB . meiz31siww [ i ] ; ii05lwzmrl = ( ( pfec5f4nay && c1ptn0ync0 ) || (
ii05lwzmrl && rtB . meiz31siww [ i ] ) ) ; bf0vlo5opv = ( ( bf0vlo5opv &&
ldbqp1e4fx ) || ( jiiidi153d && pvc4zbdx35 ) ) ; ogkbxjw0bv = ( ( ogkbxjw0bv
&& anupfjg1uu ) || ( nx31agpn4b && duelrvvo2i ) ) ; laqjanvpra = ( (
laqjanvpra && beuzyt1b0l ) || ( ja5gfozxwn && campykoil0 ) ) ; ajl42h2nud = (
( ajl42h2nud && jienwguhcb ) || ( eopxuynkdw && grxsvmner4 ) ) ; efc3xbubya =
( ( efc3xbubya && nsr4ydnvvc ) || ( dmzesfixdm && nnkm1kmeqe ) ) ; oqauzjrott
= ( oqauzjrott && p5sfuyrcif ) ; p5sfuyrcif = ( ( rtB . mwy1vcjgju_g1smspu5ke
[ i ] != 0.0 ) && ( rtB . asd3npleup_dhmrxtyqop [ i ] != 0.0 ) ) ; dmzesfixdm
= oqauzjrott ^ p5sfuyrcif ; nnkm1kmeqe = efc3xbubya ^ dmzesfixdm ; nsr4ydnvvc
= ( ( rtB . bzbddphp2z_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB .
oezbaprlmk_llw0u2ae0v [ i ] != 0.0 ) ) ; eopxuynkdw = nnkm1kmeqe ^ nsr4ydnvvc
; grxsvmner4 = ajl42h2nud ^ eopxuynkdw ; jienwguhcb = ( ( rtB .
lxezyz54zx_mbvzarwird [ i ] != 0.0 ) && ( rtB . ki5i4mxxwb_nz4o0shxby [ i ]
!= 0.0 ) ) ; ja5gfozxwn = grxsvmner4 ^ jienwguhcb ; campykoil0 = laqjanvpra ^
ja5gfozxwn ; beuzyt1b0l = ( ( rtB . c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 ) && (
rtB . opvtlfe3p0_merlcviukg [ i ] != 0.0 ) ) ; nx31agpn4b = campykoil0 ^
beuzyt1b0l ; duelrvvo2i = ogkbxjw0bv ^ nx31agpn4b ; anupfjg1uu = ( ( rtB .
dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . i41lku0xtd_g2mlkqadfk [ i ]
!= 0.0 ) ) ; jiiidi153d = duelrvvo2i ^ anupfjg1uu ; pvc4zbdx35 = bf0vlo5opv ^
jiiidi153d ; ldbqp1e4fx = ( ( rtB . dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . bizyusrhcy_cl54gopm0x [ i ] != 0.0 ) ) ; e13yfxn2yf = pvc4zbdx35 ^
ldbqp1e4fx ; pvc4zbdx35 = ( ( ii05lwzmrl && e13yfxn2yf ) || ( pvc4zbdx35 &&
ldbqp1e4fx ) ) ; bf0vlo5opv = ( ( bf0vlo5opv && jiiidi153d ) || ( duelrvvo2i
&& anupfjg1uu ) ) ; ogkbxjw0bv = ( ( ogkbxjw0bv && nx31agpn4b ) || (
campykoil0 && beuzyt1b0l ) ) ; laqjanvpra = ( ( laqjanvpra && ja5gfozxwn ) ||
( grxsvmner4 && jienwguhcb ) ) ; ajl42h2nud = ( ( ajl42h2nud && eopxuynkdw )
|| ( nnkm1kmeqe && nsr4ydnvvc ) ) ; nnkm1kmeqe = ( ( rtB .
bzbddphp2z_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . asd3npleup_dhmrxtyqop [ i ]
!= 0.0 ) ) ; efc3xbubya = ( ( efc3xbubya && dmzesfixdm ) || ( oqauzjrott &&
p5sfuyrcif ) ) ; oqauzjrott = nnkm1kmeqe ^ efc3xbubya ; p5sfuyrcif =
ajl42h2nud ^ oqauzjrott ; dmzesfixdm = ( ( rtB . lxezyz54zx_mbvzarwird [ i ]
!= 0.0 ) && ( rtB . oezbaprlmk_llw0u2ae0v [ i ] != 0.0 ) ) ; nsr4ydnvvc =
p5sfuyrcif ^ dmzesfixdm ; eopxuynkdw = laqjanvpra ^ nsr4ydnvvc ; grxsvmner4 =
( ( rtB . c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
ki5i4mxxwb_nz4o0shxby [ i ] != 0.0 ) ) ; jienwguhcb = eopxuynkdw ^ grxsvmner4
; ja5gfozxwn = ogkbxjw0bv ^ jienwguhcb ; campykoil0 = ( ( rtB .
dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . opvtlfe3p0_merlcviukg [ i ]
!= 0.0 ) ) ; beuzyt1b0l = ja5gfozxwn ^ campykoil0 ; nx31agpn4b = bf0vlo5opv ^
beuzyt1b0l ; duelrvvo2i = ( ( rtB . dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . i41lku0xtd_g2mlkqadfk [ i ] != 0.0 ) ) ; anupfjg1uu = nx31agpn4b ^
duelrvvo2i ; rtB . ktlhpjha4k [ i ] = pvc4zbdx35 ^ anupfjg1uu ; rtB .
hnxlrn2ini_jz50ptvnrg [ i ] = eopxuynkdw ; rtB . hywu0mda0z_ju13rw2h0m [ i ]
= grxsvmner4 ; rtB . imt2zvsj2b_jzx3amusab [ i ] = jienwguhcb ; rtB .
e3prsozlro_bjvjhhzy4i [ i ] = ja5gfozxwn ; rtB . fc0kwgsxph_ezqlmfzvpq [ i ]
= campykoil0 ; rtB . nmpj1pejz5_dapv3jlyq5 [ i ] = beuzyt1b0l ; rtB .
ohulmyx3aq_bnlywzniup [ i ] = nx31agpn4b ; rtB . latn0didbk_hv2ho1zopz [ i ]
= duelrvvo2i ; rtB . a1nvqdw5tg_bsqwvugooi [ i ] = anupfjg1uu ; rtB .
oatn4x5chp_owjr1h1vqy [ i ] = pvc4zbdx35 ; rtB . jxhdxn1zm4_dypejvacrn [ i ]
= ii05lwzmrl ; rtB . hbuqdxbtks_guugdwf2m3 [ i ] = c1ptn0ync0 ; rtB .
nu5mreydr0_nuebgmauvi [ i ] = ajl42h2nud ; rtB . blq25rfr55_lxo5edjg3c [ i ]
= laqjanvpra ; rtB . hdzscrreh2_h522xzlxvt [ i ] = ogkbxjw0bv ; rtB .
li3tvyijbl_c0dok3111h [ i ] = bf0vlo5opv ; rtB . opgl4fxi10_ctvw0tpkon [ i ]
= oeduxrzwtv ; rtB . o3f3oppyrp_pxqvlbal2i [ i ] = n0s3wqoaow ; rtB .
k51gogwfeu_p5h3gwuwqg [ i ] = pfec5f4nay ; rtB . ixnzdh4zcz_afnsueciae [ i ]
= e13yfxn2yf ; rtB . ktqohtoiph_jacdjrqyev [ i ] = efc3xbubya ; rtB .
li0ipo15ob_czkfpwuzm5 [ i ] = oqauzjrott ; rtB . pztamq01bm_m3yhjduhi1 [ i ]
= p5sfuyrcif ; rtB . jgmxnvvtez_nvsvtgkap4 [ i ] = dmzesfixdm ; rtB .
nynbbc1wgc_nyxm0bsxsn [ i ] = nnkm1kmeqe ; rtB . am5r4g32g5_o4f35lbcvx [ i ]
= nsr4ydnvvc ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . m5mg4z5ebi
. LoggedData ) , & rtB . ktlhpjha4k [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
250000 ; i ++ ) { nx31agpn4b = ( ( rtB . oatn4x5chp_owjr1h1vqy [ i ] && rtB .
a1nvqdw5tg_bsqwvugooi [ i ] ) || ( rtB . ohulmyx3aq_bnlywzniup [ i ] && rtB .
latn0didbk_hv2ho1zopz [ i ] ) ) ; bf0vlo5opv = ( ( rtB .
li3tvyijbl_c0dok3111h [ i ] && rtB . nmpj1pejz5_dapv3jlyq5 [ i ] ) || ( rtB .
e3prsozlro_bjvjhhzy4i [ i ] && rtB . fc0kwgsxph_ezqlmfzvpq [ i ] ) ) ;
ogkbxjw0bv = ( ( rtB . hdzscrreh2_h522xzlxvt [ i ] && rtB .
imt2zvsj2b_jzx3amusab [ i ] ) || ( rtB . hnxlrn2ini_jz50ptvnrg [ i ] && rtB .
hywu0mda0z_ju13rw2h0m [ i ] ) ) ; laqjanvpra = ( ( rtB .
blq25rfr55_lxo5edjg3c [ i ] && rtB . am5r4g32g5_o4f35lbcvx [ i ] ) || ( rtB .
pztamq01bm_m3yhjduhi1 [ i ] && rtB . jgmxnvvtez_nvsvtgkap4 [ i ] ) ) ;
p5sfuyrcif = ( ( rtB . lxezyz54zx_mbvzarwird [ i ] != 0.0 ) && ( rtB .
asd3npleup_dhmrxtyqop [ i ] != 0.0 ) ) ; ajl42h2nud = ( ( rtB .
nu5mreydr0_nuebgmauvi [ i ] && rtB . li0ipo15ob_czkfpwuzm5 [ i ] ) || ( rtB .
nynbbc1wgc_nyxm0bsxsn [ i ] && rtB . ktqohtoiph_jacdjrqyev [ i ] ) ) ;
efc3xbubya = p5sfuyrcif ^ ajl42h2nud ; oqauzjrott = laqjanvpra ^ efc3xbubya ;
dmzesfixdm = ( ( rtB . c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
oezbaprlmk_llw0u2ae0v [ i ] != 0.0 ) ) ; nnkm1kmeqe = oqauzjrott ^ dmzesfixdm
; nsr4ydnvvc = ogkbxjw0bv ^ nnkm1kmeqe ; eopxuynkdw = ( ( rtB .
dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . ki5i4mxxwb_nz4o0shxby [ i ]
!= 0.0 ) ) ; grxsvmner4 = nsr4ydnvvc ^ eopxuynkdw ; jienwguhcb = bf0vlo5opv ^
grxsvmner4 ; ja5gfozxwn = ( ( rtB . dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && (
rtB . opvtlfe3p0_merlcviukg [ i ] != 0.0 ) ) ; campykoil0 = jienwguhcb ^
ja5gfozxwn ; rtB . l4ltwvzyvm [ i ] = nx31agpn4b ^ campykoil0 ; rtB .
ohulmyx3aq_bnlywzniup [ i ] = nx31agpn4b ; rtB . li3tvyijbl_c0dok3111h [ i ]
= bf0vlo5opv ; rtB . e3prsozlro_bjvjhhzy4i [ i ] = ja5gfozxwn ; rtB .
fc0kwgsxph_ezqlmfzvpq [ i ] = campykoil0 ; rtB . hdzscrreh2_h522xzlxvt [ i ]
= ogkbxjw0bv ; rtB . imt2zvsj2b_jzx3amusab [ i ] = jienwguhcb ; rtB .
hnxlrn2ini_jz50ptvnrg [ i ] = eopxuynkdw ; rtB . hywu0mda0z_ju13rw2h0m [ i ]
= grxsvmner4 ; rtB . blq25rfr55_lxo5edjg3c [ i ] = laqjanvpra ; rtB .
am5r4g32g5_o4f35lbcvx [ i ] = nsr4ydnvvc ; rtB . pztamq01bm_m3yhjduhi1 [ i ]
= p5sfuyrcif ; rtB . jgmxnvvtez_nvsvtgkap4 [ i ] = dmzesfixdm ; rtB .
nu5mreydr0_nuebgmauvi [ i ] = ajl42h2nud ; rtB . li0ipo15ob_czkfpwuzm5 [ i ]
= oqauzjrott ; rtB . nynbbc1wgc_nyxm0bsxsn [ i ] = nnkm1kmeqe ; rtB .
ktqohtoiph_jacdjrqyev [ i ] = efc3xbubya ; } if ( ssGetLogOutput ( rtS ) ) {
{ double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ha1fwacylw . LoggedData ) , & rtB . l4ltwvzyvm [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { jienwguhcb = ( ( rtB .
ohulmyx3aq_bnlywzniup [ i ] && rtB . fc0kwgsxph_ezqlmfzvpq [ i ] ) || ( rtB .
imt2zvsj2b_jzx3amusab [ i ] && rtB . e3prsozlro_bjvjhhzy4i [ i ] ) ) ;
bf0vlo5opv = ( ( rtB . li3tvyijbl_c0dok3111h [ i ] && rtB .
hywu0mda0z_ju13rw2h0m [ i ] ) || ( rtB . am5r4g32g5_o4f35lbcvx [ i ] && rtB .
hnxlrn2ini_jz50ptvnrg [ i ] ) ) ; ogkbxjw0bv = ( ( rtB .
hdzscrreh2_h522xzlxvt [ i ] && rtB . nynbbc1wgc_nyxm0bsxsn [ i ] ) || ( rtB .
li0ipo15ob_czkfpwuzm5 [ i ] && rtB . jgmxnvvtez_nvsvtgkap4 [ i ] ) ) ;
oqauzjrott = ( ( rtB . c4vcer5wv1_ppxrqq0gsf [ i ] != 0.0 ) && ( rtB .
asd3npleup_dhmrxtyqop [ i ] != 0.0 ) ) ; laqjanvpra = ( ( rtB .
blq25rfr55_lxo5edjg3c [ i ] && rtB . ktqohtoiph_jacdjrqyev [ i ] ) || ( rtB .
pztamq01bm_m3yhjduhi1 [ i ] && rtB . nu5mreydr0_nuebgmauvi [ i ] ) ) ;
ajl42h2nud = oqauzjrott ^ laqjanvpra ; efc3xbubya = ogkbxjw0bv ^ ajl42h2nud ;
p5sfuyrcif = ( ( rtB . dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
oezbaprlmk_llw0u2ae0v [ i ] != 0.0 ) ) ; dmzesfixdm = efc3xbubya ^ p5sfuyrcif
; nnkm1kmeqe = bf0vlo5opv ^ dmzesfixdm ; nsr4ydnvvc = ( ( rtB .
dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . ki5i4mxxwb_nz4o0shxby [ i ]
!= 0.0 ) ) ; eopxuynkdw = nnkm1kmeqe ^ nsr4ydnvvc ; rtB . a0qrkwewg4 [ i ] =
jienwguhcb ^ eopxuynkdw ; rtB . imt2zvsj2b_jzx3amusab [ i ] = jienwguhcb ;
rtB . li3tvyijbl_c0dok3111h [ i ] = bf0vlo5opv ; rtB . am5r4g32g5_o4f35lbcvx
[ i ] = nsr4ydnvvc ; rtB . hnxlrn2ini_jz50ptvnrg [ i ] = eopxuynkdw ; rtB .
hdzscrreh2_h522xzlxvt [ i ] = ogkbxjw0bv ; rtB . nynbbc1wgc_nyxm0bsxsn [ i ]
= nnkm1kmeqe ; rtB . li0ipo15ob_czkfpwuzm5 [ i ] = oqauzjrott ; rtB .
jgmxnvvtez_nvsvtgkap4 [ i ] = dmzesfixdm ; rtB . blq25rfr55_lxo5edjg3c [ i ]
= laqjanvpra ; rtB . ktqohtoiph_jacdjrqyev [ i ] = efc3xbubya ; rtB .
pztamq01bm_m3yhjduhi1 [ i ] = p5sfuyrcif ; rtB . nu5mreydr0_nuebgmauvi [ i ]
= ajl42h2nud ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . muz2bhjt4s
. LoggedData ) , & rtB . a0qrkwewg4 [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
250000 ; i ++ ) { nnkm1kmeqe = ( ( rtB . imt2zvsj2b_jzx3amusab [ i ] && rtB .
hnxlrn2ini_jz50ptvnrg [ i ] ) || ( rtB . nynbbc1wgc_nyxm0bsxsn [ i ] && rtB .
am5r4g32g5_o4f35lbcvx [ i ] ) ) ; bf0vlo5opv = ( ( rtB .
li3tvyijbl_c0dok3111h [ i ] && rtB . jgmxnvvtez_nvsvtgkap4 [ i ] ) || ( rtB .
ktqohtoiph_jacdjrqyev [ i ] && rtB . pztamq01bm_m3yhjduhi1 [ i ] ) ) ;
efc3xbubya = ( ( rtB . dsb5hrg2vr_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
asd3npleup_dhmrxtyqop [ i ] != 0.0 ) ) ; ogkbxjw0bv = ( ( rtB .
hdzscrreh2_h522xzlxvt [ i ] && rtB . nu5mreydr0_nuebgmauvi [ i ] ) || ( rtB .
li0ipo15ob_czkfpwuzm5 [ i ] && rtB . blq25rfr55_lxo5edjg3c [ i ] ) ) ;
laqjanvpra = efc3xbubya ^ ogkbxjw0bv ; ajl42h2nud = bf0vlo5opv ^ laqjanvpra ;
oqauzjrott = ( ( rtB . dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
oezbaprlmk_llw0u2ae0v [ i ] != 0.0 ) ) ; p5sfuyrcif = ajl42h2nud ^ oqauzjrott
; rtB . pr30j5ysml [ i ] = nnkm1kmeqe ^ p5sfuyrcif ; rtB .
nynbbc1wgc_nyxm0bsxsn [ i ] = nnkm1kmeqe ; rtB . li3tvyijbl_c0dok3111h [ i ]
= bf0vlo5opv ; rtB . ktqohtoiph_jacdjrqyev [ i ] = efc3xbubya ; rtB .
pztamq01bm_m3yhjduhi1 [ i ] = p5sfuyrcif ; rtB . hdzscrreh2_h522xzlxvt [ i ]
= ogkbxjw0bv ; rtB . nu5mreydr0_nuebgmauvi [ i ] = ajl42h2nud ; rtB .
li0ipo15ob_czkfpwuzm5 [ i ] = oqauzjrott ; rtB . blq25rfr55_lxo5edjg3c [ i ]
= laqjanvpra ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . bukctp4lfh
. LoggedData ) , & rtB . pr30j5ysml [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
250000 ; i ++ ) { ajl42h2nud = ( ( rtB . nynbbc1wgc_nyxm0bsxsn [ i ] && rtB .
pztamq01bm_m3yhjduhi1 [ i ] ) || ( rtB . nu5mreydr0_nuebgmauvi [ i ] && rtB .
li0ipo15ob_czkfpwuzm5 [ i ] ) ) ; oqauzjrott = ( ( rtB .
dr4ev3edcz_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . asd3npleup_dhmrxtyqop [ i ]
!= 0.0 ) ) ; bf0vlo5opv = ( ( rtB . li3tvyijbl_c0dok3111h [ i ] && rtB .
blq25rfr55_lxo5edjg3c [ i ] ) || ( rtB . ktqohtoiph_jacdjrqyev [ i ] && rtB .
hdzscrreh2_h522xzlxvt [ i ] ) ) ; ogkbxjw0bv = oqauzjrott ^ bf0vlo5opv ; rtB
. hjh0ky43kr [ i ] = ajl42h2nud ^ ogkbxjw0bv ; rtB . nu5mreydr0_nuebgmauvi [
i ] = ajl42h2nud ; rtB . li0ipo15ob_czkfpwuzm5 [ i ] = oqauzjrott ; rtB .
li3tvyijbl_c0dok3111h [ i ] = bf0vlo5opv ; rtB . hdzscrreh2_h522xzlxvt [ i ]
= ogkbxjw0bv ; } if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . e324zd4vsk
. LoggedData ) , & rtB . hjh0ky43kr [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
250000 ; i ++ ) { rtB . mg5mdqgkpv [ i ] = ( ( rtB . nu5mreydr0_nuebgmauvi [
i ] && rtB . hdzscrreh2_h522xzlxvt [ i ] ) || ( rtB . li0ipo15ob_czkfpwuzm5 [
i ] && rtB . li3tvyijbl_c0dok3111h [ i ] ) ) ; } if ( ssGetLogOutput ( rtS )
) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . hjigikktg3 . LoggedData ) , & rtB . mg5mdqgkpv [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { c1ptn0ync0 = rtB .
gfaeaqkjgu_lnjdk5wtww [ i ] ; nx31agpn4b = rtB . b1nzbkbzfu_bjbgfqrolh [ i ]
; rtB . a53qjunlmv [ i ] = ( ( nx31agpn4b && c1ptn0ync0 && ( rtP .
Constant2_Value != 0.0 ) ) || ( ( ! nx31agpn4b ) && ( ! c1ptn0ync0 ) && ( rtP
. Constant2_Value != 0.0 ) ) ) ; } if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 1 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . kj1sde5cxa
. LoggedData ) , & rtB . a53qjunlmv [ 0 ] , 0 ) ; } } } for ( i = 0 ; i <
250000 ; i ++ ) { pvc4zbdx35 = rtB . c2xyqx54lp_dhamdvybc1 [ i ] ; duelrvvo2i
= rtB . fupdsxr3pl_ldqodwenvz [ i ] ; rtB . krxguioqgx [ i ] = ( ( duelrvvo2i
&& pvc4zbdx35 && ( rtP . Constant3_Value != 0.0 ) ) || ( ( ! duelrvvo2i ) &&
( ! pvc4zbdx35 ) && ( rtP . Constant3_Value != 0.0 ) ) ) ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . mqqifw5u1d . LoggedData ) , & rtB . krxguioqgx [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { rtB . bnwinqtrit [ i ] = rtB .
dbiuc3qm4y_fdinthrxmb [ i ] ^ rtB . pintl0ode3_al00mdgrv4 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . pvbt4rjdrv . LoggedData ) , & rtB . bnwinqtrit [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { rtB . hfancckye0 [ i ] = rtB .
luzkaifer4_icdfyazkhu [ i ] ^ rtB . i5in5m11vv_oyypvi4boh [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . pl2tm32hqx . LoggedData ) , & rtB . hfancckye0 [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { rtB . lj2ijy4alr [ i ] = rtB .
efyr5gjqv4_mdoasc5av4 [ i ] ^ rtB . l45k1mqf4x_m3ybdk4ikc [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . fxrziqiktn . LoggedData ) , & rtB . lj2ijy4alr [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { rtB . bc5tmjuqzj [ i ] = rtB .
opgl4fxi10_ctvw0tpkon [ i ] ^ rtB . o3f3oppyrp_pxqvlbal2i [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . dly0dk4jjq . LoggedData ) , & rtB . bc5tmjuqzj [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { rtB . jfdlcoegym [ i ] = rtB .
k51gogwfeu_p5h3gwuwqg [ i ] ^ rtB . hbuqdxbtks_guugdwf2m3 [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . lgdf2zo4wc . LoggedData ) , & rtB . jfdlcoegym [ 0 ] , 0
) ; } } } for ( i = 0 ; i < 250000 ; i ++ ) { rtB . dgk02pnspm [ i ] = rtB .
jxhdxn1zm4_dypejvacrn [ i ] ^ rtB . ixnzdh4zcz_afnsueciae [ i ] ; } if (
ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 1 ) ; ;
if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . lwezto5dff . LoggedData ) , & rtB . dgk02pnspm [ 0 ] , 0
) ; } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { UNUSED_PARAMETER
( tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlTerminate ( void ) { rt_FREE ( rtDW . ojtbpb1yy5 . RSimInfoPtr ) ;
rt_FREE ( rtDW . f1tmsjtqnt . RSimInfoPtr ) ; rt_FREE ( rtDW . bfytgcxbki .
RSimInfoPtr ) ; rt_FREE ( rtDW . djzkjp023y . RSimInfoPtr ) ; rt_FREE ( rtDW
. kmna4jad2b . RSimInfoPtr ) ; rt_FREE ( rtDW . aufaasvjgl . RSimInfoPtr ) ;
rt_FREE ( rtDW . kvb5m1pcgv . RSimInfoPtr ) ; rt_FREE ( rtDW . mlk4hix5ud .
RSimInfoPtr ) ; rt_FREE ( rtDW . lrq2lg0xm3 . RSimInfoPtr ) ; rt_FREE ( rtDW
. e2wcgahprl . RSimInfoPtr ) ; rt_FREE ( rtDW . prrcw4alw4 . RSimInfoPtr ) ;
rt_FREE ( rtDW . oahvl2yyy3 . RSimInfoPtr ) ; rt_FREE ( rtDW . eot3d5vx3e .
RSimInfoPtr ) ; rt_FREE ( rtDW . hjyyno5nqo . RSimInfoPtr ) ; rt_FREE ( rtDW
. kt4kigj1cq . RSimInfoPtr ) ; rt_FREE ( rtDW . m2dox4smlm . RSimInfoPtr ) ;
{ if ( rtDW . dx5s3uwqau . AQHandles ) { sdiTerminateStreaming ( & rtDW .
dx5s3uwqau . AQHandles ) ; } } { if ( rtDW . jf0hghzqai . AQHandles ) {
sdiTerminateStreaming ( & rtDW . jf0hghzqai . AQHandles ) ; } } } static void
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy (
( uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_Normal_Multiplier_AMA1_NAB4_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_Normal_Multiplier_AMA1_NAB4_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_Normal_Multiplier_AMA1_NAB4_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Normal_Multiplier_AMA1_NAB4_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Normal_Multiplier_AMA1_NAB4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Normal_Multiplier_AMA1_NAB4_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Normal_Multiplier_AMA1_NAB4_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_Normal_Multiplier_AMA1_NAB4_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Normal_Multiplier_AMA1_NAB4_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_Normal_Multiplier_AMA1_NAB4_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_Normal_Multiplier_AMA1_NAB4_GetDWork
( ) { static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 16 ] = { "rtDW.kh0x535rb5" , "rtDW.a5eejfdcqf" ,
"rtDW.hfywki0r05" , "rtDW.cc3izxqqgf" , "rtDW.d5ulhfztgc" , "rtDW.arcmxsixf4"
, "rtDW.mlet1tetrq" , "rtDW.kfae21jer3" , "rtDW.kchhb3bx1t" ,
"rtDW.k0pqdq20eu" , "rtDW.gxxpejzeeu" , "rtDW.nsfyw35vta" , "rtDW.glsasphhw2"
, "rtDW.ccyhxmy2qg" , "rtDW.axak2gonlb" , "rtDW.hnjjnciu15" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 16 , rtdwDataFieldNames ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 0 , (
const void * ) & ( rtDW . kh0x535rb5 ) , sizeof ( rtDW . kh0x535rb5 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const void * ) & ( rtDW . a5eejfdcqf ) , sizeof ( rtDW . a5eejfdcqf ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( rtDW . hfywki0r05 ) , sizeof ( rtDW . hfywki0r05 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 3 , (
const void * ) & ( rtDW . cc3izxqqgf ) , sizeof ( rtDW . cc3izxqqgf ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( rtDW . d5ulhfztgc ) , sizeof ( rtDW . d5ulhfztgc ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 5 , (
const void * ) & ( rtDW . arcmxsixf4 ) , sizeof ( rtDW . arcmxsixf4 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 6 , (
const void * ) & ( rtDW . mlet1tetrq ) , sizeof ( rtDW . mlet1tetrq ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 7 , (
const void * ) & ( rtDW . kfae21jer3 ) , sizeof ( rtDW . kfae21jer3 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 8 , (
const void * ) & ( rtDW . kchhb3bx1t ) , sizeof ( rtDW . kchhb3bx1t ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 9 , (
const void * ) & ( rtDW . k0pqdq20eu ) , sizeof ( rtDW . k0pqdq20eu ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 10 , (
const void * ) & ( rtDW . gxxpejzeeu ) , sizeof ( rtDW . gxxpejzeeu ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( rtDW . nsfyw35vta ) , sizeof ( rtDW . nsfyw35vta ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 12 , (
const void * ) & ( rtDW . glsasphhw2 ) , sizeof ( rtDW . glsasphhw2 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 13 , (
const void * ) & ( rtDW . ccyhxmy2qg ) , sizeof ( rtDW . ccyhxmy2qg ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const void * ) & ( rtDW . axak2gonlb ) , sizeof ( rtDW . axak2gonlb ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_cacheDataAsMxArray ( rtdwData , 0 , 15 , (
const void * ) & ( rtDW . hnjjnciu15 ) , sizeof ( rtDW . hnjjnciu15 ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_Normal_Multiplier_AMA1_NAB4_SetDWork ( const mxArray * ssDW ) { ( void )
ssDW ; mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kh0x535rb5 ) , rtdwData , 0 , 0 , sizeof ( rtDW . kh0x535rb5 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a5eejfdcqf ) , rtdwData , 0 , 1 , sizeof ( rtDW . a5eejfdcqf ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hfywki0r05 ) , rtdwData , 0 , 2 , sizeof ( rtDW . hfywki0r05 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cc3izxqqgf ) , rtdwData , 0 , 3 , sizeof ( rtDW . cc3izxqqgf ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d5ulhfztgc ) , rtdwData , 0 , 4 , sizeof ( rtDW . d5ulhfztgc ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
arcmxsixf4 ) , rtdwData , 0 , 5 , sizeof ( rtDW . arcmxsixf4 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mlet1tetrq ) , rtdwData , 0 , 6 , sizeof ( rtDW . mlet1tetrq ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kfae21jer3 ) , rtdwData , 0 , 7 , sizeof ( rtDW . kfae21jer3 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
kchhb3bx1t ) , rtdwData , 0 , 8 , sizeof ( rtDW . kchhb3bx1t ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k0pqdq20eu ) , rtdwData , 0 , 9 , sizeof ( rtDW . k0pqdq20eu ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gxxpejzeeu ) , rtdwData , 0 , 10 , sizeof ( rtDW . gxxpejzeeu ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nsfyw35vta ) , rtdwData , 0 , 11 , sizeof ( rtDW . nsfyw35vta ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
glsasphhw2 ) , rtdwData , 0 , 12 , sizeof ( rtDW . glsasphhw2 ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ccyhxmy2qg ) , rtdwData , 0 , 13 , sizeof ( rtDW . ccyhxmy2qg ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
axak2gonlb ) , rtdwData , 0 , 14 , sizeof ( rtDW . axak2gonlb ) ) ;
mr_Normal_Multiplier_AMA1_NAB4_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hnjjnciu15 ) , rtdwData , 0 , 15 , sizeof ( rtDW . hnjjnciu15 ) ) ; } }
mxArray * mr_Normal_Multiplier_AMA1_NAB4_GetSimStateDisallowedBlocks ( ) {
return NULL ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 390 )
; ssSetNumBlockIO ( rtS , 18 ) ; ssSetNumBlockParams ( rtS , 8000035 ) ; }
void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2566471223U ) ; ssSetChecksumVal ( rtS , 1 ,
4207072792U ) ; ssSetChecksumVal ( rtS , 2 , 3281424394U ) ; ssSetChecksumVal
( rtS , 3 , 3726560868U ) ; }
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
Normal_Multiplier_AMA1_NAB4_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Normal_Multiplier_AMA1_NAB4" ) ; ssSetPath ( rtS ,
"Normal_Multiplier_AMA1_NAB4" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
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
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
2566471223U ) ; ssSetChecksumVal ( rtS , 1 , 4207072792U ) ; ssSetChecksumVal
( rtS , 2 , 3281424394U ) ; ssSetChecksumVal ( rtS , 3 , 3726560868U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Normal_Multiplier_AMA1_NAB4_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_Normal_Multiplier_AMA1_NAB4_GetDWork
) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_Normal_Multiplier_AMA1_NAB4_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
