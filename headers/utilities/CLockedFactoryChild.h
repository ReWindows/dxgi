#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
class CLockedFactoryChild {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLock@CLockedFactoryChild@@UEAAXXZ
    virtual void ReleaseLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeLock@CLockedFactoryChild@@UEAAXXZ
    virtual void TakeLock();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectFromDebug@CLockedFactoryChild@@IEAAXXZ
    void RemoveObjectFromDebug();
};
