#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 6 member(s).
namespace RenderPassDx11 {
class CRenderPassQuad {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CRenderPassQuad@RenderPassDx11@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRenderPassQuad@RenderPassDx11@@QEAAJ_NW4DXGI_FORMAT@@1PEAUID3D11Device1@@_KPEBE34@Z
    long Initialize(bool, int, int, ID3D11Device1*, uint64_t, unsigned char const *, uint64_t, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CRenderPassQuad@RenderPassDx11@@QEAAJPEAUID3D11DeviceContext1@@PEAUID3D11Resource@@II1@Z
    long Render(ID3D11DeviceContext1*, ID3D11Resource *, unsigned int, unsigned int, ID3D11Resource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForAll@CRenderPassQuad@RenderPassDx11@@QEAAJXZ
    long WaitForAll();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderPassQuad@RenderPassDx11@@QEAA@XZ
    ~CRenderPassQuad();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupRenderState@CRenderPassQuad@RenderPassDx11@@AEAAJPEAUID3D11DeviceContext1@@IIPEAPEAUID3DDeviceContextState@@@Z
    long SetupRenderState(ID3D11DeviceContext1*, unsigned int, unsigned int, ID3DDeviceContextState * *);
};
} // namespace RenderPassDx11
