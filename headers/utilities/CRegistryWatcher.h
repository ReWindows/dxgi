#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
class CRegistryWatcher {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDWORDWatch@CRegistryWatcher@@QEAAJPEAUHKEY__@@PEBD1_NP6AX2KPEAX@Z3@Z
    long SetDWORDWatch(HKEY__*, char const *, char const *, bool, void ( *)(bool, unsigned long, void *), void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRegistryWatcher@@QEAA@XZ
    ~CRegistryWatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CRegistryWatcher@@AEAAXXZ
    void Cleanup();
};
