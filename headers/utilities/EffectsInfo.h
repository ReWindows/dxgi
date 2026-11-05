#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 11 member(s).
namespace CDXGISwapChain {
class EffectsInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@EffectsInfo@CDXGISwapChain@@QEAAXXZ
    void Cleanup();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectsInfo@CDXGISwapChain@@QEAA@XZ
    EffectsInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInternalQueue@EffectsInfo@CDXGISwapChain@@QEAAJPEAVCD3D12Device@@@Z
    long EnsureInternalQueue(CD3D12Device *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnabledMask@EffectsInfo@CDXGISwapChain@@QEBAIXZ
    unsigned int GetEnabledMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@EffectsInfo@CDXGISwapChain@@QEBA?AW4DXGI_EFFECT_TYPE@@XZ
    int GetType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPassthrough@EffectsInfo@CDXGISwapChain@@QEBA_NXZ
    bool IsPassthrough() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueNotification@EffectsInfo@CDXGISwapChain@@QEAAXK@Z
    void QueueNotification(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@EffectsInfo@CDXGISwapChain@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Signal12@EffectsInfo@CDXGISwapChain@@QEAAXPEAUID3D12CommandQueue@@@Z
    void Signal12(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForIdle@EffectsInfo@CDXGISwapChain@@QEAAXXZ
    void WaitForIdle();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EffectsInfo@CDXGISwapChain@@QEAA@XZ
    ~EffectsInfo();
};
} // namespace CDXGISwapChain
