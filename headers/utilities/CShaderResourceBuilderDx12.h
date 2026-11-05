#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
namespace RenderPassDx12 {
class CShaderResourceBuilderDx12 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CShaderResourceBuilderDx12@RenderPassDx12@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShaderResourceForNode@CShaderResourceBuilderDx12@RenderPassDx12@@QEAAJPEAUID3D12CommandQueue@@@Z
    long EnsureShaderResourceForNode(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CShaderResourceBuilderDx12@RenderPassDx12@@QEAAJPEAUID3D12Device4@@PEAUID3D12CommandQueue@@@Z
    long Initialize(ID3D12Device4*, ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShaderResource@CShaderResourceBuilderDx12@RenderPassDx12@@QEAAX_NPEBUHDRConvertCb@@@Z
    void UpdateShaderResource(bool, HDRConvertCb const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShaderResourceBuilderDx12@RenderPassDx12@@QEAA@XZ
    ~CShaderResourceBuilderDx12();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create3DLutResource@CShaderResourceBuilderDx12@RenderPassDx12@@AEAAJI@Z
    long Create3DLutResource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConstantBuffer@CShaderResourceBuilderDx12@RenderPassDx12@@AEAAJI@Z
    long CreateConstantBuffer(unsigned int);
};
} // namespace RenderPassDx12
