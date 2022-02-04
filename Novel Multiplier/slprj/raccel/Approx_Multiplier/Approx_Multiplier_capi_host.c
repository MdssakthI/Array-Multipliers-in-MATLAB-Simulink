#include "Approx_Multiplier_capi_host.h"
static Approx_Multiplier_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Approx_Multiplier_host_InitializeDataMapInfo(&(root), "Approx_Multiplier");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
