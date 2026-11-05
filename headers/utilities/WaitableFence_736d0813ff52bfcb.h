#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
namespace RenderPassDx12 {
class WaitableFence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@WaitableFence@RenderPassDx12@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WaitableFence@RenderPassDx12@@QEAAJPEAUID3D12Device4@@@Z
    long Initialize(ID3D12Device4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalFence@WaitableFence@RenderPassDx12@@QEAAJPEAUID3D12CommandQueue@@@Z
    long SignalFence(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFence@WaitableFence@RenderPassDx12@@QEAAJXZ
    long WaitForFence();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WaitableFence@RenderPassDx12@@QEAA@XZ
    ~WaitableFence();
};
} // namespace RenderPassDx12
