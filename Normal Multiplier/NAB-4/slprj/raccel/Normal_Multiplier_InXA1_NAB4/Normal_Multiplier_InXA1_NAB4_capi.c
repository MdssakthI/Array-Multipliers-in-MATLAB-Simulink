#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Normal_Multiplier_InXA1_NAB4_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Normal_Multiplier_InXA1_NAB4.h"
#include "Normal_Multiplier_InXA1_NAB4_capi.h"
#include "Normal_Multiplier_InXA1_NAB4_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder5/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Half Adder5/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Half Adder6/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Half Adder7/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Half Adder9/Logical Operator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/InXA1_26/XOR1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/InXA1_3/XOR1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/InXA1_5/XOR1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Partial Product Row 1/Logical Operator4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Partial Product Row 5/Logical Operator6" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Partial Product Row 8/Logical Operator5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder43/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder44/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder45/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder46/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder47/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder48/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Full Adder5/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 18 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Constant1" ) , TARGET_STRING ( "Value" ) , 1 ,
1 , 0 } , { 19 , TARGET_STRING ( "Normal_Multiplier_InXA1_NAB4/Constant2" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 20 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/Constant3" ) , TARGET_STRING ( "Value" ) , 1 ,
1 , 0 } , { 21 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace" ) , TARGET_STRING ( "Time0" ) ,
1 , 2 , 0 } , { 22 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace" ) , TARGET_STRING ( "Data0" ) ,
1 , 3 , 0 } , { 23 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace1" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 24 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace1" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 25 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace10" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 26 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace10" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 27 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace11" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 28 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace11" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 29 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace12" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 30 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace12" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 31 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace13" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 32 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace13" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 33 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace14" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 34 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace14" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 35 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace15" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 36 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace15" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 37 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace2" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 38 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace2" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 39 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace3" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 40 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace3" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 41 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace4" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 42 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace4" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 43 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace5" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 44 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace5" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 45 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace6" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 46 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace6" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 47 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace7" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 48 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace7" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 49 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace8" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 50 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace8" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 51 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace9" ) , TARGET_STRING ( "Time0" )
, 1 , 2 , 0 } , { 52 , TARGET_STRING (
"Normal_Multiplier_InXA1_NAB4/From Workspace9" ) , TARGET_STRING ( "Data0" )
, 1 , 3 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ellhmzh2h3 [ 0 ] , & rtB .
cipref3upt [ 0 ] , & rtB . mupymws3k3 [ 0 ] , & rtB . d41bodg12y [ 0 ] , &
rtB . ayfvkpfmwj [ 0 ] , & rtB . op5zfwxpem [ 0 ] , & rtB . j02lqvxrlg [ 0 ]
, & rtB . g1pjgzybux [ 0 ] , & rtB . g1g5fzyp4j [ 0 ] , & rtB . icmeug23yd [
0 ] , & rtB . kahhteyho0 [ 0 ] , & rtB . di1pxs4wub [ 0 ] , & rtB .
nlvtydabhm [ 0 ] , & rtB . fcp1tvzqdu [ 0 ] , & rtB . jkn5jguhvy [ 0 ] , &
rtB . d2qr5asfwj [ 0 ] , & rtB . kkcpfq4kub [ 0 ] , & rtB . hoh3yov1xo [ 0 ]
, & rtP . Constant1_Value , & rtP . Constant2_Value , & rtP . Constant3_Value
, & rtP . FromWorkspace_Time0 [ 0 ] , & rtP . FromWorkspace_Data0 [ 0 ] , &
rtP . FromWorkspace1_Time0 [ 0 ] , & rtP . FromWorkspace1_Data0 [ 0 ] , & rtP
. FromWorkspace10_Time0 [ 0 ] , & rtP . FromWorkspace10_Data0 [ 0 ] , & rtP .
FromWorkspace11_Time0 [ 0 ] , & rtP . FromWorkspace11_Data0 [ 0 ] , & rtP .
FromWorkspace12_Time0 [ 0 ] , & rtP . FromWorkspace12_Data0 [ 0 ] , & rtP .
FromWorkspace13_Time0 [ 0 ] , & rtP . FromWorkspace13_Data0 [ 0 ] , & rtP .
FromWorkspace14_Time0 [ 0 ] , & rtP . FromWorkspace14_Data0 [ 0 ] , & rtP .
FromWorkspace15_Time0 [ 0 ] , & rtP . FromWorkspace15_Data0 [ 0 ] , & rtP .
FromWorkspace2_Time0 [ 0 ] , & rtP . FromWorkspace2_Data0 [ 0 ] , & rtP .
FromWorkspace3_Time0 [ 0 ] , & rtP . FromWorkspace3_Data0 [ 0 ] , & rtP .
FromWorkspace4_Time0 [ 0 ] , & rtP . FromWorkspace4_Data0 [ 0 ] , & rtP .
FromWorkspace5_Time0 [ 0 ] , & rtP . FromWorkspace5_Data0 [ 0 ] , & rtP .
FromWorkspace6_Time0 [ 0 ] , & rtP . FromWorkspace6_Data0 [ 0 ] , & rtP .
FromWorkspace7_Time0 [ 0 ] , & rtP . FromWorkspace7_Data0 [ 0 ] , & rtP .
FromWorkspace8_Time0 [ 0 ] , & rtP . FromWorkspace8_Data0 [ 0 ] , & rtP .
FromWorkspace9_Time0 [ 0 ] , & rtP . FromWorkspace9_Data0 [ 0 ] , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } , { "double" , "real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0
, 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 65536 , 1 , 1 , 1 , 2 , 1 , 131072 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 18 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 35 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 582112333U , 1551001858U , 3445610677U , 2818132646U } , ( NULL ) , 0 , 0
, rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
Normal_Multiplier_InXA1_NAB4_GetCAPIStaticMap ( void ) { return & mmiStatic ;
}
#ifndef HOST_CAPI_BUILD
void Normal_Multiplier_InXA1_NAB4_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Normal_Multiplier_InXA1_NAB4_host_InitializeDataMapInfo (
Normal_Multiplier_InXA1_NAB4_host_DataMapInfo_T * dataMap , const char * path
) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
