#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
class SREffect {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@SREffect@@YAJIQEAX_KPEAX1@Z
    long CheckSupport(unsigned int, void * const, uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffect@SREffect@@YAJIPEAPEAUISwapChainEffect@@@Z
    long CreateEffect(unsigned int, ISwapChainEffect * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualityMode@SREffect@@YAJPEAUISwapChainEffect@@W4DXGI_EFFECT_QUALITY_MODE@@@Z
    long SetQualityMode(ISwapChainEffect *, int);
};
