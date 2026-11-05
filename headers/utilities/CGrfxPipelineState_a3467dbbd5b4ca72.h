#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
namespace RenderPassDx12 {
class CGrfxPipelineState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGrfxPipelineState@RenderPassDx12@@QEAAJPEAUID3D12Device4@@W4DXGI_FORMAT@@IPEBUD3D12_STATIC_SAMPLER_DESC@@_KPEBE34@Z
    long Initialize(ID3D12Device4*, int, unsigned int, D3D12_STATIC_SAMPLER_DESC const *, uint64_t, unsigned char const *, uint64_t, unsigned char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGrfxPipelineState@RenderPassDx12@@QEAA@XZ
    ~CGrfxPipelineState();
};
} // namespace RenderPassDx12
