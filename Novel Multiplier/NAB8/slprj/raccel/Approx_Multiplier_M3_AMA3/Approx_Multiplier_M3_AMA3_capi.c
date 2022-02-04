#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Approx_Multiplier_M3_AMA3_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Approx_Multiplier_M3_AMA3.h"
#include "Approx_Multiplier_M3_AMA3_capi.h"
#include "Approx_Multiplier_M3_AMA3_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/OR" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 1 , 0 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/AMA3_1/NOT2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_1/OR" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 3 , 0 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/AMA3_14/OR" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_19/OR" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 5 , 0 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/AMA3_2/NOT2" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_23/OR" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 7 , 0 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/AMA3_26/OR" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_28/OR" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 9 , 0 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/AMA3_3/NOT2" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_4/NOT2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 1 } , { 11 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_5/NOT2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_6/NOT2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 1 } , { 13 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/AMA3_7/NOT2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 1 } , { 14 , 0 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/AMA3_8/OR"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Partial Product Row 1/Logical Operator4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Partial Product Row 8/Logical Operator5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Full Adder42/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Full Adder43/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Full Adder44/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Full Adder45/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Full Adder46/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Full Adder47/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Full Adder48/Half Adder1/Logical Operator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 24 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Constant" ) , TARGET_STRING ( "Value" ) , 1 , 1 ,
0 } , { 25 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/Constant1" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 26 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Constant2" ) , TARGET_STRING ( "Value" ) , 1 , 1 ,
0 } , { 27 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/Constant3" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 28 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Constant4" ) , TARGET_STRING ( "Value" ) , 1 , 1 ,
0 } , { 29 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/Constant5" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 30 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Constant6" ) , TARGET_STRING ( "Value" ) , 1 , 1 ,
0 } , { 31 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/Constant7" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 32 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/Zero" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 }
, { 33 , TARGET_STRING ( "Approx_Multiplier_M3_AMA3/From Workspace" ) ,
TARGET_STRING ( "Time0" ) , 1 , 2 , 0 } , { 34 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 35 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace1" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 36 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace1" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 37 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace10" ) , TARGET_STRING ( "Time0" ) ,
1 , 2 , 0 } , { 38 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace10" ) , TARGET_STRING ( "Data0" ) ,
1 , 3 , 0 } , { 39 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace11" ) , TARGET_STRING ( "Time0" ) ,
1 , 2 , 0 } , { 40 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace11" ) , TARGET_STRING ( "Data0" ) ,
1 , 3 , 0 } , { 41 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace12" ) , TARGET_STRING ( "Time0" ) ,
1 , 2 , 0 } , { 42 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace12" ) , TARGET_STRING ( "Data0" ) ,
1 , 3 , 0 } , { 43 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace13" ) , TARGET_STRING ( "Time0" ) ,
1 , 2 , 0 } , { 44 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace13" ) , TARGET_STRING ( "Data0" ) ,
1 , 3 , 0 } , { 45 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace14" ) , TARGET_STRING ( "Time0" ) ,
1 , 2 , 0 } , { 46 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace14" ) , TARGET_STRING ( "Data0" ) ,
1 , 3 , 0 } , { 47 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace15" ) , TARGET_STRING ( "Time0" ) ,
1 , 2 , 0 } , { 48 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace15" ) , TARGET_STRING ( "Data0" ) ,
1 , 3 , 0 } , { 49 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace2" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 50 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace2" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 51 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace3" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 52 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace3" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 53 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace4" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 54 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace4" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 55 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace5" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 56 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace5" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 57 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace6" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 58 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace6" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 59 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace7" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 60 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace7" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 61 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace8" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 62 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace8" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 63 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace9" ) , TARGET_STRING ( "Time0" ) , 1
, 2 , 0 } , { 64 , TARGET_STRING (
"Approx_Multiplier_M3_AMA3/From Workspace9" ) , TARGET_STRING ( "Data0" ) , 1
, 3 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . ohekoapafv [ 0 ] , & rtB .
jvksohy2jj , & rtB . pmm03rrn0a [ 0 ] , & rtB . dkwoqzqhxy [ 0 ] , & rtB .
cgd0ee2uwi [ 0 ] , & rtB . kjtqep3s42 , & rtB . dlorqfbkxe [ 0 ] , & rtB .
mdsfzgmvpb [ 0 ] , & rtB . djm2pikxpj [ 0 ] , & rtB . hhlvjssrul , & rtB .
eehjfds1zp , & rtB . nbczllmynw , & rtB . klitm0zcu3 , & rtB . nfioqm3gmv , &
rtB . lyv0zmdkxz [ 0 ] , & rtB . h1hlsij0yt [ 0 ] , & rtB . cefaqd4mmo [ 0 ]
, & rtB . e3p0mcsrbm [ 0 ] , & rtB . op44in5v5j [ 0 ] , & rtB . n1rh2tbdzh [
0 ] , & rtB . dassz0pmrw [ 0 ] , & rtB . muuf4tphh2 [ 0 ] , & rtB .
klpdnkjsg2 [ 0 ] , & rtB . li4o0hildc [ 0 ] , & rtP . Constant_Value , & rtP
. Constant1_Value , & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP
. Constant4_Value , & rtP . Constant5_Value , & rtP . Constant6_Value , & rtP
. Constant7_Value , & rtP . Zero_Value , & rtP . FromWorkspace_Time0 [ 0 ] ,
& rtP . FromWorkspace_Data0 [ 0 ] , & rtP . FromWorkspace1_Time0 [ 0 ] , &
rtP . FromWorkspace1_Data0 [ 0 ] , & rtP . FromWorkspace10_Time0 [ 0 ] , &
rtP . FromWorkspace10_Data0 [ 0 ] , & rtP . FromWorkspace11_Time0 [ 0 ] , &
rtP . FromWorkspace11_Data0 [ 0 ] , & rtP . FromWorkspace12_Time0 [ 0 ] , &
rtP . FromWorkspace12_Data0 [ 0 ] , & rtP . FromWorkspace13_Time0 [ 0 ] , &
rtP . FromWorkspace13_Data0 [ 0 ] , & rtP . FromWorkspace14_Time0 [ 0 ] , &
rtP . FromWorkspace14_Data0 [ 0 ] , & rtP . FromWorkspace15_Time0 [ 0 ] , &
rtP . FromWorkspace15_Data0 [ 0 ] , & rtP . FromWorkspace2_Time0 [ 0 ] , &
rtP . FromWorkspace2_Data0 [ 0 ] , & rtP . FromWorkspace3_Time0 [ 0 ] , & rtP
. FromWorkspace3_Data0 [ 0 ] , & rtP . FromWorkspace4_Time0 [ 0 ] , & rtP .
FromWorkspace4_Data0 [ 0 ] , & rtP . FromWorkspace5_Time0 [ 0 ] , & rtP .
FromWorkspace5_Data0 [ 0 ] , & rtP . FromWorkspace6_Time0 [ 0 ] , & rtP .
FromWorkspace6_Data0 [ 0 ] , & rtP . FromWorkspace7_Time0 [ 0 ] , & rtP .
FromWorkspace7_Data0 [ 0 ] , & rtP . FromWorkspace8_Time0 [ 0 ] , & rtP .
FromWorkspace8_Data0 [ 0 ] , & rtP . FromWorkspace9_Time0 [ 0 ] , & rtP .
FromWorkspace9_Data0 [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
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
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
3 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 24 , rtRootInputs , 0 , rtRootOutputs , 0 } , {
rtBlockParameters , 41 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 634033103U , 1460873130U , 2732228506U ,
146304284U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Approx_Multiplier_M3_AMA3_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Approx_Multiplier_M3_AMA3_InitializeDataMapInfo ( void ) {
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
void Approx_Multiplier_M3_AMA3_host_InitializeDataMapInfo (
Approx_Multiplier_M3_AMA3_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
