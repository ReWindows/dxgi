#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 18 member(s).
class CSREffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSREffect@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSREffect@@QEAA@_N@Z
    CSREffect(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CSREffect@@UEAAJPEBUDXGI_EFFECT_EXECUTE_PARAMS@@@Z
    virtual long Execute(DXGI_EFFECT_EXECUTE_PARAMS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CSREffect@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CSREffect@@UEAA?AUDXGI_EFFECT_DESC@@XZ
    virtual DXGI_EFFECT_DESC GetDesc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSREffect@@UEAAJQEAX_KPEAX1@Z
    virtual long Initialize(void * const, uint64_t, void *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPassthrough@CSREffect@@UEAAHXZ
    virtual int IsPassthrough();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSREffect@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSREffect@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSREffect@@UEAAXXZ
    virtual void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPassthrough@CSREffect@@UEAAJH@Z
    virtual long SetPassthrough(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSREffect@@QEAA@XZ
    ~CSREffect();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CSREffect@@AEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapshotModeRequestState@CSREffect@@AEAA?AUSRModeRequest@@XZ
    SRModeRequest SnapshotModeRequestState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConfig@CSREffect@@AEAAXUDXGI_EFFECT_CONFIG@@@Z
    void UpdateConfig(DXGI_EFFECT_CONFIG);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGlobalModeRequestState@CSREffect@@AEAAX_N@Z
    void UpdateGlobalModeRequestState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePerAppModeRequestState@CSREffect@@AEAAXW4DXGI_EFFECT_QUALITY_MODE@@@Z
    void UpdatePerAppModeRequestState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatusCB@CSREffect@@AEAAJPEAUIUnknown@@0@Z
    long UpdateStatusCB(IUnknown *, IUnknown *);
};
