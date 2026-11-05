#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 4 member(s).
class CDXGISwapChainWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Blt@CDXGISwapChainWrapper@@QEAAXPEAUIDXGIDeviceInternal3@@PEAUIDXGIResource@@1K@Z
    void Blt(IDXGIDeviceInternal3*, IDXGIResource *, IDXGIResource *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@CDXGISwapChainWrapper@@QEAAXPEAUIDXGIResource@@0PEAUISwapChainEffect@@@Z
    void Convert(IDXGIResource *, IDXGIResource *, ISwapChainEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCrossAdapterResourceSupported@CDXGISwapChainWrapper@@QEAA_NXZ
    bool IsCrossAdapterResourceSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseHybridCrossAdapterScanOut@CDXGISwapChainWrapper@@QEAA_NXZ
    bool UseHybridCrossAdapterScanOut();
};
