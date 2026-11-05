#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
namespace SREffectRenderPassDx12 {
class CGrfxPipelineState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CGrfxPipelineState@SREffectRenderPassDx12@@QEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGrfxPipelineState@SREffectRenderPassDx12@@QEAAJPEAUID3D12Device4@@W4DXGI_FORMAT@@IPEBUD3D12_STATIC_SAMPLER_DESC@@_KPEBE34AEAUDIRECTSR_EXT_EXTENDED_DESC@@@Z
    long Initialize(ID3D12Device4*, int, unsigned int, D3D12_STATIC_SAMPLER_DESC const *, uint64_t, unsigned char const *, uint64_t, unsigned char const *, DIRECTSR_EXT_EXTENDED_DESC &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGrfxPipelineState@SREffectRenderPassDx12@@QEAA@XZ
    ~CGrfxPipelineState();
};
} // namespace SREffectRenderPassDx12
