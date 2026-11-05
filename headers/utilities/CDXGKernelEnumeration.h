#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
class CDXGKernelEnumeration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?D3DKMTCacheHybridQueryValue@CDXGKernelEnumeration@@UEAAJPEAU_D3DKMT_HYBRID_LIST@@@Z
    virtual long D3DKMTCacheHybridQueryValue(_D3DKMT_HYBRID_LIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D3DKMTEscape@CDXGKernelEnumeration@@UEAAJPEBU_D3DKMT_ESCAPE@@@Z
    virtual long D3DKMTEscape(_D3DKMT_ESCAPE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D3DKMTGetCachedHybridQueryValue@CDXGKernelEnumeration@@UEAAJPEAU_D3DKMT_HYBRID_LIST@@@Z
    virtual long D3DKMTGetCachedHybridQueryValue(_D3DKMT_HYBRID_LIST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D3DKMTQueryAdapterInfo@CDXGKernelEnumeration@@UEAAJPEBU_D3DKMT_QUERYADAPTERINFO@@@Z
    virtual long D3DKMTQueryAdapterInfo(_D3DKMT_QUERYADAPTERINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayConfigGetDeviceInfo@CDXGKernelEnumeration@@UEAAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@@Z
    virtual long DisplayConfigGetDeviceInfo(DISPLAYCONFIG_DEVICE_INFO_HEADER *);
};
