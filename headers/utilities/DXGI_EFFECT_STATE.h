#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
class DXGI_EFFECT_STATE {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectTypeDxDbMode@DXGI_EFFECT_STATE@@QEAA?AW4DXGI_EFFECT_MODE@@E@Z
    int GetEffectTypeDxDbMode(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectTypeUserMode@DXGI_EFFECT_STATE@@QEAA?AW4DXGI_EFFECT_MODE@@E@Z
    int GetEffectTypeUserMode(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffectTypeUserMode@DXGI_EFFECT_STATE@@QEAAXEW4DXGI_EFFECT_MODE@@@Z
    void SetEffectTypeUserMode(unsigned char, int);
};
