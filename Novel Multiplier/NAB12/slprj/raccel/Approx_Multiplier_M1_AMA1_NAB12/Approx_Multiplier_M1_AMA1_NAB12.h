#ifndef RTW_HEADER_Approx_Multiplier_M1_AMA1_NAB12_h_
#define RTW_HEADER_Approx_Multiplier_M1_AMA1_NAB12_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef Approx_Multiplier_M1_AMA1_NAB12_COMMON_INCLUDES_
#define Approx_Multiplier_M1_AMA1_NAB12_COMMON_INCLUDES_
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
#include "Approx_Multiplier_M1_AMA1_NAB12_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Approx_Multiplier_M1_AMA1_NAB12
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (19) 
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
typedef struct { real_T b00nhbi1vn_mbvzarwird [ 65536 ] ; real_T
erimzpqpyv_cl54gopm0x [ 65536 ] ; real_T fdzewummhp_kkiq3xxxve [ 65536 ] ;
real_T cenecddxru_cxarnvbvui [ 65536 ] ; real_T jjfqup1kdt_bhxxfovxdy [ 65536
] ; real_T dywfleyaaj_pbm3vprmfu [ 65536 ] ; real_T jsancbgopo_cv5hdgrwft [
65536 ] ; real_T dtfzsplxv3_fqdqrf4qbc [ 65536 ] ; real_T
pxtugw21md_g2mlkqadfk [ 65536 ] ; real_T g4thlbnlje_g1smspu5ke [ 65536 ] ;
real_T hg35nvtbow_merlcviukg [ 65536 ] ; real_T dyys5czzzo_nz4o0shxby [ 65536
] ; real_T fhepxarbas_ppxrqq0gsf [ 65536 ] ; real_T i0sfrtsgjw_llw0u2ae0v [
65536 ] ; real_T lbobocaz11_jwzvbuczlb [ 65536 ] ; real_T
asys2wkcon_dhmrxtyqop [ 65536 ] ; boolean_T liewt1idy0 [ 65536 ] ; boolean_T
c3f5xp54js [ 65536 ] ; boolean_T lqx12b0xy1 [ 65536 ] ; boolean_T c5x4egfo3o
[ 65536 ] ; boolean_T a1ssold0cf [ 65536 ] ; boolean_T gpflyyrvgw [ 65536 ] ;
boolean_T dwutuz3ccd [ 65536 ] ; boolean_T nk3kxgqrrj [ 65536 ] ; boolean_T
bctdqm3hqv [ 65536 ] ; boolean_T puuhl5bfrb [ 65536 ] ; boolean_T jg4g51cq5r
[ 65536 ] ; boolean_T dkwsdhcmgi [ 65536 ] ; boolean_T nzzrf3025p [ 65536 ] ;
boolean_T homs2h42w5 [ 65536 ] ; boolean_T dja5cpo1bk [ 65536 ] ; boolean_T
ftgyvdtej5 [ 65536 ] ; boolean_T faktrlkhtc [ 65536 ] ; boolean_T
c5vk0yu1pa_guugdwf2m3 [ 65536 ] ; boolean_T bxmusuqb2k_ldqodwenvz [ 65536 ] ;
boolean_T jecipoa5if_dhamdvybc1 [ 65536 ] ; boolean_T bion2p5x4o_dypejvacrn [
65536 ] ; boolean_T d5yq5izpze_lxo5edjg3c [ 65536 ] ; boolean_T
o4ybcku3w0_owjr1h1vqy [ 65536 ] ; boolean_T dsv5ciwjm3_bjbgfqrolh [ 65536 ] ;
boolean_T leszdn4qzy_nuebgmauvi [ 65536 ] ; boolean_T jzubkqmxb5_bsqwvugooi [
65536 ] ; boolean_T mgwgq5lwlt_lnjdk5wtww [ 65536 ] ; boolean_T
etwythiorx_hv2ho1zopz [ 65536 ] ; boolean_T ozim03upna_bnlywzniup [ 65536 ] ;
boolean_T m15wwk5ouv_dapv3jlyq5 [ 65536 ] ; boolean_T dwlcmrswsg_ezqlmfzvpq [
65536 ] ; boolean_T lejryoy10m_bjvjhhzy4i [ 65536 ] ; boolean_T
jq3zaop5cn_jzx3amusab [ 65536 ] ; boolean_T pk2wucixbq_fdinthrxmb [ 65536 ] ;
boolean_T ehhud2fofx_al00mdgrv4 [ 65536 ] ; boolean_T lkht5ggrzj_ju13rw2h0m [
65536 ] ; boolean_T hu3zsxmvrk_jz50ptvnrg [ 65536 ] ; boolean_T
eahpsmgiif_o4f35lbcvx [ 65536 ] ; boolean_T kvv0apejuc_nyxm0bsxsn [ 65536 ] ;
boolean_T p1cktqllvf_icdfyazkhu [ 65536 ] ; boolean_T i2aceuk4bc_oyypvi4boh [
65536 ] ; boolean_T guqm4hnyxs_nvsvtgkap4 [ 65536 ] ; boolean_T
c4wwzzbop5_m3yhjduhi1 [ 65536 ] ; boolean_T jnuvgxve5h_czkfpwuzm5 [ 65536 ] ;
boolean_T evegbo0243_mdoasc5av4 [ 65536 ] ; boolean_T dkicah4qrk_m3ybdk4ikc [
65536 ] ; boolean_T kpasnofzyu_jacdjrqyev [ 65536 ] ; boolean_T
chps1fuyu5_h522xzlxvt [ 65536 ] ; boolean_T pw5myprmlg_c0dok3111h [ 65536 ] ;
boolean_T nuqu1uarye_ctvw0tpkon [ 65536 ] ; boolean_T j4op4jbgty_pxqvlbal2i [
65536 ] ; boolean_T pmlsnhnbfs_p5h3gwuwqg [ 65536 ] ; boolean_T
lmfmqrlxe1_afnsueciae [ 65536 ] ; boolean_T btuwy4jmme_evg4t2fsev [ 65536 ] ;
boolean_T hpjvcoqpnh_ax3wx1gs5w [ 65536 ] ; boolean_T pjqnvz1cq1_as0qznsxlv [
65536 ] ; boolean_T ghvxlhnfsd_ifotjnizh4 [ 65536 ] ; boolean_T
mczgpv2tly_ltu3syw14q [ 65536 ] ; boolean_T asqu2y3to5_ojunzewo4f [ 65536 ] ;
boolean_T gtqmwx3mzy ; boolean_T d55hvhulp0 ; } B ; typedef struct { struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } g0xb4l5keh ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } guvwlab5cj ;
struct { void * AQHandles ; } azi3a5jqgt ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } ly2u0svbhz ; struct { void * TimePtr ; void
* DataPtr ; void * RSimInfoPtr ; } k4pmebkxm0 ; struct { void * LoggedData ;
} h2tvi3e4zc ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } dvrypl0qlq ; struct { void * LoggedData ; } nmd0gdzcmn ; struct { void *
TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } k43hkxinwx ; struct { void
* TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } nnintsv2v5 ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } glchecpn25 ; struct
{ void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } fghyjkm11b ;
struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } ofdt3igasd
; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; }
nxbtbx35wl ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} cggw1zeixd ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr
; } koghksg1kx ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } g3jmse5nhb ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } nbr0vpfhyq ; struct { void * TimePtr ; void * DataPtr ;
void * RSimInfoPtr ; } m5n310htgl ; struct { void * LoggedData ; } f4eplfx1zr
; struct { void * LoggedData ; } luyniqswml ; struct { void * LoggedData ; }
nog1w1hukz ; struct { void * LoggedData ; } kh4yvixqbe ; struct { void *
LoggedData ; } cjcdkzuapp ; struct { void * LoggedData ; } cg0bxzudwl ;
struct { void * LoggedData ; } eiur0wrcts ; struct { void * LoggedData ; }
penqdnwkab ; struct { void * LoggedData ; } arch5uuns0 ; struct { void *
LoggedData ; } ondinwor10 ; struct { void * LoggedData ; } j5unx1snrf ;
struct { void * LoggedData ; } lqtv55rxal ; struct { void * LoggedData ; }
nugueput5p ; struct { void * LoggedData ; } e50hwlfetp ; int_T knljyxljhx ;
int_T a4ka45qq3i ; struct { int_T PrevIndex ; } e0resaer1z ; int_T cibzpdmmhr
; int_T liwlvxel1g ; struct { int_T PrevIndex ; } b5vx33zofm ; int_T
jtcicpj2sm ; int_T pjfm2molyz ; struct { int_T PrevIndex ; } gcwskomyjc ;
int_T lsq2kpx252 ; int_T pcu5b3ghhi ; struct { int_T PrevIndex ; } pzdmkrguwq
; int_T eabcjupldh ; int_T hmjfatyrl4 ; struct { int_T PrevIndex ; }
j310mstkss ; int_T nwn5t1uwqp ; int_T f3iigipiku ; struct { int_T PrevIndex ;
} mwqvaddvfl ; int_T dl1isdhfyz ; int_T a11comamzj ; struct { int_T PrevIndex
; } jw3bgkm4th ; int_T oniqdvpsin ; int_T h3gwww4axl ; struct { int_T
PrevIndex ; } djvjedwkym ; int_T fbuzu2oh1p ; int_T jvs3kxs40w ; struct {
int_T PrevIndex ; } nxq3votgjx ; int_T obilf4y22j ; int_T c0y1ylaiwq ; struct
{ int_T PrevIndex ; } hlmig0afwy ; int_T mxzvbg4ftd ; int_T ljlsms1abt ;
struct { int_T PrevIndex ; } hol1rnwm5o ; int_T ozpe3grulu ; int_T czletarm4o
; struct { int_T PrevIndex ; } ddavbq1tqq ; int_T daspqe2aoe ; int_T
hjp4ic2mxc ; struct { int_T PrevIndex ; } gj4wn3ah3r ; int_T mv5dusxviz ;
int_T atu2lxmomi ; struct { int_T PrevIndex ; } a42hiitwvh ; int_T oakvbgle2d
; int_T omkjsjveyj ; struct { int_T PrevIndex ; } ghhsf1sxoz ; int_T
heuczihubc ; int_T f0skiflgxl ; struct { int_T PrevIndex ; } lrtzlied03 ; }
DW ; typedef struct { real_T hno4cx35g4 ; real_T b3w33141pz ; real_T
ewabdelywv ; real_T hjwjrzxqw1 ; real_T jyzv5vhv2x ; real_T fxmlwwdmnu ;
real_T nrlttrgcpm ; real_T h2gustonxi ; real_T c4xs13odpo ; real_T bpl3i4duyd
; real_T pbx0gzcmgv ; real_T laqlnvhkhp ; real_T ovxvk1vtm1 ; real_T
lvv32kc5iz ; real_T ecdbtztlj3 ; real_T crmwhgquwu ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
FromWorkspace7_Time0 [ 2 ] ; real_T FromWorkspace7_Data0 [ 131072 ] ; real_T
FromWorkspace9_Time0 [ 2 ] ; real_T FromWorkspace9_Data0 [ 131072 ] ; real_T
FromWorkspace_Time0 [ 2 ] ; real_T FromWorkspace_Data0 [ 131072 ] ; real_T
FromWorkspace8_Time0 [ 2 ] ; real_T FromWorkspace8_Data0 [ 131072 ] ; real_T
FromWorkspace1_Time0 [ 2 ] ; real_T FromWorkspace1_Data0 [ 131072 ] ; real_T
FromWorkspace3_Time0 [ 2 ] ; real_T FromWorkspace3_Data0 [ 131072 ] ; real_T
FromWorkspace15_Time0 [ 2 ] ; real_T FromWorkspace15_Data0 [ 131072 ] ;
real_T FromWorkspace2_Time0 [ 2 ] ; real_T FromWorkspace2_Data0 [ 131072 ] ;
real_T FromWorkspace4_Time0 [ 2 ] ; real_T FromWorkspace4_Data0 [ 131072 ] ;
real_T FromWorkspace14_Time0 [ 2 ] ; real_T FromWorkspace14_Data0 [ 131072 ]
; real_T FromWorkspace5_Time0 [ 2 ] ; real_T FromWorkspace5_Data0 [ 131072 ]
; real_T FromWorkspace13_Time0 [ 2 ] ; real_T FromWorkspace13_Data0 [ 131072
] ; real_T FromWorkspace6_Time0 [ 2 ] ; real_T FromWorkspace6_Data0 [ 131072
] ; real_T FromWorkspace12_Time0 [ 2 ] ; real_T FromWorkspace12_Data0 [
131072 ] ; real_T FromWorkspace11_Time0 [ 2 ] ; real_T FromWorkspace11_Data0
[ 131072 ] ; real_T FromWorkspace10_Time0 [ 2 ] ; real_T
FromWorkspace10_Data0 [ 131072 ] ; real_T Constant_Value ; real_T
Constant1_Value ; real_T Constant10_Value ; real_T Constant11_Value ; real_T
Constant2_Value ; real_T Constant3_Value ; real_T Constant4_Value ; real_T
Constant5_Value ; real_T Constant6_Value ; real_T Constant7_Value ; real_T
Constant8_Value ; real_T Constant9_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_Approx_Multiplier_M1_AMA1_NAB12_GetDWork ( ) ; extern
void mr_Approx_Multiplier_M1_AMA1_NAB12_SetDWork ( const mxArray * ssDW ) ;
extern mxArray *
mr_Approx_Multiplier_M1_AMA1_NAB12_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
Approx_Multiplier_M1_AMA1_NAB12_GetCAPIStaticMap ( void ) ; extern SimStruct
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
