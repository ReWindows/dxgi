#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class CDXGIHMDEmulatedOutput {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOverlayColorSpaceSupport@CDXGIHMDEmulatedOutput@@UEAAJW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@PEAUIUnknown@@PEAI@Z
    virtual long CheckOverlayColorSpaceSupport(int, int, IUnknown *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOverlaySupport@CDXGIHMDEmulatedOutput@@UEAAJW4DXGI_FORMAT@@PEAUIUnknown@@PEAI@Z
    virtual long CheckOverlaySupport(int, IUnknown *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingMode1@CDXGIHMDEmulatedOutput@@UEAAJPEBUDXGI_MODE_DESC1@@PEAU2@PEAUIUnknown@@@Z
    virtual long FindClosestMatchingMode1(DXGI_MODE_DESC1const *, DXGI_MODE_DESC1*, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDXGIHMDEmulatedOutput@@UEAAJPEAUDXGI_OUTPUT_DESC@@@Z
    virtual long GetDesc(DXGI_OUTPUT_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CDXGIHMDEmulatedOutput@@UEAAJPEAUDXGI_OUTPUT_DESC1@@@Z
    virtual long GetDesc1(DXGI_OUTPUT_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHMonitor@CDXGIHMDEmulatedOutput@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetHMonitor();
    // Category: Method | Source: PE Export
    // Symbol: ?SupportsOverlays@CDXGIHMDEmulatedOutput@@UEAAHXZ
    virtual int SupportsOverlays();
};
