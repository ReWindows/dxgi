#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 4 member(s).
class StereoModuleData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeInit@StereoModuleData@@QEAAXXZ
    void DeInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvalAvailability@StereoModuleData@@QEAAXXZ
    void EvalAvailability();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@StereoModuleData@@QEAAXPEA_N0@Z
    void Init(bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStereoEnabledInternal@StereoModuleData@@SA_NXZ
    static bool IsStereoEnabledInternal();
};
