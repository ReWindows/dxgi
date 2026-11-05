#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 10 member(s).
class CPublicUseCountWatcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPublicUseCountWatcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPublicUseCountWatcher@@QEAA@PEAVCPublicUseCountWatcherBase@@@Z
    CPublicUseCountWatcher(CPublicUseCountWatcherBase *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPublicUseCountWatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPublicUseCountWatcher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCAddUse@CPublicUseCountWatcher@@UEAAKXZ
    virtual unsigned long UCAddUse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCBreakCyclicReferences@CPublicUseCountWatcher@@UEAAXXZ
    virtual void UCBreakCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCDestroy@CPublicUseCountWatcher@@UEAAXXZ
    virtual void UCDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCEstablishCyclicReferences@CPublicUseCountWatcher@@UEAAXXZ
    virtual void UCEstablishCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCQueryInterface@CPublicUseCountWatcher@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long UCQueryInterface(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCReleaseUse@CPublicUseCountWatcher@@UEAAKXZ
    virtual unsigned long UCReleaseUse();
};
