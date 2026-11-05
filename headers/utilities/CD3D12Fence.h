#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
class CD3D12Fence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandle@CD3D12Fence@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandle(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetVSyncInterruptControlData@CD3D12Fence@@UEAAJU_LUID@@@Z
    virtual long SetVSyncInterruptControlData(_LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCBreakCyclicReferences@CD3D12Fence@@UEAAXXZ
    virtual void UCBreakCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCEstablishCyclicReferences@CD3D12Fence@@UEAAXXZ
    virtual void UCEstablishCyclicReferences();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D12Fence@@QEAA@XZ
    ~CD3D12Fence();
};
