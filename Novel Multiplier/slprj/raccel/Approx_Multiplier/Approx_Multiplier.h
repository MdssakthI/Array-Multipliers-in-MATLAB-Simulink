#ifndef RTW_HEADER_Approx_Multiplier_h_
#define RTW_HEADER_Approx_Multiplier_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Approx_Multiplier_COMMON_INCLUDES_
#define Approx_Multiplier_COMMON_INCLUDES_
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
#include "Approx_Multiplier_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Approx_Multiplier
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (17) 
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
typedef struct { real_T mq50jvptur_mbvzarwird [ 32256 ] ; real_T
dwqidckvui_cl54gopm0x [ 32256 ] ; real_T elyq3ovpdi_kkiq3xxxve [ 32256 ] ;
real_T eket2vquys_cxarnvbvui [ 32256 ] ; real_T fls2ushv1r_bhxxfovxdy [ 32256
] ; real_T of2o5ejcsl_pbm3vprmfu [ 32256 ] ; real_T ckx15ldawn_cv5hdgrwft [
32256 ] ; real_T pohwiinx2a_fqdqrf4qbc [ 32256 ] ; real_T
me05lckdul_g2mlkqadfk [ 32256 ] ; real_T bmzbl5dzop_g1smspu5ke [ 32256 ] ;
real_T b1skymi2sp_merlcviukg [ 32256 ] ; real_T l2zoclotwx_nz4o0shxby [ 32256
] ; real_T mm1vji4hfw_ppxrqq0gsf [ 32256 ] ; real_T i44kffcrow_llw0u2ae0v [
32256 ] ; real_T nupgifaxvk_jwzvbuczlb [ 32256 ] ; boolean_T ns4p5qffbs [
32256 ] ; boolean_T nq0kqahirn [ 32256 ] ; boolean_T p05b2tos5x [ 32256 ] ;
boolean_T a1kxek0qf0 [ 32256 ] ; boolean_T pzuiisq4h5 [ 32256 ] ; boolean_T
h3x1apuddp [ 32256 ] ; boolean_T k0ww0ahqju [ 32256 ] ; boolean_T lbojjlhp3e
[ 32256 ] ; boolean_T cf1q1sywfs [ 32256 ] ; boolean_T ganzexiptk [ 32256 ] ;
boolean_T gwaczjbsbb [ 32256 ] ; boolean_T dwosdq14jq [ 32256 ] ; boolean_T
mthgiu4zzb [ 32256 ] ; boolean_T b03wo0vlnc [ 32256 ] ; boolean_T jro0v4a1vj
[ 32256 ] ; boolean_T nogjdhu301 [ 32256 ] ; boolean_T kyixvogo0m [ 32256 ] ;
boolean_T hldnf33ttj_dhmrxtyqop [ 32256 ] ; boolean_T ctjzv3tsia_guugdwf2m3 [
32256 ] ; boolean_T cw4f3mrdnq_ldqodwenvz [ 32256 ] ; boolean_T
i2uql2cb34_dhamdvybc1 [ 32256 ] ; boolean_T fwrony54hx_dypejvacrn [ 32256 ] ;
boolean_T fj5oaeqzvd_lxo5edjg3c [ 32256 ] ; boolean_T kfcjj0zt4l_owjr1h1vqy [
32256 ] ; boolean_T j0ljlivjih_bjbgfqrolh [ 32256 ] ; boolean_T
mdkwyjghw4_nuebgmauvi [ 32256 ] ; boolean_T nywspodlcd_bsqwvugooi [ 32256 ] ;
boolean_T cfuihetunu_lnjdk5wtww [ 32256 ] ; boolean_T gxpcvuigpp_hv2ho1zopz [
32256 ] ; boolean_T eq4o4zndfi_bnlywzniup [ 32256 ] ; boolean_T
iq1vhps35r_dapv3jlyq5 [ 32256 ] ; boolean_T g3vgmiycdt_ezqlmfzvpq [ 32256 ] ;
boolean_T ovapon50jo_bjvjhhzy4i [ 32256 ] ; boolean_T pztlvcfter_jzx3amusab [
32256 ] ; boolean_T cvrtnobxce_fdinthrxmb [ 32256 ] ; boolean_T
fezjads5pr_al00mdgrv4 [ 32256 ] ; boolean_T cwyzf4th33_ju13rw2h0m [ 32256 ] ;
boolean_T iszwf3z3th_jz50ptvnrg [ 32256 ] ; boolean_T fnpd230qbv_o4f35lbcvx [
32256 ] ; boolean_T lfsmdilohy_nyxm0bsxsn [ 32256 ] ; boolean_T
ikdc5bq52i_icdfyazkhu [ 32256 ] ; boolean_T a2xtlu3chx_oyypvi4boh [ 32256 ] ;
boolean_T esfbqyxry2_nvsvtgkap4 [ 32256 ] ; boolean_T mywg3wje5f_m3yhjduhi1 [
32256 ] ; boolean_T aaoxpt2emy_czkfpwuzm5 [ 32256 ] ; boolean_T
b1qrewew24_mdoasc5av4 [ 32256 ] ; boolean_T fwqmokhoxn_m3ybdk4ikc [ 32256 ] ;
boolean_T hddnttfglr_jacdjrqyev [ 32256 ] ; boolean_T k0qqmsn3vm_h522xzlxvt [
32256 ] ; boolean_T aobmzp0243_c0dok3111h [ 32256 ] ; boolean_T
eoh5h30i3q_ctvw0tpkon [ 32256 ] ; boolean_T oyb4bibsjg_pxqvlbal2i [ 32256 ] ;
boolean_T p5ni3b50ny_p5h3gwuwqg [ 32256 ] ; boolean_T elioxtdq1r_afnsueciae [
32256 ] ; boolean_T fc4jnjbjtq_evg4t2fsev [ 32256 ] ; boolean_T
hankpcor1h_ax3wx1gs5w [ 32256 ] ; boolean_T mzpsbegwow_as0qznsxlv [ 32256 ] ;
} B ; typedef struct { struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } fh1xf5ew32 ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } m4rjf4ewan ; struct { void * AQHandles ; } koh20ckr1d ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } lixywmk45f
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
njqi5gn3wz ; struct { void * LoggedData ; } p3tek1h1w5 ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } eqxemamok3 ; struct { void
* LoggedData ; } ljsicej2jp ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } c3ark0gajy ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } kymi3cbjki ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } aauzmjdxqq ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } dlkjiluyo1 ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } gla14t4n1o ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } c3uuk2d4op ; struct { void * TimePtr
; void * DataPtr ; void * RSimInfoPtr ; } ange1qf3ku ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } lzinrftzd0 ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } pvced405zq ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } g4udu5uvvb ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } no1io2ovug ;
struct { void * LoggedData ; } pzqes4pt3b ; struct { void * LoggedData ; }
az5i4ez2mn ; struct { void * LoggedData ; } cnii2el242 ; struct { void *
LoggedData ; } fsbz2syvej ; struct { void * LoggedData ; } ltksrcauy3 ;
struct { void * LoggedData ; } giqqxavhg0 ; struct { void * LoggedData ; }
hpf4srv5wy ; struct { void * LoggedData ; } psnduconoe ; struct { void *
LoggedData ; } iqm3yzt00e ; struct { void * LoggedData ; } deeahv0ozb ;
struct { void * LoggedData ; } hnunn5lfsf ; struct { void * LoggedData ; }
c2ng0zd0ro ; struct { void * LoggedData ; } a1e2wlem3f ; struct { void *
LoggedData ; } m1l3bctojx ; struct { int_T PrevIndex ; } ntvaixwdrn ; struct
{ int_T PrevIndex ; } fzbhpbbfed ; struct { int_T PrevIndex ; } hk2jnl5nld ;
struct { int_T PrevIndex ; } pqg4hz3zh4 ; struct { int_T PrevIndex ; }
latid21dux ; struct { int_T PrevIndex ; } gn31hrfwar ; struct { int_T
PrevIndex ; } hmq1mmtxes ; struct { int_T PrevIndex ; } kmn3pgmyg5 ; struct {
int_T PrevIndex ; } ntgl42hmkr ; struct { int_T PrevIndex ; } acnbzrcojc ;
struct { int_T PrevIndex ; } ot5xfv5sth ; struct { int_T PrevIndex ; }
k4wjhynsm1 ; struct { int_T PrevIndex ; } b3n5ni3cpl ; struct { int_T
PrevIndex ; } hwff2qevzk ; struct { int_T PrevIndex ; } ngarqyvhaz ; struct {
int_T PrevIndex ; } bzjl2bpanr ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
FromWorkspace7_Time0 [ 2 ] ; real_T FromWorkspace7_Data0 [ 64512 ] ; real_T
FromWorkspace9_Time0 [ 2 ] ; real_T FromWorkspace9_Data0 [ 64512 ] ; real_T
FromWorkspace_Time0 [ 2 ] ; real_T FromWorkspace_Data0 [ 64512 ] ; real_T
FromWorkspace8_Time0 [ 2 ] ; real_T FromWorkspace8_Data0 [ 64512 ] ; real_T
FromWorkspace1_Time0 [ 2 ] ; real_T FromWorkspace1_Data0 [ 64512 ] ; real_T
FromWorkspace10_Time0 [ 2 ] ; real_T FromWorkspace10_Data0 [ 64512 ] ; real_T
FromWorkspace11_Time0 [ 2 ] ; real_T FromWorkspace11_Data0 [ 64512 ] ; real_T
FromWorkspace2_Time0 [ 2 ] ; real_T FromWorkspace2_Data0 [ 64512 ] ; real_T
FromWorkspace12_Time0 [ 2 ] ; real_T FromWorkspace12_Data0 [ 64512 ] ; real_T
FromWorkspace3_Time0 [ 2 ] ; real_T FromWorkspace3_Data0 [ 64512 ] ; real_T
FromWorkspace13_Time0 [ 2 ] ; real_T FromWorkspace13_Data0 [ 64512 ] ; real_T
FromWorkspace4_Time0 [ 2 ] ; real_T FromWorkspace4_Data0 [ 64512 ] ; real_T
FromWorkspace14_Time0 [ 2 ] ; real_T FromWorkspace14_Data0 [ 64512 ] ; real_T
FromWorkspace5_Time0 [ 2 ] ; real_T FromWorkspace5_Data0 [ 64512 ] ; real_T
FromWorkspace15_Time0 [ 2 ] ; real_T FromWorkspace15_Data0 [ 64512 ] ; real_T
FromWorkspace6_Time0 [ 2 ] ; real_T FromWorkspace6_Data0 [ 64512 ] ; real_T
Constant_Value ; real_T Constant1_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Approx_Multiplier_GetDWork ( ) ; extern void
mr_Approx_Multiplier_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_Approx_Multiplier_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Approx_Multiplier_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
