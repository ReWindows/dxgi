#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 39 member(s).
class CDXGIIndirectSwapChain {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abandon@CDXGIIndirectSwapChain@@UEAAJXZ
    virtual long Abandon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBuffer@CDXGIIndirectSwapChain@@UEAAJPEAIPEAPEAUIDXGIResource@@@Z
    virtual long AcquireBuffer(unsigned int *, IDXGIResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBuffer12@CDXGIIndirectSwapChain@@UEAAJPEAIPEAPEAUID3D12Resource@@PEAPEAUID3D12Fence@@PEA_K3@Z
    virtual long AcquireBuffer12(unsigned int *, ID3D12Resource * *, ID3D12Fence * *, uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBuffer@CDXGIIndirectSwapChain@@UEAAJPEAUIDXGIResource@@@Z
    virtual long AddBuffer(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBuffer12@CDXGIIndirectSwapChain@@UEAAJPEAUID3D12Resource@@@Z
    virtual long AddBuffer12(ID3D12Resource *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGIIndirectSwapChain@@QEAA@AEBUTConstructorArgs@0@PEAUILockOwner@@@Z
    CDXGIIndirectSwapChain(WindissectOpaque const &, ILockOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CDXGIIndirectSwapChain@@QEAAXAEBUTConstructorArgs@1@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDXGIIndirectSwapChain@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalMetaData@CDXGIIndirectSwapChain@@UEAAJIPEAXPEAI@Z
    virtual long GetGlobalMetaData(unsigned int, void *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@CDXGIIndirectSwapChain@@UEAAPEAXXZ
    virtual void * GetHandle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetaData@CDXGIIndirectSwapChain@@UEAAJIPEAXPEAI@Z
    virtual long GetMetaData(unsigned int, void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAndAcquireBuffer@CDXGIIndirectSwapChain@@UEAAJIPEAXPEAIPEAPEAUIDXGIResource@@@Z
    virtual long ReleaseAndAcquireBuffer(unsigned int, void *, unsigned int *, IDXGIResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAndAcquireBuffer12@CDXGIIndirectSwapChain@@UEAAJIPEAXPEAIPEAPEAUID3D12Resource@@PEAPEAUID3D12Fence@@PEA_K4@Z
    virtual long ReleaseAndAcquireBuffer12(unsigned int, void *, unsigned int *, ID3D12Resource * *, ID3D12Fence * *, uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CDXGIIndirectSwapChain@@UEAAJIPEAX@Z
    virtual long ReleaseBuffer(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBuffer@CDXGIIndirectSwapChain@@UEAAJPEAUIDXGIResource@@@Z
    virtual long RemoveBuffer(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBuffer12@CDXGIIndirectSwapChain@@UEAAJPEAUID3D12Resource@@@Z
    virtual long RemoveBuffer12(ID3D12Resource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForOutput@CDXGIIndirectSwapChain@@QEAAJPEAUIDXGIOutput@@PEAUIUnknown@@@Z
    long SetForOutput(IDXGIOutput *, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForOutput@CDXGIIndirectSwapChain@@UEAAJIII@Z
    virtual long SetForOutput(unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalMetaData@CDXGIIndirectSwapChain@@UEAAJIPEAX@Z
    virtual long SetGlobalMetaData(unsigned int, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMetaData@CDXGIIndirectSwapChain@@UEAAJIPEAXH@Z
    virtual long SetMetaData(unsigned int, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopIndirectDisplaySession@CDXGIIndirectSwapChain@@UEAAXPEAUIDXGIOutput@@PEAUIUnknown@@@Z
    virtual void StopIndirectDisplaySession(IDXGIOutput *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCBreakCyclicReferences@CDXGIIndirectSwapChain@@UEAAXXZ
    virtual void UCBreakCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCEstablishCyclicReferences@CDXGIIndirectSwapChain@@UEAAXXZ
    virtual void UCEstablishCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCQueryInterface@CDXGIIndirectSwapChain@@UEAAJKAEBU_GUID@@PEAPEAX@Z
    virtual long UCQueryInterface(unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnOrderedPresent@CDXGIIndirectSwapChain@@UEAAJPEAUIDXGIResource@@IPEAX1_K@Z
    virtual long UnOrderedPresent(IDXGIResource *, unsigned int, void *, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnOrderedPresent12@CDXGIIndirectSwapChain@@UEAAJPEAUID3D12Resource@@IPEAX1_K@Z
    virtual long UnOrderedPresent12(ID3D12Resource *, unsigned int, void *, void *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGIIndirectSwapChain@@QEAA@XZ
    ~CDXGIIndirectSwapChain();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDXGIIndirectSwapChain@@AEAAXPEBU_SECURITY_ATTRIBUTES@@KPEBGKPEAPEAUIDXGIResource@@PEAXPEAPEAUID3D12Resource@@@Z
    void Create(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, unsigned long, IDXGIResource * *, void *, ID3D12Resource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesDeviceSupportWddm2@CDXGIIndirectSwapChain@@AEAA_NXZ
    bool DoesDeviceSupportWddm2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextureTableSize@CDXGIIndirectSwapChain@@AEAAJI_N@Z
    long EnsureTextureTableSize(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTableSlot@CDXGIIndirectSwapChain@@AEAA_NPEAUIDXGIResource@@PEAI@Z
    bool FindTableSlot(IDXGIResource *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTableSlot12@CDXGIIndirectSwapChain@@AEAA_NPEAUID3D12Resource@@PEAI@Z
    bool FindTableSlot12(ID3D12Resource *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushDevice@CDXGIIndirectSwapChain@@AEAAXXZ
    void FlushDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeTableSlot@CDXGIIndirectSwapChain@@AEAAXI@Z
    void FreeTableSlot(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HResultFromNT@CDXGIIndirectSwapChain@@CAJJ@Z
    static long HResultFromNT(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitThunks@CDXGIIndirectSwapChain@@AEAAJXZ
    long InitThunks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNonSequenceConsumer@CDXGIIndirectSwapChain@@AEAA_NXZ
    bool IsNonSequenceConsumer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CDXGIIndirectSwapChain@@AEAAXPEAXKHPEBG0K@Z
    void Open(void *, unsigned long, int, unsigned short const *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAcquire@CDXGIIndirectSwapChain@@AEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAIPEAPEAUIDXGIResource@@PEAPEAUID3D12Resource@@PEAPEAUID3D12Fence@@PEA_K5@Z
    long ProcessAcquire(_D3DKMT_ACQUIRESWAPCHAIN *, unsigned int *, IDXGIResource * *, ID3D12Resource * *, ID3D12Fence * *, uint64_t *, uint64_t *);
};
