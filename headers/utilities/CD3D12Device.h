#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 69 member(s).
class CD3D12Device {
public:
    class SPerQueueTypeData;
    class SwapChainAssistantLocals;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireResource@CD3D12Device@@UEAAXPEAUIDXGIResource@@@Z
    virtual void AcquireResource(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Blt@CD3D12Device@@UEAAJPEAUIDXGIResource@@PEBUtagRECT@@1I01PEBUSUBRESOURCE_BLT_MAP@@_KII@Z
    virtual long Blt(IDXGIResource *, tagRECT const *, tagRECT const *, unsigned int, IDXGIResource *, tagRECT const *, SUBRESOURCE_BLT_MAP const *, uint64_t, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3D12Device@@QEAA@AEBUTConstructorArgs@0@@Z
    CD3D12Device(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCompositionColorSpaceSupport@CD3D12Device@@UEAAXW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@01PEAH@Z
    virtual void CheckCompositionColorSpaceSupport(int, int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDirectFlipSupport@CD3D12Device@@UEAAJIPEAUIDXGIResource@@0PEAH@Z
    virtual long CheckDirectFlipSupport(unsigned int, IDXGIResource *, IDXGIResource *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiPlaneOverlayColorSpaceSupport@CD3D12Device@@UEAAXIW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@PEAH@Z
    virtual void CheckMultiPlaneOverlayColorSpaceSupport(unsigned int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMultiplaneOverlaySupport@CD3D12Device@@UEAAJPEAUIDXGIResource@@IPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEAH2PEAX@Z
    virtual long CheckMultiplaneOverlaySupport(IDXGIResource *, unsigned int, DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO const *, int *, int *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPresentDurationSupport@CD3D12Device@@UEAAJIIPEAI0@Z
    virtual long CheckPresentDurationSupport(unsigned int, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@CD3D12Device@@QEAAJPEAUIDXGIResource@@II0PEAUID3D12Fence@@_KPEAUISwapChainEffect@@@Z
    long Convert(IDXGIResource *, unsigned int, unsigned int, IDXGIResource *, ID3D12Fence *, uint64_t, ISwapChainEffect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFence@CD3D12Device@@UEAAJ_KIPEAPEAUIDXGIFenceInternal@@@Z
    virtual long CreateFence(uint64_t, unsigned int, IDXGIFenceInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceInternal@CD3D12Device@@UEAAJPEAUIDXGISwapChainInternal@@PEAUIUseCounted2@@PEAXPEBUDXGI_SURFACE_DESC@@IIII2PEAPEAUIDXGIResource@@@Z
    virtual long CreateSurfaceInternal(IDXGISwapChainInternal *, IUseCounted2*, void *, DXGI_SURFACE_DESC const *, unsigned int, unsigned int, unsigned int, unsigned int, void *, IDXGIResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceInternalExtended@CD3D12Device@@QEAAJPEAUIDXGISwapChainInternal@@PEAUIUseCounted2@@PEBUDXGI_SURFACE_DESC@@IIIIPEAXPEBIPEAPEAUIDXGIResource@@@Z
    long CreateSurfaceInternalExtended(IDXGISwapChainInternal *, IUseCounted2*, DXGI_SURFACE_DESC const *, unsigned int, unsigned int, unsigned int, unsigned int, void *, unsigned int const *, IDXGIResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceCompletedHWNDFullscreenTransition@CD3D12Device@@UEAAXXZ
    virtual void DeviceCompletedHWNDFullscreenTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DriverSupportsOverlays@CD3D12Device@@UEAAHXZ
    virtual int DriverSupportsOverlays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChildDevice@CD3D12Device@@UEAAJPEAUIDXGIAdapter@@W4DXGI_INTERNAL_CHILD_DEVICE_TYPE@@@Z
    virtual long EnsureChildDevice(IDXGIAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CD3D12Device@@UEAAHI@Z
    virtual int Flush(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDeletion@CD3D12Device@@UEAAXPEAUIDXGIResource@@PEBQEAU2@IW4DXGI_INTERNAL_FLUSH_DELETION_REASON@@@Z
    virtual void FlushDeletion(IDXGIResource *, IDXGIResource * const *, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaps@CD3D12Device@@UEAA?AUDXGI_INTERNAL_DEVICE_CAPS@@XZ
    virtual DXGI_INTERNAL_DEVICE_CAPS GetCaps();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildDevice@CD3D12Device@@UEAAPEAUIDXGIDeviceInternal3@@W4DXGI_INTERNAL_CHILD_DEVICE_TYPE@@@Z
    virtual IDXGIDeviceInternal3* GetChildDevice(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentProtection@CD3D12Device@@UEAA?AUDXGI_INTERNAL_CONTENT_PROTECTION@@XZ
    virtual DXGI_INTERNAL_CONTENT_PROTECTION GetContentProtection();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetContextResolver@CD3D12Device@@UEAAJPEAPEAX@Z
    virtual long GetContextResolver(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentResourceAndCommandQueue@CD3D12Device@@UEAAJAEBU_GUID@@PEAPEAX01@Z
    virtual long GetCurrentResourceAndCommandQueue(_GUID const &, void * *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CD3D12Device@@UEAAJPEAUIDXGIResource@@PEAUDXGI_SURFACE_DESC@@PEAI@Z
    virtual long GetDesc(IDXGIResource *, DXGI_SURFACE_DESC *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceRemovedReason@CD3D12Device@@UEAAJXZ
    virtual long GetDeviceRemovedReason();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlipExSemaphoreHandle@CD3D12Device@@UEAAPEAXXZ
    virtual void * GetFlipExSemaphoreHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGammaCaps@CD3D12Device@@UEAAJPEAUDXGI_GAMMA_CONTROL_CAPABILITIES@@@Z
    virtual long GetGammaCaps(DXGI_GAMMA_CONTROL_CAPABILITIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHardwareProtectionCaps@CD3D12Device@@UEAAXPEAH0@Z
    virtual void GetHardwareProtectionCaps(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLUID@CD3D12Device@@UEAA?AU_LUID@@XZ
    virtual _LUID GetLUID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayCaps@CD3D12Device@@UEAAJIPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@PEAH@Z
    virtual long GetMultiplaneOverlayCaps(unsigned int, DXGI_MULTIPLANE_OVERLAY_CAPS *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMultiplaneOverlayGroupCaps@CD3D12Device@@UEAAJIIPEAUDXGI_INTERNAL_MULTIPLANE_OVERLAY_GROUP_CAPS@@@Z
    virtual long GetMultiplaneOverlayGroupCaps(unsigned int, unsigned int, DXGI_INTERNAL_MULTIPLANE_OVERLAY_GROUP_CAPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainObject@CD3D12Device@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSwapChainObject(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertImplicitSync@CD3D12Device@@UEAAJXZ
    virtual long InsertImplicitSync();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMaximumFrameLatencyReached@CD3D12Device@@UEAAHI@Z
    virtual int IsMaximumFrameLatencyReached(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidScanoutFormat@CD3D12Device@@UEAAJW4DXGI_FORMAT@@@Z
    virtual long IsValidScanoutFormat(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXBOX@CD3D12Device@@UEAAHXZ
    virtual int IsXBOX();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LifetimeStateUpdated@CD3D12Device@@UEAAXW4D3D12_LIFETIME_STATE@@@Z
    virtual void LifetimeStateUpdated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDroppedAPICallIfEnabled@CD3D12Device@@UEAAXW4DXGI_INTERNAL_MARKER_OP@@@Z
    virtual void LogDroppedAPICallIfEnabled(int);
    // Category: Method | Source: PE Export
    // Symbol: ?Map@CD3D12Device@@UEAAJPEAUIDXGIResource@@IPEAUDXGI_MAPPED_RECT@@I@Z
    virtual long Map(IDXGIResource *, unsigned int, DXGI_MAPPED_RECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkPresent@CD3D12Device@@QEAAXPEBUDXGI_PRESENTSURFACE@@IPEBU_D3DKMT_PRESENT@@@Z
    void MarkPresent(DXGI_PRESENTSURFACE const *, unsigned int, _D3DKMT_PRESENT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFence@CD3D12Device@@UEAAJPEAXPEAPEAUIDXGIFenceInternal@@@Z
    virtual long OpenFence(void *, IDXGIFenceInternal * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@CD3D12Device@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource1@CD3D12Device@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource1(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource1Extended@CD3D12Device@@QEAAJPEAXIAEBU_GUID@@PEAPEAX@Z
    long OpenSharedResource1Extended(void *, unsigned int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CD3D12Device@@UEAAJPEBUDXGI_PRESENTSURFACE@@IPEAUIDXGIResource@@PEAXIIPEAI@Z
    virtual long Present(DXGI_PRESENTSURFACE const *, unsigned int, IDXGIResource *, void *, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentExtended@CD3D12Device@@QEAAJPEBUDXGI_PRESENTSURFACE@@IPEAUIDXGIResource@@PEAXIIIPEAI@Z
    long PresentExtended(DXGI_PRESENTSURFACE const *, unsigned int, IDXGIResource *, void *, unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PE Export
    // Symbol: ?PresentMultiplaneOverlay@CD3D12Device@@UEAAJPEAUIDXGIResource@@IPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAX@Z
    virtual long PresentMultiplaneOverlay(IDXGIResource *, unsigned int, _DXGI_PRESENT_MULTIPLANE_OVERLAY const *, void *);
    // Category: Method | Source: PE Export
    // Symbol: ?QueryScanoutCaps@CD3D12Device@@UEAAJPEAUIDXGIResource@@IIIPEAW4DXGI_INTERNAL_SCANOUT_FLAGS@@@Z
    virtual long QueryScanoutCaps(IDXGIResource *, unsigned int, unsigned int, unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResource@CD3D12Device@@UEAAXPEAUIDXGIResource@@@Z
    virtual void ReleaseResource(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDevice@CD3D12Device@@UEAAXJ@Z
    virtual void RemoveDevice(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveSharedResource@CD3D12Device@@UEAAXPEAUIDXGIResource@@@Z
    virtual void ResolveSharedResource(IDXGIResource *);
    // Category: Method | Source: PE Export
    // Symbol: ?RotateResourceIdentities@CD3D12Device@@UEAAJPEAUIDXGIResource@@PEBQEAU2@I@Z
    virtual long RotateResourceIdentities(IDXGIResource *, IDXGIResource * const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentSwapchainBuffer@CD3D12Device@@QEAAXPEAUIDXGIResource@@@Z
    void SetCurrentSwapchainBuffer(IDXGIResource *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetDisplayMode@CD3D12Device@@UEAAJPEAUIDXGIResource@@@Z
    virtual long SetDisplayMode(IDXGIResource *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetHardwareProtection@CD3D12Device@@UEAAJPEAUIDXGIResource@@H@Z
    virtual long SetHardwareProtection(IDXGIResource *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMarkerIfRenderInstrumentationEnabled@CD3D12Device@@UEAAXW4DXGI_INTERNAL_MARKER_OP@@@Z
    virtual void SetMarkerIfRenderInstrumentationEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPresentPostSignal@CD3D12Device@@UEAAXPEAUIDXGIFenceInternal@@_KH@Z
    virtual void SetPresentPostSignal(IDXGIFenceInternal *, uint64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionalPrimaryResource@CD3D12Device@@UEAAXPEAUIDXGIResource@@@Z
    virtual void SetTransitionalPrimaryResource(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CD3D12Device@@UEAAXPEAUIDXGIResource@@I@Z
    virtual void Unmap(IDXGIResource *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?ValidateGetDisplaySurfaceDataDest@CD3D12Device@@UEAAJPEAUIDXGIDebugProducer@@W4DXGI_GETDISPLAYSURFACEDATA_VERSION@@PEAUIDXGIResource@@@Z
    virtual long ValidateGetDisplaySurfaceDataDest(IDXGIDebugProducer *, int, IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFence@CD3D12Device@@UEAAJPEAUIDXGIFenceInternal@@_KI@Z
    virtual long WaitForFence(IDXGIFenceInternal *, uint64_t, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D12Device@@QEAA@XZ
    ~CD3D12Device();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPresentLimitSemaphore@CD3D12Device@@AEAAXI@Z
    void AdjustPresentLimitSemaphore(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAndSubmitCommandList@CD3D12Device@@AEAAXIW4QueueType@1@@Z
    void CloseAndSubmitCommandList(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCommandList@CD3D12Device@@AEAAXW4QueueType@1@@Z
    void EnsureCommandList(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterKernelHandle@CD3D12Device@@AEAAJPEAI@Z
    long GetAdapterKernelHandle(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseAdapter@CD3D12Device@@AEAAJAEAV?$CComPtr@UIDXGIAdapter@@@ATL@@@Z
    long GetBaseAdapter(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCommandList@CD3D12Device@@AEAAXIW4QueueType@1@@Z
    void InitCommandList(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnCreatedFence@CD3D12Device@@AEAAJJPEAUID3D12Fence@@_NAEBU_GUID@@PEAPEAX@Z
    long ReturnCreatedFence(long, ID3D12Fence *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnCreatedResource@CD3D12Device@@AEAAJJPEAUIUnknown@@PEAUIDXGISwapChainInternal@@PEAUIUseCounted2@@_NAEBU_GUID@@PEAPEAX@Z
    long ReturnCreatedResource(long, IUnknown *, IDXGISwapChainInternal *, IUseCounted2*, bool, _GUID const &, void * *);
};
