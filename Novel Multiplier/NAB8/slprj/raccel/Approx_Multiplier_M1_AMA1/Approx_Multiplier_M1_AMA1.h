#ifndef RTW_HEADER_Approx_Multiplier_M1_AMA1_h_
#define RTW_HEADER_Approx_Multiplier_M1_AMA1_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Approx_Multiplier_M1_AMA1_COMMON_INCLUDES_
#define Approx_Multiplier_M1_AMA1_COMMON_INCLUDES_
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
#include "Approx_Multiplier_M1_AMA1_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Approx_Multiplier_M1_AMA1
#define NSAMPLE_TIMES (4) 
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
typedef struct { real_T i5xwbbskyv_mbvzarwird [ 65536 ] ; real_T
nhe4oqppfk_cl54gopm0x [ 65536 ] ; real_T i40qqntd4n_kkiq3xxxve [ 65536 ] ;
real_T lfth1lpfgm_cxarnvbvui [ 65536 ] ; real_T gswmdpljxs_bhxxfovxdy [ 65536
] ; real_T dyh1xnvwwz_pbm3vprmfu [ 65536 ] ; real_T phqpdpfvpu_cv5hdgrwft [
65536 ] ; real_T gtlf4tgj3o_fqdqrf4qbc [ 65536 ] ; real_T
b4fp0p0cjv_g2mlkqadfk [ 65536 ] ; real_T mgvsfhdhz0_g1smspu5ke [ 65536 ] ;
real_T iep2bzrolt_merlcviukg [ 65536 ] ; real_T ndy02pw3vh_nz4o0shxby [ 65536
] ; real_T owfdrccodm_ppxrqq0gsf [ 65536 ] ; real_T lolzlyi2sv_llw0u2ae0v [
65536 ] ; real_T kjgqno1zb3_jwzvbuczlb [ 65536 ] ; real_T
eis1ry5qdh_dhmrxtyqop [ 65536 ] ; boolean_T fojecsed5g [ 65536 ] ; boolean_T
mxouhlb2gw [ 65536 ] ; boolean_T pk2xdduubg [ 65536 ] ; boolean_T aznnksaihq
[ 65536 ] ; boolean_T epnbc4o5er [ 65536 ] ; boolean_T loiigyk0gs [ 65536 ] ;
boolean_T bh4lm1kmf0 [ 65536 ] ; boolean_T jk50dxfbpq [ 65536 ] ; boolean_T
mqmxlfrxgn [ 65536 ] ; boolean_T dmzglcd0uc [ 65536 ] ; boolean_T l5pnlxwd5z
[ 65536 ] ; boolean_T anjcrie4w4 [ 65536 ] ; boolean_T dxgdj1a4jv [ 65536 ] ;
boolean_T gch4jxovvp [ 65536 ] ; boolean_T fehvxmn2ao [ 65536 ] ; boolean_T
nmcgphf123 [ 65536 ] ; boolean_T ljv1qoneze [ 65536 ] ; boolean_T
ilwp32etap_guugdwf2m3 [ 65536 ] ; boolean_T fplfroqg1f_ldqodwenvz [ 65536 ] ;
boolean_T j50yegxr1p_dhamdvybc1 [ 65536 ] ; boolean_T mvkv1xi411_dypejvacrn [
65536 ] ; boolean_T njigvp1yvn_lxo5edjg3c [ 65536 ] ; boolean_T
bhtrjfccoe_owjr1h1vqy [ 65536 ] ; boolean_T c0dr5akvfr_bjbgfqrolh [ 65536 ] ;
boolean_T nzjk3hstds_nuebgmauvi [ 65536 ] ; boolean_T oojerfme4k_bsqwvugooi [
65536 ] ; boolean_T lnvxoyikyx_lnjdk5wtww [ 65536 ] ; boolean_T
ag45lsppu4_hv2ho1zopz [ 65536 ] ; boolean_T ejj5lmv3b3_bnlywzniup [ 65536 ] ;
boolean_T o5dwiothzc_dapv3jlyq5 [ 65536 ] ; boolean_T gx5ayalycg_ezqlmfzvpq [
65536 ] ; boolean_T clnlcw5jz0_bjvjhhzy4i [ 65536 ] ; boolean_T
pt1r4h5v5u_jzx3amusab [ 65536 ] ; boolean_T iy3xhv3qlp_fdinthrxmb [ 65536 ] ;
boolean_T ohsmn4htvi_al00mdgrv4 [ 65536 ] ; boolean_T f5vxcibspd_ju13rw2h0m [
65536 ] ; boolean_T mhrawqjfnz_jz50ptvnrg [ 65536 ] ; boolean_T
ajdwhsu3e4_o4f35lbcvx [ 65536 ] ; boolean_T okj2hr3lrx_nyxm0bsxsn [ 65536 ] ;
boolean_T habe30dmq5_icdfyazkhu [ 65536 ] ; boolean_T ly1hltq1sj_oyypvi4boh [
65536 ] ; boolean_T p01fqbbq3t_nvsvtgkap4 [ 65536 ] ; boolean_T
jtfjap1b4y_m3yhjduhi1 [ 65536 ] ; boolean_T c0bz4epqm0_czkfpwuzm5 [ 65536 ] ;
boolean_T mgty5o3ftb_mdoasc5av4 [ 65536 ] ; boolean_T gt3pudviqy_m3ybdk4ikc [
65536 ] ; boolean_T jr53knvsjt_jacdjrqyev [ 65536 ] ; boolean_T
b1d3r5wo42_h522xzlxvt [ 65536 ] ; boolean_T arkhcshiua_c0dok3111h [ 65536 ] ;
boolean_T g0tljbaqep_ctvw0tpkon [ 65536 ] ; boolean_T kowidp05dn_pxqvlbal2i [
65536 ] ; boolean_T iw2cqkotdh_p5h3gwuwqg [ 65536 ] ; boolean_T
a2pmr1lr1l_afnsueciae [ 65536 ] ; boolean_T dgcj55jckc_evg4t2fsev [ 65536 ] ;
boolean_T ouokoecfzn_ax3wx1gs5w [ 65536 ] ; boolean_T ksu02fgcl2_as0qznsxlv [
65536 ] ; boolean_T ncwnj1bbj2_ifotjnizh4 [ 65536 ] ; boolean_T
ib23lmxsoc_ltu3syw14q [ 65536 ] ; boolean_T jynbd5vxru_ojunzewo4f [ 65536 ] ;
boolean_T eniphqzuob_o2tow3gxzm [ 65536 ] ; boolean_T aqn3sasmh2_ipgns4eet5 [
65536 ] ; boolean_T d5iyxhsnkn_fkr0r45bcn [ 65536 ] ; boolean_T
hsnusvfro0_izlwqhinl5 [ 65536 ] ; } B ; typedef struct { struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } hvmusgsjaj ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } cq2tozq2za ; struct {
void * AQHandles ; } ku1ymqyi00 ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } me4b5ujdm4 ; struct { void * TimePtr ; void * DataPtr
; void * RSimInfoPtr ; } ektnfx4uaa ; struct { void * LoggedData ; }
mulhvtspg0 ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} agmzmlwl13 ; struct { void * LoggedData ; } i445buixam ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } aohxatn10f ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } d5rku4dap4 ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } ig3ngwc5yl ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } kgseirxppw ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } ftbl3qc3ty
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
fpfhtsns1y ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} ehtjho2f5s ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } kolnoxowix ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } o3txyt5wpk ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } eggimasrah ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } f0jb0pxd5a ; struct { void * LoggedData ; } hfnpvhpdnt
; struct { void * LoggedData ; } endzapypvp ; struct { void * LoggedData ; }
k421dmfjp0 ; struct { void * LoggedData ; } ka0kzxqfvn ; struct { void *
LoggedData ; } jlkv5npnb2 ; struct { void * LoggedData ; } cdofqjeb3g ;
struct { void * LoggedData ; } oyhyumzi1p ; struct { void * LoggedData ; }
jykhi0aw4c ; struct { void * LoggedData ; } bqdhfom4dh ; struct { void *
LoggedData ; } nwzjddwmlt ; struct { void * LoggedData ; } jz1moedmjn ;
struct { void * LoggedData ; } m5sohxlfep ; struct { void * LoggedData ; }
bwggfl4ro0 ; struct { void * LoggedData ; } cyrkmjco0z ; int_T iyy3h4gswe ;
int_T gimltbpiry ; struct { int_T PrevIndex ; } jj21tf3aqg ; int_T hzagckdicv
; int_T b5bqkg4ec3 ; struct { int_T PrevIndex ; } mt5k3k1fq3 ; int_T
ojiqmutngz ; int_T hpsgq2e30p ; struct { int_T PrevIndex ; } b0zgrj4cs4 ;
int_T jh0ot4gnxy ; int_T gd44x4ieib ; struct { int_T PrevIndex ; } bek0aiedpm
; int_T mt5wpxud3j ; int_T pkw1xn0vyi ; struct { int_T PrevIndex ; }
fbllcg1p1z ; int_T i51f2vlnlx ; int_T oihryju0st ; struct { int_T PrevIndex ;
} cg04bxfexz ; int_T mvkxhwmuht ; int_T htj224anvz ; struct { int_T PrevIndex
; } eow0gsao2v ; int_T jjtry454rw ; int_T heg0cwkv1d ; struct { int_T
PrevIndex ; } g0rscqlqj0 ; int_T fzjqgavylo ; int_T puxxzfh2gf ; struct {
int_T PrevIndex ; } eufo4wecis ; int_T clxu0chp1j ; int_T hhfxqe5rbl ; struct
{ int_T PrevIndex ; } mjv2pwkvdn ; int_T p33xietry2 ; int_T ftfkp1sn1p ;
struct { int_T PrevIndex ; } nf4j4chcke ; int_T jjeu0qtul4 ; int_T j13sv11vx2
; struct { int_T PrevIndex ; } icfbha544g ; int_T dwj0pofozl ; int_T
nudru5oewz ; struct { int_T PrevIndex ; } jeuco21sts ; int_T me2df0znmf ;
int_T crfwloing0 ; struct { int_T PrevIndex ; } j2tdvtytkr ; int_T dah5ttseov
; int_T emosu012ii ; struct { int_T PrevIndex ; } acjatji4rh ; int_T
ahyywxeooh ; int_T fzwyypmdo4 ; struct { int_T PrevIndex ; } civkh42vvh ; }
DW ; typedef struct { real_T ioiflv2zv2 ; real_T bu4kyygrgu ; real_T
d1ovqiwi1e ; real_T c3thllphyu ; real_T l2mutkwwp4 ; real_T ikyscoxgag ;
real_T bpdtt4y3ym ; real_T hdjfpvvffu ; real_T fh4ehknn3w ; real_T k3z1v15qao
; real_T orygmksapw ; real_T nvnxsioezl ; real_T mlpialb4ta ; real_T
bleblvvosy ; real_T hqecjr2d2p ; real_T is0zwehve2 ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
FromWorkspace7_Time0 [ 2 ] ; real_T FromWorkspace7_Data0 [ 131072 ] ; real_T
FromWorkspace9_Time0 [ 2 ] ; real_T FromWorkspace9_Data0 [ 131072 ] ; real_T
FromWorkspace_Time0 [ 2 ] ; real_T FromWorkspace_Data0 [ 131072 ] ; real_T
FromWorkspace8_Time0 [ 2 ] ; real_T FromWorkspace8_Data0 [ 131072 ] ; real_T
FromWorkspace1_Time0 [ 2 ] ; real_T FromWorkspace1_Data0 [ 131072 ] ; real_T
FromWorkspace6_Time0 [ 2 ] ; real_T FromWorkspace6_Data0 [ 131072 ] ; real_T
FromWorkspace15_Time0 [ 2 ] ; real_T FromWorkspace15_Data0 [ 131072 ] ;
real_T FromWorkspace14_Time0 [ 2 ] ; real_T FromWorkspace14_Data0 [ 131072 ]
; real_T FromWorkspace2_Time0 [ 2 ] ; real_T FromWorkspace2_Data0 [ 131072 ]
; real_T FromWorkspace13_Time0 [ 2 ] ; real_T FromWorkspace13_Data0 [ 131072
] ; real_T FromWorkspace3_Time0 [ 2 ] ; real_T FromWorkspace3_Data0 [ 131072
] ; real_T FromWorkspace12_Time0 [ 2 ] ; real_T FromWorkspace12_Data0 [
131072 ] ; real_T FromWorkspace4_Time0 [ 2 ] ; real_T FromWorkspace4_Data0 [
131072 ] ; real_T FromWorkspace11_Time0 [ 2 ] ; real_T FromWorkspace11_Data0
[ 131072 ] ; real_T FromWorkspace5_Time0 [ 2 ] ; real_T FromWorkspace5_Data0
[ 131072 ] ; real_T FromWorkspace10_Time0 [ 2 ] ; real_T
FromWorkspace10_Data0 [ 131072 ] ; real_T Constant_Value ; real_T
Constant1_Value ; real_T Constant2_Value ; real_T Constant3_Value ; real_T
Constant4_Value ; real_T Constant5_Value ; real_T Constant6_Value ; real_T
Constant7_Value ; real_T Constant8_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Approx_Multiplier_M1_AMA1_GetDWork ( ) ; extern void
mr_Approx_Multiplier_M1_AMA1_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_Approx_Multiplier_M1_AMA1_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
Approx_Multiplier_M1_AMA1_GetCAPIStaticMap ( void ) ; extern SimStruct *
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
