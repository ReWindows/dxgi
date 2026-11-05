#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 6 member(s).
class CDXGISwapChainApplicationClass {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySwapChainCreationStateFullScreen@CDXGISwapChainApplicationClass@@UEAAJPEAUDXGI_SWAP_CHAIN_DESC_INTERNAL@@@Z
    virtual long ApplySwapChainCreationStateFullScreen(DXGI_SWAP_CHAIN_DESC_INTERNAL *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGISwapChainApplicationClass@@QEAA@AEBUTConstructorArgs@CDXGISwapChain@@PEAUILockOwner@@@Z
    CDXGISwapChainApplicationClass(WindissectOpaque const &, ILockOwner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CDXGISwapChainApplicationClass@@QEAAXAEBUTConstructorArgs@CDXGISwapChain@@@Z
    void FinalConstruct(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControllingUnknown@CDXGISwapChainApplicationClass@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * GetControllingUnknown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalQueryInterface@CDXGISwapChainApplicationClass@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long _InternalQueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGISwapChainApplicationClass@@QEAA@XZ
    ~CDXGISwapChainApplicationClass();
};
