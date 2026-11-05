#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class CSourceBitsExistingDXGISurface {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CSourceBitsExistingDXGISurface@@UEAAXPEAUDXGI_SURFACE_DESC@@@Z
    virtual void GetDesc(DXGI_SURFACE_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CSourceBitsExistingDXGISurface@@UEAAXIPEAUDXGI_MAPPED_RECT@@@Z
    virtual void Map(unsigned int, DXGI_MAPPED_RECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotation@CSourceBitsExistingDXGISurface@@UEAA?AW4DXGI_MODE_ROTATION@@XZ
    virtual int Rotation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CSourceBitsExistingDXGISurface@@UEAAXXZ
    virtual void Unmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSourceBitsExistingDXGISurface@@UEAA@XZ
    virtual ~CSourceBitsExistingDXGISurface();
};
