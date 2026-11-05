#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 26 member(s).
class CDXGIAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckInterfaceSupport@CDXGIAdapter@@UEAAJAEBU_GUID@@PEAT_LARGE_INTEGER@@@Z
    virtual long CheckInterfaceSupport(_GUID const &, _LARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseKernelHandle@CDXGIAdapter@@UEAAJPEAX@Z
    virtual long CloseKernelHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ETWWrite@CDXGIAdapter@@QEAAXXZ
    void ETWWrite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumOutputs@CDXGIAdapter@@UEAAJIPEAPEAUIDXGIOutput@@@Z
    virtual long EnumOutputs(unsigned int, IDXGIOutput * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumOutputs2@CDXGIAdapter@@UEAAJIIPEAPEAUIDXGIOutput@@@Z
    virtual long EnumOutputs2(unsigned int, unsigned int, IDXGIOutput * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDXGIAdapter@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterRole@CDXGIAdapter@@UEAA?AW4DXGI_INTERNAL_ADAPTER_ROLES@@XZ
    virtual int GetAdapterRole();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc1@CDXGIAdapter@@UEAAJPEAUDXGI_ADAPTER_DESC1@@@Z
    virtual long GetDesc1(DXGI_ADAPTER_DESC1*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc2@CDXGIAdapter@@UEAAJPEAUDXGI_ADAPTER_DESC2@@@Z
    virtual long GetDesc2(DXGI_ADAPTER_DESC2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc3@CDXGIAdapter@@UEAAJPEAUDXGI_ADAPTER_DESC3@@@Z
    virtual long GetDesc3(DXGI_ADAPTER_DESC3*);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetRdpAdapter@CDXGIAdapter@@UEAAPEAUIDXGIAdapter1@@XZ
    virtual IDXGIAdapter1* GetRdpAdapter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopAccessible@CDXGIAdapter@@QEBAHI@Z
    int IsDesktopAccessible(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumOutputs@CDXGIAdapter@@QEAAII@Z
    unsigned int NumOutputs(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenKernelHandle@CDXGIAdapter@@UEAAJPEAPEAX@Z
    virtual long OpenKernelHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QIAdapterDwm@CDXGIAdapter@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long QIAdapterDwm(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryVideoMemoryInfo@CDXGIAdapter@@UEAAJIW4DXGI_MEMORY_SEGMENT_GROUP@@PEAUDXGI_QUERY_VIDEO_MEMORY_INFO@@@Z
    virtual long QueryVideoMemoryInfo(unsigned int, int, DXGI_QUERY_VIDEO_MEMORY_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHardwareContentProtectionTeardownStatusEvent@CDXGIAdapter@@UEAAJPEAXPEAK@Z
    virtual long RegisterHardwareContentProtectionTeardownStatusEvent(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterVideoMemoryBudgetChangeNotificationEvent@CDXGIAdapter@@UEAAJPEAXPEAK@Z
    virtual long RegisterVideoMemoryBudgetChangeNotificationEvent(void *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOutput@CDXGIAdapter@@QEAAXPEAVCDXGIOutput@@@Z
    void RemoveOutput(CDXGIOutput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOrdinalAndTakeRef@CDXGIAdapter@@QEAAXIPEAVCDXGIFactory@@PEAUHINSTANCE__@@@Z
    void SetOrdinalAndTakeRef(unsigned int, CDXGIFactory *, HINSTANCE__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVideoMemoryReservation@CDXGIAdapter@@UEAAJIW4DXGI_MEMORY_SEGMENT_GROUP@@_K@Z
    virtual long SetVideoMemoryReservation(unsigned int, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterHardwareContentProtectionTeardownStatus@CDXGIAdapter@@UEAAXK@Z
    virtual void UnregisterHardwareContentProtectionTeardownStatus(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterVideoMemoryBudgetChangeNotification@CDXGIAdapter@@UEAAXK@Z
    virtual void UnregisterVideoMemoryBudgetChangeNotification(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGIAdapter@@QEAA@XZ
    ~CDXGIAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumOutputsImpl@CDXGIAdapter@@IEAAJIIPEAPEAUIDXGIOutput@@@Z
    long EnumOutputsImpl(unsigned int, unsigned int, IDXGIOutput * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAdapter@CDXGIAdapter@@IEAAXXZ
    void OpenAdapter();
};
