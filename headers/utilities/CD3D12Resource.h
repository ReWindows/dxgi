#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 33 member(s).
class CD3D12Resource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Acquire@CD3D12Resource@@QEAAXXZ
    void Acquire();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD3D12Resource@@QEAA@AEBUTConstructorArgs@0@PEAUILockOwner@@@Z
    CD3D12Resource(WindissectOpaque const &, ILockOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastFrom@CD3D12Resource@@SAPEAV1@PEAUIDXGIResource@@@Z
    static CD3D12Resource * CastFrom(IDXGIResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandle@CD3D12Resource@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandle(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedHandleInternal@CD3D12Resource@@UEAAJPEBU_SECURITY_ATTRIBUTES@@KPEBGPEAPEAX@Z
    virtual long CreateSharedHandleInternal(_SECURITY_ATTRIBUTES const *, unsigned long, unsigned short const *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?CreateSubresourceSurface@CD3D12Resource@@UEAAJIPEAPEAUIDXGISurface2@@@Z
    virtual long CreateSubresourceSurface(unsigned int, IDXGISurface2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDDIHandle@CD3D12Resource@@UEAAJPEAPEAX@Z
    virtual long GetDDIHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CD3D12Resource@@QEAA?AUD3D12_RESOURCE_DESC@@XZ
    D3D12_RESOURCE_DESC GetDesc();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CD3D12Resource@@UEAAJPEAUDXGI_SURFACE_DESC@@@Z
    virtual long GetDesc(DXGI_SURFACE_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CD3D12Resource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetDevice(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvictionPriority@CD3D12Resource@@UEAAJPEAI@Z
    virtual long GetEvictionPriority(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CD3D12Resource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetPrimaryDesc@CD3D12Resource@@UEAAJPEAXPEA_K@Z
    virtual long GetPrimaryDesc(void *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateData@CD3D12Resource@@UEAAJAEBU_GUID@@PEAIPEAX@Z
    virtual long GetPrivateData(_GUID const &, unsigned int *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandle@CD3D12Resource@@UEAAJPEAPEAX@Z
    virtual long GetSharedHandle(void * *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetSharedHandleInternal@CD3D12Resource@@UEAAPEAXXZ
    virtual void * GetSharedHandleInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsage@CD3D12Resource@@UEAAJPEAI@Z
    virtual long GetUsage(unsigned int *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDCOutstanding@CD3D12Resource@@UEAAHXZ
    virtual int IsDCOutstanding();
    // Category: Method | Source: PE Export
    // Symbol: ?Map@CD3D12Resource@@UEAAJPEAUDXGI_MAPPED_RECT@@I@Z
    virtual long Map(DXGI_MAPPED_RECT *, unsigned int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetEvictionPriority@CD3D12Resource@@UEAAJI@Z
    virtual long SetEvictionPriority(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateData@CD3D12Resource@@UEAAJAEBU_GUID@@IPEBX@Z
    virtual long SetPrivateData(_GUID const &, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateDataInterface@CD3D12Resource@@UEAAJAEBU_GUID@@PEBUIUnknown@@@Z
    virtual long SetPrivateDataInterface(_GUID const &, IUnknown const *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetSwapChainInternal@CD3D12Resource@@UEAAJPEAUIDXGISwapChainInternal@@@Z
    virtual long SetSwapChainInternal(IDXGISwapChainInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCBreakCyclicReferences@CD3D12Resource@@UEAAXXZ
    virtual void UCBreakCyclicReferences();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UCEstablishCyclicReferences@CD3D12Resource@@UEAAXXZ
    virtual void UCEstablishCyclicReferences();
    // Category: Method | Source: PE Export
    // Symbol: ?Unmap@CD3D12Resource@@UEAAJXZ
    virtual long Unmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalQueryInterface@CD3D12Resource@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long _InternalQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD3D12Resource@@QEAA@XZ
    ~CD3D12Resource();
};
