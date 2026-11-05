#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
class CETWEvent_IDXGIFactory_CreateSwapChain {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CETWEvent_IDXGIFactory_CreateSwapChain@@QEAA@PEAXPEBUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC@@PEBQEAUIDXGISwapChain@@@Z
    CETWEvent_IDXGIFactory_CreateSwapChain(void *, IUnknown const *, DXGI_SWAP_CHAIN_DESC const *, IDXGISwapChain * const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CETWEvent_IDXGIFactory_CreateSwapChain@@QEAA@XZ
    ~CETWEvent_IDXGIFactory_CreateSwapChain();
};
