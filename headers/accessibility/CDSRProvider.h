#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
namespace SREffectRenderPassDx12 {
class CDSRProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDSRDevice@CDSRProvider@SREffectRenderPassDx12@@QEAAJAEBU_LUID@@PEAUID3D12Device@@PEAPEAUIDSRDevice@@@Z
    long GetDSRDevice(_LUID const &, ID3D12Device *, IDSRDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSRDesc@CDSRProvider@SREffectRenderPassDx12@@QEAAJPEAUIDSRDevice@@AEBUSRSwapChainInfo@2@PEAUDSR_SUPERRES_VARIANT_DESC_INTERNAL@@PEA_N@Z
    long GetSRDesc(IDSRDevice *, ::SREffectRenderPassDx12::SRSwapChainInfo const &, DSR_SUPERRES_VARIANT_DESC_INTERNAL *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectVariant@CDSRProvider@SREffectRenderPassDx12@@QEAA_NAEBUSRSwapChainInfo@2@AEBUDSR_SUPERRES_VARIANT_DESC_INTERNAL@@AEBUDSR_SIZE@@W4DXGI_FORMAT@@W4DXGI_EFFECT_QUALITY_MODE@@PEAU4@@Z
    bool SelectVariant(::SREffectRenderPassDx12::SRSwapChainInfo const &, DSR_SUPERRES_VARIANT_DESC_INTERNAL const &, DSR_SIZE const &, int, int, DSR_SUPERRES_VARIANT_DESC_INTERNAL *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDSRProvider@SREffectRenderPassDx12@@QEAA@XZ
    ~CDSRProvider();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDSRProvider@SREffectRenderPassDx12@@IEAA@XZ
    CDSRProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheExtensionDllPath@CDSRProvider@SREffectRenderPassDx12@@IEAAXXZ
    void CacheExtensionDllPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheVariantInfo@CDSRProvider@SREffectRenderPassDx12@@IEAAJPEAUIDSRDevice@@@Z
    long CacheVariantInfo(IDSRDevice *);
};
} // namespace SREffectRenderPassDx12
