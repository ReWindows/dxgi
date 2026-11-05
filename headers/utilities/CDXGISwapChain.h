#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 277 member(s).
class CDXGISwapChain {
public:
    class CCreateFullscreenSentinel;
    class CPrepWin32Sentinel;
    class CrossAdapterFence;
    class EffectsInfo;
    class HybridInfo;
    class PlaneFlipAwaySignal;
    class ProxyFlipInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBuffer@CDXGISwapChain@@UEAAJPEAUIDXGIResource@@I@Z
    virtual long AcquireBuffer(IDXGIResource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BltRegion@CDXGISwapChain@@QEAAXPEAUIDXGIResource@@0PEBUSUBRESOURCE_BLT_MAP@@PEAUHRGN__@@PEBUtagPOINT@@@Z
    void BltRegion(IDXGIResource *, IDXGIResource *, SUBRESOURCE_BLT_MAP const *, HRGN__*, tagPOINT const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGISwapChain@@QEAA@AEBUTConstructorArgs@0@PEAUILockOwner@@@Z
    CDXGISwapChain(WindissectOpaque const &, ILockOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckColorSpaceSupport@CDXGISwapChain@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@PEAI@Z
    virtual long CheckColorSpaceSupport(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDirectFlipSupport@CDXGISwapChain@@UEAAJIPEAUIDXGIResource@@PEAH@Z
    virtual long CheckDirectFlipSupport(unsigned int, IDXGIResource *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDwmVidPnOwnership@CDXGISwapChain@@UEAAJPEAH@Z
    virtual long CheckDwmVidPnOwnership(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFlipRedirected@CDXGISwapChain@@QEAAXXZ
    void CheckFlipRedirected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHybridCrossAdapterScanOutSupported@CDXGISwapChain@@QEAAXAEBUBACK_BUFFER_DESC@@@Z
    void CheckHybridCrossAdapterScanOutSupported(BACK_BUFFER_DESC const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMonitorPowerAndVidPnOwnership@CDXGISwapChain@@QEAAJXZ
    long CheckMonitorPowerAndVidPnOwnership();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CDXGISwapChain@@UEAAJIPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEAH1@Z
    virtual long CheckMultiplaneOverlaySupport(unsigned int, DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupportInternal@CDXGISwapChain@@QEAAJPEAUIDXGIDeviceInternal3@@IPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEAH22@Z
    long CheckMultiplaneOverlaySupportInternal(IDXGIDeviceInternal3*, unsigned int, DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO const *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CDXGISwapChain@@UEAAJIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComposePartialPresentation@CDXGISwapChain@@QEAAJAEAU_D3DKMT_DIRTYREGIONS@@KAEAIIPEBUtagRECT@@PEBUDXGI_SCROLL_RECT@@@Z
    long ComposePartialPresentation(_D3DKMT_DIRTYREGIONS &, unsigned long, unsigned int &, unsigned int, tagRECT const *, DXGI_SCROLL_RECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToKMT@CDXGISwapChain@@SAXPEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z
    static void ConvertToKMT(DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES const *, _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFocusProxyWindow@CDXGISwapChain@@QEAAXAEBUtagRECT@@@Z
    void CreateFocusProxyWindow(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceInternalExtended@CDXGISwapChain@@QEAAJPEAUIDXGISwapChainInternal@@PEAUIUseCounted2@@PEBUDXGI_SURFACE_DESC@@IIIIPEAXPEBIPEAPEAUIDXGIResource@@_N6@Z
    long CreateSurfaceInternalExtended(IDXGISwapChainInternal *, IUseCounted2*, DXGI_SURFACE_DESC const *, unsigned int, unsigned int, unsigned int, unsigned int, void *, unsigned int const *, IDXGIResource * *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTrackedFenceExtended@CDXGISwapChain@@QEAAJ_KPEBU_SECURITY_ATTRIBUTES@@KIPEAPEAUIDXGIFenceInternal@@PEAPEAX@Z
    long CreateTrackedFenceExtended(uint64_t, _SECURITY_ATTRIBUTES const *, unsigned long, unsigned int, IDXGIFenceInternal * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DescToInternalDesc@CDXGISwapChain@@SA?AUDXGI_SWAP_CHAIN_DESC_INTERNAL@@W4ESwapChainType@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEBUDXGI_SWAP_CHAIN_FULLSCREEN_DESC@@@Z
    static DXGI_SWAP_CHAIN_DESC_INTERNAL DescToInternalDesc(int, DXGI_SWAP_CHAIN_DESC1const *, DXGI_SWAP_CHAIN_FULLSCREEN_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFocusProxyWindow@CDXGISwapChain@@QEAAXXZ
    void DestroyFocusProxyWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWrite@CDXGISwapChain@@QEAAXXZ
    void ETWWrite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmulateDirtyRectPresentVistaBlt@CDXGISwapChain@@QEAAJPEBUtagRECT@@IPEAU2@PEBUSUBRESOURCE_BLT_MAP@@_K@Z
    long EmulateDirtyRectPresentVistaBlt(tagRECT const *, unsigned int, tagRECT *, SUBRESOURCE_BLT_MAP const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmulateScalingNone@CDXGISwapChain@@QEAAXAEAU_D3DKMT_PRESENT@@AEAU_D3DKMT_DIRTYREGIONS@@AEBUtagRECT@@@Z
    void EmulateScalingNone(_D3DKMT_PRESENT &, _D3DKMT_DIRTYREGIONS &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmulateXBOXBehavior@CDXGISwapChain@@UEAAXH@Z
    virtual void EmulateXBOXBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChildDeviceInternal@CDXGISwapChain@@QEAAJPEAUIDXGIAdapter@@W4DXGI_INTERNAL_CHILD_DEVICE_TYPE@@@Z
    long EnsureChildDeviceInternal(IDXGIAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDXGISwapChain@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackBufferImplicitRotationCount@CDXGISwapChain@@UEAAIXZ
    virtual unsigned int GetBackBufferImplicitRotationCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundColor@CDXGISwapChain@@UEAAJPEAU_D3DCOLORVALUE@@@Z
    virtual long GetBackgroundColor(_D3DCOLORVALUE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CDXGISwapChain@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetBuffer(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferLayoutInfoTest@CDXGISwapChain@@UEAAXPEAUDXGI_BUFFER_LAYOUT_INFO_TEST@@@Z
    virtual void GetBufferLayoutInfoTest(DXGI_BUFFER_LAYOUT_INFO_TEST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCASOTelemetry@CDXGISwapChain@@QEBAXPEAW4HYBRID_DFLIP_MODE@@PEAHPEAIPEAW4CASO_FALLBACK_REASON@@@Z
    void GetCASOTelemetry(int *, int *, unsigned int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSpace@CDXGISwapChain@@UEAA?AW4DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS@@XZ
    virtual int GetColorSpace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorSpace1@CDXGISwapChain@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ
    virtual int GetColorSpace1();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionSurface@CDXGISwapChain@@UEAAJPEAPEAX@Z
    virtual long GetCompositionSurface(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingOutput@CDXGISwapChain@@UEAAJPEAPEAUIDXGIOutput@@@Z
    virtual long GetContainingOutput(IDXGIOutput * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingOutputImpl@CDXGISwapChain@@QEAAJPEAPEAUIDXGIOutput@@_N@Z
    long GetContainingOutputImpl(IDXGIOutput * *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindow@CDXGISwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCoreWindow(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBackBufferIndex@CDXGISwapChain@@UEAAIXZ
    virtual unsigned int GetCurrentBackBufferIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCommandQueue@CDXGISwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetCurrentCommandQueue(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDFlipOutput@CDXGISwapChain@@UEAAPEAUIDXGIOutput@@XZ
    virtual IDXGIOutput * GetDFlipOutput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDXGISwapChain@@UEAAJPEAUDXGI_SWAP_CHAIN_DESC@@@Z
    virtual long GetDesc(DXGI_SWAP_CHAIN_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CDXGISwapChain@@UEAAJPEAUDXGI_SWAP_CHAIN_DESC1@@@Z
    virtual long GetDesc1(DXGI_SWAP_CHAIN_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestSize@CDXGISwapChain@@UEAAJPEAI0@Z
    virtual long GetDestSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CDXGISwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDevice(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceFlipExSemaphoreHandle@CDXGISwapChain@@QEAAPEAXXZ
    void * GetDeviceFlipExSemaphoreHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameLatencyWaitableObject@CDXGISwapChain@@UEAAPEAXXZ
    virtual void * GetFrameLatencyWaitableObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatistics@CDXGISwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetFrameStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsCore@CDXGISwapChain@@QEAAJPEAUDXGI_FRAME_STATISTICS@@PEAUDXGI_FRAME_STATISTICS_MEDIA@@PEAUDXGI_FRAME_STATISTICS_PARTNER@@PEAUDXGI_FRAME_STATISTICS_TEST@@W4FrameStatOptions@1@@Z
    long GetFrameStatisticsCore(DXGI_FRAME_STATISTICS *, DXGI_FRAME_STATISTICS_MEDIA *, DXGI_FRAME_STATISTICS_PARTNER *, DXGI_FRAME_STATISTICS_TEST *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsDWM@CDXGISwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z
    virtual long GetFrameStatisticsDWM(DXGI_FRAME_STATISTICS_DWM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsMedia@CDXGISwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_MEDIA@@@Z
    virtual long GetFrameStatisticsMedia(DXGI_FRAME_STATISTICS_MEDIA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsPartner@CDXGISwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_PARTNER@@@Z
    virtual long GetFrameStatisticsPartner(DXGI_FRAME_STATISTICS_PARTNER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsTest@CDXGISwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_TEST@@@Z
    virtual long GetFrameStatisticsTest(DXGI_FRAME_STATISTICS_TEST *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrontBufferRenderingCapability@CDXGISwapChain@@UEAA?AW4DXGI_FRONT_BUFFER_RENDERING_CAPABILITY@@XZ
    virtual int GetFrontBufferRenderingCapability();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullscreenDesc@CDXGISwapChain@@UEAAJPEAUDXGI_SWAP_CHAIN_FULLSCREEN_DESC@@@Z
    virtual long GetFullscreenDesc(DXGI_SWAP_CHAIN_FULLSCREEN_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullscreenState@CDXGISwapChain@@UEAAJPEAHPEAPEAUIDXGIOutput@@@Z
    virtual long GetFullscreenState(int *, IDXGIOutput * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullscreenStateNonInvasive@CDXGISwapChain@@QEAAXPEAH@Z
    void GetFullscreenStateNonInvasive(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareProtection@CDXGISwapChain@@UEAAJPEAH@Z
    virtual long GetHardwareProtection(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@CDXGISwapChain@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetHwnd(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastPresentCount@CDXGISwapChain@@UEAAJPEAI@Z
    virtual long GetLastPresentCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogicalSurfaceHandle@CDXGISwapChain@@UEAAJPEA_K@Z
    virtual long GetLogicalSurfaceHandle(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMatrixTransform@CDXGISwapChain@@UEAAJPEAUDXGI_MATRIX_3X2_F@@@Z
    virtual long GetMatrixTransform(DXGI_MATRIX_3X2_F *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumFrameLatency@CDXGISwapChain@@UEAAJPEAI@Z
    virtual long GetMaximumFrameLatency(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CDXGISwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    virtual long GetMultiplaneOverlayCaps(DXGI_MULTIPLANE_OVERLAY_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputWindowForBind@CDXGISwapChain@@QEBAPEAUHWND__@@XZ
    HWND__* GetOutputWindowForBind() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDXGISwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentationEffectsInfo@CDXGISwapChain@@UEAAXPEAUDXGI_PRESENT_EFFECTS_INFO@@@Z
    virtual void GetPresentationEffectsInfo(DXGI_PRESENT_EFFECTS_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CDXGISwapChain@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRequiredIndirectDisplayUsage@CDXGISwapChain@@QEBAIXZ
    unsigned int GetRequiredIndirectDisplayUsage() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceParent@CDXGISwapChain@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetResourceParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestrictToOutput@CDXGISwapChain@@UEAAJPEAPEAUIDXGIOutput@@@Z
    virtual long GetRestrictToOutput(IDXGIOutput * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@CDXGISwapChain@@UEAAJPEAW4DXGI_MODE_ROTATION@@@Z
    virtual long GetRotation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceRect@CDXGISwapChain@@UEAAJPEAUtagRECT@@@Z
    virtual long GetSourceRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceSize@CDXGISwapChain@@UEAAJPEAI0@Z
    virtual long GetSourceSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSysConfigTelemetry@CDXGISwapChain@@QEAA?AUSysConfigTelemetryInfo@@XZ
    SysConfigTelemetryInfo GetSysConfigTelemetry();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetRect@CDXGISwapChain@@UEAAJPEAUtagRECT@@@Z
    virtual long GetTargetRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasProxyFrontBufferSurface@CDXGISwapChain@@UEAAHXZ
    virtual int HasProxyFrontBufferSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HybridDirectFlipMode@CDXGISwapChain@@QEBA?AW4HYBRID_DFLIP_MODE@@XZ
    int HybridDirectFlipMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementPresentCount@CDXGISwapChain@@QEAAXXZ
    void IncrementPresentCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSwapChainBuffers@CDXGISwapChain@@QEAAXAEBUTConstructorArgs@1@@Z
    void InitializeSwapChainBuffers(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSwapChainCompositionState@CDXGISwapChain@@QEAAXXZ
    void InitializeSwapChainCompositionState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSwapChainCreationStateFullScreen@CDXGISwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC_INTERNAL@@@Z
    long InitializeSwapChainCreationStateFullScreen(DXGI_SWAP_CHAIN_DESC_INTERNAL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSwapChainDeviceState@CDXGISwapChain@@QEAAXXZ
    void InitializeSwapChainDeviceState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSwapChainState@CDXGISwapChain@@QEAAXAEBUTConstructorArgs@1@@Z
    void InitializeSwapChainState(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSwapChainWindowState@CDXGISwapChain@@QEAAXXZ
    void InitializeSwapChainWindowState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoSREligible@CDXGISwapChain@@QEAA_NXZ
    bool IsAutoSREligible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferUpgradeEligible@CDXGISwapChain@@QEBA_N_N0@Z
    bool IsBufferUpgradeEligible(bool, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferUpgradeEnabled@CDXGISwapChain@@QEBA_NXZ
    bool IsBufferUpgradeEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorSpaceSupported@CDXGISwapChain@@QEAA_NW4DXGI_COLOR_SPACE_TYPE@@W4DXGI_FORMAT@@_N@Z
    bool IsColorSpaceSupported(int, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositionBinding@CDXGISwapChain@@QEBA_NXZ
    bool IsCompositionBinding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCrossAdapterScanOutEligible@CDXGISwapChain@@QEBA_NPEBUSAdapterDesc@@@Z
    bool IsCrossAdapterScanOutEligible(SAdapterDesc const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDwmVailSwapChain@CDXGISwapChain@@QEBA_NXZ
    bool IsDwmVailSwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHDREnabled@CDXGISwapChain@@QEAA_NXZ
    bool IsHDREnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHwndBinding@CDXGISwapChain@@QEBA_NXZ
    bool IsHwndBinding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHwndUnderlying@CDXGISwapChain@@QEBA_NXZ
    bool IsHwndUnderlying() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndirectDisplay@CDXGISwapChain@@QEBA_NXZ
    bool IsIndirectDisplay() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaximizedWindowedFullscreenEnabled@CDXGISwapChain@@QEBA_NXZ
    bool IsMaximizedWindowedFullscreenEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaximizedWindowedSwapEffectTransitionEnabled@CDXGISwapChain@@QEBA_NXZ
    bool IsMaximizedWindowedSwapEffectTransitionEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaximizedWindowedUpgradesEnabled@CDXGISwapChain@@QEBA_NXZ
    bool IsMaximizedWindowedUpgradesEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutputVariableRefreshRate@CDXGISwapChain@@QEAA_NXZ
    bool IsOutputVariableRefreshRate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRotationExplicit@CDXGISwapChain@@QEBA_NXZ
    bool IsRotationExplicit() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemporaryMonoSupported@CDXGISwapChain@@UEAAHXZ
    virtual int IsTemporaryMonoSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTemporaryMonoSupportedImpl@CDXGISwapChain@@QEAAHXZ
    int IsTemporaryMonoSupportedImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidSwapChainColorSpace@CDXGISwapChain@@SA_NW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool IsValidSwapChainColorSpace(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidSwapChainColorSpace@CDXGISwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z
    static bool IsValidSwapChainColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWaitForQueuedPresentPending@CDXGISwapChain@@QEAA_NXZ
    bool IsWaitForQueuedPresentPending();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowedInternal@CDXGISwapChain@@QEBA_NXZ
    bool IsWindowedInternal() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsYUVSwapChain@CDXGISwapChain@@QEBA_NXZ
    bool IsYUVSwapChain() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSwapChainCreationEvent@CDXGISwapChain@@QEAAXXZ
    void LogSwapChainCreationEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWindowAssociation@CDXGISwapChain@@QEAAXI@Z
    void MakeWindowAssociation(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrintScreen@CDXGISwapChain@@QEAAH_K@Z
    int OnPrintScreen(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsChanged@CDXGISwapChain@@QEAAXPEAUDX_DATABASE_SETTING_CHANGE_PAYLOAD@@_N@Z
    void OnSettingsChanged(DX_DATABASE_SETTING_CHANGE_PAYLOAD *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareResizeBuffers@CDXGISwapChain@@QEAAXIIIW4DXGI_FORMAT@@@Z
    void PrepareResizeBuffers(unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareWindowedBltCrossAdapterSurface@CDXGISwapChain@@QEAAJXZ
    long PrepareWindowedBltCrossAdapterSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareWindowedBltPresent@CDXGISwapChain@@QEAA?AW4PresentPath@1@_N0IAEAV?$DXGITrack@J@@AEA_K@Z
    int PrepareWindowedBltPresent(bool, bool, unsigned int, WindissectOpaque &, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CDXGISwapChain@@UEAAJII@Z
    virtual long Present(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentBuffer@CDXGISwapChain@@UEAAJIII@Z
    virtual long PresentBuffer(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentDWM@CDXGISwapChain@@UEAAJIIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z
    virtual long PresentDWM(unsigned int, unsigned int, unsigned int, tagRECT const *, unsigned int, DXGI_SCROLL_RECT const *, IDXGIResource *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentImpl@CDXGISwapChain@@QEAAJPEBU?$SPresentArgsCore@UCDXGISwapChainWrapper@@@@IPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@@Z
    long PresentImpl(WindissectOpaque const *, unsigned int, tagRECT const *, unsigned int, DXGI_SCROLL_RECT const *, IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentImplCore@CDXGISwapChain@@QEAAJPEBU?$SPresentArgsCore@UCDXGISwapChainWrapper@@@@IPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@AEAUPresentResultActions@1@@Z
    long PresentImplCore(WindissectOpaque const *, unsigned int, tagRECT const *, unsigned int, DXGI_SCROLL_RECT const *, IDXGIResource *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlay@CDXGISwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z
    virtual long PresentMultiplaneOverlay(unsigned int, unsigned int, int, void const *, unsigned int, _DXGI_PRESENT_MULTIPLANE_OVERLAY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentMultiplaneOverlayInternal@CDXGISwapChain@@QEAAJPEBU?$SPresentArgsCore@UCDXGISwapChainWrapper@@@@W4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z
    long PresentMultiplaneOverlayInternal(WindissectOpaque const *, int, void const *, unsigned int, _DXGI_PRESENT_MULTIPLANE_OVERLAY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIDecode@CDXGISwapChain@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIDecode(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIMedia@CDXGISwapChain@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIMedia(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QISynchronizedSwapchain@CDXGISwapChain@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QISynchronizedSwapchain(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIXAML@CDXGISwapChain@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIXAML(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSwapChainInGlobalModule@CDXGISwapChain@@QEAAXXZ
    void RegisterSwapChainInGlobalModule();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBuffers@CDXGISwapChain@@UEAAJIIIW4DXGI_FORMAT@@I@Z
    virtual long ResizeBuffers(unsigned int, unsigned int, unsigned int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeBuffers1@CDXGISwapChain@@UEAAJIIIW4DXGI_FORMAT@@IPEBIPEBQEAUIUnknown@@@Z
    virtual long ResizeBuffers1(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int const *, IUnknown * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeTarget@CDXGISwapChain@@UEAAJPEBUDXGI_MODE_DESC@@@Z
    virtual long ResizeTarget(DXGI_MODE_DESC const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotateBackBufferIdentities@CDXGISwapChain@@QEAAJPEBU?$SPresentArgsCore@UCDXGISwapChainWrapper@@@@_N@Z
    long RotateBackBufferIdentities(WindissectOpaque const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScenarioEnterOrLeaveFullscreen@CDXGISwapChain@@QEAAJPEAVCDXGIOutput@@_N@Z
    long ScenarioEnterOrLeaveFullscreen(CDXGIOutput *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CDXGISwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z
    virtual void SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackgroundColor@CDXGISwapChain@@UEAAJPEBU_D3DCOLORVALUE@@@Z
    virtual long SetBackgroundColor(_D3DCOLORVALUE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace@CDXGISwapChain@@UEAAJW4DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS@@@Z
    virtual long SetColorSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpace1@CDXGISwapChain@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z
    virtual long SetColorSpace1(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorSpaceInternal@CDXGISwapChain@@QEAAJW4DXGI_COLOR_SPACE_TYPE@@_N@Z
    long SetColorSpaceInternal(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDestSize@CDXGISwapChain@@UEAAJII@Z
    virtual long SetDestSize(unsigned int, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetFrontBufferRenderingMode@CDXGISwapChain@@UEAAJH@Z
    virtual long SetFrontBufferRenderingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFullscreenState@CDXGISwapChain@@UEAAJHPEAUIDXGIOutput@@@Z
    virtual long SetFullscreenState(int, IDXGIOutput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHDRMetaData@CDXGISwapChain@@UEAAJW4DXGI_HDR_METADATA_TYPE@@IPEAX@Z
    virtual long SetHDRMetaData(int, unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHardwareProtection@CDXGISwapChain@@UEAAJH@Z
    virtual long SetHardwareProtection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLatencyHint@CDXGISwapChain@@UEAAJW4DXGI_LATENCY_HINT@@@Z
    virtual long SetLatencyHint(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutSyncObject@CDXGISwapChain@@UEAAJPEAX@Z
    virtual long SetLayoutSyncObject(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrixTransform@CDXGISwapChain@@UEAAJPEBUDXGI_MATRIX_3X2_F@@@Z
    virtual long SetMatrixTransform(DXGI_MATRIX_3X2_F const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaximumFrameLatency@CDXGISwapChain@@UEAAJI@Z
    virtual long SetMaximumFrameLatency(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPlaneFlipAwaySignals@CDXGISwapChain@@UEAAJIPEBU_DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL@@@Z
    virtual long SetPlaneFlipAwaySignals(unsigned int, _DXGI_PRESENT_PLANE_FLIP_AWAY_SIGNAL const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentDuration@CDXGISwapChain@@UEAAJI@Z
    virtual long SetPresentDuration(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CDXGISwapChain@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CDXGISwapChain@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateFrameDuration@CDXGISwapChain@@UEAAJII@Z
    virtual long SetPrivateFrameDuration(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotation@CDXGISwapChain@@UEAAJW4DXGI_MODE_ROTATION@@@Z
    virtual long SetRotation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceRect@CDXGISwapChain@@UEAAJPEBUtagRECT@@@Z
    virtual long SetSourceRect(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceSize@CDXGISwapChain@@UEAAJII@Z
    virtual long SetSourceSize(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetRect@CDXGISwapChain@@UEAAJPEBUtagRECT@@@Z
    virtual long SetTargetRect(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapBuffers@CDXGISwapChain@@UEAAJII@Z
    virtual long SwapBuffers(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformDirtyRegions@CDXGISwapChain@@QEAAXAEAU_D3DKMT_DIRTYREGIONS@@PEBUtagRECT@@@Z
    void TransformDirtyRegions(_D3DKMT_DIRTYREGIONS &, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionBackBuffer0ForProtection@CDXGISwapChain@@QEAAJXZ
    long TransitionBackBuffer0ForProtection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCBreakCyclicReferences@CDXGISwapChain@@UEAAXXZ
    virtual void UCBreakCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCEstablishCyclicReferences@CDXGISwapChain@@UEAAXXZ
    virtual void UCEstablishCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCQueryInterface@CDXGISwapChain@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long UCQueryInterface(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbindFromDwm@CDXGISwapChain@@QEAAX_N@Z
    void UnbindFromDwm(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEmulatedFrameStatistics@CDXGISwapChain@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    long UpdateEmulatedFrameStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePresent@CDXGISwapChain@@QEAAJPEBU?$SPresentArgsCore@UCDXGISwapChainWrapper@@@@IPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@AEBUDXGI_INTERNAL_CONTENT_PROTECTION@@PEAUIDXGIResource@@AEA_N@Z
    long ValidatePresent(WindissectOpaque const *, unsigned int, tagRECT const *, unsigned int, DXGI_SCROLL_RECT const *, DXGI_INTERNAL_CONTENT_PROTECTION const &, IDXGIResource *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateResizeBuffers@CDXGISwapChain@@QEBAJW4EResizeEntryPoint@@IIIW4DXGI_FORMAT@@IPEBIPEBQEAUIUnknown@@@Z
    long ValidateResizeBuffers(int, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int const *, IUnknown * const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFenceOnCPU@CDXGISwapChain@@QEBAJPEAUIDXGIFenceInternal@@_K@Z
    long WaitForFenceOnCPU(IDXGIFenceInternal *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntries@CDXGISwapChain@@SAPEBU_ATL_INTMAP_ENTRY@ATL@@XZ
    static WindissectOpaque const * _GetEntries();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGISwapChain@@QEAA@XZ
    ~CDXGISwapChain();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUseBuffer@CDXGISwapChain@@KAXPEAUIUnknown@@@Z
    static void AddUseBuffer(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutomaticUnsychronizedFlips@CDXGISwapChain@@IEBA_NXZ
    bool AutomaticUnsychronizedFlips() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToDwm@CDXGISwapChain@@IEAAJXZ
    long BindToDwm();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildBackBufferPrimaryDescs@CDXGISwapChain@@KAXPEAVCDXGIOutput@@PEAUIDXGIResource@@AEBUDXGI_MODE_DESC1@@IAEAVCDDI_PRIMARY_DESC@@3@Z
    static void BuildBackBufferPrimaryDescs(CDXGIOutput *, IDXGIResource *, DXGI_MODE_DESC1const &, unsigned int, CDDI_PRIMARY_DESC &, CDDI_PRIMARY_DESC &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseAndAddRefTargetOutput@CDXGISwapChain@@IEAAXPEAVCDXGIOutput@@PEAPEAV2@@Z
    void ChooseAndAddRefTargetOutput(CDXGIOutput *, CDXGIOutput * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertInvalidPresentCountToZero@CDXGISwapChain@@IEBAII@Z
    unsigned int ConvertInvalidPresentCountToZero(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAdditionalBackBuffer@CDXGISwapChain@@IEAAXPEBI@Z
    void CreateAdditionalBackBuffer(unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBuffers@CDXGISwapChain@@IEAAXPEAVCDXGIOutput@@PEBIPEBQEAUIUnknown@@@Z
    void CreateBuffers(CDXGIOutput *, unsigned int const *, IUnknown * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionSurface@CDXGISwapChain@@IEAAJPEAPEAX@Z
    long CreateCompositionSurface(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDriverCompatiblePrimary@CDXGISwapChain@@IEAAPEAUIDXGIResource@@PEAVCDXGIOutput@@PEBUCDXGIEnumeratedMode@@IIAEAUBACK_BUFFER_DESC@@AEAVCDDI_PRIMARY_DESC@@PEBI@Z
    IDXGIResource * CreateDriverCompatiblePrimary(CDXGIOutput *, CDXGIEnumeratedMode const *, unsigned int, unsigned int, BACK_BUFFER_DESC &, CDDI_PRIMARY_DESC &, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFullscreenObjects@CDXGISwapChain@@IEAAXPEAVCDXGIOutput@@PEBUCDXGIEnumeratedMode@@IIPEBI@Z
    void CreateFullscreenObjects(CDXGIOutput *, CDXGIEnumeratedMode const *, unsigned int, unsigned int, unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFullscreenProxy@CDXGISwapChain@@IEAAXPEBI@Z
    void CreateFullscreenProxy(unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxiesAndActivateFlip@CDXGISwapChain@@IEAAXPEBI_N1@Z
    void CreateProxiesAndActivateFlip(unsigned int const *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowedIntermediateProxy@CDXGISwapChain@@IEAAXXZ
    void CreateWindowedIntermediateProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowedProxy@CDXGISwapChain@@IEAAXPEBI@Z
    void CreateWindowedProxy(unsigned int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowedProxyWorker@CDXGISwapChain@@IEAAXPEBIIAEBUBACK_BUFFER_DESC@@@Z
    void CreateWindowedProxyWorker(unsigned int const *, unsigned int, BACK_BUFFER_DESC const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyBackBuffers@CDXGISwapChain@@IEAAXXZ
    void DestroyBackBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFullscreenProxy@CDXGISwapChain@@IEAAXXZ
    void DestroyFullscreenProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyOwnedBuffer@CDXGISwapChain@@KAXPEAUIUnknown@@@Z
    static void DestroyOwnedBuffer(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPrimarySurface@CDXGISwapChain@@IEAAXXZ
    void DestroyPrimarySurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowedProxy@CDXGISwapChain@@IEAAXXZ
    void DestroyWindowedProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceInternalPresent@CDXGISwapChain@@IEAAJPEBUDXGI_PRESENTSURFACE@@IPEAUIDXGIResource@@PEAXII@Z
    long DeviceInternalPresent(DXGI_PRESENTSURFACE const *, unsigned int, IDXGIResource *, void *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExplicitSynch@CDXGISwapChain@@IEAAXI@Z
    void ExplicitSynch(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlipPresentHandleTransform@CDXGISwapChain@@IEAAXAEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z
    void FlipPresentHandleTransform(_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlipPresentToDWM@CDXGISwapChain@@IEAAJPEBU?$SPresentArgsCore@UCDXGISwapChainWrapper@@@@IIAEAIIPEBUtagRECT@@PEBUDXGI_SCROLL_RECT@@AEBUDXGI_INTERNAL_CONTENT_PROTECTION@@@Z
    long FlipPresentToDWM(WindissectOpaque const *, unsigned int, unsigned int, unsigned int &, unsigned int, tagRECT const *, DXGI_SCROLL_RECT const *, DXGI_INTERNAL_CONTENT_PROTECTION const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentProxySurface@CDXGISwapChain@@IEAAPEAUIDXGIResource@@XZ
    IDXGIResource * GetCurrentProxySurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredOwnership@CDXGISwapChain@@IEAA?AW4Ownership@CDXGIOutput@@XZ
    int GetDesiredOwnership();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectFlipAddRefedOutput@CDXGISwapChain@@IEAA?AV?$CComPtr@UIDXGIOutput@@@ATL@@XZ
    WindissectOpaque GetDirectFlipAddRefedOutput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRect@CDXGISwapChain@@IEBAHPEAUHWND__@@PEAUtagRECT@@@Z
    int GetMonitorRect(HWND__*, tagRECT *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayPriority@CDXGISwapChain@@IEAAXPEAH0@Z
    void GetMultiplaneOverlayPriority(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InferBackbufferDimensions@CDXGISwapChain@@IEAAXPEAUHWND__@@PEAI1_N@Z
    void InferBackbufferDimensions(HWND__*, unsigned int *, unsigned int *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDirectFlip@CDXGISwapChain@@IEAAXXZ
    void InitDirectFlip();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullscreenDDAAllowed@CDXGISwapChain@@IEAA_NXZ
    bool IsFullscreenDDAAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullscreenStyle@CDXGISwapChain@@IEAA_NJJ@Z
    bool IsFullscreenStyle(long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRedirected@CDXGISwapChain@@IEBA_NXZ
    bool IsRedirected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVariableRefreshRateOverrideEligible@CDXGISwapChain@@IEAA_NI@Z
    bool IsVariableRefreshRateOverrideEligible(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReCreateSwapchainBufferForProtection@CDXGISwapChain@@IEAAJPEAUIDXGIResource@@@Z
    long ReCreateSwapchainBufferForProtection(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateWindowedBuffers@CDXGISwapChain@@IEAAXXZ
    void RecreateWindowedBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRedirectionSurface@CDXGISwapChain@@IEAAXXZ
    void ReleaseRedirectionSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseUseBuffer@CDXGISwapChain@@KAXPEAUIUnknown@@@Z
    static void ReleaseUseBuffer(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeWindow@CDXGISwapChain@@IEAAXPEAVCDXGIOutput@@J@Z
    void ResizeWindow(CDXGIOutput *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScenarioResizeBuffers@CDXGISwapChain@@IEAAJIPEBIPEBQEAUIUnknown@@@Z
    long ScenarioResizeBuffers(unsigned int, unsigned int const *, IUnknown * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScenarioResizeTarget@CDXGISwapChain@@IEAAJPEBUDXGI_MODE_DESC1@@@Z
    long ScenarioResizeTarget(DXGI_MODE_DESC1const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendStatusTelemetry@CDXGISwapChain@@IEBAX_N@Z
    void SendStatusTelemetry(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferUsage@CDXGISwapChain@@IEAAXW4DXGI_SWAP_EFFECT@@PEBVCDDI_PRIMARY_DESC@@_NAEAUBufferUsageInfo@1@@Z
    void SetBufferUsage(int, CDDI_PRIMARY_DESC const *, bool, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDecodeBuffer@CDXGISwapChain@@IEAAXPEAUIDXGIResource@@@Z
    void SetDecodeBuffer(IDXGIResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviousBackBufferInitialized@CDXGISwapChain@@IEAAXI@Z
    void SetPreviousBackBufferInitialized(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeCurrentDisplayProperties@CDXGISwapChain@@IEAAXXZ
    void SynchronizeCurrentDisplayProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDirectScanoutEligibilityInfo@CDXGISwapChain@@IEAAXUtagRECT@@W4DXGI_MODE_ROTATION@@@Z
    void UpdateDirectScanoutEligibilityInfo(tagRECT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrintScreenHandling@CDXGISwapChain@@IEAAXXZ
    void UpdatePrintScreenHandling();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireNextIndirectBuffer@CDXGISwapChain@@AEAAJXZ
    long AcquireNextIndirectBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectsD3D12DeviceAndQueue@CDXGISwapChain@@AEAAJAEAUEffectsInfo@1@@Z
    long CreateEffectsD3D12DeviceAndQueue(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHybridFSSurfaces@CDXGISwapChain@@AEAAJIIAEAUBACK_BUFFER_DESC@@AEAVCDDI_PRIMARY_DESC@@@Z
    long CreateHybridFSSurfaces(unsigned int, unsigned int, BACK_BUFFER_DESC &, CDDI_PRIMARY_DESC &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxyFlipHelper@CDXGISwapChain@@AEAAJPEBUDXGI_SURFACE_DESC@@IIIIIPEAXPEBIPEAPEAUIDXGIResource@@_N4@Z
    long CreateProxyFlipHelper(DXGI_SURFACE_DESC const *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void *, unsigned int const *, IDXGIResource * *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableEffects@CDXGISwapChain@@AEAAXXZ
    void DisableEffects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlipHybridPrimary@CDXGISwapChain@@AEAAJPEAUIDXGIResource@@IIPEAU_D3DKMT_PRESENT@@@Z
    long FlipHybridPrimary(IDXGIResource *, unsigned int, unsigned int, _D3DKMT_PRESENT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossAdapterFenceFlags@CDXGISwapChain@@AEAAIXZ
    unsigned int GetCrossAdapterFenceFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCrossAdapterFence@CDXGISwapChain@@AEAAJAEAUCrossAdapterFence@1@@Z
    long InitCrossAdapterFence(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitEffects@CDXGISwapChain@@AEAAXXZ
    void InitEffects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDX12InterfaceSupport@CDXGISwapChain@@AEAAXXZ
    void InitializeDX12InterfaceSupport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDWMPlane@CDXGISwapChain@@AEBA_NI@Z
    bool IsDWMPlane(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndirectUsingPrimaries@CDXGISwapChain@@AEAA_NPEAUIDXGIOutput@@@Z
    bool IsIndirectUsingPrimaries(IDXGIOutput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenResourceFor11On12@CDXGISwapChain@@AEAAJPEAUIDXGIResource@@AEAU?$unique_usecntptr@UIDXGIResource@@@@@Z
    long OpenResourceFor11On12(IDXGIResource *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PowerNotificationCallback@CDXGISwapChain@@CAKPEAXK0@Z
    static unsigned long PowerNotificationCallback(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareIndirectPresent@CDXGISwapChain@@AEAAJI@Z
    long PrepareIndirectPresent(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentFullscreenFlip@CDXGISwapChain@@AEAAJPEAUIDXGIResource@@0IIPEAU_D3DKMT_PRESENT@@@Z
    long PresentFullscreenFlip(IDXGIResource *, IDXGIResource *, unsigned int, unsigned int, _D3DKMT_PRESENT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPowerNotificationCallback@CDXGISwapChain@@AEAAXXZ
    void RegisterPowerNotificationCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSettingsChangedCallback@CDXGISwapChain@@AEAAXW4DX_DATABASE_QUERY_TYPE@@@Z
    void RegisterSettingsChangedCallback(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHybridFSSurfaces@CDXGISwapChain@@AEAAXXZ
    void ReleaseHybridFSSurfaces();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLastIndirectBuffer@CDXGISwapChain@@AEAAJIPEAX@Z
    long ReleaseLastIndirectBuffer(unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectsPassthrough@CDXGISwapChain@@AEAAX_N@Z
    void SetEffectsPassthrough(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHybridCrossAdapterFlip@CDXGISwapChain@@AEAAJ_NAEBU_LUID@@@Z
    long SetHybridCrossAdapterFlip(bool, _LUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupIndirectSwapChain@CDXGISwapChain@@AEAAJHPEAVCDXGIOutput@@PEA_N@Z
    long SetupIndirectSwapChain(int, CDXGIOutput *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTerminateOnIndirectStall@CDXGISwapChain@@AEAA_NXZ
    bool ShouldTerminateOnIndirectStall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSettingsChangedCallbacks@CDXGISwapChain@@AEAAXXZ
    void UnregisterSettingsChangedCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppStatus@CDXGISwapChain@@AEAAXXZ
    void UpdateAppStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseHybridCrossAdapterDirectFlip@CDXGISwapChain@@AEBA_NXZ
    bool UseHybridCrossAdapterDirectFlip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseProxyFlip@CDXGISwapChain@@AEBA_NXZ
    bool UseProxyFlip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseProxyFlipCore@CDXGISwapChain@@AEBA_NPEBVCDDI_PRIMARY_DESC@@@Z
    bool UseProxyFlipCore(CDDI_PRIMARY_DESC const *) const;
};
