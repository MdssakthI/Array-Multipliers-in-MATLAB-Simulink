#ifndef RTW_HEADER_Approx_Multiplier_M3_AMA3_h_
#define RTW_HEADER_Approx_Multiplier_M3_AMA3_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Approx_Multiplier_M3_AMA3_COMMON_INCLUDES_
#define Approx_Multiplier_M3_AMA3_COMMON_INCLUDES_
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
#include "Approx_Multiplier_M3_AMA3_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Approx_Multiplier_M3_AMA3
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (24) 
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
typedef struct { real_T bwek2frsrx_mbvzarwird [ 65536 ] ; real_T
byg02muxsq_cl54gopm0x [ 65536 ] ; real_T mh0t0qazkh_kkiq3xxxve [ 65536 ] ;
real_T istmbx0gkz_cxarnvbvui [ 65536 ] ; real_T lgnt3oshyz_bhxxfovxdy [ 65536
] ; real_T egm1y5tymt_pbm3vprmfu [ 65536 ] ; real_T hhentigwtv_cv5hdgrwft [
65536 ] ; real_T cnbgbob2rf_fqdqrf4qbc [ 65536 ] ; real_T
k5pdrflkwt_g2mlkqadfk [ 65536 ] ; real_T kgxa5vxksy_g1smspu5ke [ 65536 ] ;
real_T c1aigrb2r4_merlcviukg [ 65536 ] ; real_T n2ttkgo302_nz4o0shxby [ 65536
] ; real_T e35f24wuar_ppxrqq0gsf [ 65536 ] ; real_T ppvdxaszlo_llw0u2ae0v [
65536 ] ; real_T jmmse02z3f_jwzvbuczlb [ 65536 ] ; boolean_T cefaqd4mmo [
65536 ] ; boolean_T h1hlsij0yt [ 65536 ] ; boolean_T pmm03rrn0a [ 65536 ] ;
boolean_T n1rh2tbdzh [ 65536 ] ; boolean_T dassz0pmrw [ 65536 ] ; boolean_T
muuf4tphh2 [ 65536 ] ; boolean_T klpdnkjsg2 [ 65536 ] ; boolean_T li4o0hildc
[ 65536 ] ; boolean_T ohekoapafv [ 65536 ] ; boolean_T lyv0zmdkxz [ 65536 ] ;
boolean_T dkwoqzqhxy [ 65536 ] ; boolean_T cgd0ee2uwi [ 65536 ] ; boolean_T
dlorqfbkxe [ 65536 ] ; boolean_T mdsfzgmvpb [ 65536 ] ; boolean_T djm2pikxpj
[ 65536 ] ; boolean_T e3p0mcsrbm [ 65536 ] ; boolean_T op44in5v5j [ 65536 ] ;
boolean_T jjzoxfcs22_dhmrxtyqop [ 65536 ] ; boolean_T kgtji31fj0_guugdwf2m3 [
65536 ] ; boolean_T l4qsnbyytd_ldqodwenvz [ 65536 ] ; boolean_T
cc23bv3sil_dhamdvybc1 [ 65536 ] ; boolean_T jha403gzgy_dypejvacrn [ 65536 ] ;
boolean_T gb3ekx3dta_lxo5edjg3c [ 65536 ] ; boolean_T c3oo1pm0qi_owjr1h1vqy [
65536 ] ; boolean_T nsf230vtki_bjbgfqrolh [ 65536 ] ; boolean_T
dmlhfbitdf_nuebgmauvi [ 65536 ] ; boolean_T mt5gte5wob_bsqwvugooi [ 65536 ] ;
boolean_T k2g3v1tstw_lnjdk5wtww [ 65536 ] ; boolean_T oxwfgl1gu1_hv2ho1zopz [
65536 ] ; boolean_T pimwsxq0m2_bnlywzniup [ 65536 ] ; boolean_T
bviem430jn_dapv3jlyq5 [ 65536 ] ; boolean_T o1dvgrsvnz_ezqlmfzvpq [ 65536 ] ;
boolean_T hh5bcxgew2_bjvjhhzy4i [ 65536 ] ; boolean_T dk15jsqdzx_jzx3amusab [
65536 ] ; boolean_T g0hkbcnjzb_fdinthrxmb [ 65536 ] ; boolean_T
cg3sbmjtm4_al00mdgrv4 [ 65536 ] ; boolean_T jeh2md4eax_ju13rw2h0m [ 65536 ] ;
boolean_T dnxip1xmnc_jz50ptvnrg [ 65536 ] ; boolean_T evzazxjhn1_o4f35lbcvx [
65536 ] ; boolean_T evdvzmtvdh_nyxm0bsxsn [ 65536 ] ; boolean_T
axocrh1aqb_icdfyazkhu [ 65536 ] ; boolean_T j5ue52sjoc_oyypvi4boh [ 65536 ] ;
boolean_T b00jcfy4kq_nvsvtgkap4 [ 65536 ] ; boolean_T nn3ajoiiu0_m3yhjduhi1 [
65536 ] ; boolean_T jclpberqiu_czkfpwuzm5 [ 65536 ] ; boolean_T
jn3iz5vxc4_mdoasc5av4 [ 65536 ] ; boolean_T ctaorfqsug_m3ybdk4ikc [ 65536 ] ;
boolean_T f1f00nxyge_jacdjrqyev [ 65536 ] ; boolean_T jdwlbtpfyp_h522xzlxvt [
65536 ] ; boolean_T mmvboh2qw5_c0dok3111h [ 65536 ] ; boolean_T
jqz205cgkh_ctvw0tpkon [ 65536 ] ; boolean_T gxgeue2pk4_pxqvlbal2i [ 65536 ] ;
boolean_T nw4hfz5q1h_p5h3gwuwqg [ 65536 ] ; boolean_T pl32mxtr31_afnsueciae [
65536 ] ; boolean_T kbwvhw4jfv_evg4t2fsev [ 65536 ] ; boolean_T
bw5fitnsvj_ax3wx1gs5w [ 65536 ] ; boolean_T f5j42u3exo_as0qznsxlv [ 65536 ] ;
boolean_T cnbifjo3g0_ifotjnizh4 [ 65536 ] ; boolean_T iwvsra1cda_ltu3syw14q [
65536 ] ; boolean_T n5yqftfcz1_ojunzewo4f [ 65536 ] ; boolean_T
fryzhzfyel_o2tow3gxzm [ 65536 ] ; boolean_T nuvybv2uxg_ipgns4eet5 [ 65536 ] ;
boolean_T aerchojn4b_fkr0r45bcn [ 65536 ] ; boolean_T jvksohy2jj ; boolean_T
kjtqep3s42 ; boolean_T hhlvjssrul ; boolean_T eehjfds1zp ; boolean_T
nbczllmynw ; boolean_T klitm0zcu3 ; boolean_T nfioqm3gmv ; } B ; typedef
struct { struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
oxtg0nrans ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} p2ll3502se ; struct { void * AQHandles ; } i1idkhyivn ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } itc1nn5uma ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } cbllkrk5ok ; struct {
void * LoggedData ; } htr1izgrwz ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } cf23xd2iev ; struct { void * LoggedData ; } bwdrbajjum
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
ietuenx3i2 ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} alxkrbalx0 ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } jnpvkmxlxy ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } mqbhms4nl1 ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } dyhvwc5vja ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } pdy5jueqrh ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } c1h3ctgqpj ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } etnkf1pdot ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } m0ersehk4c ; struct { void * TimePtr ;
void * DataPtr ; void * RSimInfoPtr ; } hin42u5r1x ; struct { void * TimePtr
; void * DataPtr ; void * RSimInfoPtr ; } hramb0ocol ; struct { void *
LoggedData ; } nzc5cbptd2 ; struct { void * LoggedData ; } db5tg4f432 ;
struct { void * LoggedData ; } nvzvmncc32 ; struct { void * LoggedData ; }
ey2q1a0juo ; struct { void * LoggedData ; } dcjvfvqrrm ; struct { void *
LoggedData ; } pmwyrvpwuv ; struct { void * LoggedData ; } ef2tbr3zkc ;
struct { void * LoggedData ; } h4kgvkhif3 ; struct { void * LoggedData ; }
duoloaq3l3 ; struct { void * LoggedData ; } dcmmg3x1y2 ; struct { void *
LoggedData ; } lgjsik0a1v ; struct { void * LoggedData ; } haw1uambsf ;
struct { void * LoggedData ; } ppq01k01ro ; struct { void * LoggedData ; }
ocx3rwgp5n ; int_T anbyqeqhho ; int_T jsd1ksfewi ; struct { int_T PrevIndex ;
} ps2znodovw ; int_T ngfspxrd23 ; int_T f1vm3nfado ; struct { int_T PrevIndex
; } jiac0cbguk ; int_T avecdpuxre ; int_T ioqyqoalne ; struct { int_T
PrevIndex ; } l5xsozc2ul ; int_T mnzge41qdh ; int_T c1whuykri1 ; struct {
int_T PrevIndex ; } dhnbacq5om ; int_T eosjlsccjz ; int_T j3mhxlgarq ; struct
{ int_T PrevIndex ; } fjx3qw2pbg ; int_T bkl45ijtav ; int_T m2qlk4ptp3 ;
struct { int_T PrevIndex ; } lxuj2cx0tl ; int_T dzb4xa21pv ; int_T jvew4rz0fv
; struct { int_T PrevIndex ; } nkdrkcqhkl ; int_T lbivdgyqyw ; int_T
c1ekirrnbf ; struct { int_T PrevIndex ; } h23jwch0yf ; int_T m41ys0hbb2 ;
int_T eltzdzm2xb ; struct { int_T PrevIndex ; } j3ak4rycm4 ; int_T ck0rx0mnxl
; int_T pkxitby4f3 ; struct { int_T PrevIndex ; } cu2ifxkm3s ; int_T
codeguntwv ; int_T joxwee1hat ; struct { int_T PrevIndex ; } mxawas1cca ;
int_T nf5kfotlzq ; int_T nadsikh0yy ; struct { int_T PrevIndex ; } lthjpvw2ja
; int_T fop2prr0bf ; int_T dozhfgcamo ; struct { int_T PrevIndex ; }
ig2yyen4dq ; int_T izqj2pp23z ; int_T nlkb1imv5x ; struct { int_T PrevIndex ;
} ktgnhdwjii ; int_T ezsa5od0uf ; int_T ip304rfffi ; struct { int_T PrevIndex
; } fqrsvzknvr ; int_T akrsefwjhe ; int_T kf2ahulxfb ; struct { int_T
PrevIndex ; } be1ve5xyyq ; } DW ; typedef struct { real_T kkp1jv0wi2 ; real_T
clan53bkeh ; real_T eillvelz3l ; real_T jwifvvvplg ; real_T evx5ukddl1 ;
real_T mplzctuvvd ; real_T bryryf34wg ; real_T l5ygtprdlc ; real_T jzjqwtalzb
; real_T k31zx4rguf ; real_T jfcmuprzzt ; real_T fjqw3ovxrg ; real_T
kbvestfqdv ; real_T f4jifospjy ; real_T kcjea1dewo ; real_T dwupncylup ; }
ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct
P_ { real_T FromWorkspace7_Time0 [ 2 ] ; real_T FromWorkspace7_Data0 [ 131072
] ; real_T FromWorkspace9_Time0 [ 2 ] ; real_T FromWorkspace9_Data0 [ 131072
] ; real_T FromWorkspace_Time0 [ 2 ] ; real_T FromWorkspace_Data0 [ 131072 ]
; real_T FromWorkspace8_Time0 [ 2 ] ; real_T FromWorkspace8_Data0 [ 131072 ]
; real_T FromWorkspace1_Time0 [ 2 ] ; real_T FromWorkspace1_Data0 [ 131072 ]
; real_T FromWorkspace15_Time0 [ 2 ] ; real_T FromWorkspace15_Data0 [ 131072
] ; real_T FromWorkspace14_Time0 [ 2 ] ; real_T FromWorkspace14_Data0 [
131072 ] ; real_T FromWorkspace2_Time0 [ 2 ] ; real_T FromWorkspace2_Data0 [
131072 ] ; real_T FromWorkspace13_Time0 [ 2 ] ; real_T FromWorkspace13_Data0
[ 131072 ] ; real_T FromWorkspace3_Time0 [ 2 ] ; real_T FromWorkspace3_Data0
[ 131072 ] ; real_T FromWorkspace12_Time0 [ 2 ] ; real_T
FromWorkspace12_Data0 [ 131072 ] ; real_T FromWorkspace4_Time0 [ 2 ] ; real_T
FromWorkspace4_Data0 [ 131072 ] ; real_T FromWorkspace11_Time0 [ 2 ] ; real_T
FromWorkspace11_Data0 [ 131072 ] ; real_T FromWorkspace5_Time0 [ 2 ] ; real_T
FromWorkspace5_Data0 [ 131072 ] ; real_T FromWorkspace10_Time0 [ 2 ] ; real_T
FromWorkspace10_Data0 [ 131072 ] ; real_T FromWorkspace6_Time0 [ 2 ] ; real_T
FromWorkspace6_Data0 [ 131072 ] ; real_T Constant1_Value ; real_T
Constant2_Value ; real_T Constant3_Value ; real_T Constant4_Value ; real_T
Constant5_Value ; real_T Constant6_Value ; real_T Constant7_Value ; real_T
Constant_Value ; boolean_T Zero_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Approx_Multiplier_M3_AMA3_GetDWork ( ) ; extern void
mr_Approx_Multiplier_M3_AMA3_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_Approx_Multiplier_M3_AMA3_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Approx_Multiplier_M3_AMA3_GetCAPIStaticMap ( void ) ; extern SimStruct *
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
