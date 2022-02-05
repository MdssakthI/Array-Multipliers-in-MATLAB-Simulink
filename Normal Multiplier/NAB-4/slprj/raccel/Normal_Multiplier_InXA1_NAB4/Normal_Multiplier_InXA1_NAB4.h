#ifndef RTW_HEADER_Normal_Multiplier_InXA1_NAB4_h_
#define RTW_HEADER_Normal_Multiplier_InXA1_NAB4_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Normal_Multiplier_InXA1_NAB4_COMMON_INCLUDES_
#define Normal_Multiplier_InXA1_NAB4_COMMON_INCLUDES_
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
#include "Normal_Multiplier_InXA1_NAB4_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Normal_Multiplier_InXA1_NAB4
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
typedef struct { real_T j4xkqwcio0_mbvzarwird [ 65536 ] ; real_T
gxc3nhmfwj_cl54gopm0x [ 65536 ] ; real_T awecfytk5f_kkiq3xxxve [ 65536 ] ;
real_T d1x4uo2pps_cxarnvbvui [ 65536 ] ; real_T e10p5nijns_bhxxfovxdy [ 65536
] ; real_T pfmfqr2dxw_pbm3vprmfu [ 65536 ] ; real_T dergw2ixg1_cv5hdgrwft [
65536 ] ; real_T ofbges4ydc_fqdqrf4qbc [ 65536 ] ; real_T
gbuacuyyue_g2mlkqadfk [ 65536 ] ; real_T elqzys50j2_g1smspu5ke [ 65536 ] ;
real_T ggwznjfpkr_merlcviukg [ 65536 ] ; real_T lmi2ccv2ko_nz4o0shxby [ 65536
] ; real_T pvbmqf02qf_ppxrqq0gsf [ 65536 ] ; real_T mqq53tujso_llw0u2ae0v [
65536 ] ; real_T ksye3ripfw_jwzvbuczlb [ 65536 ] ; real_T
djd21qahvl_dhmrxtyqop [ 65536 ] ; boolean_T icmeug23yd [ 65536 ] ; boolean_T
kahhteyho0 [ 65536 ] ; boolean_T g1g5fzyp4j [ 65536 ] ; boolean_T op5zfwxpem
[ 65536 ] ; boolean_T fcp1tvzqdu [ 65536 ] ; boolean_T jkn5jguhvy [ 65536 ] ;
boolean_T d2qr5asfwj [ 65536 ] ; boolean_T kkcpfq4kub [ 65536 ] ; boolean_T
hoh3yov1xo [ 65536 ] ; boolean_T ellhmzh2h3 [ 65536 ] ; boolean_T j02lqvxrlg
[ 65536 ] ; boolean_T g1pjgzybux [ 65536 ] ; boolean_T cipref3upt [ 65536 ] ;
boolean_T mupymws3k3 [ 65536 ] ; boolean_T d41bodg12y [ 65536 ] ; boolean_T
ayfvkpfmwj [ 65536 ] ; boolean_T di1pxs4wub [ 65536 ] ; boolean_T nlvtydabhm
[ 65536 ] ; boolean_T n1vtun4qv5_guugdwf2m3 [ 65536 ] ; boolean_T
anupnn0jzd_ldqodwenvz [ 65536 ] ; boolean_T a11mv2rz1m_dhamdvybc1 [ 65536 ] ;
boolean_T e4wwqxwnup_dypejvacrn [ 65536 ] ; boolean_T jyar2yqfuv_lxo5edjg3c [
65536 ] ; boolean_T medh532pfo_owjr1h1vqy [ 65536 ] ; boolean_T
cnyn5fudun_bjbgfqrolh [ 65536 ] ; boolean_T grrh4e51co_nuebgmauvi [ 65536 ] ;
boolean_T ocgbir3blb_bsqwvugooi [ 65536 ] ; boolean_T fbxikb3vxd_lnjdk5wtww [
65536 ] ; boolean_T lg3omraq1w_hv2ho1zopz [ 65536 ] ; boolean_T
ngfwu0pzmy_bnlywzniup [ 65536 ] ; boolean_T bvb3obmjhw_dapv3jlyq5 [ 65536 ] ;
boolean_T m2b5x0cy5i_ezqlmfzvpq [ 65536 ] ; boolean_T hqpggldqvx_bjvjhhzy4i [
65536 ] ; boolean_T filcmvu1jl_jzx3amusab [ 65536 ] ; boolean_T
pfd4pcf5zp_fdinthrxmb [ 65536 ] ; boolean_T l5uexs3ekg_al00mdgrv4 [ 65536 ] ;
boolean_T dwmn3bg2ap_ju13rw2h0m [ 65536 ] ; boolean_T a2oqsdfcq5_jz50ptvnrg [
65536 ] ; boolean_T oykz5inwd1_o4f35lbcvx [ 65536 ] ; boolean_T
gp45ioca2t_nyxm0bsxsn [ 65536 ] ; boolean_T fpoyajajzt_icdfyazkhu [ 65536 ] ;
boolean_T mj20vcjz43_oyypvi4boh [ 65536 ] ; boolean_T oth0yyzist_nvsvtgkap4 [
65536 ] ; boolean_T nfifkdatcc_m3yhjduhi1 [ 65536 ] ; boolean_T
g1dksagv0g_czkfpwuzm5 [ 65536 ] ; boolean_T homvkrudpv_mdoasc5av4 [ 65536 ] ;
boolean_T h4v5kw10pe_m3ybdk4ikc [ 65536 ] ; boolean_T a35pywq0em_jacdjrqyev [
65536 ] ; boolean_T pkc135vz30_h522xzlxvt [ 65536 ] ; boolean_T
l2t0l0hhqj_c0dok3111h [ 65536 ] ; } B ; typedef struct { struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } pvltcsg3fd ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } b1dguehs12 ; struct {
void * AQHandles ; } c1mkke1lc0 ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } lqtjsmd0c0 ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } enjvq1rtga ; struct { void * AQHandles ; }
ajfirptzuw ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} awjbgkvpml ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } bgsy1dpqct ; struct { void * LoggedData ; } k1cll4glti ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } n2rvtyxgyn ; struct { void
* LoggedData ; } j4giqpsgit ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } ebwheh510k ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } cjva2p5i1u ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } j11louxedr ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } brkivscmyp ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } bkhye3vpg5 ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } dub1rycbnz ; struct { void * TimePtr
; void * DataPtr ; void * RSimInfoPtr ; } nmdky2lrb2 ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } pkw4hqakgw ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } ih233gw33i ; struct {
void * LoggedData ; } lfpipej4d5 ; struct { void * LoggedData ; } ksm0c15pn3
; struct { void * LoggedData ; } g2gvxr3gsi ; struct { void * LoggedData ; }
hjizvovpsx ; struct { void * LoggedData ; } kr3cklxyu4 ; struct { void *
LoggedData ; } f1xmxzfzp0 ; struct { void * LoggedData ; } gfsafs2vvk ;
struct { void * LoggedData ; } gujjiko25c ; struct { void * LoggedData ; }
fqlzo2jf0t ; struct { void * LoggedData ; } ncssq0cdqe ; struct { void *
LoggedData ; } eziwunhvb3 ; struct { void * LoggedData ; } l2l4tukvx1 ;
struct { void * LoggedData ; } feszysrdxp ; struct { void * LoggedData ; }
duuwmv1zl1 ; struct { int_T PrevIndex ; } moidzuewht ; struct { int_T
PrevIndex ; } d25msrec11 ; struct { int_T PrevIndex ; } o4oqn42ujc ; struct {
int_T PrevIndex ; } kbdqbct1b2 ; struct { int_T PrevIndex ; } mltx3t5uia ;
struct { int_T PrevIndex ; } kddtm1uwe3 ; struct { int_T PrevIndex ; }
frhsfxyceb ; struct { int_T PrevIndex ; } hzwxcai33x ; struct { int_T
PrevIndex ; } a14vmdf0iv ; struct { int_T PrevIndex ; } eqyepdn0ua ; struct {
int_T PrevIndex ; } o4b50arjk4 ; struct { int_T PrevIndex ; } dnlhn3plya ;
struct { int_T PrevIndex ; } bao1yo2tyh ; struct { int_T PrevIndex ; }
c5ev3bj0ey ; struct { int_T PrevIndex ; } iryr4bvyss ; struct { int_T
PrevIndex ; } pgjyomlnv4 ; } DW ; typedef struct { rtwCAPI_ModelMappingInfo
mmi ; } DataMapInfo ; struct P_ { real_T FromWorkspace4_Time0 [ 2 ] ; real_T
FromWorkspace4_Data0 [ 131072 ] ; real_T FromWorkspace10_Time0 [ 2 ] ; real_T
FromWorkspace10_Data0 [ 131072 ] ; real_T FromWorkspace7_Time0 [ 2 ] ; real_T
FromWorkspace7_Data0 [ 131072 ] ; real_T FromWorkspace9_Time0 [ 2 ] ; real_T
FromWorkspace9_Data0 [ 131072 ] ; real_T FromWorkspace_Time0 [ 2 ] ; real_T
FromWorkspace_Data0 [ 131072 ] ; real_T FromWorkspace8_Time0 [ 2 ] ; real_T
FromWorkspace8_Data0 [ 131072 ] ; real_T FromWorkspace1_Time0 [ 2 ] ; real_T
FromWorkspace1_Data0 [ 131072 ] ; real_T FromWorkspace12_Time0 [ 2 ] ; real_T
FromWorkspace12_Data0 [ 131072 ] ; real_T FromWorkspace11_Time0 [ 2 ] ;
real_T FromWorkspace11_Data0 [ 131072 ] ; real_T FromWorkspace2_Time0 [ 2 ] ;
real_T FromWorkspace2_Data0 [ 131072 ] ; real_T FromWorkspace3_Time0 [ 2 ] ;
real_T FromWorkspace3_Data0 [ 131072 ] ; real_T FromWorkspace13_Time0 [ 2 ] ;
real_T FromWorkspace13_Data0 [ 131072 ] ; real_T FromWorkspace5_Time0 [ 2 ] ;
real_T FromWorkspace5_Data0 [ 131072 ] ; real_T FromWorkspace14_Time0 [ 2 ] ;
real_T FromWorkspace14_Data0 [ 131072 ] ; real_T FromWorkspace6_Time0 [ 2 ] ;
real_T FromWorkspace6_Data0 [ 131072 ] ; real_T FromWorkspace15_Time0 [ 2 ] ;
real_T FromWorkspace15_Data0 [ 131072 ] ; real_T Constant1_Value ; real_T
Constant2_Value ; real_T Constant3_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Normal_Multiplier_InXA1_NAB4_GetDWork ( ) ; extern void
mr_Normal_Multiplier_InXA1_NAB4_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_Normal_Multiplier_InXA1_NAB4_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Normal_Multiplier_InXA1_NAB4_GetCAPIStaticMap ( void ) ; extern SimStruct *
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
