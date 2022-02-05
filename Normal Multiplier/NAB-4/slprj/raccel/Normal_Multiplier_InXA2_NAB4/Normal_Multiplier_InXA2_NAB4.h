#ifndef RTW_HEADER_Normal_Multiplier_InXA2_NAB4_h_
#define RTW_HEADER_Normal_Multiplier_InXA2_NAB4_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Normal_Multiplier_InXA2_NAB4_COMMON_INCLUDES_
#define Normal_Multiplier_InXA2_NAB4_COMMON_INCLUDES_
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
#include "Normal_Multiplier_InXA2_NAB4_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Normal_Multiplier_InXA2_NAB4
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
typedef struct { real_T favs0j21q5_mbvzarwird [ 65536 ] ; real_T
it55sf43iu_cl54gopm0x [ 65536 ] ; real_T oqn1eghzmz_kkiq3xxxve [ 65536 ] ;
real_T fehwywh3z2_cxarnvbvui [ 65536 ] ; real_T eqezuwh5hf_bhxxfovxdy [ 65536
] ; real_T jntoqqfj1w_pbm3vprmfu [ 65536 ] ; real_T mkiy2p0nrc_cv5hdgrwft [
65536 ] ; real_T gu1qqfadr5_fqdqrf4qbc [ 65536 ] ; real_T
ff0wb1mu4b_g2mlkqadfk [ 65536 ] ; real_T m1tylpall1_g1smspu5ke [ 65536 ] ;
real_T nfnxxgcpkj_merlcviukg [ 65536 ] ; real_T nwjkkgnlx0_nz4o0shxby [ 65536
] ; real_T flnxxjzl3y_ppxrqq0gsf [ 65536 ] ; real_T efxqyd5t1e_llw0u2ae0v [
65536 ] ; real_T hui1al2usf_jwzvbuczlb [ 65536 ] ; real_T
ddwzdqluej_dhmrxtyqop [ 65536 ] ; boolean_T eup54mfimv [ 65536 ] ; boolean_T
mnz5kle1gf [ 65536 ] ; boolean_T h4zwj0gg5m [ 65536 ] ; boolean_T dtcooeqmvn
[ 65536 ] ; boolean_T hylxakpzl2 [ 65536 ] ; boolean_T e2gudbfzyg [ 65536 ] ;
boolean_T cizjerxfp1 [ 65536 ] ; boolean_T lyapzwh0q0 [ 65536 ] ; boolean_T
noqvucsf4c [ 65536 ] ; boolean_T d0ogx0dgen [ 65536 ] ; boolean_T l0yxy1trsz
[ 65536 ] ; boolean_T aiosmdxa2l [ 65536 ] ; boolean_T fexnua0eu1 [ 65536 ] ;
boolean_T ig5johsy1x [ 65536 ] ; boolean_T cjfjjcf1xa [ 65536 ] ; boolean_T
jkdoicrvaa [ 65536 ] ; boolean_T oujdf1cc4w [ 65536 ] ; boolean_T mtnyuvdch4
[ 65536 ] ; boolean_T iqbpt2yppj_guugdwf2m3 [ 65536 ] ; boolean_T
l3n1qetxrh_ldqodwenvz [ 65536 ] ; boolean_T nnuxupynsu_dhamdvybc1 [ 65536 ] ;
boolean_T em11pkdoet_dypejvacrn [ 65536 ] ; boolean_T p2bhm0fwyt_lxo5edjg3c [
65536 ] ; boolean_T pfd2knai1c_owjr1h1vqy [ 65536 ] ; boolean_T
n0a2jchllj_bjbgfqrolh [ 65536 ] ; boolean_T cyqsh3akzq_nuebgmauvi [ 65536 ] ;
boolean_T isvadm5izm_bsqwvugooi [ 65536 ] ; boolean_T b235j3khds_lnjdk5wtww [
65536 ] ; boolean_T hrnpdvskco_hv2ho1zopz [ 65536 ] ; boolean_T
lhd2bsk1u2_bnlywzniup [ 65536 ] ; boolean_T ewwrsl3jc4_dapv3jlyq5 [ 65536 ] ;
boolean_T iy31tlyqf2_ezqlmfzvpq [ 65536 ] ; boolean_T pmb0bhdbv5_bjvjhhzy4i [
65536 ] ; boolean_T euba5vafq4_jzx3amusab [ 65536 ] ; boolean_T
dihyb5exl5_fdinthrxmb [ 65536 ] ; boolean_T kjubst5cix_al00mdgrv4 [ 65536 ] ;
boolean_T aqds1nisru_ju13rw2h0m [ 65536 ] ; boolean_T bfblodtnnf_jz50ptvnrg [
65536 ] ; boolean_T jrqvjh1kg5_o4f35lbcvx [ 65536 ] ; boolean_T
lam5dywnob_nyxm0bsxsn [ 65536 ] ; boolean_T apkkt53mz0_icdfyazkhu [ 65536 ] ;
boolean_T dxvfaze2rq_oyypvi4boh [ 65536 ] ; boolean_T pm0amyolyi_nvsvtgkap4 [
65536 ] ; boolean_T dr3drxnfhr_m3yhjduhi1 [ 65536 ] ; boolean_T
ihpwyzsryj_czkfpwuzm5 [ 65536 ] ; boolean_T dcitiizzud_mdoasc5av4 [ 65536 ] ;
boolean_T nb32g5tgxu_m3ybdk4ikc [ 65536 ] ; boolean_T eteq0vcip4_jacdjrqyev [
65536 ] ; boolean_T jvxbpouugz_h522xzlxvt [ 65536 ] ; boolean_T
cfl0tm1ggf_c0dok3111h [ 65536 ] ; boolean_T kfhlmwytvr_ctvw0tpkon [ 65536 ] ;
boolean_T ibhgm2l1py_pxqvlbal2i [ 65536 ] ; } B ; typedef struct { struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } gnbyk1vfpw ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } npiehoddtj ;
struct { void * AQHandles ; } cqnhljthsr ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } my2hna4bv5 ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } hd0v2iido5 ; struct { void * AQHandles ; }
gbymj2ovto ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} fmgxrjxk2n ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } eiqxbuesbz ; struct { void * LoggedData ; } eq3rg3c5up ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } luhxwyafiu ; struct { void
* LoggedData ; } cfvswxfwyx ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } hzvynktexa ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } eqacg2g0mx ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } kocbkcq1ny ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } ejgvioxsis ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } cdedddumvu ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } ewbt0atfr2 ; struct { void * TimePtr
; void * DataPtr ; void * RSimInfoPtr ; } bwrixaskfc ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } kyuqkps5fr ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } nijly2wvbr ; struct {
void * LoggedData ; } djfd54zveq ; struct { void * LoggedData ; } d5r3gt1qtk
; struct { void * LoggedData ; } buq141ezul ; struct { void * LoggedData ; }
ovr2iox4zn ; struct { void * LoggedData ; } apbmqvnfyd ; struct { void *
LoggedData ; } figs1pdllv ; struct { void * LoggedData ; } ghgjezc2no ;
struct { void * LoggedData ; } daxhxgnuhd ; struct { void * LoggedData ; }
ldwjz3eh43 ; struct { void * LoggedData ; } ak2hahct4v ; struct { void *
LoggedData ; } gqhwwusxhu ; struct { void * LoggedData ; } klzr21neu1 ;
struct { void * LoggedData ; } n3g1rf42ev ; struct { void * LoggedData ; }
ldp5u1kzwu ; struct { int_T PrevIndex ; } gtugm1qhhu ; struct { int_T
PrevIndex ; } hjbxnaclbx ; struct { int_T PrevIndex ; } jpw5msa5vc ; struct {
int_T PrevIndex ; } lgunhngoxg ; struct { int_T PrevIndex ; } jg1qrtf2sl ;
struct { int_T PrevIndex ; } hq3pyscxok ; struct { int_T PrevIndex ; }
j5bjhwt11y ; struct { int_T PrevIndex ; } hpkbuzawxv ; struct { int_T
PrevIndex ; } fzkfbubcgq ; struct { int_T PrevIndex ; } elnvzbtyvt ; struct {
int_T PrevIndex ; } cnkd33dq50 ; struct { int_T PrevIndex ; } aahfl2c5s1 ;
struct { int_T PrevIndex ; } krwyoel2ll ; struct { int_T PrevIndex ; }
lx30wb3zrx ; struct { int_T PrevIndex ; } gighpgdqo2 ; struct { int_T
PrevIndex ; } eppx5hicmk ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo
mmi ; } DataMapInfo ; struct P_ { real_T FromWorkspace4_Time0 [ 2 ] ; real_T
FromWorkspace4_Data0 [ 131072 ] ; real_T FromWorkspace10_Time0 [ 2 ] ; real_T
FromWorkspace10_Data0 [ 131072 ] ; real_T FromWorkspace7_Time0 [ 2 ] ; real_T
FromWorkspace7_Data0 [ 131072 ] ; real_T FromWorkspace9_Time0 [ 2 ] ; real_T
FromWorkspace9_Data0 [ 131072 ] ; real_T FromWorkspace_Time0 [ 2 ] ; real_T
FromWorkspace_Data0 [ 131072 ] ; real_T FromWorkspace8_Time0 [ 2 ] ; real_T
FromWorkspace8_Data0 [ 131072 ] ; real_T FromWorkspace1_Time0 [ 2 ] ; real_T
FromWorkspace1_Data0 [ 131072 ] ; real_T FromWorkspace11_Time0 [ 2 ] ; real_T
FromWorkspace11_Data0 [ 131072 ] ; real_T FromWorkspace2_Time0 [ 2 ] ; real_T
FromWorkspace2_Data0 [ 131072 ] ; real_T FromWorkspace3_Time0 [ 2 ] ; real_T
FromWorkspace3_Data0 [ 131072 ] ; real_T FromWorkspace12_Time0 [ 2 ] ; real_T
FromWorkspace12_Data0 [ 131072 ] ; real_T FromWorkspace13_Time0 [ 2 ] ;
real_T FromWorkspace13_Data0 [ 131072 ] ; real_T FromWorkspace5_Time0 [ 2 ] ;
real_T FromWorkspace5_Data0 [ 131072 ] ; real_T FromWorkspace14_Time0 [ 2 ] ;
real_T FromWorkspace14_Data0 [ 131072 ] ; real_T FromWorkspace6_Time0 [ 2 ] ;
real_T FromWorkspace6_Data0 [ 131072 ] ; real_T FromWorkspace15_Time0 [ 2 ] ;
real_T FromWorkspace15_Data0 [ 131072 ] ; real_T Constant1_Value ; real_T
Constant2_Value ; real_T Constant3_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Normal_Multiplier_InXA2_NAB4_GetDWork ( ) ; extern void
mr_Normal_Multiplier_InXA2_NAB4_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_Normal_Multiplier_InXA2_NAB4_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Normal_Multiplier_InXA2_NAB4_GetCAPIStaticMap ( void ) ; extern SimStruct *
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
