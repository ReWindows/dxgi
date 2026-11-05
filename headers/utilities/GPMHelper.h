#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
class GPMHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdempotentInitialze@GPMHelper@@QEAAXXZ
    void IdempotentInitialze();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceInfo@GPMHelper@@AEAAJPEAUGPMServiceInfo@@PEAD@Z
    long GetServiceInfo(GPMServiceInfo *, char *);
};
