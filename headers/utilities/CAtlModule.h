#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
namespace ATL {
class CAtlModule {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGITPtr@CAtlModule@ATL@@UEAAJPEAPEAUIGlobalInterfaceTable@@@Z
    virtual long GetGITPtr(IGlobalInterfaceTable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockCount@CAtlModule@ATL@@UEAAJXZ
    virtual long GetLockCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CAtlModule@ATL@@UEAAJXZ
    virtual long Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CAtlModule@ATL@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAtlModule@ATL@@UEAA@XZ
    virtual ~CAtlModule();
};
} // namespace ATL
