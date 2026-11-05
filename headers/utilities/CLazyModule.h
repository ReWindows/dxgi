#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 10 member(s).
class CLazyModule {
public:
    class DCompositionInfo;
    class DCompositionSprite;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlitOcclusionWarn@CLazyModule@@QEAAXPEAVCDXGIFactory@@@Z
    void BlitOcclusionWarn(CDXGIFactory *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLazyModule@@QEAA@XZ
    CLazyModule();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWRundown@CLazyModule@@QEAAXXZ
    void ETWRundown();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChain@CLazyModule@@QEAAPEAVCDXGISwapChain@@PEAUHWND__@@@Z
    CDXGISwapChain * GetSwapChain(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainByCompositionSurface@CLazyModule@@QEAAPEAVCDXGISwapChain@@PEAX@Z
    CDXGISwapChain * GetSwapChainByCompositionSurface(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertSwapChain@CLazyModule@@QEAAJPEAVCDXGISwapChain@@@Z
    long InsertSwapChain(CDXGISwapChain *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinComp@CLazyModule@@QEAA_NPEAUIUnknown@@@Z
    bool IsWinComp(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGlobalDCompositionInfo@CLazyModule@@QEAAXPEBVCDXGISwapChain@@@Z
    void RemoveGlobalDCompositionInfo(CDXGISwapChain const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGlobalDCompositionInfo@CLazyModule@@QEAAXPEBVCDXGISwapChain@@@Z
    void UpdateGlobalDCompositionInfo(CDXGISwapChain const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLazyModule@@QEAA@XZ
    ~CLazyModule();
};
