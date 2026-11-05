#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
class CDXGILightweightDevice {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceRemovedReason@CDXGILightweightDevice@@UEAAJXZ
    virtual long GetDeviceRemovedReason();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKernelContextHandle@CDXGILightweightDevice@@UEAAPEAXXZ
    virtual void * GetKernelContextHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseFromSwapChain@CDXGILightweightDevice@@UEAAXXZ
    virtual void ReleaseFromSwapChain();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGILightweightDevice@@IEAA@XZ
    CDXGILightweightDevice();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGILightweightDevice@@IEAA@XZ
    ~CDXGILightweightDevice();
};
