#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 97 member(s).
class CDXGIFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationPresentationMode@CDXGIFactory@@UEAAJPEAUHWND__@@PEAXPEAW4DXGI_APPLICATION_PRESENT_MODE@@AEBU_GUID@@PEAPEAX@Z
    virtual long ApplicationPresentationMode(HWND__*, void *, int *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationPresentationModeImpl@CDXGIFactory@@QEAAJPEAUHWND__@@PEAXPEAW4DXGI_APPLICATION_PRESENT_MODE@@AEBU_GUID@@PEAPEAX@Z
    long ApplicationPresentationModeImpl(HWND__*, void *, int *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGIFactory@@QEAA@XZ
    CDXGIFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFeatureSupport@CDXGIFactory@@UEAAJW4DXGI_FEATURE@@PEAXI@Z
    virtual long CheckFeatureSupport(int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusion@CDXGIFactory@@SAJPEAUHWND__@@0PEA_N1@Z
    static long CheckOcclusion(HWND__*, HWND__*, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDecodeSwapChainForCompositionSurfaceHandle@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAXPEAUDXGI_DECODE_SWAP_CHAIN_DESC@@PEAUIDXGIResource@@PEAUIDXGIOutput@@PEAPEAUIDXGIDecodeSwapChain@@@Z
    virtual long CreateDecodeSwapChainForCompositionSurfaceHandle(IUnknown *, void *, DXGI_DECODE_SWAP_CHAIN_DESC *, IDXGIResource *, IDXGIOutput *, IDXGIDecodeSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExclusiveWindowlessSwapChain@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAUDXGI_SWAP_CHAIN_FULLSCREEN_DESC@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChainDWM@@@Z
    virtual long CreateExclusiveWindowlessSwapChain(IUnknown *, DXGI_SWAP_CHAIN_DESC1*, DXGI_SWAP_CHAIN_FULLSCREEN_DESC *, IDXGIOutput *, IDXGISwapChainDWM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIndirectSwapChain@CDXGIFactory@@UEAAJPEAUIDXGIDevice@@KPEAPEAUIDXGIResource@@PEAXW4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@PEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@@Z
    virtual long CreateIndirectSwapChain(IDXGIDevice *, unsigned long, IDXGIResource * *, void *, int, _SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *, IDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIndirectSwapChain12@CDXGIFactory@@UEAAJPEAUID3D12Device@@KPEAPEAUID3D12Resource@@PEAXW4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@PEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@@Z
    virtual long CreateIndirectSwapChain12(ID3D12Device *, unsigned long, ID3D12Resource * *, void *, int, _SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *, IDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOutputFromHandle@CDXGIFactory@@QEAAJPEAUIUnknown@@PEAXPEAPEAUIDXGIOutput@@@Z
    long CreateOutputFromHandle(IUnknown *, void *, IDXGIOutput * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSoftwareAdapter@CDXGIFactory@@UEAAJPEAUHINSTANCE__@@PEAPEAUIDXGIAdapter@@@Z
    virtual long CreateSoftwareAdapter(HINSTANCE__*, IDXGIAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChain@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAPEAUIDXGISwapChain@@@Z
    virtual long CreateSwapChain(IUnknown *, DXGI_SWAP_CHAIN_DESC *, IDXGISwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChain@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChainDWM@@@Z
    virtual long CreateSwapChain(IUnknown *, DXGI_SWAP_CHAIN_DESC *, IDXGIOutput *, IDXGISwapChainDWM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainDDA@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChainDWM1@@@Z
    virtual long CreateSwapChainDDA(IUnknown *, DXGI_SWAP_CHAIN_DESC1*, IDXGIOutput *, IDXGISwapChainDWM1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainDDAFromHandle@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAXPEAPEAUIDXGISwapChainDWM1@@@Z
    virtual long CreateSwapChainDDAFromHandle(IUnknown *, DXGI_SWAP_CHAIN_DESC1*, void *, IDXGISwapChainDWM1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainDWM@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAUDXGI_SWAP_CHAIN_FULLSCREEN_DESC@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChainDWM@@@Z
    virtual long CreateSwapChainDWM(IUnknown *, DXGI_SWAP_CHAIN_DESC1*, DXGI_SWAP_CHAIN_FULLSCREEN_DESC *, IDXGIOutput *, IDXGISwapChainDWM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainDWMFromHandle@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAUDXGI_SWAP_CHAIN_FULLSCREEN_DESC@@PEAXPEAPEAUIDXGISwapChainDWM@@@Z
    virtual long CreateSwapChainDWMFromHandle(IUnknown *, DXGI_SWAP_CHAIN_DESC1*, DXGI_SWAP_CHAIN_FULLSCREEN_DESC *, void *, IDXGISwapChainDWM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainForComposition@CDXGIFactory@@UEAAJPEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChain1@@@Z
    virtual long CreateSwapChainForComposition(IUnknown *, DXGI_SWAP_CHAIN_DESC1const *, IDXGIOutput *, IDXGISwapChain1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainForCompositionSurfaceHandle@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAXPEBUDXGI_SWAP_CHAIN_DESC1@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChain1@@@Z
    virtual long CreateSwapChainForCompositionSurfaceHandle(IUnknown *, void *, DXGI_SWAP_CHAIN_DESC1const *, IDXGIOutput *, IDXGISwapChain1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainForCoreWindow@CDXGIFactory@@UEAAJPEAUIUnknown@@0PEBUDXGI_SWAP_CHAIN_DESC1@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChain1@@@Z
    virtual long CreateSwapChainForCoreWindow(IUnknown *, IUnknown *, DXGI_SWAP_CHAIN_DESC1const *, IDXGIOutput *, IDXGISwapChain1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainForHwnd@CDXGIFactory@@UEAAJPEAUIUnknown@@PEAUHWND__@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEBUDXGI_SWAP_CHAIN_FULLSCREEN_DESC@@PEAUIDXGIOutput@@PEAPEAUIDXGISwapChain1@@@Z
    virtual long CreateSwapChainForHwnd(IUnknown *, HWND__*, DXGI_SWAP_CHAIN_DESC1const *, DXGI_SWAP_CHAIN_FULLSCREEN_DESC const *, IDXGIOutput *, IDXGISwapChain1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapPoolInternal@CDXGIFactory@@UEAAJPEAUIUnknown@@PEBXPEAPEAU2@@Z
    virtual long CreateSwapPoolInternal(IUnknown *, void const *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpObject@CDXGIFactory@@UEAAJPEAUIUnknown@@@Z
    virtual long DumpObject(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpProducer@CDXGIFactory@@UEAAJXZ
    virtual long DumpProducer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWrite@CDXGIFactory@@QEAAXXZ
    void ETWWrite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAdapterByGpuPreference@CDXGIFactory@@UEAAJIW4DXGI_GPU_PREFERENCE@@AEBU_GUID@@PEAPEAX@Z
    virtual long EnumAdapterByGpuPreference(unsigned int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAdapterByLuid@CDXGIFactory@@UEAAJU_LUID@@AEBU_GUID@@PEAPEAX@Z
    virtual long EnumAdapterByLuid(_LUID, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAdapterImpl@CDXGIFactory@@QEAAJIPEAPEAUIDXGIAdapter1@@_N@Z
    long EnumAdapterImpl(unsigned int, IDXGIAdapter1* *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAdapters@CDXGIFactory@@UEAAJIPEAPEAUIDXGIAdapter@@@Z
    virtual long EnumAdapters(unsigned int, IDXGIAdapter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumAdapters1@CDXGIFactory@@UEAAJIPEAPEAUIDXGIAdapter1@@@Z
    virtual long EnumAdapters1(unsigned int, IDXGIAdapter1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumOutputByLuid@CDXGIFactory@@UEAAJU_LUID@@AEBU_GUID@@PEAPEAX@Z
    virtual long EnumOutputByLuid(_LUID, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumWarpAdapter@CDXGIFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long EnumWarpAdapter(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CDXGIFactory@@QEAAJXZ
    long FinalConstruct();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDXGIFactory@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterDescByLuid@CDXGIFactory@@QEBAPEBUSAdapterDesc@@AEBU_LUID@@@Z
    SAdapterDesc const * GetAdapterDescByLuid(_LUID const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatShimInfo@CDXGIFactory@@UEAAXPEAUDXGI_COMPATSHIM_INFO@@@Z
    virtual void GetCompatShimInfo(DXGI_COMPATSHIM_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreationFlags@CDXGIFactory@@UEAAIXZ
    virtual unsigned int GetCreationFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceAdapter@CDXGIFactory@@QEAA?AV?$CComPtr@VCDXGIAdapter@@@ATL@@PEAUIUnknown@@@Z
    WindissectOpaque GetDeviceAdapter(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDXGIFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CDXGIFactory@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedResourceAdapterLuid@CDXGIFactory@@UEAAJPEAXPEAU_LUID@@@Z
    virtual long GetSharedResourceAdapterLuid(void *, _LUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSummaryInfoQueueMessageID@CDXGIFactory@@UEAAXPEAH@Z
    virtual void GetSummaryInfoQueueMessageID(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVidPnSourceId@CDXGIFactory@@UEAAIPEAUIDXGIOutput@@@Z
    virtual unsigned int GetVidPnSourceId(IDXGIOutput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAssociation@CDXGIFactory@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindowAssociation(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDXGIFactory@@QEAAJI@Z
    long Initialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertSwapChain@CDXGIFactory@@QEAAXPEAVCDXGISwapChain@@@Z
    void InsertSwapChain(CDXGISwapChain *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrent@CDXGIFactory@@UEAAHXZ
    virtual int IsCurrent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPowerSettingsForcingPowerSavingGpuPreference@CDXGIFactory@@SA_NXZ
    static bool IsPowerSettingsForcingPowerSavingGpuPreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStereoEnabled@CDXGIFactory@@UEAAHXZ
    virtual int IsStereoEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowedStereoEnabled@CDXGIFactory@@UEAAHXZ
    virtual int IsWindowedStereoEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOEnter@CDXGIFactory@@UEAAXXZ
    virtual void LOEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOLeave@CDXGIFactory@@UEAAXXZ
    virtual void LOLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOTryEnter@CDXGIFactory@@UEAAHXZ
    virtual int LOTryEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadEffects@CDXGIFactory@@UEAAJPEBG@Z
    virtual long LoadEffects(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWindowAssociation@CDXGIFactory@@UEAAJPEAUHWND__@@I@Z
    virtual long MakeWindowAssociation(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAltEnter@CDXGIFactory@@QEAAXXZ
    void OnAltEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrintScreen@CDXGIFactory@@QEAAH_KPEAUHWND__@@@Z
    int OnPrintScreen(uint64_t, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenIndirectSwapChainFromHandle@CDXGIFactory@@UEAAJPEAUIDXGIDevice@@PEAX1W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z
    virtual long OpenIndirectSwapChainFromHandle(IDXGIDevice *, void *, void *, int, unsigned long, IDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenIndirectSwapChainFromHandle12@CDXGIFactory@@UEAAJPEAUID3D12Device@@PEAX1W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z
    virtual long OpenIndirectSwapChainFromHandle12(ID3D12Device *, void *, void *, int, unsigned long, IDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenIndirectSwapChainFromName@CDXGIFactory@@UEAAJPEAUIDXGIDevice@@KHPEBGPEAXW4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z
    virtual long OpenIndirectSwapChainFromName(IDXGIDevice *, unsigned long, int, unsigned short const *, void *, int, unsigned long, IDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenIndirectSwapChainFromName12@CDXGIFactory@@UEAAJPEAUID3D12Device@@KHPEBGPEAXW4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z
    virtual long OpenIndirectSwapChainFromName12(ID3D12Device *, unsigned long, int, unsigned short const *, void *, int, unsigned long, IDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIFactory@CDXGIFactory@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIFactory(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAdaptersChangedEvent@CDXGIFactory@@UEAAJPEAXPEAK@Z
    virtual long RegisterAdaptersChangedEvent(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterOcclusionStatusEvent@CDXGIFactory@@UEAAJPEAXPEAK@Z
    virtual long RegisterOcclusionStatusEvent(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterOcclusionStatusWindow@CDXGIFactory@@UEAAJPEAUHWND__@@IPEAK@Z
    virtual long RegisterOcclusionStatusWindow(HWND__*, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterStereoStatusEvent@CDXGIFactory@@UEAAJPEAXPEAK@Z
    virtual long RegisterStereoStatusEvent(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterStereoStatusWinRTDisplayPropertiesCB@CDXGIFactory@@UEAAXPEAX0@Z
    virtual void RegisterStereoStatusWinRTDisplayPropertiesCB(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterStereoStatusWindow@CDXGIFactory@@UEAAJPEAUHWND__@@IPEAK@Z
    virtual long RegisterStereoStatusWindow(HWND__*, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistryAppOnHMDChangedCallback@CDXGIFactory@@SAX_NKPEAX@Z
    static void RegistryAppOnHMDChangedCallback(bool, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLock@CDXGIFactory@@UEAAXXZ
    virtual void ReleaseLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCompatValues@CDXGIFactory@@UEAAXXZ
    virtual void ResetCompatValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SampleAdapters@CDXGIFactory@@QEAAJXZ
    long SampleAdapters();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CDXGIFactory@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CDXGIFactory@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStereoEnabled@CDXGIFactory@@UEAAXH@Z
    virtual void SetStereoEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapChainDeath@CDXGIFactory@@SAXPEAV1@PEAVCDXGISwapChain@@@Z
    static void SwapChainDeath(CDXGIFactory *, CDXGISwapChain *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeLock@CDXGIFactory@@UEAAXXZ
    virtual void TakeLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateWatchdogThread@CDXGIFactory@@QEAAXXZ
    void TryCreateWatchdogThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAdaptersChangedEvent@CDXGIFactory@@UEAAJK@Z
    virtual long UnregisterAdaptersChangedEvent(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterOcclusionStatus@CDXGIFactory@@UEAAXK@Z
    virtual void UnregisterOcclusionStatus(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterStereoStatus@CDXGIFactory@@UEAAXK@Z
    virtual void UnregisterStereoStatus(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterStereoStatusWinRTDisplayPropertiesCB@CDXGIFactory@@UEAAXXZ
    virtual void UnregisterStereoStatusWinRTDisplayPropertiesCB();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSwapChainSource@CDXGIFactory@@QEAAJPEAUIUnknown@@PEAUSWAP_CHAIN_CREATION_SOURCE@@@Z
    long ValidateSwapChainSource(IUnknown *, SWAP_CHAIN_CREATION_SOURCE *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGIFactory@@QEAA@XZ
    ~CDXGIFactory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainDWMImpl@CDXGIFactory@@IEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC_INTERNAL@@PEAPEAUIDXGISwapChainDWM@@@Z
    long CreateSwapChainDWMImpl(IUnknown *, DXGI_SWAP_CHAIN_DESC_INTERNAL *, IDXGISwapChainDWM * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainForHwndImpl@CDXGIFactory@@IEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC_INTERNAL@@_NPEAUIDXGIOutput@@PEAPEAUIDXGISwapChain1@@@Z
    long CreateSwapChainForHwndImpl(IUnknown *, DXGI_SWAP_CHAIN_DESC_INTERNAL *, bool, IDXGIOutput *, IDXGISwapChain1* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainImpl@CDXGIFactory@@IEAAJPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC_INTERNAL@@_NPEAVCDXGIOutput@@PEAUIDXGIResource@@AEBU_GUID@@PEAPEAX@Z
    long CreateSwapChainImpl(IUnknown *, DXGI_SWAP_CHAIN_DESC_INTERNAL *, bool, CDXGIOutput *, IDXGIResource *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSwapChainValidate@CDXGIFactory@@IEAAXPEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC_INTERNAL@@PEAVCDXGIOutput@@_NPEAPEAX@Z
    void CreateSwapChainValidate(IUnknown *, DXGI_SWAP_CHAIN_DESC_INTERNAL *, CDXGIOutput *, bool, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDynamicSwitchPreference@CDXGIFactory@@AEAAXU_DYNAMIC_SWITCH_DECISION@@@Z
    void ApplyDynamicSwitchPreference(_DYNAMIC_SWITCH_DECISION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAdapters@CDXGIFactory@@AEAAXP6AJPEBU_D3DKMT_CLOSEADAPTER@@@Z@Z
    void ClearAdapters(long ( *)(_D3DKMT_CLOSEADAPTER const *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAdapters@CDXGIFactory@@AEAAXAEAU_D3DKMT_ENUMADAPTERS2@@P6AJPEBU_D3DKMT_CLOSEADAPTER@@@Z@Z
    void CloseAdapters(_D3DKMT_ENUMADAPTERS2&, long ( *)(_D3DKMT_CLOSEADAPTER const *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIndirectSwapChainImpl@CDXGIFactory@@AEAAJPEAUIDXGIDevice@@AEBUTConstructorArgs@CDXGIIndirectSwapChain@@PEAPEAV4@@Z
    long CreateIndirectSwapChainImpl(IDXGIDevice *, WindissectOpaque const &, CDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIndirectSwapChainWithLockOwnerImpl@CDXGIFactory@@AEAAJPEAUILockOwner@@AEBUTConstructorArgs@CDXGIIndirectSwapChain@@PEAPEAV4@@Z
    long CreateIndirectSwapChainWithLockOwnerImpl(ILockOwner *, WindissectOpaque const &, CDXGIIndirectSwapChain * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateDynamicSwitch@CDXGIFactory@@AEAA?AU_DYNAMIC_SWITCH_DECISION@@XZ
    _DYNAMIC_SWITCH_DECISION EvaluateDynamicSwitch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBasicRender@CDXGIFactory@@AEAAXAEAI@Z
    void FindBasicRender(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutput@CDXGIFactory@@AEAA?AV?$CComPtr@UIDXGIOutput@@@ATL@@AEBU_LUID@@I@Z
    WindissectOpaque GetOutput(_LUID const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SampleAdaptersWorker@CDXGIFactory@@AEAAJP6AJPEBU_D3DKMT_CLOSEADAPTER@@@ZP6AJPEBU_D3DKMT_ENUMADAPTERS2@@@ZP6AJPEBU_D3DKMT_QUERYADAPTERINFO@@@ZP6AJPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@ZPEAPEAX@Z
    long SampleAdaptersWorker(long ( *)(_D3DKMT_CLOSEADAPTER const *), long ( *)(_D3DKMT_ENUMADAPTERS2const *), long ( *)(_D3DKMT_QUERYADAPTERINFO const *), long ( *)(_D3DKMT_QUERYVIDEOMEMORYINFO *), void * *);
};
