#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 13 member(s).
namespace SREffectRenderPassDx12 {
class CShaderResourceBuilder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShaderResourceBuilder@SREffectRenderPassDx12@@QEAA@XZ
    CShaderResourceBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputResNoRef@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAJIIPEAPEAUID3D12Resource@@@Z
    long GetInputResNoRef(unsigned int, unsigned int, ID3D12Resource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputResNoRef@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAJIIPEAPEAUID3D12Resource@@@Z
    long GetOutputResNoRef(unsigned int, unsigned int, ID3D12Resource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayResNoRef@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAJPEBUDDSData@@PEAUID3D12GraphicsCommandList@@PEAPEAUID3D12Resource@@@Z
    long GetOverlayResNoRef(DDSData const *, ID3D12GraphicsCommandList *, ID3D12Resource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPassthroughSdrRtNoRef@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAJIIPEAPEAUID3D12Resource@@@Z
    long GetPassthroughSdrRtNoRef(unsigned int, unsigned int, ID3D12Resource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSrcFormatIntNoRef@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAJIIPEAPEAUID3D12Resource@@@Z
    long GetSrcFormatIntNoRef(unsigned int, unsigned int, ID3D12Resource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAJPEAUID3D12Device4@@PEAUID3D12CommandQueue@@PEAXW4DXGI_FORMAT@@3IAEBUDSR_SIZE@@44@Z
    long Initialize(ID3D12Device4*, ID3D12CommandQueue *, void *, int, int, unsigned int, DSR_SIZE const &, DSR_SIZE const &, DSR_SIZE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShaderResource@CShaderResourceBuilder@SREffectRenderPassDx12@@QEAAXPEBUSRConstantBuffer@@@Z
    void UpdateShaderResource(SRConstantBuffer const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderResourceBuilder@SREffectRenderPassDx12@@QEAA@XZ
    ~CShaderResourceBuilder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOverlayResource@CShaderResourceBuilder@SREffectRenderPassDx12@@AEAAJXZ
    long CreateOverlayResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResources@CShaderResourceBuilder@SREffectRenderPassDx12@@AEAAJI@Z
    long CreateResources(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSysMemHeapAndResource@CShaderResourceBuilder@SREffectRenderPassDx12@@AEAAJPEAUID3D12Device4@@HHW4DXGI_FORMAT@@_NPEAPEAUID3D12Resource@@@Z
    long MakeSysMemHeapAndResource(ID3D12Device4*, int, int, int, bool, ID3D12Resource * *);
};
} // namespace SREffectRenderPassDx12
