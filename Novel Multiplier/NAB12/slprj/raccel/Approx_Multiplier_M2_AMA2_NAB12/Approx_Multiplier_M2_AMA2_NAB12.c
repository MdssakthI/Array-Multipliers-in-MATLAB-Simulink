#include "rt_logging_mmi.h"
#include "Approx_Multiplier_M2_AMA2_NAB12_capi.h"
#include <math.h>
#include "Approx_Multiplier_M2_AMA2_NAB12.h"
#include "Approx_Multiplier_M2_AMA2_NAB12_private.h"
#include "Approx_Multiplier_M2_AMA2_NAB12_dt.h"
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
"Approx_Multiplier_M2_AMA2_NAB12/Partial Product Row 8" ) ; sdiLabelU
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
. dwoanvig1x . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"db4a13c6-6b3c-46cb-b073-15b31f95e282" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . dwoanvig1x . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . dwoanvig1x . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . dwoanvig1x .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dwoanvig1x . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dwoanvig1x . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 65536 } ; rtDW . d55t05a2xe . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum0" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . d55t05a2xe . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ixj24l1myd . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum1" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ixj24l1myd . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . j1tkhfev4u . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum10" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . j1tkhfev4u . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . bcpod2sutp . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum11" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . bcpod2sutp . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . kna32tlcxt . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum12" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . kna32tlcxt . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . n5jknqfd2r . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum13" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . n5jknqfd2r . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . mtoixlbpko . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum14" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . mtoixlbpko . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ac3vq3pg2w . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum15" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ac3vq3pg2w . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . isl4udk1sa . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum2" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . isl4udk1sa . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . jxh30m4egg . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum3" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . jxh30m4egg . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ocxxyzkydi . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum4" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ocxxyzkydi . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . ekuua0muto . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum5" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . ekuua0muto . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . nlqhjgcw0m . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum6" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . nlqhjgcw0m . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . gvtkugchrm . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum7" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . gvtkugchrm . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . mt0pbtvv13 . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum8" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . mt0pbtvv13 . LoggedData == ( NULL ) ) return ; } {
int_T dimensions [ 1 ] = { 65536 } ; rtDW . hbyfvpd5vj . LoggedData =
rt_CreateLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal
( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "Sum9" , SS_BOOLEAN , 0 , 0
, 0 , 65536 , 1 , dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 ,
0.01 , 1 ) ; if ( rtDW . hbyfvpd5vj . LoggedData == ( NULL ) ) return ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_8" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace7_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace7_Time0 ; rtDW . nlr254sz25 . TimePtr = fromwksInfo -> time ;
rtDW . nlr254sz25 . DataPtr = fromwksInfo -> data ; rtDW . nlr254sz25 .
RSimInfoPtr = fromwksInfo ; } rtDW . mzcomateoh . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . i1kdxf121h ; const double * timePoints = ( double *
) rtDW . nlr254sz25 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . eoc3eeucvi
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_10" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace9_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace9_Time0 ; rtDW . pr3fwnlpgk . TimePtr = fromwksInfo -> time ;
rtDW . pr3fwnlpgk . DataPtr = fromwksInfo -> data ; rtDW . pr3fwnlpgk .
RSimInfoPtr = fromwksInfo ; } rtDW . hhucah42fn . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . fda3cbb3nw ; const double * timePoints = ( double *
) rtDW . pr3fwnlpgk . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . efj1gvv2gr
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_1" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . esvnbrk15f . TimePtr = fromwksInfo -> time ;
rtDW . esvnbrk15f . DataPtr = fromwksInfo -> data ; rtDW . esvnbrk15f .
RSimInfoPtr = fromwksInfo ; } rtDW . nzc1kt2qsq . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . nxwnfuyem0 ; const double * timePoints = ( double *
) rtDW . esvnbrk15f . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . krxfewyasy
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_9" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace8_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace8_Time0 ; rtDW . oznckgphen . TimePtr = fromwksInfo -> time ;
rtDW . oznckgphen . DataPtr = fromwksInfo -> data ; rtDW . oznckgphen .
RSimInfoPtr = fromwksInfo ; } rtDW . bt2kjhduml . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . o1nablqqad ; const double * timePoints = ( double *
) rtDW . oznckgphen . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . gphw1qtffc
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_2" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace1_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace1_Time0 ; rtDW . jicbwiyez5 . TimePtr = fromwksInfo -> time ;
rtDW . jicbwiyez5 . DataPtr = fromwksInfo -> data ; rtDW . jicbwiyez5 .
RSimInfoPtr = fromwksInfo ; } rtDW . dqs2ms3eur . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . kak3h1i1oa ; const double * timePoints = ( double *
) rtDW . jicbwiyez5 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . ppj5e0aivp
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_7" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace6_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace6_Time0 ; rtDW . d3umpea34x . TimePtr = fromwksInfo -> time ;
rtDW . d3umpea34x . DataPtr = fromwksInfo -> data ; rtDW . d3umpea34x .
RSimInfoPtr = fromwksInfo ; } rtDW . d2mqo0d2sp . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . hs2zfz2nlh ; const double * timePoints = ( double *
) rtDW . d3umpea34x . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . cefzg3zmcq
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_12" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace11_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace11_Time0 ; rtDW . jkteypol3e . TimePtr = fromwksInfo -> time ;
rtDW . jkteypol3e . DataPtr = fromwksInfo -> data ; rtDW . jkteypol3e .
RSimInfoPtr = fromwksInfo ; } rtDW . nzt5mfnv3k . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ft0xburawt ; const double * timePoints = ( double *
) rtDW . jkteypol3e . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . mp21qtcsjx
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_5" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace4_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace4_Time0 ; rtDW . gkjuub03ra . TimePtr = fromwksInfo -> time ;
rtDW . gkjuub03ra . DataPtr = fromwksInfo -> data ; rtDW . gkjuub03ra .
RSimInfoPtr = fromwksInfo ; } rtDW . g5hpdcltcn . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . nwykeulaqx ; const double * timePoints = ( double *
) rtDW . gkjuub03ra . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . e22rmz1lwx
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_13" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace12_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace12_Time0 ; rtDW . jksobmoalm . TimePtr = fromwksInfo -> time ;
rtDW . jksobmoalm . DataPtr = fromwksInfo -> data ; rtDW . jksobmoalm .
RSimInfoPtr = fromwksInfo ; } rtDW . jqv01tm0px . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . bqxw0jmr2z ; const double * timePoints = ( double *
) rtDW . jksobmoalm . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . bhuyepyku4
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_3" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace2_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace2_Time0 ; rtDW . lj113kpzv4 . TimePtr = fromwksInfo -> time ;
rtDW . lj113kpzv4 . DataPtr = fromwksInfo -> data ; rtDW . lj113kpzv4 .
RSimInfoPtr = fromwksInfo ; } rtDW . ha1vep0n15 . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . dpqfjpkijy ; const double * timePoints = ( double *
) rtDW . lj113kpzv4 . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . jetevoghi4
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_14" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace13_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace13_Time0 ; rtDW . om2gmm2jag . TimePtr = fromwksInfo -> time ;
rtDW . om2gmm2jag . DataPtr = fromwksInfo -> data ; rtDW . om2gmm2jag .
RSimInfoPtr = fromwksInfo ; } rtDW . b0dn2sp3hb . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . hye5igtl1q ; const double * timePoints = ( double *
) rtDW . om2gmm2jag . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . kfdh0vb0dl
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_15" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace14_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace14_Time0 ; rtDW . h41vgtc3ky . TimePtr = fromwksInfo -> time ;
rtDW . h41vgtc3ky . DataPtr = fromwksInfo -> data ; rtDW . h41vgtc3ky .
RSimInfoPtr = fromwksInfo ; } rtDW . miqffbz3nv . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . bdrhcv20eb ; const double * timePoints = ( double *
) rtDW . h41vgtc3ky . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . lk4newzhbn
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_16" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace15_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace15_Time0 ; rtDW . ln2xpz4hzg . TimePtr = fromwksInfo -> time ;
rtDW . ln2xpz4hzg . DataPtr = fromwksInfo -> data ; rtDW . ln2xpz4hzg .
RSimInfoPtr = fromwksInfo ; } rtDW . jq3gjo2hvz . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . dbkpycgaes ; const double * timePoints = ( double *
) rtDW . ln2xpz4hzg . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . jgbhsrli5q
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_4" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace3_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace3_Time0 ; rtDW . bcmr1x5pix . TimePtr = fromwksInfo -> time ;
rtDW . bcmr1x5pix . DataPtr = fromwksInfo -> data ; rtDW . bcmr1x5pix .
RSimInfoPtr = fromwksInfo ; } rtDW . j4s4fpsto2 . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ko4owp1rtb ; const double * timePoints = ( double *
) rtDW . bcmr1x5pix . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . jhztvkm5k1
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_6" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace5_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace5_Time0 ; rtDW . dhecasfssm . TimePtr = fromwksInfo -> time ;
rtDW . dhecasfssm . DataPtr = fromwksInfo -> data ; rtDW . dhecasfssm .
RSimInfoPtr = fromwksInfo ; } rtDW . jzfwrfb3lq . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ojn5cdcyud ; const double * timePoints = ( double *
) rtDW . dhecasfssm . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . bz3dqqo1kx
= 0 ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * )
calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "Port_11" ; fromwksInfo ->
origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo ->
origWidth = 65536 ; fromwksInfo -> origElSize = sizeof ( real_T ) ;
fromwksInfo -> data = ( void * ) rtP . FromWorkspace10_Data0 ; fromwksInfo ->
nDataPoints = 2 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace10_Time0 ; rtDW . jzrj3tcydh . TimePtr = fromwksInfo -> time ;
rtDW . jzrj3tcydh . DataPtr = fromwksInfo -> data ; rtDW . jzrj3tcydh .
RSimInfoPtr = fromwksInfo ; } rtDW . fob3jepxrd . PrevIndex = 0 ; { int_T *
zcTimeIndices = & rtDW . ar3uovtx04 ; const double * timePoints = ( double *
) rtDW . jzrj3tcydh . TimePtr ; boolean_T justHadZcTime = false ; int_T zcIdx
= 0 ; int_T i ; for ( i = 0 ; i < 2 - 1 ; i ++ ) { if ( ! justHadZcTime &&
timePoints [ i ] == timePoints [ i + 1 ] ) { zcTimeIndices [ zcIdx ++ ] = i ;
justHadZcTime = true ; } else { justHadZcTime = false ; } } rtDW . hcnnk1udor
= 0 ; } } } void MdlOutputs ( int_T tid ) { int32_T i ; boolean_T acnboc2pj5
; boolean_T acqtmo21w4 ; boolean_T bffixdye4i ; boolean_T bz5yphvfzu ;
boolean_T c0zfyvrjyr ; boolean_T cs1lh4gtaf ; boolean_T d4x3ixph32 ;
boolean_T ddjre2zmsi ; boolean_T di3uulbgru ; boolean_T ei1tp4n0sg ;
boolean_T eu3if0esy5 ; boolean_T exodrh31r0 ; boolean_T eyvam2i2s0 ;
boolean_T fc1dhrbbpr ; boolean_T fzfxyupb2a ; boolean_T gdruigwbhd ;
boolean_T ghl4zfeph4 ; boolean_T gp05of40jq ; boolean_T gujotzwkwx ;
boolean_T hq3r3kt2eb ; boolean_T hsq0gmwhf1 ; boolean_T hwyatr3cz3 ;
boolean_T imu0vk0kqs ; boolean_T ipu5rjkizk ; boolean_T j1ghefbd0z ;
boolean_T jdl2smzdyx ; boolean_T jzppgyremk ; boolean_T kd0swje5lc ;
boolean_T l5doslu5sm ; boolean_T laaoxlq01t ; boolean_T lrtsbfwxfi ;
boolean_T ly55avz0on ; boolean_T mnuxt5bjm3 ; boolean_T mz1rnpnlwv ;
boolean_T n0y5i4sfv4 ; boolean_T n5ffvnodb4 ; boolean_T na2jffwawb ;
boolean_T npybttpyko ; boolean_T odvfd0u0fo ; boolean_T ofumorx152 ;
boolean_T onvcfsseel ; boolean_T pnjy3uthvc ; boolean_T prjvosi3kg ;
boolean_T prvk5mbpf5 ; boolean_T ps0gsv53j1 ; boolean_T ptm2g1jrzq ;
boolean_T pyvcfirfxl ; { real_T * pDataValues = ( real_T * ) rtDW .
nlr254sz25 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . nlr254sz25
. TimePtr ; int_T currTimeIndex = rtDW . mzcomateoh . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . nlr254sz25 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . mzcomateoh . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . myaymb2awt_mbvzarwird [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . myaymb2awt_mbvzarwird [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . i1kdxf121h ; int_T *
zcTimeIndicesIdx = & rtDW . eoc3eeucvi ; int_T zcIdx = zcTimeIndices [ *
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
myaymb2awt_mbvzarwird [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . pr3fwnlpgk . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . pr3fwnlpgk . TimePtr ; int_T currTimeIndex = rtDW . hhucah42fn .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . pr3fwnlpgk . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . hhucah42fn . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . cyrt0gxfde_cl54gopm0x [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . cyrt0gxfde_cl54gopm0x [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . fda3cbb3nw ; int_T *
zcTimeIndicesIdx = & rtDW . efj1gvv2gr ; int_T zcIdx = zcTimeIndices [ *
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
cyrt0gxfde_cl54gopm0x [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . ki3jm1b3dp [ i ] = ( ( rtB . myaymb2awt_mbvzarwird [ i ] !=
0.0 ) && ( rtB . cyrt0gxfde_cl54gopm0x [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . dwoanvig1x . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . dwoanvig1x . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . ki3jm1b3dp [ 0 ] + 0 ) ; } } }
{ real_T * pDataValues = ( real_T * ) rtDW . esvnbrk15f . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . esvnbrk15f . TimePtr ; int_T currTimeIndex
= rtDW . nzc1kt2qsq . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
esvnbrk15f . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . nzc1kt2qsq .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
gwvsi1csq1_kkiq3xxxve [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . gwvsi1csq1_kkiq3xxxve [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . nxwnfuyem0 ; int_T * zcTimeIndicesIdx = & rtDW . krxfewyasy ; int_T
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
gwvsi1csq1_kkiq3xxxve [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . oznckgphen . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . oznckgphen . TimePtr ; int_T currTimeIndex = rtDW . bt2kjhduml .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . oznckgphen . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . bt2kjhduml . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . ga3n1veaz4_cxarnvbvui [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . ga3n1veaz4_cxarnvbvui [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . o1nablqqad ; int_T *
zcTimeIndicesIdx = & rtDW . gphw1qtffc ; int_T zcIdx = zcTimeIndices [ *
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
ga3n1veaz4_cxarnvbvui [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { rtB . ac4gbhjse5 [ i ] = ( ( rtB . gwvsi1csq1_kkiq3xxxve [ i ] !=
0.0 ) && ( rtB . ga3n1veaz4_cxarnvbvui [ i ] != 0.0 ) ) ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . d55t05a2xe
. LoggedData ) , & rtB . ac4gbhjse5 [ 0 ] , 0 ) ; } } } } { real_T *
pDataValues = ( real_T * ) rtDW . jicbwiyez5 . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . jicbwiyez5 . TimePtr ; int_T currTimeIndex = rtDW .
dqs2ms3eur . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . jicbwiyez5 .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . dqs2ms3eur . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
nzhpyfe40o_bhxxfovxdy [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . nzhpyfe40o_bhxxfovxdy [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . kak3h1i1oa ; int_T * zcTimeIndicesIdx = & rtDW . ppj5e0aivp ; int_T
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
nzhpyfe40o_bhxxfovxdy [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { bffixdye4i = ( ( rtB . nzhpyfe40o_bhxxfovxdy [ i ] != 0.0 ) && ( rtB
. ga3n1veaz4_cxarnvbvui [ i ] != 0.0 ) ) ; ofumorx152 = ! bffixdye4i ;
d4x3ixph32 = ( ( rtB . gwvsi1csq1_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
cyrt0gxfde_cl54gopm0x [ i ] != 0.0 ) ) ; mz1rnpnlwv = ! d4x3ixph32 ; rtB .
es3h3fnkv0 [ i ] = ( ( ofumorx152 && rtB . lg14uka0xz ) || ( mz1rnpnlwv &&
rtB . lg14uka0xz ) || ( mz1rnpnlwv && ofumorx152 ) ) ; rtB .
pvl3ihsdi1_guugdwf2m3 [ i ] = bffixdye4i ; rtB . fyq2eycvn2_dhamdvybc1 [ i ]
= d4x3ixph32 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ixj24l1myd . LoggedData ) , & rtB . es3h3fnkv0 [ 0 ] , 0
) ; } } } } { real_T * pDataValues = ( real_T * ) rtDW . d3umpea34x . DataPtr
; real_T * pTimeValues = ( real_T * ) rtDW . d3umpea34x . TimePtr ; int_T
currTimeIndex = rtDW . d2mqo0d2sp . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . d3umpea34x . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
d2mqo0d2sp . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . duvdygyww3_pbm3vprmfu [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . duvdygyww3_pbm3vprmfu [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . hs2zfz2nlh ; int_T * zcTimeIndicesIdx = & rtDW .
cefzg3zmcq ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
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
== 0 ) { d2 = d1 ; } ( & rtB . duvdygyww3_pbm3vprmfu [ 0 ] ) [ elIdx ] = (
real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } }
} } } { real_T * pDataValues = ( real_T * ) rtDW . jkteypol3e . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . jkteypol3e . TimePtr ; int_T
currTimeIndex = rtDW . nzt5mfnv3k . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo *
) rtDW . jkteypol3e . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ;
lastPoint = numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0
; } else if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint -
1 ; } else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t <
pTimeValues [ currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >=
pTimeValues [ currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW .
nzt5mfnv3k . PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [
currTimeIndex ] ; real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 ==
t2 ) { if ( t < t1 ) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++
elIdx ) { ( & rtB . oqo1ogxmhd_cv5hdgrwft [ 0 ] ) [ elIdx ] = pDataValues [
currTimeIndex ] ; pDataValues += numPoints ; } } } else { { int_T elIdx ; for
( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . oqo1ogxmhd_cv5hdgrwft [
0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T *
zcTimeIndices = & rtDW . ft0xburawt ; int_T * zcTimeIndicesIdx = & rtDW .
mp21qtcsjx ; int_T zcIdx = zcTimeIndices [ * zcTimeIndicesIdx ] ; int_T
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
== 0 ) { d2 = d1 ; } ( & rtB . oqo1ogxmhd_cv5hdgrwft [ 0 ] ) [ elIdx ] = (
real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues += numPoints ; } }
} } } for ( i = 0 ; i < 65536 ; i ++ ) { mz1rnpnlwv = ( ( rtB .
duvdygyww3_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . oqo1ogxmhd_cv5hdgrwft [ i ]
!= 0.0 ) ) ; rtB . eo2orjlbpn_ldqodwenvz [ i ] = ! mz1rnpnlwv ; rtB .
navscbncbk_dypejvacrn [ i ] = mz1rnpnlwv ; } { real_T * pDataValues = (
real_T * ) rtDW . gkjuub03ra . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . gkjuub03ra . TimePtr ; int_T currTimeIndex = rtDW . g5hpdcltcn .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . gkjuub03ra . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . g5hpdcltcn . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . d0j3s2h0fw_fqdqrf4qbc [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . d0j3s2h0fw_fqdqrf4qbc [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . nwykeulaqx ; int_T *
zcTimeIndicesIdx = & rtDW . e22rmz1lwx ; int_T zcIdx = zcTimeIndices [ *
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
d0j3s2h0fw_fqdqrf4qbc [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . jksobmoalm . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . jksobmoalm . TimePtr ; int_T currTimeIndex = rtDW . jqv01tm0px .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . jksobmoalm . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jqv01tm0px . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . e12edrfloo_g2mlkqadfk [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . e12edrfloo_g2mlkqadfk [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . bqxw0jmr2z ; int_T *
zcTimeIndicesIdx = & rtDW . bhuyepyku4 ; int_T zcIdx = zcTimeIndices [ *
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
e12edrfloo_g2mlkqadfk [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { prvk5mbpf5 = ( ( rtB . d0j3s2h0fw_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB
. e12edrfloo_g2mlkqadfk [ i ] != 0.0 ) ) ; rtB . aslsn1kxem_owjr1h1vqy [ i ]
= ! prvk5mbpf5 ; rtB . fgzzjjvqc2_lxo5edjg3c [ i ] = prvk5mbpf5 ; } { real_T
* pDataValues = ( real_T * ) rtDW . lj113kpzv4 . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . lj113kpzv4 . TimePtr ; int_T currTimeIndex
= rtDW . ha1vep0n15 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
lj113kpzv4 . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . ha1vep0n15 .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
pppps4tdrf_g1smspu5ke [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . pppps4tdrf_g1smspu5ke [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . dpqfjpkijy ; int_T * zcTimeIndicesIdx = & rtDW . jetevoghi4 ; int_T
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
pppps4tdrf_g1smspu5ke [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } { real_T * pDataValues = (
real_T * ) rtDW . om2gmm2jag . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . om2gmm2jag . TimePtr ; int_T currTimeIndex = rtDW . b0dn2sp3hb .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . om2gmm2jag . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . b0dn2sp3hb . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . mb1uadi5mp_merlcviukg [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . mb1uadi5mp_merlcviukg [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . hye5igtl1q ; int_T *
zcTimeIndicesIdx = & rtDW . kfdh0vb0dl ; int_T zcIdx = zcTimeIndices [ *
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
mb1uadi5mp_merlcviukg [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { eyvam2i2s0 = ( ( rtB . pppps4tdrf_g1smspu5ke [ i ] != 0.0 ) && ( rtB
. mb1uadi5mp_merlcviukg [ i ] != 0.0 ) ) ; rtB . ghlad3snpw_nuebgmauvi [ i ]
= ! eyvam2i2s0 ; rtB . hroavh0osn_bjbgfqrolh [ i ] = eyvam2i2s0 ; } { real_T
* pDataValues = ( real_T * ) rtDW . h41vgtc3ky . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . h41vgtc3ky . TimePtr ; int_T currTimeIndex
= rtDW . miqffbz3nv . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
h41vgtc3ky . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . miqffbz3nv .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
atnni5r0cg_nz4o0shxby [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . atnni5r0cg_nz4o0shxby [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . bdrhcv20eb ; int_T * zcTimeIndicesIdx = & rtDW . lk4newzhbn ; int_T
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
atnni5r0cg_nz4o0shxby [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { hsq0gmwhf1 = ( ( rtB . gwvsi1csq1_kkiq3xxxve [ i ] != 0.0 ) && ( rtB
. atnni5r0cg_nz4o0shxby [ i ] != 0.0 ) ) ; ptm2g1jrzq = ( ( rtB .
nzhpyfe40o_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . mb1uadi5mp_merlcviukg [ i ]
!= 0.0 ) ) ; n0y5i4sfv4 = ( ( hsq0gmwhf1 && ( rtP . Constant6_Value != 0.0 )
) || ( ( ( rtP . Constant6_Value != 0.0 ) && ptm2g1jrzq ) || ( hsq0gmwhf1 &&
ptm2g1jrzq ) ) ) ; rtB . ptibaxqwhr_bnlywzniup [ i ] = ! n0y5i4sfv4 ;
fzfxyupb2a = ( ( rtB . nzhpyfe40o_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
atnni5r0cg_nz4o0shxby [ i ] != 0.0 ) ) ; c0zfyvrjyr = ! fzfxyupb2a ; rtB .
ipy3a3eyha_bjvjhhzy4i [ i ] = ( c0zfyvrjyr && rtB . gdqazxysni ) ; rtB .
jfr1cydlmf_bsqwvugooi [ i ] = hsq0gmwhf1 ; rtB . opbmgdqrrh_lnjdk5wtww [ i ]
= ptm2g1jrzq ; rtB . bg0t2wkg4v_hv2ho1zopz [ i ] = n0y5i4sfv4 ; rtB .
k5dw2ubits_dapv3jlyq5 [ i ] = fzfxyupb2a ; rtB . cbg5aezb2l_ezqlmfzvpq [ i ]
= c0zfyvrjyr ; } { real_T * pDataValues = ( real_T * ) rtDW . ln2xpz4hzg .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . ln2xpz4hzg . TimePtr ;
int_T currTimeIndex = rtDW . jq3gjo2hvz . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . ln2xpz4hzg . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jq3gjo2hvz . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . aleuzbxubk_ppxrqq0gsf [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . aleuzbxubk_ppxrqq0gsf [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . dbkpycgaes ; int_T *
zcTimeIndicesIdx = & rtDW . jgbhsrli5q ; int_T zcIdx = zcTimeIndices [ *
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
aleuzbxubk_ppxrqq0gsf [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { pyvcfirfxl = rtB . ghlad3snpw_nuebgmauvi [ i ] ; eu3if0esy5 = rtB .
ptibaxqwhr_bnlywzniup [ i ] ; n5ffvnodb4 = ( ( rtB . gwvsi1csq1_kkiq3xxxve [
i ] != 0.0 ) && ( rtB . aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; ghl4zfeph4 =
! n5ffvnodb4 ; ghl4zfeph4 = ( rtB . ipy3a3eyha_bjvjhhzy4i [ i ] || (
ghl4zfeph4 && rtB . gdqazxysni ) || ( ghl4zfeph4 && rtB .
cbg5aezb2l_ezqlmfzvpq [ i ] ) ) ; c0zfyvrjyr = ! ghl4zfeph4 ; ptm2g1jrzq = !
rtB . opbmgdqrrh_lnjdk5wtww [ i ] ; hsq0gmwhf1 = ! rtB .
jfr1cydlmf_bsqwvugooi [ i ] ; bffixdye4i = ( ( ptm2g1jrzq && rtB . cs3n5rrynv
) || ( hsq0gmwhf1 && rtB . cs3n5rrynv ) || ( hsq0gmwhf1 && ptm2g1jrzq ) ) ;
ptm2g1jrzq = ( ( rtB . gwvsi1csq1_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
mb1uadi5mp_merlcviukg [ i ] != 0.0 ) ) ; hsq0gmwhf1 = ( ( rtB .
nzhpyfe40o_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . e12edrfloo_g2mlkqadfk [ i ]
!= 0.0 ) ) ; ofumorx152 = ( ( ptm2g1jrzq && ( rtP . Constant5_Value != 0.0 )
) || ( ( ( rtP . Constant5_Value != 0.0 ) && hsq0gmwhf1 ) || ( ptm2g1jrzq &&
hsq0gmwhf1 ) ) ) ; pnjy3uthvc = ( ( rtB . pppps4tdrf_g1smspu5ke [ i ] != 0.0
) && ( rtB . e12edrfloo_g2mlkqadfk [ i ] != 0.0 ) ) ; rtB .
j5zwa5doxs_jzx3amusab [ i ] = n5ffvnodb4 ; rtB . ivyl1d5lcs_fdinthrxmb [ i ]
= ghl4zfeph4 ; rtB . ialmajuuaw_afnsueciae [ i ] = pnjy3uthvc ; rtB .
ptibaxqwhr_bnlywzniup [ i ] = bffixdye4i ; rtB . ghlad3snpw_nuebgmauvi [ i ]
= ofumorx152 ; rtB . ipy3a3eyha_bjvjhhzy4i [ i ] = ( ( bffixdye4i &&
ofumorx152 ) || ( ( ofumorx152 && pnjy3uthvc ) || ( bffixdye4i && pnjy3uthvc
) ) ) ; rtB . cbg5aezb2l_ezqlmfzvpq [ i ] = ( ( pyvcfirfxl && eu3if0esy5 ) ||
( c0zfyvrjyr && eu3if0esy5 ) || ( c0zfyvrjyr && pyvcfirfxl ) ) ; rtB .
opbmgdqrrh_lnjdk5wtww [ i ] = ptm2g1jrzq ; rtB . jfr1cydlmf_bsqwvugooi [ i ]
= hsq0gmwhf1 ; } { real_T * pDataValues = ( real_T * ) rtDW . bcmr1x5pix .
DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW . bcmr1x5pix . TimePtr ;
int_T currTimeIndex = rtDW . j4s4fpsto2 . PrevIndex ; real_T t =
ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . bcmr1x5pix . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . j4s4fpsto2 . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . pv1eqm5xkh_llw0u2ae0v [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . pv1eqm5xkh_llw0u2ae0v [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . ko4owp1rtb ; int_T *
zcTimeIndicesIdx = & rtDW . jhztvkm5k1 ; int_T zcIdx = zcTimeIndices [ *
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
pv1eqm5xkh_llw0u2ae0v [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { c0zfyvrjyr = rtB . cbg5aezb2l_ezqlmfzvpq [ i ] ; di3uulbgru = rtB .
ipy3a3eyha_bjvjhhzy4i [ i ] ; ghl4zfeph4 = rtB . ivyl1d5lcs_fdinthrxmb [ i ]
; n0y5i4sfv4 = rtB . bg0t2wkg4v_hv2ho1zopz [ i ] ; eyvam2i2s0 = rtB .
hroavh0osn_bjbgfqrolh [ i ] ; n5ffvnodb4 = rtB . j5zwa5doxs_jzx3amusab [ i ]
; fzfxyupb2a = rtB . k5dw2ubits_dapv3jlyq5 [ i ] ; onvcfsseel = rtB .
aslsn1kxem_owjr1h1vqy [ i ] ; hwyatr3cz3 = ( ( rtB . pv1eqm5xkh_llw0u2ae0v [
i ] != 0.0 ) && ( rtB . e12edrfloo_g2mlkqadfk [ i ] != 0.0 ) ) ; imu0vk0kqs =
( ( c0zfyvrjyr && di3uulbgru ) || ( ( di3uulbgru && hwyatr3cz3 ) || (
c0zfyvrjyr && hwyatr3cz3 ) ) ) ; odvfd0u0fo = ! imu0vk0kqs ; cs1lh4gtaf = ( (
rtB . pv1eqm5xkh_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . mb1uadi5mp_merlcviukg [
i ] != 0.0 ) ) ; npybttpyko = ! cs1lh4gtaf ; ghl4zfeph4 = ( ( ghl4zfeph4 &&
n0y5i4sfv4 ) || ( ( n0y5i4sfv4 && eyvam2i2s0 ) || ( ghl4zfeph4 && eyvam2i2s0
) ) ) ; n0y5i4sfv4 = ! ghl4zfeph4 ; eyvam2i2s0 = ( ( rtB .
pppps4tdrf_g1smspu5ke [ i ] != 0.0 ) && ( rtB . atnni5r0cg_nz4o0shxby [ i ]
!= 0.0 ) ) ; ps0gsv53j1 = ! eyvam2i2s0 ; n5ffvnodb4 = ( ( n5ffvnodb4 && ( rtP
. Constant7_Value != 0.0 ) ) || ( ( ( rtP . Constant7_Value != 0.0 ) &&
fzfxyupb2a ) || ( n5ffvnodb4 && fzfxyupb2a ) ) ) ; fzfxyupb2a = ! n5ffvnodb4
; laaoxlq01t = ( ( rtB . nzhpyfe40o_bhxxfovxdy [ i ] != 0.0 ) && ( rtB .
aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; fc1dhrbbpr = ! laaoxlq01t ;
fc1dhrbbpr = ( ( fc1dhrbbpr && rtB . o1pbhxvcvg ) || rtB . ckztss5ead || (
rtB . ixybpokhb1 && fc1dhrbbpr ) ) ; acnboc2pj5 = ! fc1dhrbbpr ; acnboc2pj5 =
( ( ps0gsv53j1 && fzfxyupb2a ) || ( acnboc2pj5 && fzfxyupb2a ) || (
acnboc2pj5 && ps0gsv53j1 ) ) ; ps0gsv53j1 = ! acnboc2pj5 ; ps0gsv53j1 = ( (
npybttpyko && n0y5i4sfv4 ) || ( ps0gsv53j1 && n0y5i4sfv4 ) || ( ps0gsv53j1 &&
npybttpyko ) ) ; npybttpyko = ! ps0gsv53j1 ; rtB . fmry3aj0td_nyxm0bsxsn [ i
] = ( ( onvcfsseel && odvfd0u0fo ) || ( npybttpyko && odvfd0u0fo ) || (
npybttpyko && onvcfsseel ) ) ; hwyatr3cz3 = ! hwyatr3cz3 ; di3uulbgru = !
di3uulbgru ; c0zfyvrjyr = ! c0zfyvrjyr ; odvfd0u0fo = ( ( hwyatr3cz3 &&
di3uulbgru ) || ( c0zfyvrjyr && di3uulbgru ) || ( c0zfyvrjyr && hwyatr3cz3 )
) ; pnjy3uthvc = ! rtB . ialmajuuaw_afnsueciae [ i ] ; pyvcfirfxl = ! rtB .
ghlad3snpw_nuebgmauvi [ i ] ; eu3if0esy5 = ! rtB . ptibaxqwhr_bnlywzniup [ i
] ; hwyatr3cz3 = ( ( pnjy3uthvc && pyvcfirfxl ) || ( eu3if0esy5 && pyvcfirfxl
) || ( eu3if0esy5 && pnjy3uthvc ) ) ; hsq0gmwhf1 = ! rtB .
jfr1cydlmf_bsqwvugooi [ i ] ; ptm2g1jrzq = ! rtB . opbmgdqrrh_lnjdk5wtww [ i
] ; di3uulbgru = ( ( hsq0gmwhf1 && rtB . jitrtk3yht ) || ( ptm2g1jrzq && rtB
. jitrtk3yht ) || ( ptm2g1jrzq && hsq0gmwhf1 ) ) ; pnjy3uthvc = ( ( rtB .
gwvsi1csq1_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . e12edrfloo_g2mlkqadfk [ i ]
!= 0.0 ) ) ; c0zfyvrjyr = ( ( rtB . nzhpyfe40o_bhxxfovxdy [ i ] != 0.0 ) && (
rtB . oqo1ogxmhd_cv5hdgrwft [ i ] != 0.0 ) ) ; fzfxyupb2a = ( ( pnjy3uthvc &&
( rtP . Constant4_Value != 0.0 ) ) || ( ( ( rtP . Constant4_Value != 0.0 ) &&
c0zfyvrjyr ) || ( pnjy3uthvc && c0zfyvrjyr ) ) ) ; eu3if0esy5 = ( ( rtB .
pppps4tdrf_g1smspu5ke [ i ] != 0.0 ) && ( rtB . oqo1ogxmhd_cv5hdgrwft [ i ]
!= 0.0 ) ) ; n0y5i4sfv4 = ( ( di3uulbgru && fzfxyupb2a ) || ( ( fzfxyupb2a &&
eu3if0esy5 ) || ( di3uulbgru && eu3if0esy5 ) ) ) ; ptm2g1jrzq = ( ( rtB .
pv1eqm5xkh_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . oqo1ogxmhd_cv5hdgrwft [ i ]
!= 0.0 ) ) ; hsq0gmwhf1 = ( ( hwyatr3cz3 && n0y5i4sfv4 ) || ( ( n0y5i4sfv4 &&
ptm2g1jrzq ) || ( hwyatr3cz3 && ptm2g1jrzq ) ) ) ; pyvcfirfxl = ( ( rtB .
d0j3s2h0fw_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . oqo1ogxmhd_cv5hdgrwft [ i ]
!= 0.0 ) ) ; rtB . al4kom1apz_al00mdgrv4 [ i ] = hwyatr3cz3 ; rtB .
okfrtz4kdd_ju13rw2h0m [ i ] = imu0vk0kqs ; rtB . ob4p5dhl3m_jz50ptvnrg [ i ]
= odvfd0u0fo ; rtB . c2amsfov4f_o4f35lbcvx [ i ] = cs1lh4gtaf ; rtB .
dr51c3vtiw_icdfyazkhu [ i ] = ps0gsv53j1 ; rtB . i00kgkq2se_oyypvi4boh [ i ]
= laaoxlq01t ; rtB . cj5blvxkbp_nvsvtgkap4 [ i ] = fc1dhrbbpr ; rtB .
efzmfqzgfn_m3yhjduhi1 [ i ] = acnboc2pj5 ; rtB . aslsn1kxem_owjr1h1vqy [ i ]
= ( ( odvfd0u0fo && hsq0gmwhf1 ) || ( ( hsq0gmwhf1 && pyvcfirfxl ) || (
odvfd0u0fo && pyvcfirfxl ) ) ) ; rtB . k5dw2ubits_dapv3jlyq5 [ i ] =
fzfxyupb2a ; rtB . j5zwa5doxs_jzx3amusab [ i ] = n5ffvnodb4 ; rtB .
hroavh0osn_bjbgfqrolh [ i ] = eyvam2i2s0 ; rtB . bg0t2wkg4v_hv2ho1zopz [ i ]
= n0y5i4sfv4 ; rtB . ivyl1d5lcs_fdinthrxmb [ i ] = ghl4zfeph4 ; rtB .
ipy3a3eyha_bjvjhhzy4i [ i ] = di3uulbgru ; rtB . cbg5aezb2l_ezqlmfzvpq [ i ]
= c0zfyvrjyr ; rtB . ialmajuuaw_afnsueciae [ i ] = pnjy3uthvc ; rtB .
ghlad3snpw_nuebgmauvi [ i ] = pyvcfirfxl ; rtB . ptibaxqwhr_bnlywzniup [ i ]
= eu3if0esy5 ; rtB . jfr1cydlmf_bsqwvugooi [ i ] = hsq0gmwhf1 ; rtB .
opbmgdqrrh_lnjdk5wtww [ i ] = ptm2g1jrzq ; } { real_T * pDataValues = (
real_T * ) rtDW . dhecasfssm . DataPtr ; real_T * pTimeValues = ( real_T * )
rtDW . dhecasfssm . TimePtr ; int_T currTimeIndex = rtDW . jzfwrfb3lq .
PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint
; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . dhecasfssm . RSimInfoPtr ;
numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t
<= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . jzfwrfb3lq . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB . hdq3sas2ki_jwzvbuczlb [ 0
] ) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; }
} } else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( &
rtB . hdq3sas2ki_jwzvbuczlb [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex +
1 ] ; pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2
- t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; int_T * zcTimeIndices = & rtDW . ojn5cdcyud ; int_T *
zcTimeIndicesIdx = & rtDW . bz3dqqo1kx ; int_T zcIdx = zcTimeIndices [ *
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
hdq3sas2ki_jwzvbuczlb [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { npybttpyko = rtB . fmry3aj0td_nyxm0bsxsn [ i ] ; onvcfsseel = rtB .
aslsn1kxem_owjr1h1vqy [ i ] ; ps0gsv53j1 = rtB . dr51c3vtiw_icdfyazkhu [ i ]
; imu0vk0kqs = rtB . okfrtz4kdd_ju13rw2h0m [ i ] ; prvk5mbpf5 = rtB .
fgzzjjvqc2_lxo5edjg3c [ i ] ; acnboc2pj5 = rtB . efzmfqzgfn_m3yhjduhi1 [ i ]
; ghl4zfeph4 = rtB . ivyl1d5lcs_fdinthrxmb [ i ] ; cs1lh4gtaf = rtB .
c2amsfov4f_o4f35lbcvx [ i ] ; fc1dhrbbpr = rtB . cj5blvxkbp_nvsvtgkap4 [ i ]
; n5ffvnodb4 = rtB . j5zwa5doxs_jzx3amusab [ i ] ; eyvam2i2s0 = rtB .
hroavh0osn_bjbgfqrolh [ i ] ; ofumorx152 = rtB . eo2orjlbpn_ldqodwenvz [ i ]
; jdl2smzdyx = ( ( rtB . hdq3sas2ki_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
oqo1ogxmhd_cv5hdgrwft [ i ] != 0.0 ) ) ; gp05of40jq = ( ( npybttpyko &&
onvcfsseel ) || ( ( onvcfsseel && jdl2smzdyx ) || ( npybttpyko && jdl2smzdyx
) ) ) ; bz5yphvfzu = ! gp05of40jq ; kd0swje5lc = ( ( rtB .
hdq3sas2ki_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . e12edrfloo_g2mlkqadfk [ i ]
!= 0.0 ) ) ; ei1tp4n0sg = ! kd0swje5lc ; ps0gsv53j1 = ( ( ps0gsv53j1 &&
imu0vk0kqs ) || ( ( imu0vk0kqs && prvk5mbpf5 ) || ( ps0gsv53j1 && prvk5mbpf5
) ) ) ; imu0vk0kqs = ! ps0gsv53j1 ; prvk5mbpf5 = ( ( rtB .
d0j3s2h0fw_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . mb1uadi5mp_merlcviukg [ i ]
!= 0.0 ) ) ; lrtsbfwxfi = ! prvk5mbpf5 ; acnboc2pj5 = ( ( acnboc2pj5 &&
ghl4zfeph4 ) || ( ( ghl4zfeph4 && cs1lh4gtaf ) || ( acnboc2pj5 && cs1lh4gtaf
) ) ) ; cs1lh4gtaf = ! acnboc2pj5 ; ghl4zfeph4 = ( ( rtB .
pv1eqm5xkh_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . atnni5r0cg_nz4o0shxby [ i ]
!= 0.0 ) ) ; ly55avz0on = ! ghl4zfeph4 ; fc1dhrbbpr = ( ( fc1dhrbbpr &&
n5ffvnodb4 ) || ( ( n5ffvnodb4 && eyvam2i2s0 ) || ( fc1dhrbbpr && eyvam2i2s0
) ) ) ; n5ffvnodb4 = ! fc1dhrbbpr ; laaoxlq01t = ( rtB . owa1qwu54g || ( (
rtP . Constant_Value != 0.0 ) && rtB . i00kgkq2se_oyypvi4boh [ i ] ) ) ;
eyvam2i2s0 = ! laaoxlq01t ; l5doslu5sm = ( ( rtB . pppps4tdrf_g1smspu5ke [ i
] != 0.0 ) && ( rtB . aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; hq3r3kt2eb = !
l5doslu5sm ; hq3r3kt2eb = ( ( eyvam2i2s0 && rtB . ffzy44b5sp ) || (
hq3r3kt2eb && rtB . ffzy44b5sp ) || ( hq3r3kt2eb && eyvam2i2s0 ) ) ;
eyvam2i2s0 = ! hq3r3kt2eb ; ly55avz0on = ( ( ly55avz0on && n5ffvnodb4 ) || (
eyvam2i2s0 && n5ffvnodb4 ) || ( eyvam2i2s0 && ly55avz0on ) ) ; n5ffvnodb4 = !
ly55avz0on ; lrtsbfwxfi = ( ( lrtsbfwxfi && cs1lh4gtaf ) || ( n5ffvnodb4 &&
cs1lh4gtaf ) || ( n5ffvnodb4 && lrtsbfwxfi ) ) ; cs1lh4gtaf = ! lrtsbfwxfi ;
ei1tp4n0sg = ( ( ei1tp4n0sg && imu0vk0kqs ) || ( cs1lh4gtaf && imu0vk0kqs )
|| ( cs1lh4gtaf && ei1tp4n0sg ) ) ; cs1lh4gtaf = ! ei1tp4n0sg ; rtB .
ng0rkp0slx_m3ybdk4ikc [ i ] = ( ( ofumorx152 && bz5yphvfzu ) || ( cs1lh4gtaf
&& bz5yphvfzu ) || ( cs1lh4gtaf && ofumorx152 ) ) ; jdl2smzdyx = ! jdl2smzdyx
; onvcfsseel = ! onvcfsseel ; npybttpyko = ! npybttpyko ; rtB .
bpymfu52r1_czkfpwuzm5 [ i ] = ( ( jdl2smzdyx && onvcfsseel ) || ( npybttpyko
&& onvcfsseel ) || ( npybttpyko && jdl2smzdyx ) ) ; pyvcfirfxl = ! rtB .
ghlad3snpw_nuebgmauvi [ i ] ; hsq0gmwhf1 = ! rtB . jfr1cydlmf_bsqwvugooi [ i
] ; odvfd0u0fo = ! rtB . ob4p5dhl3m_jz50ptvnrg [ i ] ; ptm2g1jrzq = ! rtB .
opbmgdqrrh_lnjdk5wtww [ i ] ; n0y5i4sfv4 = ! rtB . bg0t2wkg4v_hv2ho1zopz [ i
] ; hwyatr3cz3 = ! rtB . al4kom1apz_al00mdgrv4 [ i ] ; cs1lh4gtaf = ( (
ptm2g1jrzq && n0y5i4sfv4 ) || ( hwyatr3cz3 && n0y5i4sfv4 ) || ( hwyatr3cz3 &&
ptm2g1jrzq ) ) ; eu3if0esy5 = ! rtB . ptibaxqwhr_bnlywzniup [ i ] ;
fzfxyupb2a = ! rtB . k5dw2ubits_dapv3jlyq5 [ i ] ; di3uulbgru = ! rtB .
ipy3a3eyha_bjvjhhzy4i [ i ] ; c0zfyvrjyr = ! rtB . cbg5aezb2l_ezqlmfzvpq [ i
] ; pnjy3uthvc = ! rtB . ialmajuuaw_afnsueciae [ i ] ; hwyatr3cz3 = ( ( rtB .
gwvsi1csq1_kkiq3xxxve [ i ] != 0.0 ) && ( rtB . oqo1ogxmhd_cv5hdgrwft [ i ]
!= 0.0 ) ) ; rtB . mpimn3pk2a_mdoasc5av4 [ i ] = gp05of40jq ; rtB .
l4kudr2ugq_jacdjrqyev [ i ] = kd0swje5lc ; rtB . elnc4bguh0_h522xzlxvt [ i ]
= ei1tp4n0sg ; rtB . chubjtjs5o_c0dok3111h [ i ] = lrtsbfwxfi ; rtB .
azbmjhz5nq_ctvw0tpkon [ i ] = ly55avz0on ; rtB . lvq0wkbq5g_pxqvlbal2i [ i ]
= l5doslu5sm ; rtB . i2fuwm33dq_p5h3gwuwqg [ i ] = hq3r3kt2eb ; rtB .
hroavh0osn_bjbgfqrolh [ i ] = eyvam2i2s0 ; rtB . j5zwa5doxs_jzx3amusab [ i ]
= n5ffvnodb4 ; rtB . cj5blvxkbp_nvsvtgkap4 [ i ] = fc1dhrbbpr ; rtB .
c2amsfov4f_o4f35lbcvx [ i ] = cs1lh4gtaf ; rtB . ivyl1d5lcs_fdinthrxmb [ i ]
= ghl4zfeph4 ; rtB . efzmfqzgfn_m3yhjduhi1 [ i ] = acnboc2pj5 ; rtB .
fgzzjjvqc2_lxo5edjg3c [ i ] = prvk5mbpf5 ; rtB . okfrtz4kdd_ju13rw2h0m [ i ]
= ( ( c0zfyvrjyr && rtB . ekqxrotgj0 ) || ( pnjy3uthvc && rtB . ekqxrotgj0 )
|| ( pnjy3uthvc && c0zfyvrjyr ) ) ; rtB . dr51c3vtiw_icdfyazkhu [ i ] =
ps0gsv53j1 ; rtB . aslsn1kxem_owjr1h1vqy [ i ] = onvcfsseel ; rtB .
fmry3aj0td_nyxm0bsxsn [ i ] = ( ( pyvcfirfxl && hsq0gmwhf1 ) || ( odvfd0u0fo
&& hsq0gmwhf1 ) || ( odvfd0u0fo && pyvcfirfxl ) ) ; rtB .
i00kgkq2se_oyypvi4boh [ i ] = laaoxlq01t ; rtB . ghlad3snpw_nuebgmauvi [ i ]
= pyvcfirfxl ; rtB . jfr1cydlmf_bsqwvugooi [ i ] = hsq0gmwhf1 ; rtB .
ob4p5dhl3m_jz50ptvnrg [ i ] = ( ( eu3if0esy5 && fzfxyupb2a ) || ( di3uulbgru
&& fzfxyupb2a ) || ( di3uulbgru && eu3if0esy5 ) ) ; rtB .
opbmgdqrrh_lnjdk5wtww [ i ] = ptm2g1jrzq ; rtB . bg0t2wkg4v_hv2ho1zopz [ i ]
= n0y5i4sfv4 ; rtB . al4kom1apz_al00mdgrv4 [ i ] = hwyatr3cz3 ; rtB .
ptibaxqwhr_bnlywzniup [ i ] = eu3if0esy5 ; rtB . k5dw2ubits_dapv3jlyq5 [ i ]
= fzfxyupb2a ; rtB . ipy3a3eyha_bjvjhhzy4i [ i ] = di3uulbgru ; rtB .
cbg5aezb2l_ezqlmfzvpq [ i ] = c0zfyvrjyr ; rtB . ialmajuuaw_afnsueciae [ i ]
= ( hwyatr3cz3 && ( rtP . Constant3_Value != 0.0 ) ) ; } { real_T *
pDataValues = ( real_T * ) rtDW . jzrj3tcydh . DataPtr ; real_T * pTimeValues
= ( real_T * ) rtDW . jzrj3tcydh . TimePtr ; int_T currTimeIndex = rtDW .
fob3jepxrd . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints
, lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . jzrj3tcydh .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . fob3jepxrd . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 65536 ; ++ elIdx ) { ( & rtB .
gakyihzbhe_dhmrxtyqop [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex ] ;
pDataValues += numPoints ; } } } else { { int_T elIdx ; for ( elIdx = 0 ;
elIdx < 65536 ; ++ elIdx ) { ( & rtB . gakyihzbhe_dhmrxtyqop [ 0 ] ) [ elIdx
] = pDataValues [ currTimeIndex + 1 ] ; pDataValues += numPoints ; } } } }
else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T
d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; int_T * zcTimeIndices = &
rtDW . ar3uovtx04 ; int_T * zcTimeIndicesIdx = & rtDW . hcnnk1udor ; int_T
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
gakyihzbhe_dhmrxtyqop [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2
, f1 , f2 ) ; pDataValues += numPoints ; } } } } } for ( i = 0 ; i < 65536 ;
i ++ ) { hwyatr3cz3 = rtB . al4kom1apz_al00mdgrv4 [ i ] ; imu0vk0kqs = rtB .
okfrtz4kdd_ju13rw2h0m [ i ] ; odvfd0u0fo = rtB . ob4p5dhl3m_jz50ptvnrg [ i ]
; cs1lh4gtaf = rtB . c2amsfov4f_o4f35lbcvx [ i ] ; npybttpyko = rtB .
fmry3aj0td_nyxm0bsxsn [ i ] ; jdl2smzdyx = rtB . bpymfu52r1_czkfpwuzm5 [ i ]
; bz5yphvfzu = rtB . ng0rkp0slx_m3ybdk4ikc [ i ] ; d4x3ixph32 = rtB .
fyq2eycvn2_dhamdvybc1 [ i ] ; bffixdye4i = rtB . pvl3ihsdi1_guugdwf2m3 [ i ]
; ei1tp4n0sg = rtB . elnc4bguh0_h522xzlxvt [ i ] ; gp05of40jq = rtB .
mpimn3pk2a_mdoasc5av4 [ i ] ; mz1rnpnlwv = rtB . navscbncbk_dypejvacrn [ i ]
; lrtsbfwxfi = rtB . chubjtjs5o_c0dok3111h [ i ] ; ps0gsv53j1 = rtB .
dr51c3vtiw_icdfyazkhu [ i ] ; kd0swje5lc = rtB . l4kudr2ugq_jacdjrqyev [ i ]
; ly55avz0on = rtB . azbmjhz5nq_ctvw0tpkon [ i ] ; acnboc2pj5 = rtB .
efzmfqzgfn_m3yhjduhi1 [ i ] ; prvk5mbpf5 = rtB . fgzzjjvqc2_lxo5edjg3c [ i ]
; hq3r3kt2eb = rtB . i2fuwm33dq_p5h3gwuwqg [ i ] ; fc1dhrbbpr = rtB .
cj5blvxkbp_nvsvtgkap4 [ i ] ; ghl4zfeph4 = rtB . ivyl1d5lcs_fdinthrxmb [ i ]
; l5doslu5sm = rtB . lvq0wkbq5g_pxqvlbal2i [ i ] ; laaoxlq01t = rtB .
i00kgkq2se_oyypvi4boh [ i ] ; di3uulbgru = ( ( rtB . nzhpyfe40o_bhxxfovxdy [
i ] != 0.0 ) && ( rtB . gakyihzbhe_dhmrxtyqop [ i ] != 0.0 ) ) ; pnjy3uthvc =
( rtB . ialmajuuaw_afnsueciae [ i ] || ( ( ( rtP . Constant3_Value != 0.0 )
&& di3uulbgru ) || ( hwyatr3cz3 && di3uulbgru ) ) ) ; n5ffvnodb4 = ( ( rtB .
pppps4tdrf_g1smspu5ke [ i ] != 0.0 ) && ( rtB . gakyihzbhe_dhmrxtyqop [ i ]
!= 0.0 ) ) ; c0zfyvrjyr = ( ( imu0vk0kqs && pnjy3uthvc ) || ( ( pnjy3uthvc &&
n5ffvnodb4 ) || ( imu0vk0kqs && n5ffvnodb4 ) ) ) ; fzfxyupb2a = ( ( rtB .
pv1eqm5xkh_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . gakyihzbhe_dhmrxtyqop [ i ]
!= 0.0 ) ) ; eu3if0esy5 = ( ( odvfd0u0fo && c0zfyvrjyr ) || ( ( c0zfyvrjyr &&
fzfxyupb2a ) || ( odvfd0u0fo && fzfxyupb2a ) ) ) ; n0y5i4sfv4 = ( ( rtB .
d0j3s2h0fw_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . gakyihzbhe_dhmrxtyqop [ i ]
!= 0.0 ) ) ; ptm2g1jrzq = ( ( cs1lh4gtaf && eu3if0esy5 ) || ( ( eu3if0esy5 &&
n0y5i4sfv4 ) || ( cs1lh4gtaf && n0y5i4sfv4 ) ) ) ; hsq0gmwhf1 = ( ( rtB .
hdq3sas2ki_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . gakyihzbhe_dhmrxtyqop [ i ]
!= 0.0 ) ) ; pyvcfirfxl = ( ( npybttpyko && ptm2g1jrzq ) || ( ( ptm2g1jrzq &&
hsq0gmwhf1 ) || ( npybttpyko && hsq0gmwhf1 ) ) ) ; eyvam2i2s0 = ( ( rtB .
duvdygyww3_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . gakyihzbhe_dhmrxtyqop [ i ]
!= 0.0 ) ) ; onvcfsseel = ( ( jdl2smzdyx && pyvcfirfxl ) || ( ( pyvcfirfxl &&
eyvam2i2s0 ) || ( jdl2smzdyx && eyvam2i2s0 ) ) ) ; ofumorx152 = ( ( rtB .
myaymb2awt_mbvzarwird [ i ] != 0.0 ) && ( rtB . gakyihzbhe_dhmrxtyqop [ i ]
!= 0.0 ) ) ; na2jffwawb = ( ( bz5yphvfzu && onvcfsseel ) || ( ( onvcfsseel &&
ofumorx152 ) || ( bz5yphvfzu && ofumorx152 ) ) ) ; j1ghefbd0z = ! na2jffwawb
; ofumorx152 = ! ofumorx152 ; onvcfsseel = ! onvcfsseel ; bz5yphvfzu = !
bz5yphvfzu ; bz5yphvfzu = ( ( ofumorx152 && onvcfsseel ) || ( bz5yphvfzu &&
onvcfsseel ) || ( bz5yphvfzu && ofumorx152 ) ) ; onvcfsseel = ! rtB .
ki3jm1b3dp [ i ] ; hsq0gmwhf1 = ! hsq0gmwhf1 ; ptm2g1jrzq = ! ptm2g1jrzq ;
npybttpyko = ! npybttpyko ; npybttpyko = ( ( hsq0gmwhf1 && ptm2g1jrzq ) || (
npybttpyko && ptm2g1jrzq ) || ( npybttpyko && hsq0gmwhf1 ) ) ; n0y5i4sfv4 = !
n0y5i4sfv4 ; eu3if0esy5 = ! eu3if0esy5 ; cs1lh4gtaf = ! cs1lh4gtaf ;
cs1lh4gtaf = ( ( n0y5i4sfv4 && eu3if0esy5 ) || ( cs1lh4gtaf && eu3if0esy5 )
|| ( cs1lh4gtaf && n0y5i4sfv4 ) ) ; fzfxyupb2a = ! fzfxyupb2a ; c0zfyvrjyr =
! c0zfyvrjyr ; odvfd0u0fo = ! odvfd0u0fo ; odvfd0u0fo = ( ( fzfxyupb2a &&
c0zfyvrjyr ) || ( odvfd0u0fo && c0zfyvrjyr ) || ( odvfd0u0fo && fzfxyupb2a )
) ; n5ffvnodb4 = ! n5ffvnodb4 ; pnjy3uthvc = ! pnjy3uthvc ; imu0vk0kqs = !
imu0vk0kqs ; imu0vk0kqs = ( ( n5ffvnodb4 && pnjy3uthvc ) || ( imu0vk0kqs &&
pnjy3uthvc ) || ( imu0vk0kqs && n5ffvnodb4 ) ) ; di3uulbgru = ! di3uulbgru ;
hwyatr3cz3 = ! hwyatr3cz3 ; hwyatr3cz3 = ( ( di3uulbgru && rtB . luaye3cspa )
|| ( hwyatr3cz3 && rtB . luaye3cspa ) || ( hwyatr3cz3 && di3uulbgru ) ) ;
di3uulbgru = ( ( rtB . gwvsi1csq1_kkiq3xxxve [ i ] != 0.0 ) && ( rtB .
gakyihzbhe_dhmrxtyqop [ i ] != 0.0 ) ) ; pnjy3uthvc = ( ( rtB .
nzhpyfe40o_bhxxfovxdy [ i ] != 0.0 ) && ( rtB . cyrt0gxfde_cl54gopm0x [ i ]
!= 0.0 ) ) ; n5ffvnodb4 = ( ( di3uulbgru && ( rtP . Constant2_Value != 0.0 )
) || ( ( ( rtP . Constant2_Value != 0.0 ) && pnjy3uthvc ) || ( di3uulbgru &&
pnjy3uthvc ) ) ) ; c0zfyvrjyr = ( ( rtB . pppps4tdrf_g1smspu5ke [ i ] != 0.0
) && ( rtB . cyrt0gxfde_cl54gopm0x [ i ] != 0.0 ) ) ; fzfxyupb2a = ( (
hwyatr3cz3 && n5ffvnodb4 ) || ( ( n5ffvnodb4 && c0zfyvrjyr ) || ( hwyatr3cz3
&& c0zfyvrjyr ) ) ) ; eu3if0esy5 = ( ( rtB . pv1eqm5xkh_llw0u2ae0v [ i ] !=
0.0 ) && ( rtB . cyrt0gxfde_cl54gopm0x [ i ] != 0.0 ) ) ; n0y5i4sfv4 = ( (
imu0vk0kqs && fzfxyupb2a ) || ( ( fzfxyupb2a && eu3if0esy5 ) || ( imu0vk0kqs
&& eu3if0esy5 ) ) ) ; ptm2g1jrzq = ( ( rtB . d0j3s2h0fw_fqdqrf4qbc [ i ] !=
0.0 ) && ( rtB . cyrt0gxfde_cl54gopm0x [ i ] != 0.0 ) ) ; hsq0gmwhf1 = ( (
odvfd0u0fo && n0y5i4sfv4 ) || ( ( n0y5i4sfv4 && ptm2g1jrzq ) || ( odvfd0u0fo
&& ptm2g1jrzq ) ) ) ; ofumorx152 = ( ( rtB . hdq3sas2ki_jwzvbuczlb [ i ] !=
0.0 ) && ( rtB . cyrt0gxfde_cl54gopm0x [ i ] != 0.0 ) ) ; ddjre2zmsi = ( (
cs1lh4gtaf && hsq0gmwhf1 ) || ( ( hsq0gmwhf1 && ofumorx152 ) || ( cs1lh4gtaf
&& ofumorx152 ) ) ) ; gdruigwbhd = ( ( rtB . duvdygyww3_pbm3vprmfu [ i ] !=
0.0 ) && ( rtB . cyrt0gxfde_cl54gopm0x [ i ] != 0.0 ) ) ; acqtmo21w4 = ( (
npybttpyko && ddjre2zmsi ) || ( ( ddjre2zmsi && gdruigwbhd ) || ( npybttpyko
&& gdruigwbhd ) ) ) ; prjvosi3kg = ! acqtmo21w4 ; eyvam2i2s0 = ! eyvam2i2s0 ;
pyvcfirfxl = ! pyvcfirfxl ; jdl2smzdyx = ! jdl2smzdyx ; jdl2smzdyx = ( (
eyvam2i2s0 && pyvcfirfxl ) || ( jdl2smzdyx && pyvcfirfxl ) || ( jdl2smzdyx &&
eyvam2i2s0 ) ) ; pyvcfirfxl = ! jdl2smzdyx ; prjvosi3kg = ( ( onvcfsseel &&
prjvosi3kg ) || ( pyvcfirfxl && prjvosi3kg ) || ( pyvcfirfxl && onvcfsseel )
) ; gdruigwbhd = ! gdruigwbhd ; ddjre2zmsi = ! ddjre2zmsi ; npybttpyko = !
npybttpyko ; gdruigwbhd = ( ( gdruigwbhd && ddjre2zmsi ) || ( npybttpyko &&
ddjre2zmsi ) || ( npybttpyko && gdruigwbhd ) ) ; ofumorx152 = ! ofumorx152 ;
hsq0gmwhf1 = ! hsq0gmwhf1 ; cs1lh4gtaf = ! cs1lh4gtaf ; ddjre2zmsi = ( (
ofumorx152 && hsq0gmwhf1 ) || ( cs1lh4gtaf && hsq0gmwhf1 ) || ( cs1lh4gtaf &&
ofumorx152 ) ) ; ptm2g1jrzq = ! ptm2g1jrzq ; n0y5i4sfv4 = ! n0y5i4sfv4 ;
odvfd0u0fo = ! odvfd0u0fo ; npybttpyko = ( ( ptm2g1jrzq && n0y5i4sfv4 ) || (
odvfd0u0fo && n0y5i4sfv4 ) || ( odvfd0u0fo && ptm2g1jrzq ) ) ; eu3if0esy5 = !
eu3if0esy5 ; fzfxyupb2a = ! fzfxyupb2a ; imu0vk0kqs = ! imu0vk0kqs ;
cs1lh4gtaf = ( ( eu3if0esy5 && fzfxyupb2a ) || ( imu0vk0kqs && fzfxyupb2a )
|| ( imu0vk0kqs && eu3if0esy5 ) ) ; c0zfyvrjyr = ! c0zfyvrjyr ; n5ffvnodb4 =
! n5ffvnodb4 ; hwyatr3cz3 = ! hwyatr3cz3 ; odvfd0u0fo = ( ( c0zfyvrjyr &&
n5ffvnodb4 ) || ( hwyatr3cz3 && n5ffvnodb4 ) || ( hwyatr3cz3 && c0zfyvrjyr )
) ; pnjy3uthvc = ! pnjy3uthvc ; di3uulbgru = ! di3uulbgru ; imu0vk0kqs = ( (
pnjy3uthvc && rtB . pwhdfwala2 ) || ( di3uulbgru && rtB . pwhdfwala2 ) || (
di3uulbgru && pnjy3uthvc ) ) ; hwyatr3cz3 = ( ( d4x3ixph32 && ( rtP .
Constant1_Value != 0.0 ) ) || ( ( ( rtP . Constant1_Value != 0.0 ) &&
bffixdye4i ) || ( d4x3ixph32 && bffixdye4i ) ) ) ; di3uulbgru = ( ( rtB .
pppps4tdrf_g1smspu5ke [ i ] != 0.0 ) && ( rtB . ga3n1veaz4_cxarnvbvui [ i ]
!= 0.0 ) ) ; pnjy3uthvc = ( ( imu0vk0kqs && hwyatr3cz3 ) || ( ( hwyatr3cz3 &&
di3uulbgru ) || ( imu0vk0kqs && di3uulbgru ) ) ) ; n5ffvnodb4 = ( ( rtB .
pv1eqm5xkh_llw0u2ae0v [ i ] != 0.0 ) && ( rtB . ga3n1veaz4_cxarnvbvui [ i ]
!= 0.0 ) ) ; c0zfyvrjyr = ( ( odvfd0u0fo && pnjy3uthvc ) || ( ( pnjy3uthvc &&
n5ffvnodb4 ) || ( odvfd0u0fo && n5ffvnodb4 ) ) ) ; fzfxyupb2a = ( ( rtB .
d0j3s2h0fw_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB . ga3n1veaz4_cxarnvbvui [ i ]
!= 0.0 ) ) ; eu3if0esy5 = ( ( cs1lh4gtaf && c0zfyvrjyr ) || ( ( c0zfyvrjyr &&
fzfxyupb2a ) || ( cs1lh4gtaf && fzfxyupb2a ) ) ) ; n0y5i4sfv4 = ( ( rtB .
hdq3sas2ki_jwzvbuczlb [ i ] != 0.0 ) && ( rtB . ga3n1veaz4_cxarnvbvui [ i ]
!= 0.0 ) ) ; ptm2g1jrzq = ( ( npybttpyko && eu3if0esy5 ) || ( ( eu3if0esy5 &&
n0y5i4sfv4 ) || ( npybttpyko && n0y5i4sfv4 ) ) ) ; hsq0gmwhf1 = ( ( rtB .
duvdygyww3_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . ga3n1veaz4_cxarnvbvui [ i ]
!= 0.0 ) ) ; pyvcfirfxl = ( ( ddjre2zmsi && ptm2g1jrzq ) || ( ( ptm2g1jrzq &&
hsq0gmwhf1 ) || ( ddjre2zmsi && hsq0gmwhf1 ) ) ) ; eyvam2i2s0 = ( ( rtB .
myaymb2awt_mbvzarwird [ i ] != 0.0 ) && ( rtB . ga3n1veaz4_cxarnvbvui [ i ]
!= 0.0 ) ) ; onvcfsseel = ( ( gdruigwbhd && pyvcfirfxl ) || ( ( pyvcfirfxl &&
eyvam2i2s0 ) || ( gdruigwbhd && eyvam2i2s0 ) ) ) ; d4x3ixph32 = ( (
prjvosi3kg && rtP . Zero_Value ) || ( ( rtP . Zero_Value && onvcfsseel ) || (
prjvosi3kg && onvcfsseel ) ) ) ; acqtmo21w4 = ( ( jdl2smzdyx && acqtmo21w4 )
|| ( ( acqtmo21w4 && rtB . ki3jm1b3dp [ i ] ) || ( jdl2smzdyx && rtB .
ki3jm1b3dp [ i ] ) ) ) ; jdl2smzdyx = ( ( bz5yphvfzu && d4x3ixph32 ) || ( (
d4x3ixph32 && acqtmo21w4 ) || ( bz5yphvfzu && acqtmo21w4 ) ) ) ; ofumorx152 =
! jdl2smzdyx ; bffixdye4i = ( ( rtB . myaymb2awt_mbvzarwird [ i ] != 0.0 ) &&
( rtB . oqo1ogxmhd_cv5hdgrwft [ i ] != 0.0 ) ) ; exodrh31r0 = ! bffixdye4i ;
ei1tp4n0sg = ( ( ei1tp4n0sg && gp05of40jq ) || ( ( gp05of40jq && mz1rnpnlwv )
|| ( ei1tp4n0sg && mz1rnpnlwv ) ) ) ; gp05of40jq = ! ei1tp4n0sg ; mz1rnpnlwv
= ( ( rtB . duvdygyww3_pbm3vprmfu [ i ] != 0.0 ) && ( rtB .
e12edrfloo_g2mlkqadfk [ i ] != 0.0 ) ) ; mnuxt5bjm3 = ! mz1rnpnlwv ;
lrtsbfwxfi = ( ( lrtsbfwxfi && ps0gsv53j1 ) || ( ( ps0gsv53j1 && kd0swje5lc )
|| ( lrtsbfwxfi && kd0swje5lc ) ) ) ; kd0swje5lc = ! lrtsbfwxfi ; ps0gsv53j1
= ( ( rtB . hdq3sas2ki_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
mb1uadi5mp_merlcviukg [ i ] != 0.0 ) ) ; jzppgyremk = ! ps0gsv53j1 ;
ly55avz0on = ( ( ly55avz0on && acnboc2pj5 ) || ( ( acnboc2pj5 && prvk5mbpf5 )
|| ( ly55avz0on && prvk5mbpf5 ) ) ) ; acnboc2pj5 = ! ly55avz0on ; prvk5mbpf5
= ( ( rtB . d0j3s2h0fw_fqdqrf4qbc [ i ] != 0.0 ) && ( rtB .
atnni5r0cg_nz4o0shxby [ i ] != 0.0 ) ) ; ipu5rjkizk = ! prvk5mbpf5 ;
hq3r3kt2eb = ( ( hq3r3kt2eb && fc1dhrbbpr ) || ( ( fc1dhrbbpr && ghl4zfeph4 )
|| ( hq3r3kt2eb && ghl4zfeph4 ) ) ) ; fc1dhrbbpr = ! hq3r3kt2eb ; l5doslu5sm
= ( ( l5doslu5sm && ( rtP . Constant8_Value != 0.0 ) ) || ( ( ( rtP .
Constant8_Value != 0.0 ) && laaoxlq01t ) || ( l5doslu5sm && laaoxlq01t ) ) )
; laaoxlq01t = ! l5doslu5sm ; ghl4zfeph4 = ( ( rtB . pv1eqm5xkh_llw0u2ae0v [
i ] != 0.0 ) && ( rtB . aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; gujotzwkwx =
! ghl4zfeph4 ; gujotzwkwx = ( ( laaoxlq01t && rtB . nep0lfrure ) || (
gujotzwkwx && rtB . nep0lfrure ) || ( gujotzwkwx && laaoxlq01t ) ) ;
laaoxlq01t = ! gujotzwkwx ; ipu5rjkizk = ( ( ipu5rjkizk && fc1dhrbbpr ) || (
laaoxlq01t && fc1dhrbbpr ) || ( laaoxlq01t && ipu5rjkizk ) ) ; fc1dhrbbpr = !
ipu5rjkizk ; jzppgyremk = ( ( jzppgyremk && acnboc2pj5 ) || ( fc1dhrbbpr &&
acnboc2pj5 ) || ( fc1dhrbbpr && jzppgyremk ) ) ; acnboc2pj5 = ! jzppgyremk ;
mnuxt5bjm3 = ( ( mnuxt5bjm3 && kd0swje5lc ) || ( acnboc2pj5 && kd0swje5lc )
|| ( acnboc2pj5 && mnuxt5bjm3 ) ) ; kd0swje5lc = ! mnuxt5bjm3 ; exodrh31r0 =
( ( exodrh31r0 && gp05of40jq ) || ( kd0swje5lc && gp05of40jq ) || (
kd0swje5lc && exodrh31r0 ) ) ; kd0swje5lc = ! exodrh31r0 ; rtB . chtfyle541 [
i ] = ( ( j1ghefbd0z && ofumorx152 ) || ( kd0swje5lc && ofumorx152 ) || (
kd0swje5lc && j1ghefbd0z ) ) ; rtB . ipy3a3eyha_bjvjhhzy4i [ i ] = di3uulbgru
; rtB . j5zwa5doxs_jzx3amusab [ i ] = n5ffvnodb4 ; rtB .
cbg5aezb2l_ezqlmfzvpq [ i ] = c0zfyvrjyr ; rtB . k5dw2ubits_dapv3jlyq5 [ i ]
= fzfxyupb2a ; rtB . ptibaxqwhr_bnlywzniup [ i ] = eu3if0esy5 ; rtB .
bg0t2wkg4v_hv2ho1zopz [ i ] = n0y5i4sfv4 ; rtB . opbmgdqrrh_lnjdk5wtww [ i ]
= ptm2g1jrzq ; rtB . jfr1cydlmf_bsqwvugooi [ i ] = hsq0gmwhf1 ; rtB .
ghlad3snpw_nuebgmauvi [ i ] = pyvcfirfxl ; rtB . hroavh0osn_bjbgfqrolh [ i ]
= eyvam2i2s0 ; rtB . aslsn1kxem_owjr1h1vqy [ i ] = onvcfsseel ; rtB .
eo2orjlbpn_ldqodwenvz [ i ] = na2jffwawb ; rtB . hywsx34klc_evg4t2fsev [ i ]
= ddjre2zmsi ; rtB . enz4utgujq_ax3wx1gs5w [ i ] = gdruigwbhd ; rtB .
ch1vfrhmwf_as0qznsxlv [ i ] = acqtmo21w4 ; rtB . dvfd4bapya_ifotjnizh4 [ i ]
= prjvosi3kg ; rtB . cip00ogfbl_ltu3syw14q [ i ] = exodrh31r0 ; rtB .
hevrzrbyzv_ojunzewo4f [ i ] = mnuxt5bjm3 ; rtB . drcoma10sb_o2tow3gxzm [ i ]
= jzppgyremk ; rtB . i1dzdpyvl0_ipgns4eet5 [ i ] = ipu5rjkizk ; rtB .
kokpmriqjd_fkr0r45bcn [ i ] = gujotzwkwx ; rtB . i00kgkq2se_oyypvi4boh [ i ]
= laaoxlq01t ; rtB . lvq0wkbq5g_pxqvlbal2i [ i ] = l5doslu5sm ; rtB .
ivyl1d5lcs_fdinthrxmb [ i ] = ghl4zfeph4 ; rtB . cj5blvxkbp_nvsvtgkap4 [ i ]
= fc1dhrbbpr ; rtB . i2fuwm33dq_p5h3gwuwqg [ i ] = hq3r3kt2eb ; rtB .
fgzzjjvqc2_lxo5edjg3c [ i ] = prvk5mbpf5 ; rtB . efzmfqzgfn_m3yhjduhi1 [ i ]
= acnboc2pj5 ; rtB . azbmjhz5nq_ctvw0tpkon [ i ] = ly55avz0on ; rtB .
l4kudr2ugq_jacdjrqyev [ i ] = kd0swje5lc ; rtB . dr51c3vtiw_icdfyazkhu [ i ]
= ps0gsv53j1 ; rtB . chubjtjs5o_c0dok3111h [ i ] = lrtsbfwxfi ; rtB .
navscbncbk_dypejvacrn [ i ] = mz1rnpnlwv ; rtB . mpimn3pk2a_mdoasc5av4 [ i ]
= gp05of40jq ; rtB . elnc4bguh0_h522xzlxvt [ i ] = ei1tp4n0sg ; rtB .
pvl3ihsdi1_guugdwf2m3 [ i ] = bffixdye4i ; rtB . fyq2eycvn2_dhamdvybc1 [ i ]
= d4x3ixph32 ; rtB . ng0rkp0slx_m3ybdk4ikc [ i ] = bz5yphvfzu ; rtB .
bpymfu52r1_czkfpwuzm5 [ i ] = jdl2smzdyx ; rtB . fmry3aj0td_nyxm0bsxsn [ i ]
= npybttpyko ; rtB . c2amsfov4f_o4f35lbcvx [ i ] = cs1lh4gtaf ; rtB .
ob4p5dhl3m_jz50ptvnrg [ i ] = odvfd0u0fo ; rtB . okfrtz4kdd_ju13rw2h0m [ i ]
= imu0vk0kqs ; rtB . al4kom1apz_al00mdgrv4 [ i ] = hwyatr3cz3 ; rtB .
ialmajuuaw_afnsueciae [ i ] = pnjy3uthvc ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . j1tkhfev4u . LoggedData
) , & rtB . chtfyle541 [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ mnuxt5bjm3 = rtB . hevrzrbyzv_ojunzewo4f [ i ] ; ei1tp4n0sg = rtB .
elnc4bguh0_h522xzlxvt [ i ] ; exodrh31r0 = rtB . cip00ogfbl_ltu3syw14q [ i ]
; jdl2smzdyx = rtB . bpymfu52r1_czkfpwuzm5 [ i ] ; na2jffwawb = rtB .
eo2orjlbpn_ldqodwenvz [ i ] ; jzppgyremk = rtB . drcoma10sb_o2tow3gxzm [ i ]
; lrtsbfwxfi = rtB . chubjtjs5o_c0dok3111h [ i ] ; ipu5rjkizk = rtB .
i1dzdpyvl0_ipgns4eet5 [ i ] ; ly55avz0on = rtB . azbmjhz5nq_ctvw0tpkon [ i ]
; ps0gsv53j1 = rtB . dr51c3vtiw_icdfyazkhu [ i ] ; gujotzwkwx = rtB .
kokpmriqjd_fkr0r45bcn [ i ] ; hq3r3kt2eb = rtB . i2fuwm33dq_p5h3gwuwqg [ i ]
; ghl4zfeph4 = rtB . ivyl1d5lcs_fdinthrxmb [ i ] ; l5doslu5sm = rtB .
lvq0wkbq5g_pxqvlbal2i [ i ] ; prvk5mbpf5 = rtB . fgzzjjvqc2_lxo5edjg3c [ i ]
; mz1rnpnlwv = rtB . navscbncbk_dypejvacrn [ i ] ; bffixdye4i = rtB .
pvl3ihsdi1_guugdwf2m3 [ i ] ; mnuxt5bjm3 = ( ( mnuxt5bjm3 && ei1tp4n0sg ) ||
( ( ei1tp4n0sg && bffixdye4i ) || ( mnuxt5bjm3 && bffixdye4i ) ) ) ;
j1ghefbd0z = ! mnuxt5bjm3 ; exodrh31r0 = ( ( exodrh31r0 && jdl2smzdyx ) || (
( jdl2smzdyx && na2jffwawb ) || ( exodrh31r0 && na2jffwawb ) ) ) ; na2jffwawb
= ! exodrh31r0 ; ei1tp4n0sg = ( ( rtB . myaymb2awt_mbvzarwird [ i ] != 0.0 )
&& ( rtB . e12edrfloo_g2mlkqadfk [ i ] != 0.0 ) ) ; kd0swje5lc = ! ei1tp4n0sg
; jzppgyremk = ( ( jzppgyremk && lrtsbfwxfi ) || ( ( lrtsbfwxfi && mz1rnpnlwv
) || ( jzppgyremk && mz1rnpnlwv ) ) ) ; lrtsbfwxfi = ! jzppgyremk ;
gp05of40jq = ( ( rtB . duvdygyww3_pbm3vprmfu [ i ] != 0.0 ) && ( rtB .
mb1uadi5mp_merlcviukg [ i ] != 0.0 ) ) ; jdl2smzdyx = ! gp05of40jq ;
ipu5rjkizk = ( ( ipu5rjkizk && ly55avz0on ) || ( ( ly55avz0on && ps0gsv53j1 )
|| ( ipu5rjkizk && ps0gsv53j1 ) ) ) ; ly55avz0on = ! ipu5rjkizk ; acnboc2pj5
= ( ( rtB . hdq3sas2ki_jwzvbuczlb [ i ] != 0.0 ) && ( rtB .
atnni5r0cg_nz4o0shxby [ i ] != 0.0 ) ) ; fc1dhrbbpr = ! acnboc2pj5 ;
gujotzwkwx = ( ( gujotzwkwx && hq3r3kt2eb ) || ( ( hq3r3kt2eb && prvk5mbpf5 )
|| ( gujotzwkwx && prvk5mbpf5 ) ) ) ; hq3r3kt2eb = ! gujotzwkwx ; l5doslu5sm
= ( ( ghl4zfeph4 && ( rtP . Constant9_Value != 0.0 ) ) || ( ( ( rtP .
Constant9_Value != 0.0 ) && l5doslu5sm ) || ( ghl4zfeph4 && l5doslu5sm ) ) )
; laaoxlq01t = ! l5doslu5sm ; ps0gsv53j1 = ( ( rtB . d0j3s2h0fw_fqdqrf4qbc [
i ] != 0.0 ) && ( rtB . aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; ghl4zfeph4 =
! ps0gsv53j1 ; laaoxlq01t = ( ( laaoxlq01t && rtB . dkkmrdnqfw ) || (
ghl4zfeph4 && rtB . dkkmrdnqfw ) || ( ghl4zfeph4 && laaoxlq01t ) ) ;
ghl4zfeph4 = ! laaoxlq01t ; hq3r3kt2eb = ( ( fc1dhrbbpr && hq3r3kt2eb ) || (
ghl4zfeph4 && hq3r3kt2eb ) || ( ghl4zfeph4 && fc1dhrbbpr ) ) ; fc1dhrbbpr = !
hq3r3kt2eb ; ly55avz0on = ( ( jdl2smzdyx && ly55avz0on ) || ( fc1dhrbbpr &&
ly55avz0on ) || ( fc1dhrbbpr && jdl2smzdyx ) ) ; jdl2smzdyx = ! ly55avz0on ;
lrtsbfwxfi = ( ( kd0swje5lc && lrtsbfwxfi ) || ( jdl2smzdyx && lrtsbfwxfi )
|| ( jdl2smzdyx && kd0swje5lc ) ) ; kd0swje5lc = ! lrtsbfwxfi ; rtB .
obvrbahkgr [ i ] = ( ( j1ghefbd0z && na2jffwawb ) || ( kd0swje5lc &&
na2jffwawb ) || ( kd0swje5lc && j1ghefbd0z ) ) ; rtB . mpimn3pk2a_mdoasc5av4
[ i ] = gp05of40jq ; rtB . efzmfqzgfn_m3yhjduhi1 [ i ] = acnboc2pj5 ; rtB .
i00kgkq2se_oyypvi4boh [ i ] = laaoxlq01t ; rtB . lvq0wkbq5g_pxqvlbal2i [ i ]
= l5doslu5sm ; rtB . ivyl1d5lcs_fdinthrxmb [ i ] = ghl4zfeph4 ; rtB .
i2fuwm33dq_p5h3gwuwqg [ i ] = hq3r3kt2eb ; rtB . kokpmriqjd_fkr0r45bcn [ i ]
= gujotzwkwx ; rtB . dr51c3vtiw_icdfyazkhu [ i ] = ps0gsv53j1 ; rtB .
azbmjhz5nq_ctvw0tpkon [ i ] = ly55avz0on ; rtB . i1dzdpyvl0_ipgns4eet5 [ i ]
= ipu5rjkizk ; rtB . chubjtjs5o_c0dok3111h [ i ] = lrtsbfwxfi ; rtB .
drcoma10sb_o2tow3gxzm [ i ] = jzppgyremk ; rtB . eo2orjlbpn_ldqodwenvz [ i ]
= na2jffwawb ; rtB . bpymfu52r1_czkfpwuzm5 [ i ] = jdl2smzdyx ; rtB .
cip00ogfbl_ltu3syw14q [ i ] = exodrh31r0 ; rtB . elnc4bguh0_h522xzlxvt [ i ]
= ei1tp4n0sg ; rtB . hevrzrbyzv_ojunzewo4f [ i ] = mnuxt5bjm3 ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . bcpod2sutp
. LoggedData ) , & rtB . obvrbahkgr [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { lrtsbfwxfi = rtB . chubjtjs5o_c0dok3111h [ i ] ; exodrh31r0
= rtB . cip00ogfbl_ltu3syw14q [ i ] ; mnuxt5bjm3 = rtB .
hevrzrbyzv_ojunzewo4f [ i ] ; hq3r3kt2eb = rtB . i2fuwm33dq_p5h3gwuwqg [ i ]
; ipu5rjkizk = rtB . i1dzdpyvl0_ipgns4eet5 [ i ] ; gp05of40jq = rtB .
mpimn3pk2a_mdoasc5av4 [ i ] ; gujotzwkwx = rtB . kokpmriqjd_fkr0r45bcn [ i ]
; l5doslu5sm = rtB . lvq0wkbq5g_pxqvlbal2i [ i ] ; ly55avz0on = rtB .
azbmjhz5nq_ctvw0tpkon [ i ] ; jzppgyremk = rtB . drcoma10sb_o2tow3gxzm [ i ]
; ei1tp4n0sg = rtB . elnc4bguh0_h522xzlxvt [ i ] ; ps0gsv53j1 = rtB .
dr51c3vtiw_icdfyazkhu [ i ] ; acnboc2pj5 = rtB . efzmfqzgfn_m3yhjduhi1 [ i ]
; laaoxlq01t = rtB . i00kgkq2se_oyypvi4boh [ i ] ; mnuxt5bjm3 = ( (
lrtsbfwxfi && exodrh31r0 ) || ( ( exodrh31r0 && mnuxt5bjm3 ) || ( lrtsbfwxfi
&& mnuxt5bjm3 ) ) ) ; ipu5rjkizk = ( ( hq3r3kt2eb && ipu5rjkizk ) || ( (
ipu5rjkizk && gp05of40jq ) || ( hq3r3kt2eb && gp05of40jq ) ) ) ; gujotzwkwx =
( ( laaoxlq01t && gujotzwkwx ) || ( ( gujotzwkwx && acnboc2pj5 ) || (
laaoxlq01t && acnboc2pj5 ) ) ) ; exodrh31r0 = ( ( rtB . hdq3sas2ki_jwzvbuczlb
[ i ] != 0.0 ) && ( rtB . aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; j1ghefbd0z
= ( ( ps0gsv53j1 && ( rtP . Constant10_Value != 0.0 ) ) || ( ( ( rtP .
Constant10_Value != 0.0 ) && l5doslu5sm ) || ( ps0gsv53j1 && l5doslu5sm ) ) )
; na2jffwawb = exodrh31r0 ^ j1ghefbd0z ; hq3r3kt2eb = ( ( rtB .
duvdygyww3_pbm3vprmfu [ i ] != 0.0 ) && ( rtB . atnni5r0cg_nz4o0shxby [ i ]
!= 0.0 ) ) ; l5doslu5sm = na2jffwawb ^ hq3r3kt2eb ; lrtsbfwxfi = gujotzwkwx ^
l5doslu5sm ; kd0swje5lc = ( ( rtB . myaymb2awt_mbvzarwird [ i ] != 0.0 ) && (
rtB . mb1uadi5mp_merlcviukg [ i ] != 0.0 ) ) ; gp05of40jq = lrtsbfwxfi ^
kd0swje5lc ; jdl2smzdyx = ipu5rjkizk ^ gp05of40jq ; jzppgyremk = ( (
ly55avz0on && jzppgyremk ) || ( ( jzppgyremk && ei1tp4n0sg ) || ( ly55avz0on
&& ei1tp4n0sg ) ) ) ; ly55avz0on = jdl2smzdyx ^ jzppgyremk ; rtB . ftywdhfrnq
[ i ] = mnuxt5bjm3 ^ ly55avz0on ; rtB . pvl3ihsdi1_guugdwf2m3 [ i ] =
j1ghefbd0z ; rtB . eo2orjlbpn_ldqodwenvz [ i ] = na2jffwawb ; rtB .
l4kudr2ugq_jacdjrqyev [ i ] = kd0swje5lc ; rtB . bpymfu52r1_czkfpwuzm5 [ i ]
= jdl2smzdyx ; rtB . drcoma10sb_o2tow3gxzm [ i ] = jzppgyremk ; rtB .
azbmjhz5nq_ctvw0tpkon [ i ] = ly55avz0on ; rtB . lvq0wkbq5g_pxqvlbal2i [ i ]
= l5doslu5sm ; rtB . kokpmriqjd_fkr0r45bcn [ i ] = gujotzwkwx ; rtB .
mpimn3pk2a_mdoasc5av4 [ i ] = gp05of40jq ; rtB . i1dzdpyvl0_ipgns4eet5 [ i ]
= ipu5rjkizk ; rtB . i2fuwm33dq_p5h3gwuwqg [ i ] = hq3r3kt2eb ; rtB .
hevrzrbyzv_ojunzewo4f [ i ] = mnuxt5bjm3 ; rtB . cip00ogfbl_ltu3syw14q [ i ]
= exodrh31r0 ; rtB . chubjtjs5o_c0dok3111h [ i ] = lrtsbfwxfi ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . kna32tlcxt
. LoggedData ) , & rtB . ftywdhfrnq [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { jzppgyremk = ( ( rtB . hevrzrbyzv_ojunzewo4f [ i ] && rtB .
azbmjhz5nq_ctvw0tpkon [ i ] ) || ( rtB . bpymfu52r1_czkfpwuzm5 [ i ] && rtB .
drcoma10sb_o2tow3gxzm [ i ] ) ) ; gujotzwkwx = ( ( rtB .
kokpmriqjd_fkr0r45bcn [ i ] && rtB . lvq0wkbq5g_pxqvlbal2i [ i ] ) || ( rtB .
eo2orjlbpn_ldqodwenvz [ i ] && rtB . i2fuwm33dq_p5h3gwuwqg [ i ] ) ) ;
mnuxt5bjm3 = ( ( rtB . duvdygyww3_pbm3vprmfu [ i ] != 0.0 ) && ( rtB .
aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; exodrh31r0 = ( rtB .
cip00ogfbl_ltu3syw14q [ i ] && rtB . pvl3ihsdi1_guugdwf2m3 [ i ] ) ;
j1ghefbd0z = mnuxt5bjm3 ^ exodrh31r0 ; na2jffwawb = ( ( rtB .
myaymb2awt_mbvzarwird [ i ] != 0.0 ) && ( rtB . atnni5r0cg_nz4o0shxby [ i ]
!= 0.0 ) ) ; hq3r3kt2eb = j1ghefbd0z ^ na2jffwawb ; l5doslu5sm = gujotzwkwx ^
hq3r3kt2eb ; ipu5rjkizk = ( ( rtB . i1dzdpyvl0_ipgns4eet5 [ i ] && rtB .
mpimn3pk2a_mdoasc5av4 [ i ] ) || ( rtB . chubjtjs5o_c0dok3111h [ i ] && rtB .
l4kudr2ugq_jacdjrqyev [ i ] ) ) ; ly55avz0on = l5doslu5sm ^ ipu5rjkizk ; rtB
. ay0uhgxppx [ i ] = jzppgyremk ^ ly55avz0on ; rtB . hevrzrbyzv_ojunzewo4f [
i ] = mnuxt5bjm3 ; rtB . azbmjhz5nq_ctvw0tpkon [ i ] = ly55avz0on ; rtB .
drcoma10sb_o2tow3gxzm [ i ] = jzppgyremk ; rtB . kokpmriqjd_fkr0r45bcn [ i ]
= gujotzwkwx ; rtB . lvq0wkbq5g_pxqvlbal2i [ i ] = l5doslu5sm ; rtB .
eo2orjlbpn_ldqodwenvz [ i ] = na2jffwawb ; rtB . i2fuwm33dq_p5h3gwuwqg [ i ]
= hq3r3kt2eb ; rtB . cip00ogfbl_ltu3syw14q [ i ] = exodrh31r0 ; rtB .
pvl3ihsdi1_guugdwf2m3 [ i ] = j1ghefbd0z ; rtB . i1dzdpyvl0_ipgns4eet5 [ i ]
= ipu5rjkizk ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . n5jknqfd2r . LoggedData ) , & rtB . ay0uhgxppx [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { ipu5rjkizk = ( ( rtB .
drcoma10sb_o2tow3gxzm [ i ] && rtB . azbmjhz5nq_ctvw0tpkon [ i ] ) || ( rtB .
lvq0wkbq5g_pxqvlbal2i [ i ] && rtB . i1dzdpyvl0_ipgns4eet5 [ i ] ) ) ;
jzppgyremk = ( ( rtB . myaymb2awt_mbvzarwird [ i ] != 0.0 ) && ( rtB .
aleuzbxubk_ppxrqq0gsf [ i ] != 0.0 ) ) ; mnuxt5bjm3 = ( rtB .
hevrzrbyzv_ojunzewo4f [ i ] && rtB . cip00ogfbl_ltu3syw14q [ i ] ) ;
exodrh31r0 = jzppgyremk ^ mnuxt5bjm3 ; gujotzwkwx = ( ( rtB .
kokpmriqjd_fkr0r45bcn [ i ] && rtB . i2fuwm33dq_p5h3gwuwqg [ i ] ) || ( rtB .
pvl3ihsdi1_guugdwf2m3 [ i ] && rtB . eo2orjlbpn_ldqodwenvz [ i ] ) ) ;
j1ghefbd0z = exodrh31r0 ^ gujotzwkwx ; rtB . n3ghdaztt5 [ i ] = ipu5rjkizk ^
j1ghefbd0z ; rtB . drcoma10sb_o2tow3gxzm [ i ] = jzppgyremk ; rtB .
i1dzdpyvl0_ipgns4eet5 [ i ] = ipu5rjkizk ; rtB . hevrzrbyzv_ojunzewo4f [ i ]
= mnuxt5bjm3 ; rtB . cip00ogfbl_ltu3syw14q [ i ] = exodrh31r0 ; rtB .
kokpmriqjd_fkr0r45bcn [ i ] = gujotzwkwx ; rtB . pvl3ihsdi1_guugdwf2m3 [ i ]
= j1ghefbd0z ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . mtoixlbpko . LoggedData ) , & rtB . n3ghdaztt5 [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { rtB . dqwbh3hq04 [ i ] = ( (
rtB . i1dzdpyvl0_ipgns4eet5 [ i ] && rtB . pvl3ihsdi1_guugdwf2m3 [ i ] ) || (
rtB . cip00ogfbl_ltu3syw14q [ i ] && rtB . kokpmriqjd_fkr0r45bcn [ i ] ) || (
rtB . drcoma10sb_o2tow3gxzm [ i ] && rtB . hevrzrbyzv_ojunzewo4f [ i ] ) ) ;
} if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { {
double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ac3vq3pg2w
. LoggedData ) , & rtB . dqwbh3hq04 [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { di3uulbgru = ! rtB . ipy3a3eyha_bjvjhhzy4i [ i ] ;
hwyatr3cz3 = ! rtB . al4kom1apz_al00mdgrv4 [ i ] ; imu0vk0kqs = ! rtB .
okfrtz4kdd_ju13rw2h0m [ i ] ; rtB . oaom5gl2vj [ i ] = ( ( di3uulbgru &&
hwyatr3cz3 ) || ( imu0vk0kqs && hwyatr3cz3 ) || ( imu0vk0kqs && di3uulbgru )
) ; rtB . ipy3a3eyha_bjvjhhzy4i [ i ] = di3uulbgru ; rtB .
al4kom1apz_al00mdgrv4 [ i ] = hwyatr3cz3 ; rtB . okfrtz4kdd_ju13rw2h0m [ i ]
= imu0vk0kqs ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . isl4udk1sa . LoggedData ) , & rtB . oaom5gl2vj [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { n5ffvnodb4 = ! rtB .
j5zwa5doxs_jzx3amusab [ i ] ; pnjy3uthvc = ! rtB . ialmajuuaw_afnsueciae [ i
] ; odvfd0u0fo = ! rtB . ob4p5dhl3m_jz50ptvnrg [ i ] ; rtB . j4pryny4vl [ i ]
= ( ( n5ffvnodb4 && pnjy3uthvc ) || ( odvfd0u0fo && pnjy3uthvc ) || (
odvfd0u0fo && n5ffvnodb4 ) ) ; rtB . j5zwa5doxs_jzx3amusab [ i ] = n5ffvnodb4
; rtB . ialmajuuaw_afnsueciae [ i ] = pnjy3uthvc ; rtB .
ob4p5dhl3m_jz50ptvnrg [ i ] = odvfd0u0fo ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . jxh30m4egg . LoggedData
) , & rtB . j4pryny4vl [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ fzfxyupb2a = ! rtB . k5dw2ubits_dapv3jlyq5 [ i ] ; c0zfyvrjyr = ! rtB .
cbg5aezb2l_ezqlmfzvpq [ i ] ; cs1lh4gtaf = ! rtB . c2amsfov4f_o4f35lbcvx [ i
] ; rtB . gsie3ma3c1 [ i ] = ( ( fzfxyupb2a && c0zfyvrjyr ) || ( cs1lh4gtaf
&& c0zfyvrjyr ) || ( cs1lh4gtaf && fzfxyupb2a ) ) ; rtB .
k5dw2ubits_dapv3jlyq5 [ i ] = fzfxyupb2a ; rtB . cbg5aezb2l_ezqlmfzvpq [ i ]
= c0zfyvrjyr ; rtB . c2amsfov4f_o4f35lbcvx [ i ] = cs1lh4gtaf ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . ocxxyzkydi
. LoggedData ) , & rtB . gsie3ma3c1 [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { n0y5i4sfv4 = ! rtB . bg0t2wkg4v_hv2ho1zopz [ i ] ;
eu3if0esy5 = ! rtB . ptibaxqwhr_bnlywzniup [ i ] ; npybttpyko = ! rtB .
fmry3aj0td_nyxm0bsxsn [ i ] ; rtB . j001cgyiv5 [ i ] = ( ( n0y5i4sfv4 &&
eu3if0esy5 ) || ( npybttpyko && eu3if0esy5 ) || ( npybttpyko && n0y5i4sfv4 )
) ; rtB . bg0t2wkg4v_hv2ho1zopz [ i ] = n0y5i4sfv4 ; rtB .
ptibaxqwhr_bnlywzniup [ i ] = eu3if0esy5 ; rtB . fmry3aj0td_nyxm0bsxsn [ i ]
= npybttpyko ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . ekuua0muto . LoggedData ) , & rtB . j001cgyiv5 [ 0 ] , 0
) ; } } } } for ( i = 0 ; i < 65536 ; i ++ ) { hsq0gmwhf1 = ! rtB .
jfr1cydlmf_bsqwvugooi [ i ] ; ptm2g1jrzq = ! rtB . opbmgdqrrh_lnjdk5wtww [ i
] ; ddjre2zmsi = ! rtB . hywsx34klc_evg4t2fsev [ i ] ; rtB . mtneenlfu1 [ i ]
= ( ( hsq0gmwhf1 && ptm2g1jrzq ) || ( ddjre2zmsi && ptm2g1jrzq ) || (
ddjre2zmsi && hsq0gmwhf1 ) ) ; rtB . jfr1cydlmf_bsqwvugooi [ i ] = hsq0gmwhf1
; rtB . opbmgdqrrh_lnjdk5wtww [ i ] = ptm2g1jrzq ; rtB .
hywsx34klc_evg4t2fsev [ i ] = ddjre2zmsi ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime = ssGetTaskTime ( rtS
, 2 ) ; ; if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval (
ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) {
rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . nlqhjgcw0m . LoggedData
) , & rtB . mtneenlfu1 [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i < 65536 ; i ++ )
{ eyvam2i2s0 = ! rtB . hroavh0osn_bjbgfqrolh [ i ] ; pyvcfirfxl = ! rtB .
ghlad3snpw_nuebgmauvi [ i ] ; gdruigwbhd = ! rtB . enz4utgujq_ax3wx1gs5w [ i
] ; rtB . kkmp2q1u0b [ i ] = ( ( eyvam2i2s0 && pyvcfirfxl ) || ( gdruigwbhd
&& pyvcfirfxl ) || ( gdruigwbhd && eyvam2i2s0 ) ) ; rtB .
hroavh0osn_bjbgfqrolh [ i ] = eyvam2i2s0 ; rtB . ghlad3snpw_nuebgmauvi [ i ]
= pyvcfirfxl ; rtB . enz4utgujq_ax3wx1gs5w [ i ] = gdruigwbhd ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double
locTime = ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . gvtkugchrm
. LoggedData ) , & rtB . kkmp2q1u0b [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { onvcfsseel = ! rtB . aslsn1kxem_owjr1h1vqy [ i ] ;
prjvosi3kg = ! rtB . dvfd4bapya_ifotjnizh4 [ i ] ; rtB . b3nhabfcsy [ i ] = (
( onvcfsseel && rtB . g0cwpbr0y0 ) || ( prjvosi3kg && rtB . g0cwpbr0y0 ) || (
prjvosi3kg && onvcfsseel ) ) ; rtB . aslsn1kxem_owjr1h1vqy [ i ] = onvcfsseel
; rtB . dvfd4bapya_ifotjnizh4 [ i ] = prjvosi3kg ; } if ( ssIsSampleHit ( rtS
, 2 , 0 ) ) { if ( ssGetLogOutput ( rtS ) ) { { double locTime =
ssGetTaskTime ( rtS , 2 ) ; ; if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) ( LogVar * ) ( rtDW . mt0pbtvv13
. LoggedData ) , & rtB . b3nhabfcsy [ 0 ] , 0 ) ; } } } } for ( i = 0 ; i <
65536 ; i ++ ) { acqtmo21w4 = ! rtB . ch1vfrhmwf_as0qznsxlv [ i ] ;
d4x3ixph32 = ! rtB . fyq2eycvn2_dhamdvybc1 [ i ] ; bz5yphvfzu = ! rtB .
ng0rkp0slx_m3ybdk4ikc [ i ] ; rtB . d0mmh1dnhq [ i ] = ( ( acqtmo21w4 &&
d4x3ixph32 ) || ( bz5yphvfzu && d4x3ixph32 ) || ( bz5yphvfzu && acqtmo21w4 )
) ; rtB . ch1vfrhmwf_as0qznsxlv [ i ] = acqtmo21w4 ; rtB .
fyq2eycvn2_dhamdvybc1 [ i ] = d4x3ixph32 ; rtB . ng0rkp0slx_m3ybdk4ikc [ i ]
= bz5yphvfzu ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ssGetLogOutput (
rtS ) ) { { double locTime = ssGetTaskTime ( rtS , 2 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . hbyfvpd5vj . LoggedData ) , & rtB . d0mmh1dnhq [ 0 ] , 0
) ; } } } } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) {
rtB . lg14uka0xz = ! ( rtP . Constant1_Value != 0.0 ) ; rtB . pwhdfwala2 = !
( rtP . Constant2_Value != 0.0 ) ; rtB . ixybpokhb1 = ! ( rtP .
Constant_Value != 0.0 ) ; rtB . o1pbhxvcvg = ! ( rtP . Constant_Value != 0.0
) ; rtB . ckztss5ead = ( rtB . ixybpokhb1 && rtB . o1pbhxvcvg ) ; rtB .
owa1qwu54g = ( rtP . Constant_Value != 0.0 ) ; rtB . luaye3cspa = ! ( rtP .
Constant3_Value != 0.0 ) ; rtB . ffzy44b5sp = ! ( rtP . Constant8_Value !=
0.0 ) ; rtB . g0cwpbr0y0 = ! rtP . Zero_Value ; rtB . ekqxrotgj0 = ! ( rtP .
Constant4_Value != 0.0 ) ; rtB . nep0lfrure = ! ( rtP . Constant9_Value !=
0.0 ) ; rtB . dkkmrdnqfw = ! ( rtP . Constant10_Value != 0.0 ) ; rtB .
jitrtk3yht = ! ( rtP . Constant5_Value != 0.0 ) ; rtB . cs3n5rrynv = ! ( rtP
. Constant6_Value != 0.0 ) ; rtB . gdqazxysni = ! ( rtP . Constant7_Value !=
0.0 ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlZeroCrossings ( void ) { { const double
* timePtr = ( double * ) rtDW . nlr254sz25 . TimePtr ; int_T * zcTimeIndices
= & rtDW . i1kdxf121h ; int_T zcTimeIndicesIdx = rtDW . eoc3eeucvi ; ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) -> lkymp5mmsr = ssGetT ( rtS ) -
timePtr [ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr =
( double * ) rtDW . pr3fwnlpgk . TimePtr ; int_T * zcTimeIndices = & rtDW .
fda3cbb3nw ; int_T zcTimeIndicesIdx = rtDW . efj1gvv2gr ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> ej24xtuw10 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . esvnbrk15f . TimePtr ; int_T * zcTimeIndices = & rtDW .
nxwnfuyem0 ; int_T zcTimeIndicesIdx = rtDW . krxfewyasy ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> hfuaisksbf = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . oznckgphen . TimePtr ; int_T * zcTimeIndices = & rtDW .
o1nablqqad ; int_T zcTimeIndicesIdx = rtDW . gphw1qtffc ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> n0kzmfrveb = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . jicbwiyez5 . TimePtr ; int_T * zcTimeIndices = & rtDW .
kak3h1i1oa ; int_T zcTimeIndicesIdx = rtDW . ppj5e0aivp ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> nmtsmwtdvc = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . d3umpea34x . TimePtr ; int_T * zcTimeIndices = & rtDW .
hs2zfz2nlh ; int_T zcTimeIndicesIdx = rtDW . cefzg3zmcq ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> cnj5w5ck4x = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . jkteypol3e . TimePtr ; int_T * zcTimeIndices = & rtDW .
ft0xburawt ; int_T zcTimeIndicesIdx = rtDW . mp21qtcsjx ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> plwzh3r5ar = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . gkjuub03ra . TimePtr ; int_T * zcTimeIndices = & rtDW .
nwykeulaqx ; int_T zcTimeIndicesIdx = rtDW . e22rmz1lwx ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> dvonqo3tkc = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . jksobmoalm . TimePtr ; int_T * zcTimeIndices = & rtDW .
bqxw0jmr2z ; int_T zcTimeIndicesIdx = rtDW . bhuyepyku4 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> c4r0wt5n20 = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . lj113kpzv4 . TimePtr ; int_T * zcTimeIndices = & rtDW .
dpqfjpkijy ; int_T zcTimeIndicesIdx = rtDW . jetevoghi4 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> jkm2ooy0px = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . om2gmm2jag . TimePtr ; int_T * zcTimeIndices = & rtDW .
hye5igtl1q ; int_T zcTimeIndicesIdx = rtDW . kfdh0vb0dl ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> ds12kxlwfj = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . h41vgtc3ky . TimePtr ; int_T * zcTimeIndices = & rtDW .
bdrhcv20eb ; int_T zcTimeIndicesIdx = rtDW . lk4newzhbn ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> i4splpbi2a = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . ln2xpz4hzg . TimePtr ; int_T * zcTimeIndices = & rtDW .
dbkpycgaes ; int_T zcTimeIndicesIdx = rtDW . jgbhsrli5q ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> n0duzaaimr = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . bcmr1x5pix . TimePtr ; int_T * zcTimeIndices = & rtDW .
ko4owp1rtb ; int_T zcTimeIndicesIdx = rtDW . jhztvkm5k1 ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> mpenkpmahv = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . dhecasfssm . TimePtr ; int_T * zcTimeIndices = & rtDW .
ojn5cdcyud ; int_T zcTimeIndicesIdx = rtDW . bz3dqqo1kx ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> dghznguqbz = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } { const double * timePtr = (
double * ) rtDW . jzrj3tcydh . TimePtr ; int_T * zcTimeIndices = & rtDW .
ar3uovtx04 ; int_T zcTimeIndicesIdx = rtDW . hcnnk1udor ; ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) -> p5tsxjplhv = ssGetT ( rtS ) - timePtr
[ zcTimeIndices [ zcTimeIndicesIdx ] ] ; } } void MdlTerminate ( void ) {
rt_FREE ( rtDW . nlr254sz25 . RSimInfoPtr ) ; rt_FREE ( rtDW . pr3fwnlpgk .
RSimInfoPtr ) ; rt_FREE ( rtDW . esvnbrk15f . RSimInfoPtr ) ; rt_FREE ( rtDW
. oznckgphen . RSimInfoPtr ) ; rt_FREE ( rtDW . jicbwiyez5 . RSimInfoPtr ) ;
rt_FREE ( rtDW . d3umpea34x . RSimInfoPtr ) ; rt_FREE ( rtDW . jkteypol3e .
RSimInfoPtr ) ; rt_FREE ( rtDW . gkjuub03ra . RSimInfoPtr ) ; rt_FREE ( rtDW
. jksobmoalm . RSimInfoPtr ) ; rt_FREE ( rtDW . lj113kpzv4 . RSimInfoPtr ) ;
rt_FREE ( rtDW . om2gmm2jag . RSimInfoPtr ) ; rt_FREE ( rtDW . h41vgtc3ky .
RSimInfoPtr ) ; rt_FREE ( rtDW . ln2xpz4hzg . RSimInfoPtr ) ; rt_FREE ( rtDW
. bcmr1x5pix . RSimInfoPtr ) ; rt_FREE ( rtDW . dhecasfssm . RSimInfoPtr ) ;
rt_FREE ( rtDW . jzrj3tcydh . RSimInfoPtr ) ; { if ( rtDW . dwoanvig1x .
AQHandles ) { sdiTerminateStreaming ( & rtDW . dwoanvig1x . AQHandles ) ; } }
} static void mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_Approx_Multiplier_M2_AMA2_NAB12_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_Approx_Multiplier_M2_AMA2_NAB12_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_Approx_Multiplier_M2_AMA2_NAB12_extractBitFieldFromMxArray ( const
mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_Approx_Multiplier_M2_AMA2_NAB12_extractBitFieldFromMxArray ( const mxArray
* srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) ; static void
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_Approx_Multiplier_M2_AMA2_NAB12_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_Approx_Multiplier_M2_AMA2_NAB12_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_Approx_Multiplier_M2_AMA2_NAB12_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) ; static uint_T
mr_Approx_Multiplier_M2_AMA2_NAB12_extractBitFieldFromCellArrayWithOffset (
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T
numBits ) { const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray *
mr_Approx_Multiplier_M2_AMA2_NAB12_GetDWork ( ) { static const char *
ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 48 ] = { "rtDW.i1kdxf121h" , "rtDW.eoc3eeucvi" ,
"rtDW.mzcomateoh" , "rtDW.fda3cbb3nw" , "rtDW.efj1gvv2gr" , "rtDW.hhucah42fn"
, "rtDW.nxwnfuyem0" , "rtDW.krxfewyasy" , "rtDW.nzc1kt2qsq" ,
"rtDW.o1nablqqad" , "rtDW.gphw1qtffc" , "rtDW.bt2kjhduml" , "rtDW.kak3h1i1oa"
, "rtDW.ppj5e0aivp" , "rtDW.dqs2ms3eur" , "rtDW.hs2zfz2nlh" ,
"rtDW.cefzg3zmcq" , "rtDW.d2mqo0d2sp" , "rtDW.ft0xburawt" , "rtDW.mp21qtcsjx"
, "rtDW.nzt5mfnv3k" , "rtDW.nwykeulaqx" , "rtDW.e22rmz1lwx" ,
"rtDW.g5hpdcltcn" , "rtDW.bqxw0jmr2z" , "rtDW.bhuyepyku4" , "rtDW.jqv01tm0px"
, "rtDW.dpqfjpkijy" , "rtDW.jetevoghi4" , "rtDW.ha1vep0n15" ,
"rtDW.hye5igtl1q" , "rtDW.kfdh0vb0dl" , "rtDW.b0dn2sp3hb" , "rtDW.bdrhcv20eb"
, "rtDW.lk4newzhbn" , "rtDW.miqffbz3nv" , "rtDW.dbkpycgaes" ,
"rtDW.jgbhsrli5q" , "rtDW.jq3gjo2hvz" , "rtDW.ko4owp1rtb" , "rtDW.jhztvkm5k1"
, "rtDW.j4s4fpsto2" , "rtDW.ojn5cdcyud" , "rtDW.bz3dqqo1kx" ,
"rtDW.jzfwrfb3lq" , "rtDW.ar3uovtx04" , "rtDW.hcnnk1udor" , "rtDW.fob3jepxrd"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 48 ,
rtdwDataFieldNames ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray
( rtdwData , 0 , 0 , ( const void * ) & ( rtDW . i1kdxf121h ) , sizeof ( rtDW
. i1kdxf121h ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . eoc3eeucvi ) , sizeof ( rtDW .
eoc3eeucvi ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 2 , ( const void * ) & ( rtDW . mzcomateoh ) , sizeof ( rtDW .
mzcomateoh ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 3 , ( const void * ) & ( rtDW . fda3cbb3nw ) , sizeof ( rtDW .
fda3cbb3nw ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . efj1gvv2gr ) , sizeof ( rtDW .
efj1gvv2gr ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( rtDW . hhucah42fn ) , sizeof ( rtDW .
hhucah42fn ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 6 , ( const void * ) & ( rtDW . nxwnfuyem0 ) , sizeof ( rtDW .
nxwnfuyem0 ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . krxfewyasy ) , sizeof ( rtDW .
krxfewyasy ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 8 , ( const void * ) & ( rtDW . nzc1kt2qsq ) , sizeof ( rtDW .
nzc1kt2qsq ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( rtDW . o1nablqqad ) , sizeof ( rtDW .
o1nablqqad ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( rtDW . gphw1qtffc ) , sizeof ( rtDW
. gphw1qtffc ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 11 , ( const void * ) & ( rtDW . bt2kjhduml ) , sizeof ( rtDW
. bt2kjhduml ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 12 , ( const void * ) & ( rtDW . kak3h1i1oa ) , sizeof ( rtDW
. kak3h1i1oa ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( rtDW . ppj5e0aivp ) , sizeof ( rtDW
. ppj5e0aivp ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 14 , ( const void * ) & ( rtDW . dqs2ms3eur ) , sizeof ( rtDW
. dqs2ms3eur ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 15 , ( const void * ) & ( rtDW . hs2zfz2nlh ) , sizeof ( rtDW
. hs2zfz2nlh ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( rtDW . cefzg3zmcq ) , sizeof ( rtDW
. cefzg3zmcq ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 17 , ( const void * ) & ( rtDW . d2mqo0d2sp ) , sizeof ( rtDW
. d2mqo0d2sp ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 18 , ( const void * ) & ( rtDW . ft0xburawt ) , sizeof ( rtDW
. ft0xburawt ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( rtDW . mp21qtcsjx ) , sizeof ( rtDW
. mp21qtcsjx ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( rtDW . nzt5mfnv3k ) , sizeof ( rtDW
. nzt5mfnv3k ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 21 , ( const void * ) & ( rtDW . nwykeulaqx ) , sizeof ( rtDW
. nwykeulaqx ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( rtDW . e22rmz1lwx ) , sizeof ( rtDW
. e22rmz1lwx ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 23 , ( const void * ) & ( rtDW . g5hpdcltcn ) , sizeof ( rtDW
. g5hpdcltcn ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 24 , ( const void * ) & ( rtDW . bqxw0jmr2z ) , sizeof ( rtDW
. bqxw0jmr2z ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 25 , ( const void * ) & ( rtDW . bhuyepyku4 ) , sizeof ( rtDW
. bhuyepyku4 ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 26 , ( const void * ) & ( rtDW . jqv01tm0px ) , sizeof ( rtDW
. jqv01tm0px ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 27 , ( const void * ) & ( rtDW . dpqfjpkijy ) , sizeof ( rtDW
. dpqfjpkijy ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 28 , ( const void * ) & ( rtDW . jetevoghi4 ) , sizeof ( rtDW
. jetevoghi4 ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 29 , ( const void * ) & ( rtDW . ha1vep0n15 ) , sizeof ( rtDW
. ha1vep0n15 ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( rtDW . hye5igtl1q ) , sizeof ( rtDW
. hye5igtl1q ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 31 , ( const void * ) & ( rtDW . kfdh0vb0dl ) , sizeof ( rtDW
. kfdh0vb0dl ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( rtDW . b0dn2sp3hb ) , sizeof ( rtDW
. b0dn2sp3hb ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 33 , ( const void * ) & ( rtDW . bdrhcv20eb ) , sizeof ( rtDW
. bdrhcv20eb ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 34 , ( const void * ) & ( rtDW . lk4newzhbn ) , sizeof ( rtDW
. lk4newzhbn ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 35 , ( const void * ) & ( rtDW . miqffbz3nv ) , sizeof ( rtDW
. miqffbz3nv ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( rtDW . dbkpycgaes ) , sizeof ( rtDW
. dbkpycgaes ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 37 , ( const void * ) & ( rtDW . jgbhsrli5q ) , sizeof ( rtDW
. jgbhsrli5q ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 38 , ( const void * ) & ( rtDW . jq3gjo2hvz ) , sizeof ( rtDW
. jq3gjo2hvz ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 39 , ( const void * ) & ( rtDW . ko4owp1rtb ) , sizeof ( rtDW
. ko4owp1rtb ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( rtDW . jhztvkm5k1 ) , sizeof ( rtDW
. jhztvkm5k1 ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 41 , ( const void * ) & ( rtDW . j4s4fpsto2 ) , sizeof ( rtDW
. j4s4fpsto2 ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( rtDW . ojn5cdcyud ) , sizeof ( rtDW
. ojn5cdcyud ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 43 , ( const void * ) & ( rtDW . bz3dqqo1kx ) , sizeof ( rtDW
. bz3dqqo1kx ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 44 , ( const void * ) & ( rtDW . jzfwrfb3lq ) , sizeof ( rtDW
. jzfwrfb3lq ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 45 , ( const void * ) & ( rtDW . ar3uovtx04 ) , sizeof ( rtDW
. ar3uovtx04 ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 46 , ( const void * ) & ( rtDW . hcnnk1udor ) , sizeof ( rtDW
. hcnnk1udor ) ) ; mr_Approx_Multiplier_M2_AMA2_NAB12_cacheDataAsMxArray (
rtdwData , 0 , 47 , ( const void * ) & ( rtDW . fob3jepxrd ) , sizeof ( rtDW
. fob3jepxrd ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return
ssDW ; } void mr_Approx_Multiplier_M2_AMA2_NAB12_SetDWork ( const mxArray *
ssDW ) { ( void ) ssDW ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . i1kdxf121h ) , rtdwData , 0 , 0 , sizeof ( rtDW . i1kdxf121h ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . eoc3eeucvi ) , rtdwData , 0 , 1 , sizeof ( rtDW . eoc3eeucvi ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . mzcomateoh ) , rtdwData , 0 , 2 , sizeof ( rtDW . mzcomateoh ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . fda3cbb3nw ) , rtdwData , 0 , 3 , sizeof ( rtDW . fda3cbb3nw ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . efj1gvv2gr ) , rtdwData , 0 , 4 , sizeof ( rtDW . efj1gvv2gr ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hhucah42fn ) , rtdwData , 0 , 5 , sizeof ( rtDW . hhucah42fn ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . nxwnfuyem0 ) , rtdwData , 0 , 6 , sizeof ( rtDW . nxwnfuyem0 ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . krxfewyasy ) , rtdwData , 0 , 7 , sizeof ( rtDW . krxfewyasy ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . nzc1kt2qsq ) , rtdwData , 0 , 8 , sizeof ( rtDW . nzc1kt2qsq ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . o1nablqqad ) , rtdwData , 0 , 9 , sizeof ( rtDW . o1nablqqad ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . gphw1qtffc ) , rtdwData , 0 , 10 , sizeof ( rtDW . gphw1qtffc ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . bt2kjhduml ) , rtdwData , 0 , 11 , sizeof ( rtDW . bt2kjhduml ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . kak3h1i1oa ) , rtdwData , 0 , 12 , sizeof ( rtDW . kak3h1i1oa ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ppj5e0aivp ) , rtdwData , 0 , 13 , sizeof ( rtDW . ppj5e0aivp ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . dqs2ms3eur ) , rtdwData , 0 , 14 , sizeof ( rtDW . dqs2ms3eur ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hs2zfz2nlh ) , rtdwData , 0 , 15 , sizeof ( rtDW . hs2zfz2nlh ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . cefzg3zmcq ) , rtdwData , 0 , 16 , sizeof ( rtDW . cefzg3zmcq ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . d2mqo0d2sp ) , rtdwData , 0 , 17 , sizeof ( rtDW . d2mqo0d2sp ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ft0xburawt ) , rtdwData , 0 , 18 , sizeof ( rtDW . ft0xburawt ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . mp21qtcsjx ) , rtdwData , 0 , 19 , sizeof ( rtDW . mp21qtcsjx ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . nzt5mfnv3k ) , rtdwData , 0 , 20 , sizeof ( rtDW . nzt5mfnv3k ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . nwykeulaqx ) , rtdwData , 0 , 21 , sizeof ( rtDW . nwykeulaqx ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . e22rmz1lwx ) , rtdwData , 0 , 22 , sizeof ( rtDW . e22rmz1lwx ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . g5hpdcltcn ) , rtdwData , 0 , 23 , sizeof ( rtDW . g5hpdcltcn ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . bqxw0jmr2z ) , rtdwData , 0 , 24 , sizeof ( rtDW . bqxw0jmr2z ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . bhuyepyku4 ) , rtdwData , 0 , 25 , sizeof ( rtDW . bhuyepyku4 ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jqv01tm0px ) , rtdwData , 0 , 26 , sizeof ( rtDW . jqv01tm0px ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . dpqfjpkijy ) , rtdwData , 0 , 27 , sizeof ( rtDW . dpqfjpkijy ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jetevoghi4 ) , rtdwData , 0 , 28 , sizeof ( rtDW . jetevoghi4 ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ha1vep0n15 ) , rtdwData , 0 , 29 , sizeof ( rtDW . ha1vep0n15 ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hye5igtl1q ) , rtdwData , 0 , 30 , sizeof ( rtDW . hye5igtl1q ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . kfdh0vb0dl ) , rtdwData , 0 , 31 , sizeof ( rtDW . kfdh0vb0dl ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . b0dn2sp3hb ) , rtdwData , 0 , 32 , sizeof ( rtDW . b0dn2sp3hb ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . bdrhcv20eb ) , rtdwData , 0 , 33 , sizeof ( rtDW . bdrhcv20eb ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . lk4newzhbn ) , rtdwData , 0 , 34 , sizeof ( rtDW . lk4newzhbn ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . miqffbz3nv ) , rtdwData , 0 , 35 , sizeof ( rtDW . miqffbz3nv ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . dbkpycgaes ) , rtdwData , 0 , 36 , sizeof ( rtDW . dbkpycgaes ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jgbhsrli5q ) , rtdwData , 0 , 37 , sizeof ( rtDW . jgbhsrli5q ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jq3gjo2hvz ) , rtdwData , 0 , 38 , sizeof ( rtDW . jq3gjo2hvz ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ko4owp1rtb ) , rtdwData , 0 , 39 , sizeof ( rtDW . ko4owp1rtb ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jhztvkm5k1 ) , rtdwData , 0 , 40 , sizeof ( rtDW . jhztvkm5k1 ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . j4s4fpsto2 ) , rtdwData , 0 , 41 , sizeof ( rtDW . j4s4fpsto2 ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ojn5cdcyud ) , rtdwData , 0 , 42 , sizeof ( rtDW . ojn5cdcyud ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . bz3dqqo1kx ) , rtdwData , 0 , 43 , sizeof ( rtDW . bz3dqqo1kx ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . jzfwrfb3lq ) , rtdwData , 0 , 44 , sizeof ( rtDW . jzfwrfb3lq ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . ar3uovtx04 ) , rtdwData , 0 , 45 , sizeof ( rtDW . ar3uovtx04 ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . hcnnk1udor ) , rtdwData , 0 , 46 , sizeof ( rtDW . hcnnk1udor ) ) ;
mr_Approx_Multiplier_M2_AMA2_NAB12_restoreDataFromMxArray ( ( void * ) & (
rtDW . fob3jepxrd ) , rtdwData , 0 , 47 , sizeof ( rtDW . fob3jepxrd ) ) ; }
} mxArray * mr_Approx_Multiplier_M2_AMA2_NAB12_GetSimStateDisallowedBlocks (
) { return NULL ; } void MdlInitializeSizes ( void ) { ssSetNumContStates (
rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ;
ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ;
ssSetNumBlocks ( rtS , 848 ) ; ssSetNumBlockIO ( rtS , 32 ) ;
ssSetNumBlockParams ( rtS , 2097196 ) ; } void MdlInitializeSampleTimes (
void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0
) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 725902208U ) ;
ssSetChecksumVal ( rtS , 1 , 2916200256U ) ; ssSetChecksumVal ( rtS , 2 ,
2961943389U ) ; ssSetChecksumVal ( rtS , 3 , 4058834483U ) ; }
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
Approx_Multiplier_M2_AMA2_NAB12_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Approx_Multiplier_M2_AMA2_NAB12" ) ; ssSetPath ( rtS ,
"Approx_Multiplier_M2_AMA2_NAB12" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
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
725902208U ) ; ssSetChecksumVal ( rtS , 1 , 2916200256U ) ; ssSetChecksumVal
( rtS , 2 , 2961943389U ) ; ssSetChecksumVal ( rtS , 3 , 4058834483U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_Approx_Multiplier_M2_AMA2_NAB12_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_Approx_Multiplier_M2_AMA2_NAB12_GetDWork ) ; slsaSetWorkFcnForSimTargetOP
( rtS , mr_Approx_Multiplier_M2_AMA2_NAB12_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
