#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 4 member(s).
namespace CDXGISwapChain {
class ProxyFlipInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProxyFlipInfo@CDXGISwapChain@@QEAA@XZ
    ProxyFlipInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferDesc@ProxyFlipInfo@CDXGISwapChain@@QEAAXAEBUBACK_BUFFER_DESC@@@Z
    void SetBufferDesc(BACK_BUFFER_DESC const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryDesc@ProxyFlipInfo@CDXGISwapChain@@QEAAXPEBVCDDI_PRIMARY_DESC@@@Z
    void SetPrimaryDesc(CDDI_PRIMARY_DESC const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProxyFlipInfo@CDXGISwapChain@@QEAA@XZ
    ~ProxyFlipInfo();
};
} // namespace CDXGISwapChain
