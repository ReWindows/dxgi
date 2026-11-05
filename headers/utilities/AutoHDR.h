#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
class AutoHDR {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@AutoHDR@@YAJIQEAX_KPEAX1@Z
    long CheckSupport(unsigned int, void * const, uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffect@AutoHDR@@YAJIPEAPEAUISwapChainEffect@@@Z
    long CreateEffect(unsigned int, ISwapChainEffect * *);
};
