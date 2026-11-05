#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 11 member(s).
namespace SREffectRenderPassDx12 {
class CShaderRenderPass {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderRenderPass@SREffectRenderPassDx12@@QEAA@XZ
    CShaderRenderPass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CShaderRenderPass@SREffectRenderPassDx12@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CShaderRenderPass@SREffectRenderPassDx12@@QEAAJPEBUDXGI_EFFECT_EXECUTE_PARAMS@@I@Z
    long Execute(DXGI_EFFECT_EXECUTE_PARAMS const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderRenderPass@SREffectRenderPassDx12@@QEAA@XZ
    ~CShaderRenderPass();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCBSRDescriptor@CShaderRenderPass@SREffectRenderPassDx12@@AEAAJXZ
    long CreateCBSRDescriptor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetDescriptor@CShaderRenderPass@SREffectRenderPassDx12@@AEAAJXZ
    long CreateRenderTargetDescriptor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderResourceForNode@CShaderRenderPass@SREffectRenderPassDx12@@AEAAJPEAUID3D12CommandQueue@@PEAPEAUID3D12GraphicsCommandList@@PEAPEAUID3D12DescriptorHeap@@2@Z
    long EnsureRenderResourceForNode(ID3D12CommandQueue *, ID3D12GraphicsCommandList * *, ID3D12DescriptorHeap * *, ID3D12DescriptorHeap * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentOverlay@CShaderRenderPass@SREffectRenderPassDx12@@AEAAPEBUDDSData@@XZ
    DDSData const * GetCurrentOverlay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogOnceRenderMode@CShaderRenderPass@SREffectRenderPassDx12@@AEAAXW4AUTOSR_RENDER_MODE@2@@Z
    void LogOnceRenderMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishModeRequest@CShaderRenderPass@SREffectRenderPassDx12@@AEAA_NPEAUID3D12Resource@@AEAUDIRECTSR_EXT_MODE_REQUEST@@@Z
    bool PublishModeRequest(ID3D12Resource *, DIRECTSR_EXT_MODE_REQUEST &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadModeSwitchResult@CShaderRenderPass@SREffectRenderPassDx12@@AEAAXPEAUID3D12Resource@@AEBUDIRECTSR_EXT_MODE_REQUEST@@@Z
    void ReadModeSwitchResult(ID3D12Resource *, DIRECTSR_EXT_MODE_REQUEST const &);
};
} // namespace SREffectRenderPassDx12
