#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 6 member(s).
namespace SREffectRenderPassDx12 {
class WaitableFence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@WaitableFence@SREffectRenderPassDx12@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WaitableFence@SREffectRenderPassDx12@@QEAAJPEAUID3D12Device4@@@Z
    long Initialize(ID3D12Device4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalFence@WaitableFence@SREffectRenderPassDx12@@QEAAJPEAUID3D12CommandQueue@@@Z
    long SignalFence(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitOnCPU@WaitableFence@SREffectRenderPassDx12@@QEAAJAEB_K@Z
    long WaitOnCPU(uint64_t const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitOnGPU@WaitableFence@SREffectRenderPassDx12@@QEAAJPEAUID3D12CommandQueue@@@Z
    long WaitOnGPU(ID3D12CommandQueue *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WaitableFence@SREffectRenderPassDx12@@QEAA@XZ
    ~WaitableFence();
};
} // namespace SREffectRenderPassDx12
