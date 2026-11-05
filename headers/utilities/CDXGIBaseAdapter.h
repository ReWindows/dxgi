#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 22 member(s).
class CDXGIBaseAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGIBaseAdapter@@QEAA@XZ
    CDXGIBaseAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillOutThunks@CDXGIBaseAdapter@@QEBA?AUDXGI_THUNKS_WIN9@@W4DXGI_THUNKS_VERSION@@@Z
    DXGI_THUNKS_WIN9 FillOutThunks(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDXGIBaseAdapter@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdapterCapabilities@CDXGIBaseAdapter@@UEAAXPEAUDXGI_ADAPTER_CAPABILITIES@@@Z
    virtual void GetAdapterCapabilities(DXGI_ADAPTER_CAPABILITIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDXGIBaseAdapter@@UEAAJPEAUDXGI_ADAPTER_DESC@@@Z
    virtual long GetDesc(DXGI_ADAPTER_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDXGIBaseAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryVidPnSourceId@CDXGIBaseAdapter@@UEAAIXZ
    virtual unsigned int GetPrimaryVidPnSourceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUMDDeviceSize@CDXGIBaseAdapter@@UEAA_KIII@Z
    virtual uint64_t GetUMDDeviceSize(unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUMDFileNameInfo@CDXGIBaseAdapter@@QEAAJW4_KMTUMDVERSION@@_NPEAU_D3DKMT_UMDFILENAMEINFO@@@Z
    long GetUMDFileNameInfo(int, bool, _D3DKMT_UMDFILENAMEINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUMDVersion@CDXGIBaseAdapter@@SA?AT_LARGE_INTEGER@@QEAG@Z
    static _LARGE_INTEGER GetUMDVersion(unsigned short * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstanceThunks@CDXGIBaseAdapter@@UEAAJW4DXGI_THUNKS_VERSION@@PEAIIPEAX@Z
    virtual long InstanceThunks(int, unsigned int *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetAdapterDesc@CDXGIBaseAdapter@@QEAAAEBUSAdapterDesc@@XZ
    SAdapterDesc const & InternalGetAdapterDesc();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDriverUpdateInProgress@CDXGIBaseAdapter@@QEAAJAEA_N@Z
    long IsDriverUpdateInProgress(bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLda@CDXGIBaseAdapter@@UEAA_NXZ
    virtual bool IsLda();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWARP@CDXGIBaseAdapter@@UEAA_NXZ
    virtual bool IsWARP();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadUMD@CDXGIBaseAdapter@@UEAAJW4_KMTUMDVERSION@@PEAPEAUHINSTANCE__@@@Z
    virtual long LoadUMD(int, HINSTANCE__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MismatchedVendorLda@CDXGIBaseAdapter@@UEAA_NXZ
    virtual bool MismatchedVendorLda();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetireUsage@CDXGIBaseAdapter@@UEAAXI@Z
    virtual void RetireUsage(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdapterCapabilities@CDXGIBaseAdapter@@UEAAXPEAUDXGI_ADAPTER_CAPABILITIES@@@Z
    virtual void SetAdapterCapabilities(DXGI_ADAPTER_CAPABILITIES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WddmVersion@CDXGIBaseAdapter@@UEAA?AW4_QAI_DRIVERVERSION@@XZ
    virtual int WddmVersion();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGIBaseAdapter@@QEAA@XZ
    ~CDXGIBaseAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadThunks@CDXGIBaseAdapter@@IEAA_NXZ
    bool LoadThunks();
};
