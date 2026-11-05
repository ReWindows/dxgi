#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
class float16 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@float16@@SA?AV1@PEBM@Z
    static float16 make(float const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?toFloat32_AsUINT32Bits@float16@@QEBAIXZ
    unsigned int toFloat32_AsUINT32Bits() const;
};
