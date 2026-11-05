#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 8 member(s).
class SwapChainAssistant {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SwapChainAssistant@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentResourceAndCommandQueue@SwapChainAssistant@@UEAAJAEBU_GUID@@PEAPEAX01@Z
    virtual long GetCurrentResourceAndCommandQueue(_GUID const &, void * *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLUID@SwapChainAssistant@@UEAA?AU_LUID@@XZ
    virtual _LUID GetLUID();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSwapChainObject@SwapChainAssistant@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSwapChainObject(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?InsertImplicitSync@SwapChainAssistant@@UEAAJXZ
    virtual long InsertImplicitSync();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SwapChainAssistant@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SwapChainAssistant@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SwapChainAssistant@@QEAA@XZ
    SwapChainAssistant();
};
