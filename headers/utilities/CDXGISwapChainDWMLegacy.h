#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 34 member(s).
class CDXGISwapChainDWMLegacy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDirectFlipSupport@CDXGISwapChainDWMLegacy@@UEAAJIPEAUIDXGIResource@@PEAH@Z
    virtual long CheckDirectFlipSupport(unsigned int, IDXGIResource *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDwmVidPnOwnership@CDXGISwapChainDWMLegacy@@UEAAJPEAH@Z
    virtual long CheckDwmVidPnOwnership(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CDXGISwapChainDWMLegacy@@UEAAJIPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEAH1@Z
    virtual long CheckMultiplaneOverlaySupport(unsigned int, DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CDXGISwapChainDWMLegacy@@UEAAJIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructSwapChain@CDXGISwapChainDWMLegacy@@QEAAXAEBUTConstructorArgs@CDXGISwapChain@@@Z
    void ConstructSwapChain(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBufferImplicitRotationCount@CDXGISwapChainDWMLegacy@@UEAAIXZ
    virtual unsigned int GetBackBufferImplicitRotationCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CDXGISwapChainDWMLegacy@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetBuffer(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurface@CDXGISwapChainDWMLegacy@@UEAAJPEAPEAX@Z
    virtual long GetCompositionSurface(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingOutput@CDXGISwapChainDWMLegacy@@UEAAJPEAPEAUIDXGIOutput@@@Z
    virtual long GetContainingOutput(IDXGIOutput * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetCurrentBackBufferIndex@CDXGISwapChainDWMLegacy@@UEAAIXZ
    virtual unsigned int GetCurrentBackBufferIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDXGISwapChainDWMLegacy@@UEAAJPEAUDXGI_SWAP_CHAIN_DESC@@@Z
    virtual long GetDesc(DXGI_SWAP_CHAIN_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CDXGISwapChainDWMLegacy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDevice(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatistics@CDXGISwapChainDWMLegacy@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetFrameStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsDWM@CDXGISwapChainDWMLegacy@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z
    virtual long GetFrameStatisticsDWM(DXGI_FRAME_STATISTICS_DWM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrontBufferRenderingCapability@CDXGISwapChainDWMLegacy@@UEAA?AW4DXGI_FRONT_BUFFER_RENDERING_CAPABILITY@@XZ
    virtual int GetFrontBufferRenderingCapability();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareProtection@CDXGISwapChainDWMLegacy@@UEAAJPEAH@Z
    virtual long GetHardwareProtection(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPresentCount@CDXGISwapChainDWMLegacy@@UEAAJPEAI@Z
    virtual long GetLastPresentCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalSurfaceHandle@CDXGISwapChainDWMLegacy@@UEAAJPEA_K@Z
    virtual long GetLogicalSurfaceHandle(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CDXGISwapChainDWMLegacy@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    virtual long GetMultiplaneOverlayCaps(DXGI_MULTIPLANE_OVERLAY_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDXGISwapChainDWMLegacy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CDXGISwapChainDWMLegacy@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDXGISwapChainDWMLegacy@@UEAAJII@Z
    virtual long Present(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentDWM@CDXGISwapChainDWMLegacy@@UEAAJIIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z
    virtual long PresentDWM(unsigned int, unsigned int, unsigned int, tagRECT const *, unsigned int, DXGI_SCROLL_RECT const *, IDXGIResource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlay@CDXGISwapChainDWMLegacy@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z
    virtual long PresentMultiplaneOverlay(unsigned int, unsigned int, int, void const *, unsigned int, _DXGI_PRESENT_MULTIPLANE_OVERLAY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBuffers@CDXGISwapChainDWMLegacy@@UEAAJIIIW4DXGI_FORMAT@@I@Z
    virtual long ResizeBuffers(unsigned int, unsigned int, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeTarget@CDXGISwapChainDWMLegacy@@UEAAJPEBUDXGI_MODE_DESC@@@Z
    virtual long ResizeTarget(DXGI_MODE_DESC const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrontBufferRenderingMode@CDXGISwapChainDWMLegacy@@UEAAJH@Z
    virtual long SetFrontBufferRenderingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareProtection@CDXGISwapChainDWMLegacy@@UEAAJH@Z
    virtual long SetHardwareProtection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLatencyHint@CDXGISwapChainDWMLegacy@@UEAAJW4DXGI_LATENCY_HINT@@@Z
    virtual long SetLatencyHint(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaneFlipAwaySignals@CDXGISwapChainDWMLegacy@@UEAAJIPEBU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@@Z
    virtual long SetPlaneFlipAwaySignals(unsigned int, _DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CDXGISwapChainDWMLegacy@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CDXGISwapChainDWMLegacy@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateFrameDuration@CDXGISwapChainDWMLegacy@@UEAAJII@Z
    virtual long SetPrivateFrameDuration(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapBuffers@CDXGISwapChainDWMLegacy@@UEAAJII@Z
    virtual long SwapBuffers(unsigned int, unsigned int);
};
