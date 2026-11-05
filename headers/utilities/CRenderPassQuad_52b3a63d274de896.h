#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 6 member(s).
namespace RenderPassDx12 {
class CRenderPassQuad {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CRenderPassQuad@RenderPassDx12@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CRenderPassQuad@RenderPassDx12@@QEAAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@II1@Z
    long Render(ID3D12CommandQueue *, ID3D12Resource *, unsigned int, unsigned int, ID3D12Resource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderPassQuad@RenderPassDx12@@QEAA@XZ
    ~CRenderPassQuad();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCBSRDescriptor@CRenderPassQuad@RenderPassDx12@@AEAAJXZ
    long CreateCBSRDescriptor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetDescriptor@CRenderPassQuad@RenderPassDx12@@AEAAJXZ
    long CreateRenderTargetDescriptor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderResourceForNode@CRenderPassQuad@RenderPassDx12@@AEAAJPEAUID3D12CommandQueue@@PEAPEAUID3D12GraphicsCommandList@@PEAPEAUID3D12DescriptorHeap@@2@Z
    long EnsureRenderResourceForNode(ID3D12CommandQueue *, ID3D12GraphicsCommandList * *, ID3D12DescriptorHeap * *, ID3D12DescriptorHeap * *);
};
} // namespace RenderPassDx12
