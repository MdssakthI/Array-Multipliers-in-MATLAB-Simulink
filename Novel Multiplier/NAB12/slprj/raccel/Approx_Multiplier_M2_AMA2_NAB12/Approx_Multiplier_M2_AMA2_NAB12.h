#ifndef RTW_HEADER_Approx_Multiplier_M2_AMA2_NAB12_h_
#define RTW_HEADER_Approx_Multiplier_M2_AMA2_NAB12_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Approx_Multiplier_M2_AMA2_NAB12_COMMON_INCLUDES_
#define Approx_Multiplier_M2_AMA2_NAB12_COMMON_INCLUDES_
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
#include "Approx_Multiplier_M2_AMA2_NAB12_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Approx_Multiplier_M2_AMA2_NAB12
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (32) 
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
typedef struct { real_T myaymb2awt_mbvzarwird [ 65536 ] ; real_T
cyrt0gxfde_cl54gopm0x [ 65536 ] ; real_T gwvsi1csq1_kkiq3xxxve [ 65536 ] ;
real_T ga3n1veaz4_cxarnvbvui [ 65536 ] ; real_T nzhpyfe40o_bhxxfovxdy [ 65536
] ; real_T duvdygyww3_pbm3vprmfu [ 65536 ] ; real_T oqo1ogxmhd_cv5hdgrwft [
65536 ] ; real_T d0j3s2h0fw_fqdqrf4qbc [ 65536 ] ; real_T
e12edrfloo_g2mlkqadfk [ 65536 ] ; real_T pppps4tdrf_g1smspu5ke [ 65536 ] ;
real_T mb1uadi5mp_merlcviukg [ 65536 ] ; real_T atnni5r0cg_nz4o0shxby [ 65536
] ; real_T aleuzbxubk_ppxrqq0gsf [ 65536 ] ; real_T pv1eqm5xkh_llw0u2ae0v [
65536 ] ; real_T hdq3sas2ki_jwzvbuczlb [ 65536 ] ; real_T
gakyihzbhe_dhmrxtyqop [ 65536 ] ; boolean_T ki3jm1b3dp [ 65536 ] ; boolean_T
ac4gbhjse5 [ 65536 ] ; boolean_T es3h3fnkv0 [ 65536 ] ; boolean_T chtfyle541
[ 65536 ] ; boolean_T obvrbahkgr [ 65536 ] ; boolean_T ftywdhfrnq [ 65536 ] ;
boolean_T ay0uhgxppx [ 65536 ] ; boolean_T n3ghdaztt5 [ 65536 ] ; boolean_T
dqwbh3hq04 [ 65536 ] ; boolean_T oaom5gl2vj [ 65536 ] ; boolean_T j4pryny4vl
[ 65536 ] ; boolean_T gsie3ma3c1 [ 65536 ] ; boolean_T j001cgyiv5 [ 65536 ] ;
boolean_T mtneenlfu1 [ 65536 ] ; boolean_T kkmp2q1u0b [ 65536 ] ; boolean_T
b3nhabfcsy [ 65536 ] ; boolean_T d0mmh1dnhq [ 65536 ] ; boolean_T
pvl3ihsdi1_guugdwf2m3 [ 65536 ] ; boolean_T eo2orjlbpn_ldqodwenvz [ 65536 ] ;
boolean_T fyq2eycvn2_dhamdvybc1 [ 65536 ] ; boolean_T navscbncbk_dypejvacrn [
65536 ] ; boolean_T fgzzjjvqc2_lxo5edjg3c [ 65536 ] ; boolean_T
aslsn1kxem_owjr1h1vqy [ 65536 ] ; boolean_T hroavh0osn_bjbgfqrolh [ 65536 ] ;
boolean_T ghlad3snpw_nuebgmauvi [ 65536 ] ; boolean_T jfr1cydlmf_bsqwvugooi [
65536 ] ; boolean_T opbmgdqrrh_lnjdk5wtww [ 65536 ] ; boolean_T
bg0t2wkg4v_hv2ho1zopz [ 65536 ] ; boolean_T ptibaxqwhr_bnlywzniup [ 65536 ] ;
boolean_T k5dw2ubits_dapv3jlyq5 [ 65536 ] ; boolean_T cbg5aezb2l_ezqlmfzvpq [
65536 ] ; boolean_T ipy3a3eyha_bjvjhhzy4i [ 65536 ] ; boolean_T
j5zwa5doxs_jzx3amusab [ 65536 ] ; boolean_T ivyl1d5lcs_fdinthrxmb [ 65536 ] ;
boolean_T al4kom1apz_al00mdgrv4 [ 65536 ] ; boolean_T okfrtz4kdd_ju13rw2h0m [
65536 ] ; boolean_T ob4p5dhl3m_jz50ptvnrg [ 65536 ] ; boolean_T
c2amsfov4f_o4f35lbcvx [ 65536 ] ; boolean_T fmry3aj0td_nyxm0bsxsn [ 65536 ] ;
boolean_T dr51c3vtiw_icdfyazkhu [ 65536 ] ; boolean_T i00kgkq2se_oyypvi4boh [
65536 ] ; boolean_T cj5blvxkbp_nvsvtgkap4 [ 65536 ] ; boolean_T
efzmfqzgfn_m3yhjduhi1 [ 65536 ] ; boolean_T bpymfu52r1_czkfpwuzm5 [ 65536 ] ;
boolean_T mpimn3pk2a_mdoasc5av4 [ 65536 ] ; boolean_T ng0rkp0slx_m3ybdk4ikc [
65536 ] ; boolean_T l4kudr2ugq_jacdjrqyev [ 65536 ] ; boolean_T
elnc4bguh0_h522xzlxvt [ 65536 ] ; boolean_T chubjtjs5o_c0dok3111h [ 65536 ] ;
boolean_T azbmjhz5nq_ctvw0tpkon [ 65536 ] ; boolean_T lvq0wkbq5g_pxqvlbal2i [
65536 ] ; boolean_T i2fuwm33dq_p5h3gwuwqg [ 65536 ] ; boolean_T
ialmajuuaw_afnsueciae [ 65536 ] ; boolean_T hywsx34klc_evg4t2fsev [ 65536 ] ;
boolean_T enz4utgujq_ax3wx1gs5w [ 65536 ] ; boolean_T ch1vfrhmwf_as0qznsxlv [
65536 ] ; boolean_T dvfd4bapya_ifotjnizh4 [ 65536 ] ; boolean_T
cip00ogfbl_ltu3syw14q [ 65536 ] ; boolean_T hevrzrbyzv_ojunzewo4f [ 65536 ] ;
boolean_T drcoma10sb_o2tow3gxzm [ 65536 ] ; boolean_T i1dzdpyvl0_ipgns4eet5 [
65536 ] ; boolean_T kokpmriqjd_fkr0r45bcn [ 65536 ] ; boolean_T lg14uka0xz ;
boolean_T pwhdfwala2 ; boolean_T ixybpokhb1 ; boolean_T o1pbhxvcvg ;
boolean_T ckztss5ead ; boolean_T owa1qwu54g ; boolean_T luaye3cspa ;
boolean_T ffzy44b5sp ; boolean_T g0cwpbr0y0 ; boolean_T ekqxrotgj0 ;
boolean_T nep0lfrure ; boolean_T dkkmrdnqfw ; boolean_T jitrtk3yht ;
boolean_T cs3n5rrynv ; boolean_T gdqazxysni ; } B ; typedef struct { struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } nlr254sz25 ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } pr3fwnlpgk ;
struct { void * AQHandles ; } dwoanvig1x ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } esvnbrk15f ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } oznckgphen ; struct { void * LoggedData ;
} d55t05a2xe ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } jicbwiyez5 ; struct { void * LoggedData ; } ixj24l1myd ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } d3umpea34x ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } jkteypol3e ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } gkjuub03ra ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } jksobmoalm ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } lj113kpzv4
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
om2gmm2jag ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} h41vgtc3ky ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } ln2xpz4hzg ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } bcmr1x5pix ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } dhecasfssm ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } jzrj3tcydh ; struct { void * LoggedData ; } j1tkhfev4u
; struct { void * LoggedData ; } bcpod2sutp ; struct { void * LoggedData ; }
kna32tlcxt ; struct { void * LoggedData ; } n5jknqfd2r ; struct { void *
LoggedData ; } mtoixlbpko ; struct { void * LoggedData ; } ac3vq3pg2w ;
struct { void * LoggedData ; } isl4udk1sa ; struct { void * LoggedData ; }
jxh30m4egg ; struct { void * LoggedData ; } ocxxyzkydi ; struct { void *
LoggedData ; } ekuua0muto ; struct { void * LoggedData ; } nlqhjgcw0m ;
struct { void * LoggedData ; } gvtkugchrm ; struct { void * LoggedData ; }
mt0pbtvv13 ; struct { void * LoggedData ; } hbyfvpd5vj ; int_T i1kdxf121h ;
int_T eoc3eeucvi ; struct { int_T PrevIndex ; } mzcomateoh ; int_T fda3cbb3nw
; int_T efj1gvv2gr ; struct { int_T PrevIndex ; } hhucah42fn ; int_T
nxwnfuyem0 ; int_T krxfewyasy ; struct { int_T PrevIndex ; } nzc1kt2qsq ;
int_T o1nablqqad ; int_T gphw1qtffc ; struct { int_T PrevIndex ; } bt2kjhduml
; int_T kak3h1i1oa ; int_T ppj5e0aivp ; struct { int_T PrevIndex ; }
dqs2ms3eur ; int_T hs2zfz2nlh ; int_T cefzg3zmcq ; struct { int_T PrevIndex ;
} d2mqo0d2sp ; int_T ft0xburawt ; int_T mp21qtcsjx ; struct { int_T PrevIndex
; } nzt5mfnv3k ; int_T nwykeulaqx ; int_T e22rmz1lwx ; struct { int_T
PrevIndex ; } g5hpdcltcn ; int_T bqxw0jmr2z ; int_T bhuyepyku4 ; struct {
int_T PrevIndex ; } jqv01tm0px ; int_T dpqfjpkijy ; int_T jetevoghi4 ; struct
{ int_T PrevIndex ; } ha1vep0n15 ; int_T hye5igtl1q ; int_T kfdh0vb0dl ;
struct { int_T PrevIndex ; } b0dn2sp3hb ; int_T bdrhcv20eb ; int_T lk4newzhbn
; struct { int_T PrevIndex ; } miqffbz3nv ; int_T dbkpycgaes ; int_T
jgbhsrli5q ; struct { int_T PrevIndex ; } jq3gjo2hvz ; int_T ko4owp1rtb ;
int_T jhztvkm5k1 ; struct { int_T PrevIndex ; } j4s4fpsto2 ; int_T ojn5cdcyud
; int_T bz3dqqo1kx ; struct { int_T PrevIndex ; } jzfwrfb3lq ; int_T
ar3uovtx04 ; int_T hcnnk1udor ; struct { int_T PrevIndex ; } fob3jepxrd ; }
DW ; typedef struct { real_T lkymp5mmsr ; real_T ej24xtuw10 ; real_T
hfuaisksbf ; real_T n0kzmfrveb ; real_T nmtsmwtdvc ; real_T cnj5w5ck4x ;
real_T plwzh3r5ar ; real_T dvonqo3tkc ; real_T c4r0wt5n20 ; real_T jkm2ooy0px
; real_T ds12kxlwfj ; real_T i4splpbi2a ; real_T n0duzaaimr ; real_T
mpenkpmahv ; real_T dghznguqbz ; real_T p5tsxjplhv ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
FromWorkspace7_Time0 [ 2 ] ; real_T FromWorkspace7_Data0 [ 131072 ] ; real_T
FromWorkspace9_Time0 [ 2 ] ; real_T FromWorkspace9_Data0 [ 131072 ] ; real_T
FromWorkspace_Time0 [ 2 ] ; real_T FromWorkspace_Data0 [ 131072 ] ; real_T
FromWorkspace8_Time0 [ 2 ] ; real_T FromWorkspace8_Data0 [ 131072 ] ; real_T
FromWorkspace1_Time0 [ 2 ] ; real_T FromWorkspace1_Data0 [ 131072 ] ; real_T
FromWorkspace6_Time0 [ 2 ] ; real_T FromWorkspace6_Data0 [ 131072 ] ; real_T
FromWorkspace11_Time0 [ 2 ] ; real_T FromWorkspace11_Data0 [ 131072 ] ;
real_T FromWorkspace4_Time0 [ 2 ] ; real_T FromWorkspace4_Data0 [ 131072 ] ;
real_T FromWorkspace12_Time0 [ 2 ] ; real_T FromWorkspace12_Data0 [ 131072 ]
; real_T FromWorkspace2_Time0 [ 2 ] ; real_T FromWorkspace2_Data0 [ 131072 ]
; real_T FromWorkspace13_Time0 [ 2 ] ; real_T FromWorkspace13_Data0 [ 131072
] ; real_T FromWorkspace14_Time0 [ 2 ] ; real_T FromWorkspace14_Data0 [
131072 ] ; real_T FromWorkspace15_Time0 [ 2 ] ; real_T FromWorkspace15_Data0
[ 131072 ] ; real_T FromWorkspace3_Time0 [ 2 ] ; real_T FromWorkspace3_Data0
[ 131072 ] ; real_T FromWorkspace5_Time0 [ 2 ] ; real_T FromWorkspace5_Data0
[ 131072 ] ; real_T FromWorkspace10_Time0 [ 2 ] ; real_T
FromWorkspace10_Data0 [ 131072 ] ; real_T Constant1_Value ; real_T
Constant2_Value ; real_T Constant_Value ; real_T Constant3_Value ; real_T
Constant8_Value ; real_T Constant4_Value ; real_T Constant9_Value ; real_T
Constant10_Value ; real_T Constant5_Value ; real_T Constant6_Value ; real_T
Constant7_Value ; boolean_T Zero_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Approx_Multiplier_M2_AMA2_NAB12_GetDWork ( ) ; extern
void mr_Approx_Multiplier_M2_AMA2_NAB12_SetDWork ( const mxArray * ssDW ) ;
extern mxArray *
mr_Approx_Multiplier_M2_AMA2_NAB12_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
Approx_Multiplier_M2_AMA2_NAB12_GetCAPIStaticMap ( void ) ; extern SimStruct
* const rtS ; extern const int_T gblNumToFiles ; extern const int_T
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
