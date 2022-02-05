#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Approx_Multiplier_M2_AMA2_NAB12_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Approx_Multiplier_M2_AMA2_NAB12.h"
#include "Approx_Multiplier_M2_AMA2_NAB12_capi.h"
#include "Approx_Multiplier_M2_AMA2_NAB12_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/OR" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_1/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_1/OR1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_14/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_19/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_2/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_23/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_26/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_28/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_29/AND2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_29/AND5" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_29/NOT" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_29/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_3/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 14 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_36/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_37/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_37/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_4/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_43/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_48/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_49/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_5/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_53/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_54/OR1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_6/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_7/NOT2" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/AMA2_8/OR1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Partial Product Row 1/Logical Operator4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Partial Product Row 8/Logical Operator5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Full Adder46/Half Adder1/Logical Operator" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Full Adder47/Half Adder1/Logical Operator" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Full Adder48/Half Adder1/Logical Operator" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 32 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 33 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant1" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 34 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant10" ) , TARGET_STRING ( "Value" ) ,
1 , 1 , 0 } , { 35 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant2" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 36 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant3" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 37 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant4" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 38 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant5" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 39 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant6" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 40 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant7" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 41 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant8" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 42 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/Constant9" ) , TARGET_STRING ( "Value" ) , 1
, 1 , 0 } , { 43 , TARGET_STRING ( "Approx_Multiplier_M2_AMA2_NAB12/Zero" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 44 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 45 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 46 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace1" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 47 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace1" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 48 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace10" ) , TARGET_STRING (
"Time0" ) , 1 , 2 , 0 } , { 49 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace10" ) , TARGET_STRING (
"Data0" ) , 1 , 3 , 0 } , { 50 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace11" ) , TARGET_STRING (
"Time0" ) , 1 , 2 , 0 } , { 51 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace11" ) , TARGET_STRING (
"Data0" ) , 1 , 3 , 0 } , { 52 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace12" ) , TARGET_STRING (
"Time0" ) , 1 , 2 , 0 } , { 53 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace12" ) , TARGET_STRING (
"Data0" ) , 1 , 3 , 0 } , { 54 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace13" ) , TARGET_STRING (
"Time0" ) , 1 , 2 , 0 } , { 55 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace13" ) , TARGET_STRING (
"Data0" ) , 1 , 3 , 0 } , { 56 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace14" ) , TARGET_STRING (
"Time0" ) , 1 , 2 , 0 } , { 57 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace14" ) , TARGET_STRING (
"Data0" ) , 1 , 3 , 0 } , { 58 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace15" ) , TARGET_STRING (
"Time0" ) , 1 , 2 , 0 } , { 59 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace15" ) , TARGET_STRING (
"Data0" ) , 1 , 3 , 0 } , { 60 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace2" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 61 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace2" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 62 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace3" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 63 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace3" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 64 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace4" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 65 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace4" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 66 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace5" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 67 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace5" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 68 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace6" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 69 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace6" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 70 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace7" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 71 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace7" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 72 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace8" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 73 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace8" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 74 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace9" ) , TARGET_STRING ( "Time0"
) , 1 , 2 , 0 } , { 75 , TARGET_STRING (
"Approx_Multiplier_M2_AMA2_NAB12/From Workspace9" ) , TARGET_STRING ( "Data0"
) , 1 , 3 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . dqwbh3hq04 [ 0 ] , & rtB .
lg14uka0xz , & rtB . es3h3fnkv0 [ 0 ] , & rtB . j4pryny4vl [ 0 ] , & rtB .
gsie3ma3c1 [ 0 ] , & rtB . pwhdfwala2 , & rtB . j001cgyiv5 [ 0 ] , & rtB .
mtneenlfu1 [ 0 ] , & rtB . kkmp2q1u0b [ 0 ] , & rtB . ckztss5ead , & rtB .
owa1qwu54g , & rtB . ixybpokhb1 , & rtB . o1pbhxvcvg , & rtB . luaye3cspa , &
rtB . ffzy44b5sp , & rtB . g0cwpbr0y0 , & rtB . b3nhabfcsy [ 0 ] , & rtB .
ekqxrotgj0 , & rtB . nep0lfrure , & rtB . chtfyle541 [ 0 ] , & rtB .
dkkmrdnqfw , & rtB . jitrtk3yht , & rtB . obvrbahkgr [ 0 ] , & rtB .
d0mmh1dnhq [ 0 ] , & rtB . cs3n5rrynv , & rtB . gdqazxysni , & rtB .
oaom5gl2vj [ 0 ] , & rtB . ac4gbhjse5 [ 0 ] , & rtB . ki3jm1b3dp [ 0 ] , &
rtB . ftywdhfrnq [ 0 ] , & rtB . ay0uhgxppx [ 0 ] , & rtB . n3ghdaztt5 [ 0 ]
, & rtP . Constant_Value , & rtP . Constant1_Value , & rtP . Constant10_Value
, & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP . Constant4_Value
, & rtP . Constant5_Value , & rtP . Constant6_Value , & rtP . Constant7_Value
, & rtP . Constant8_Value , & rtP . Constant9_Value , & rtP . Zero_Value , &
rtP . FromWorkspace_Time0 [ 0 ] , & rtP . FromWorkspace_Data0 [ 0 ] , & rtP .
FromWorkspace1_Time0 [ 0 ] , & rtP . FromWorkspace1_Data0 [ 0 ] , & rtP .
FromWorkspace10_Time0 [ 0 ] , & rtP . FromWorkspace10_Data0 [ 0 ] , & rtP .
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
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( NULL ) , ( NULL ) ,
3 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 32 , rtRootInputs , 0 , rtRootOutputs , 0 } , {
rtBlockParameters , 44 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 725902208U , 2916200256U , 2961943389U ,
4058834483U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo *
Approx_Multiplier_M2_AMA2_NAB12_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Approx_Multiplier_M2_AMA2_NAB12_InitializeDataMapInfo ( void ) {
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
void Approx_Multiplier_M2_AMA2_NAB12_host_InitializeDataMapInfo (
Approx_Multiplier_M2_AMA2_NAB12_host_DataMapInfo_T * dataMap , const char *
path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
