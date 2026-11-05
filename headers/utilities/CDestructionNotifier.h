#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
class CDestructionNotifier {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDestructionNotifier@@QEAA@XZ
    CDestructionNotifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CDestructionNotifier@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDestructionCallback@CDestructionNotifier@@UEAAJP6AXPEAX@Z0PEAI@Z
    virtual long RegisterDestructionCallback(void ( *)(void *), void *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDestructionCallback@CDestructionNotifier@@UEAAJI@Z
    virtual long UnregisterDestructionCallback(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDestructionNotifier@@QEAA@XZ
    ~CDestructionNotifier();
};
