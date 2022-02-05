#include "Normal_Multiplier_InXA1_NAB4_capi_host.h"
static Normal_Multiplier_InXA1_NAB4_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Normal_Multiplier_InXA1_NAB4_host_InitializeDataMapInfo(&(root), "Normal_Multiplier_InXA1_NAB4");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
