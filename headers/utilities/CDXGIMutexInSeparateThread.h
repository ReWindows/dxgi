#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 4 member(s).
class CDXGIMutexInSeparateThread {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyMutex@CDXGIMutexInSeparateThread@@QEAAXXZ
    void DestroyMutex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitMutex@CDXGIMutexInSeparateThread@@QEAAJPEBG@Z
    long InitMutex(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGIMutexInSeparateThread@@QEAA@XZ
    ~CDXGIMutexInSeparateThread();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCommand@CDXGIMutexInSeparateThread@@MEAAJW4MUTEX_COMMANDS@@@Z
    virtual long ProcessCommand(int);
};
