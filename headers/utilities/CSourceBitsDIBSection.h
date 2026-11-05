#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class CSourceBitsDIBSection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSourceBitsDIBSection@@QEAA@AEBUDXGI_SURFACE_DESC@@PEAPEAUHDC__@@@Z
    CSourceBitsDIBSection(DXGI_SURFACE_DESC const &, HDC__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CSourceBitsDIBSection@@UEAAXPEAUDXGI_SURFACE_DESC@@@Z
    virtual void GetDesc(DXGI_SURFACE_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CSourceBitsDIBSection@@UEAAXIPEAUDXGI_MAPPED_RECT@@@Z
    virtual void Map(unsigned int, DXGI_MAPPED_RECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CSourceBitsDIBSection@@UEAAXXZ
    virtual void Unmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSourceBitsDIBSection@@UEAA@XZ
    virtual ~CSourceBitsDIBSection();
};
