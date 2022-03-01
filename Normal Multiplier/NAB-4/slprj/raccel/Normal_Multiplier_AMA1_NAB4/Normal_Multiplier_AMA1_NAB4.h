#ifndef RTW_HEADER_Normal_Multiplier_AMA1_NAB4_h_
#define RTW_HEADER_Normal_Multiplier_AMA1_NAB4_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Normal_Multiplier_AMA1_NAB4_COMMON_INCLUDES_
#define Normal_Multiplier_AMA1_NAB4_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Normal_Multiplier_AMA1_NAB4_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Normal_Multiplier_AMA1_NAB4
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (18) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T lxezyz54zx_mbvzarwird [ 250000 ] ; real_T
bizyusrhcy_cl54gopm0x [ 250000 ] ; real_T dr4ev3edcz_kkiq3xxxve [ 250000 ] ;
real_T fpakcfbngs_cxarnvbvui [ 250000 ] ; real_T i2mcaeso2f_bhxxfovxdy [
250000 ] ; real_T bdgha0hxjx_pbm3vprmfu [ 250000 ] ; real_T
etcj3dyvzl_cv5hdgrwft [ 250000 ] ; real_T bzbddphp2z_fqdqrf4qbc [ 250000 ] ;
real_T i41lku0xtd_g2mlkqadfk [ 250000 ] ; real_T mwy1vcjgju_g1smspu5ke [
250000 ] ; real_T opvtlfe3p0_merlcviukg [ 250000 ] ; real_T
ki5i4mxxwb_nz4o0shxby [ 250000 ] ; real_T c4vcer5wv1_ppxrqq0gsf [ 250000 ] ;
real_T oezbaprlmk_llw0u2ae0v [ 250000 ] ; real_T dsb5hrg2vr_jwzvbuczlb [
250000 ] ; real_T asd3npleup_dhmrxtyqop [ 250000 ] ; boolean_T k0hyfnm1ch [
250000 ] ; boolean_T meiz31siww [ 250000 ] ; boolean_T d54z2dljwq [ 250000 ]
; boolean_T mcbil1nyld [ 250000 ] ; boolean_T ktlhpjha4k [ 250000 ] ;
boolean_T l4ltwvzyvm [ 250000 ] ; boolean_T a0qrkwewg4 [ 250000 ] ; boolean_T
pr30j5ysml [ 250000 ] ; boolean_T hjh0ky43kr [ 250000 ] ; boolean_T
mg5mdqgkpv [ 250000 ] ; boolean_T a53qjunlmv [ 250000 ] ; boolean_T
krxguioqgx [ 250000 ] ; boolean_T bnwinqtrit [ 250000 ] ; boolean_T
hfancckye0 [ 250000 ] ; boolean_T lj2ijy4alr [ 250000 ] ; boolean_T
bc5tmjuqzj [ 250000 ] ; boolean_T jfdlcoegym [ 250000 ] ; boolean_T
dgk02pnspm [ 250000 ] ; boolean_T hbuqdxbtks_guugdwf2m3 [ 250000 ] ;
boolean_T fupdsxr3pl_ldqodwenvz [ 250000 ] ; boolean_T c2xyqx54lp_dhamdvybc1
[ 250000 ] ; boolean_T jxhdxn1zm4_dypejvacrn [ 250000 ] ; boolean_T
blq25rfr55_lxo5edjg3c [ 250000 ] ; boolean_T oatn4x5chp_owjr1h1vqy [ 250000 ]
; boolean_T b1nzbkbzfu_bjbgfqrolh [ 250000 ] ; boolean_T
nu5mreydr0_nuebgmauvi [ 250000 ] ; boolean_T a1nvqdw5tg_bsqwvugooi [ 250000 ]
; boolean_T gfaeaqkjgu_lnjdk5wtww [ 250000 ] ; boolean_T
latn0didbk_hv2ho1zopz [ 250000 ] ; boolean_T ohulmyx3aq_bnlywzniup [ 250000 ]
; boolean_T nmpj1pejz5_dapv3jlyq5 [ 250000 ] ; boolean_T
fc0kwgsxph_ezqlmfzvpq [ 250000 ] ; boolean_T e3prsozlro_bjvjhhzy4i [ 250000 ]
; boolean_T imt2zvsj2b_jzx3amusab [ 250000 ] ; boolean_T
dbiuc3qm4y_fdinthrxmb [ 250000 ] ; boolean_T pintl0ode3_al00mdgrv4 [ 250000 ]
; boolean_T hywu0mda0z_ju13rw2h0m [ 250000 ] ; boolean_T
hnxlrn2ini_jz50ptvnrg [ 250000 ] ; boolean_T am5r4g32g5_o4f35lbcvx [ 250000 ]
; boolean_T nynbbc1wgc_nyxm0bsxsn [ 250000 ] ; boolean_T
luzkaifer4_icdfyazkhu [ 250000 ] ; boolean_T i5in5m11vv_oyypvi4boh [ 250000 ]
; boolean_T jgmxnvvtez_nvsvtgkap4 [ 250000 ] ; boolean_T
pztamq01bm_m3yhjduhi1 [ 250000 ] ; boolean_T li0ipo15ob_czkfpwuzm5 [ 250000 ]
; boolean_T efyr5gjqv4_mdoasc5av4 [ 250000 ] ; boolean_T
l45k1mqf4x_m3ybdk4ikc [ 250000 ] ; boolean_T ktqohtoiph_jacdjrqyev [ 250000 ]
; boolean_T hdzscrreh2_h522xzlxvt [ 250000 ] ; boolean_T
li3tvyijbl_c0dok3111h [ 250000 ] ; boolean_T opgl4fxi10_ctvw0tpkon [ 250000 ]
; boolean_T o3f3oppyrp_pxqvlbal2i [ 250000 ] ; boolean_T
k51gogwfeu_p5h3gwuwqg [ 250000 ] ; boolean_T ixnzdh4zcz_afnsueciae [ 250000 ]
; } B ; typedef struct { struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } ojtbpb1yy5 ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } f1tmsjtqnt ; struct { void * AQHandles ; } dx5s3uwqau ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } bfytgcxbki
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
djzkjp023y ; struct { void * AQHandles ; } jf0hghzqai ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } kmna4jad2b ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } aufaasvjgl ; struct {
void * LoggedData ; } nfragcbcxx ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } kvb5m1pcgv ; struct { void * LoggedData ; } mjbvjuyhmx
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
mlk4hix5ud ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} lrq2lg0xm3 ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } e2wcgahprl ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } prrcw4alw4 ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } oahvl2yyy3 ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } eot3d5vx3e ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } hjyyno5nqo ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } kt4kigj1cq ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } m2dox4smlm ; struct { void * LoggedData ;
} m5mg4z5ebi ; struct { void * LoggedData ; } ha1fwacylw ; struct { void *
LoggedData ; } muz2bhjt4s ; struct { void * LoggedData ; } bukctp4lfh ;
struct { void * LoggedData ; } e324zd4vsk ; struct { void * LoggedData ; }
hjigikktg3 ; struct { void * LoggedData ; } kj1sde5cxa ; struct { void *
LoggedData ; } mqqifw5u1d ; struct { void * LoggedData ; } pvbt4rjdrv ;
struct { void * LoggedData ; } pl2tm32hqx ; struct { void * LoggedData ; }
fxrziqiktn ; struct { void * LoggedData ; } dly0dk4jjq ; struct { void *
LoggedData ; } lgdf2zo4wc ; struct { void * LoggedData ; } lwezto5dff ;
struct { int_T PrevIndex ; } kh0x535rb5 ; struct { int_T PrevIndex ; }
a5eejfdcqf ; struct { int_T PrevIndex ; } hfywki0r05 ; struct { int_T
PrevIndex ; } cc3izxqqgf ; struct { int_T PrevIndex ; } d5ulhfztgc ; struct {
int_T PrevIndex ; } arcmxsixf4 ; struct { int_T PrevIndex ; } mlet1tetrq ;
struct { int_T PrevIndex ; } kfae21jer3 ; struct { int_T PrevIndex ; }
kchhb3bx1t ; struct { int_T PrevIndex ; } k0pqdq20eu ; struct { int_T
PrevIndex ; } gxxpejzeeu ; struct { int_T PrevIndex ; } nsfyw35vta ; struct {
int_T PrevIndex ; } glsasphhw2 ; struct { int_T PrevIndex ; } ccyhxmy2qg ;
struct { int_T PrevIndex ; } axak2gonlb ; struct { int_T PrevIndex ; }
hnjjnciu15 ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
DataMapInfo ; struct P_ { real_T FromWorkspace4_Time0 [ 2 ] ; real_T
FromWorkspace4_Data0 [ 500000 ] ; real_T FromWorkspace10_Time0 [ 2 ] ; real_T
FromWorkspace10_Data0 [ 500000 ] ; real_T FromWorkspace7_Time0 [ 2 ] ; real_T
FromWorkspace7_Data0 [ 500000 ] ; real_T FromWorkspace9_Time0 [ 2 ] ; real_T
FromWorkspace9_Data0 [ 500000 ] ; real_T FromWorkspace_Time0 [ 2 ] ; real_T
FromWorkspace_Data0 [ 500000 ] ; real_T FromWorkspace8_Time0 [ 2 ] ; real_T
FromWorkspace8_Data0 [ 500000 ] ; real_T FromWorkspace1_Time0 [ 2 ] ; real_T
FromWorkspace1_Data0 [ 500000 ] ; real_T FromWorkspace3_Time0 [ 2 ] ; real_T
FromWorkspace3_Data0 [ 500000 ] ; real_T FromWorkspace11_Time0 [ 2 ] ; real_T
FromWorkspace11_Data0 [ 500000 ] ; real_T FromWorkspace2_Time0 [ 2 ] ; real_T
FromWorkspace2_Data0 [ 500000 ] ; real_T FromWorkspace12_Time0 [ 2 ] ; real_T
FromWorkspace12_Data0 [ 500000 ] ; real_T FromWorkspace13_Time0 [ 2 ] ;
real_T FromWorkspace13_Data0 [ 500000 ] ; real_T FromWorkspace5_Time0 [ 2 ] ;
real_T FromWorkspace5_Data0 [ 500000 ] ; real_T FromWorkspace14_Time0 [ 2 ] ;
real_T FromWorkspace14_Data0 [ 500000 ] ; real_T FromWorkspace6_Time0 [ 2 ] ;
real_T FromWorkspace6_Data0 [ 500000 ] ; real_T FromWorkspace15_Time0 [ 2 ] ;
real_T FromWorkspace15_Data0 [ 500000 ] ; real_T Constant1_Value ; real_T
Constant2_Value ; real_T Constant3_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Normal_Multiplier_AMA1_NAB4_GetDWork ( ) ; extern void
mr_Normal_Multiplier_AMA1_NAB4_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_Normal_Multiplier_AMA1_NAB4_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Normal_Multiplier_AMA1_NAB4_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
