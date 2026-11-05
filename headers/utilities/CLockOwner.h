#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class CLockOwner {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLockOwner@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLockOwner@@QEAA@XZ
    CLockOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOEnter@CLockOwner@@UEAAXXZ
    virtual void LOEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOLeave@CLockOwner@@UEAAXXZ
    virtual void LOLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LOTryEnter@CLockOwner@@UEAAHXZ
    virtual int LOTryEnter();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLockOwner@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLockOwner@@UEAAKXZ
    virtual unsigned long Release();
};
