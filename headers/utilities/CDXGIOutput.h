#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 85 member(s).
class CDXGIOutput {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGIOutput@@QEAA@XZ
    CDXGIOutput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckExclusiveOwnership@CDXGIOutput@@QEAAJXZ
    long CheckExclusiveOwnership();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHardwareCompositionSupport@CDXGIOutput@@UEAAJPEAI@Z
    virtual long CheckHardwareCompositionSupport(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOverlayColorSpaceSupport@CDXGIOutput@@UEAAJW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@PEAUIUnknown@@PEAI@Z
    virtual long CheckOverlayColorSpaceSupport(int, int, IUnknown *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOverlaySupport@CDXGIOutput@@UEAAJW4DXGI_FORMAT@@PEAUIUnknown@@PEAI@Z
    virtual long CheckOverlaySupport(int, IUnknown *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPowerState@CDXGIOutput@@QEAAJPEA_N@Z
    long CheckPowerState(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyAllDuplicateOutputKernelContexts@CDXGIOutput@@QEAAXXZ
    void DestroyAllDuplicateOutputKernelContexts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsKernelOverlayCaps@CDXGIOutput@@QEAA_NXZ
    bool DriverSupportsKernelOverlayCaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateOutput@CDXGIOutput@@UEAAJPEAUIUnknown@@PEAPEAUIDXGIOutputDuplication@@@Z
    virtual long DuplicateOutput(IUnknown *, IDXGIOutputDuplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateOutput1@CDXGIOutput@@UEAAJPEAUIUnknown@@IIPEBW4DXGI_FORMAT@@PEAPEAUIDXGIOutputDuplication@@@Z
    virtual long DuplicateOutput1(IUnknown *, unsigned int, unsigned int, int const *, IDXGIOutputDuplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateOutputInternal@CDXGIOutput@@QEAAJPEAUIUnknown@@IIPEBW4DXGI_FORMAT@@_NPEAPEAUIDXGIOutputDuplication@@@Z
    long DuplicateOutputInternal(IUnknown *, unsigned int, unsigned int, int const *, bool, IDXGIOutputDuplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillModeDescFromDesktop@CDXGIOutput@@QEAAXAEAVCDXGIModeDesc@@K@Z
    void FillModeDescFromDesktop(CDXGIModeDesc &, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillModeDescFromDesktopWithKernel@CDXGIOutput@@QEAAXPEAUDXGI_MODE_DESC1@@PEAW4DXGI_MODE_ROTATION@@@Z
    void FillModeDescFromDesktopWithKernel(DXGI_MODE_DESC1*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillModeDescFromDesktopWithQDC@CDXGIOutput@@QEAAXAEAUDXGI_MODE_DESC1@@I@Z
    void FillModeDescFromDesktopWithQDC(DXGI_MODE_DESC1&, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillModeDescFromRemoteDesktop@CDXGIOutput@@QEAAXPEAUDXGI_MODE_DESC1@@PEAW4DXGI_MODE_ROTATION@@@Z
    void FillModeDescFromRemoteDesktop(DXGI_MODE_DESC1*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDXGIOutput@@QEAAXXZ
    void FinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingMode@CDXGIOutput@@UEAAJPEBUDXGI_MODE_DESC@@PEAU2@PEAUIUnknown@@@Z
    virtual long FindClosestMatchingMode(DXGI_MODE_DESC const *, DXGI_MODE_DESC *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingMode1@CDXGIOutput@@UEAAJPEBUDXGI_MODE_DESC1@@PEAU2@PEAUIUnknown@@@Z
    virtual long FindClosestMatchingMode1(DXGI_MODE_DESC1const *, DXGI_MODE_DESC1*, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingModeDwm@CDXGIOutput@@QEAAJAEBUDXGI_MODE_DESC1@@AEAUCDXGIEnumeratedMode@@PEAUIUnknown@@@Z
    long FindClosestMatchingModeDwm(DXGI_MODE_DESC1const &, CDXGIEnumeratedMode &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingModeFromDesktop@CDXGIOutput@@UEAAJPEBUDXGI_MODE_DESC1@@PEAU2@PEAUIUnknown@@@Z
    virtual long FindClosestMatchingModeFromDesktop(DXGI_MODE_DESC1const *, DXGI_MODE_DESC1*, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingModeImpl@CDXGIOutput@@QEAAJAEBUDXGI_MODE_DESC1@@AEAUCDXGIEnumeratedMode@@PEAUIUnknown@@K@Z
    long FindClosestMatchingModeImpl(DXGI_MODE_DESC1const &, CDXGIEnumeratedMode &, IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClosestMatchingModeValidate@CDXGIOutput@@QEAAXPEBXPEAX@Z
    void FindClosestMatchingModeValidate(void const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForgetThisPrimary@CDXGIOutput@@SAXPEAV1@PEAX@Z
    static void ForgetThisPrimary(CDXGIOutput *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivePathAndMode@CDXGIOutput@@QEAAJAEAUDISPLAYCONFIG_PATH_INFO@@AEAUDISPLAYCONFIG_MODE_INFO@@@Z
    long GetActivePathAndMode(DISPLAYCONFIG_PATH_INFO &, DISPLAYCONFIG_MODE_INFO &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterHandle@CDXGIOutput@@QEBAIXZ
    unsigned int GetAdapterHandle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterLuid@CDXGIOutput@@QEBA?AU_LUID@@XZ
    _LUID GetAdapterLuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDXGIOutput@@UEAAJPEAUDXGI_OUTPUT_DESC@@@Z
    virtual long GetDesc(DXGI_OUTPUT_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDXGIOutput@@UEAAJPEAUDXGI_OUTPUT_DWM_DESC@@@Z
    virtual long GetDesc(DXGI_OUTPUT_DWM_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CDXGIOutput@@UEAAJPEAUDXGI_OUTPUT_DESC1@@@Z
    virtual long GetDesc1(DXGI_OUTPUT_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayModeList@CDXGIOutput@@UEAAJW4DXGI_FORMAT@@IPEAIPEAUDXGI_MODE_DESC@@@Z
    virtual long GetDisplayModeList(int, unsigned int, unsigned int *, DXGI_MODE_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayModeList1@CDXGIOutput@@UEAAJW4DXGI_FORMAT@@IPEAIPEAUDXGI_MODE_DESC1@@@Z
    virtual long GetDisplayModeList1(int, unsigned int, unsigned int *, DXGI_MODE_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurfaceData@CDXGIOutput@@UEAAJPEAUIDXGISurface@@@Z
    virtual long GetDisplaySurfaceData(IDXGISurface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurfaceData1@CDXGIOutput@@UEAAJPEAUIDXGIResource@@@Z
    virtual long GetDisplaySurfaceData1(IDXGIResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurfaceDataForDIB@CDXGIOutput@@QEAAJPEAVCDXGISurfaceDIBSection@@@Z
    long GetDisplaySurfaceDataForDIB(CDXGISurfaceDIBSection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatistics@CDXGIOutput@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetFrameStatistics(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsDWM@CDXGIOutput@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z
    virtual long GetFrameStatisticsDWM(DXGI_FRAME_STATISTICS_DWM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatisticsImpl@CDXGIOutput@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z
    long GetFrameStatisticsImpl(DXGI_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGammaControl@CDXGIOutput@@UEAAJPEAUDXGI_GAMMA_CONTROL@@@Z
    virtual long GetGammaControl(DXGI_GAMMA_CONTROL *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGammaControlCapabilities@CDXGIOutput@@UEAAJPEAUDXGI_GAMMA_CONTROL_CAPABILITIES@@@Z
    virtual long GetGammaControlCapabilities(DXGI_GAMMA_CONTROL_CAPABILITIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHMonitor@CDXGIOutput@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetHMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRect@CDXGIOutput@@QEAAXPEAUtagRECT@@@Z
    void GetMonitorRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CDXGIOutput@@UEAAJPEAUIUnknown@@PEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    virtual long GetMultiplaneOverlayCaps(IUnknown *, DXGI_MULTIPLANE_OVERLAY_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCapsInternal@CDXGIOutput@@QEAAJPEAUIUnknown@@PEAHPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z
    long GetMultiplaneOverlayCapsInternal(IUnknown *, int *, DXGI_MULTIPLANE_OVERLAY_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDXGIOutput@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathId@CDXGIOutput@@QEAAIXZ
    unsigned int GetPathId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStereoCaps@CDXGIOutput@@UEAAJPEAK@Z
    virtual long GetStereoCaps(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVBlankEvent@CDXGIOutput@@UEAAJPEAPEAX@Z
    virtual long GetVBlankEvent(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDDAClient@CDXGIOutput@@UEAAHXZ
    virtual int HasDDAClient();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlockedOutput@CDXGIOutput@@QEAA_NXZ
    bool IsBlockedOutput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGetDescCacheDirty@CDXGIOutput@@SA_NKKAEAUDXGI_OUTPUT_DESC1@@@Z
    static bool IsGetDescCacheDirty(unsigned long, unsigned long, DXGI_OUTPUT_DESC1&);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHdrEnabled@CDXGIOutput@@QEAA_NXZ
    bool IsHdrEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIFlipAllowed@CDXGIOutput@@QEAA_NXZ
    bool IsIFlipAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependentFlipSupported@CDXGIOutput@@UEAAHXZ
    virtual int IsIndependentFlipSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndirectOutput@CDXGIOutput@@QEAA_NXZ
    bool IsIndirectOutput();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInternalTopology@CDXGIOutput@@QEAA_NXZ
    bool IsInternalTopology();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMPOAllowed@CDXGIOutput@@QEAA_NXZ
    bool IsMPOAllowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteXddmOutput@CDXGIOutput@@QEAA_NXZ
    bool IsRemoteXddmOutput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModeRotation@CDXGIOutput@@QEAA?AW4DXGI_MODE_ROTATION@@XZ
    int ModeRotation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyGammaControl@CDXGIOutput@@UEAAJPEBUDXGI_RGB@@0@Z
    virtual long ModifyGammaControl(DXGI_RGB const *, DXGI_RGB const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverwriteRef@CDXGIOutput@@QEAAXPEAVCDXGIAdapter@@@Z
    void OverwriteRef(CDXGIAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferPhysicallyContiguous@CDXGIOutput@@QEAA_NXZ
    bool PreferPhysicallyContiguous();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOwnership@CDXGIOutput@@UEAAXXZ
    virtual void ReleaseOwnership();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOwnershipImpl@CDXGIOutput@@QEAAX_N@Z
    void ReleaseOwnershipImpl(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplaySurface@CDXGIOutput@@UEAAJPEAUIDXGISurface@@@Z
    virtual long SetDisplaySurface(IDXGISurface *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplaySurfaceInternal@CDXGIOutput@@QEAAJPEAUIDXGIResource@@@Z
    long SetDisplaySurfaceInternal(IDXGIResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGammaControl@CDXGIOutput@@UEAAJPEBUDXGI_GAMMA_CONTROL@@@Z
    virtual long SetGammaControl(DXGI_GAMMA_CONTROL const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHudSupported@CDXGIOutput@@QEBAX_N@Z
    void SetHudSupported(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStretchSupported@CDXGIOutput@@QEBAX_N@Z
    void SetStretchSupported(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyncRefreshCountWaitTarget@CDXGIOutput@@UEAAJI@Z
    virtual long SetSyncRefreshCountWaitTarget(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsOverlays@CDXGIOutput@@UEAAHXZ
    virtual int SupportsOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeOwnership@CDXGIOutput@@UEAAJPEAUIUnknown@@H@Z
    virtual long TakeOwnership(IUnknown *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeOwnershipImpl@CDXGIOutput@@QEAAJPEAUIUnknown@@PEAVCDXGISwapChain@@W4Ownership@1@H@Z
    long TakeOwnershipImpl(IUnknown *, CDXGISwapChain *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeRef@CDXGIOutput@@QEAAXAEBUSOutputDesc@@PEAVCDXGIAdapter@@@Z
    void TakeRef(SOutputDesc const &, CDXGIAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForLinkConfigDone@CDXGIOutput@@QEAAJXZ
    long WaitForLinkConfigDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlank@CDXGIOutput@@UEAAJXZ
    virtual long WaitForVBlank();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForVBlankOrObjects@CDXGIOutput@@UEAAJIPEBQEAX@Z
    virtual long WaitForVBlankOrObjects(unsigned int, void * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEntries@CDXGIOutput@@SAPEBU_ATL_INTMAP_ENTRY@ATL@@XZ
    static WindissectOpaque const * _GetEntries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalQueryInterface@CDXGIOutput@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long _InternalQueryInterface(_GUID const &, void * *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGamma@CDXGIOutput@@IEAAJI@Z
    long SetGamma(unsigned int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplaySurfaceDataCore@CDXGIOutput@@AEAAJW4DXGI_GETDISPLAYSURFACEDATA_VERSION@@IPEAUIDXGIResource@@@Z
    long GetDisplaySurfaceDataCore(int, unsigned int, IDXGIResource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDwmDescImpl@CDXGIOutput@@AEAAJW4DISPLAYCONFIG_DEVICE_INFO_TYPE_INTERNAL@@PEAUDXGI_OUTPUT_DWM_DESC@@@Z
    long GetDwmDescImpl(int, DXGI_OUTPUT_DWM_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerDevice@CDXGIOutput@@AEAAJPEAPEAUIDXGIDeviceInternal3@@PEAPEAUILockOwner@@@Z
    long GetOwnerDevice(IDXGIDeviceInternal3* *, ILockOwner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorEnumProc@CDXGIOutput@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int MonitorEnumProc(HMONITOR__*, HDC__*, tagRECT *, int64_t);
};
