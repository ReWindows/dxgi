#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
class CDDI_PRIMARY_DESC {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDDI_PRIMARY_DESC@@QEAA@IAEBUDXGI_MODE_DESC1@@W4DXGI_MODE_ROTATION@@I@Z
    CDDI_PRIMARY_DESC(unsigned int, DXGI_MODE_DESC1const &, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?flip_compatible@CDDI_PRIMARY_DESC@@QEBA_NAEBV1@@Z
    bool flip_compatible(CDDI_PRIMARY_DESC const &) const;
};
