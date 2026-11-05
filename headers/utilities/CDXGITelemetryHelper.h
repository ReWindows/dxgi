#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 27 member(s).
class CDXGITelemetryHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCompatShimModeChangeInfo@CDXGITelemetryHelper@@QEAAXAEBUCompatShimModeChangeInfo@@@Z
    void LogCompatShimModeChangeInfo(CompatShimModeChangeInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCompatString@CDXGITelemetryHelper@@QEAAXPEBD@Z
    void LogCompatString(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainDDAEvent@CDXGITelemetryHelper@@QEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChainDWM1@@J@Z
    void LogCreateSwapChainDDAEvent(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC1const *, IDXGISwapChainDWM1* *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainDWMEvent@CDXGITelemetryHelper@@QEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC_INTERNAL@@PEAPEAUIDXGISwapChainDWM@@J@Z
    void LogCreateSwapChainDWMEvent(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC_INTERNAL const *, IDXGISwapChainDWM * *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainEvent@CDXGITelemetryHelper@@QEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC@@PEAPEAUIDXGISwapChain@@J@Z
    void LogCreateSwapChainEvent(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC const *, IDXGISwapChain * *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainForCompositionEvent@CDXGITelemetryHelper@@QEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@J@Z
    void LogCreateSwapChainForCompositionEvent(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC1const *, IDXGISwapChain1* *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainForCompositionSurfaceHandleEvent@CDXGITelemetryHelper@@QEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@J@Z
    void LogCreateSwapChainForCompositionSurfaceHandleEvent(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC1const *, IDXGISwapChain1* *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainForCoreWindowEvent@CDXGITelemetryHelper@@QEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@J@Z
    void LogCreateSwapChainForCoreWindowEvent(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC1const *, IDXGISwapChain1* *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainForHwndEvent@CDXGITelemetryHelper@@QEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC1@@PEBUDXGI_SWAP_CHAIN_FULLSCREEN_DESC@@PEAPEAUIDXGISwapChain1@@J@Z
    void LogCreateSwapChainForHwndEvent(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC1const *, DXGI_SWAP_CHAIN_FULLSCREEN_DESC const *, IDXGISwapChain1* *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDXGI2FactoryCreateAttempt@CDXGITelemetryHelper@@QEAAXI@Z
    void LogDXGI2FactoryCreateAttempt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDeviceRemovalSupportStatus@CDXGITelemetryHelper@@QEAAX_NJ@Z
    void LogDeviceRemovalSupportStatus(bool, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEffectCreation@CDXGITelemetryHelper@@QEAAXAEBU_LUID@@AEBUDXGI_EFFECT_DESC@@W4DXGI_FORMAT@@2W4DXGI_COLOR_SPACE_TYPE@@3IIIIUPACKAGE_VERSION@@GGIIUSysConfigTelemetryInfo@@W4DXGI_EFFECT_FAIL_REASON@@_NJ@Z
    void LogEffectCreation(_LUID const &, DXGI_EFFECT_DESC const &, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, PACKAGE_VERSION, unsigned short, unsigned short, unsigned int, unsigned int, SysConfigTelemetryInfo, int, bool, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogFullscreenPresentInfo@CDXGITelemetryHelper@@QEAAXAEBU_LUID@@AEBUFullscreenPresentInfo@@@Z
    void LogFullscreenPresentInfo(_LUID const &, FullscreenPresentInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogGpuPreferenceInfo@CDXGITelemetryHelper@@QEAAXAEBUEnumAdapterByGpuPreferenceInfo@@W4ADAPTER_ENUM_ORDER@@W4GPU_PREFERENCE_DECIDING_FACTOR@@@Z
    void LogGpuPreferenceInfo(EnumAdapterByGpuPreferenceInfo const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogHybridScanOutInfo@CDXGITelemetryHelper@@QEAAXAEBU_LUID@@AEBUHybridScanOutTelemetryInfo@@@Z
    void LogHybridScanOutInfo(_LUID const &, HybridScanOutTelemetryInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMultiSwapChainPresentEvent@CDXGITelemetryHelper@@QEAAXXZ
    void LogMultiSwapChainPresentEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogResizeBuffers@CDXGITelemetryHelper@@QEAAXAEBVCDXGISwapChain@@AEBU_LUID@@AEBUResizeBuffersTelemetryInfo@@IIW4DXGI_FORMAT@@@Z
    void LogResizeBuffers(CDXGISwapChain const &, _LUID const &, ResizeBuffersTelemetryInfo const &, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogResizeBuffersFullscreenProxyModeEvent@CDXGITelemetryHelper@@QEAAXPEAUDXGI_SWAP_CHAIN_DESC_INTERNAL@@PEAUIDXGIResource@@@Z
    void LogResizeBuffersFullscreenProxyModeEvent(DXGI_SWAP_CHAIN_DESC_INTERNAL *, IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetColorSpace1ChangeEvent@CDXGITelemetryHelper@@QEAAXAEBU_LUID@@W4DXGI_COLOR_SPACE_TYPE@@_N2@Z
    void LogSetColorSpace1ChangeEvent(_LUID const &, int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetFullscreenState@CDXGITelemetryHelper@@QEAAXPEBVCDXGISwapChain@@AEBU_LUID@@_NAEBUSetFullscreenStateTelemetryInfo@@AEBUDXGI_SWAP_CHAIN_DESC_INTERNAL@@J@Z
    void LogSetFullscreenState(CDXGISwapChain const *, _LUID const &, bool, SetFullscreenStateTelemetryInfo const &, DXGI_SWAP_CHAIN_DESC_INTERNAL const &, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSetMaximumFrameLatency@CDXGITelemetryHelper@@QEAAXAEBU_LUID@@II@Z
    void LogSetMaximumFrameLatency(_LUID const &, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSwapChainStatus@CDXGITelemetryHelper@@QEAAXAEBUSwapChainStatus@1@@Z
    void LogSwapChainStatus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTakeOwnershipCall@CDXGITelemetryHelper@@QEAAXXZ
    void LogTakeOwnershipCall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogWinSwapEffectUpgradeCompatStatus@CDXGITelemetryHelper@@QEAAXW4WINDOWEDSWAPEFFECTUPGRADE_REASON@@@Z
    void LogWinSwapEffectUpgradeCompatStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CDXGITelemetryHelper@@UEAAJXZ
    virtual long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreateSwapChainEvent_Worker@CDXGITelemetryHelper@@AEAAXPEAVCDXGIAdapter@@PEAUIUnknown@@PEBUDXGI_SWAP_CHAIN_DESC_INTERNAL@@1JW4DXGI_TLM_CREATE_SWAP_CHAIN_API@@@Z
    void LogCreateSwapChainEvent_Worker(CDXGIAdapter *, IUnknown *, DXGI_SWAP_CHAIN_DESC_INTERNAL const *, IUnknown *, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogHighDpiCompatShimEvent_Worker@CDXGITelemetryHelper@@AEAAXW4DXGI_TLM_HIGH_DPI_SHIM_API@@@Z
    void LogHighDpiCompatShimEvent_Worker(int);
};
