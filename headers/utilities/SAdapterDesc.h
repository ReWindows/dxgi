#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 8 member(s).
class SAdapterDesc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Class@SAdapterDesc@@QEBA?AW4ADAPTER_CLASS@@XZ
    int Class() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSoftware@SAdapterDesc@@QEBA_NXZ
    bool IsSoftware() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SAdapterDesc@@QEAA@AEBU0@@Z
    SAdapterDesc(SAdapterDesc const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SAdapterDesc@@QEAA@PEAU_D3DKMT_ADAPTERINFO@@AEBUUserPreferredAdapterId@@_NP6AJPEBU_D3DKMT_QUERYADAPTERINFO@@@ZP6AJPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@ZKK@Z
    SAdapterDesc(_D3DKMT_ADAPTERINFO *, UserPreferredAdapterId const &, bool, long ( *)(_D3DKMT_QUERYADAPTERINFO const *), long ( *)(_D3DKMT_QUERYVIDEOMEMORYINFO *), unsigned long, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SAdapterDesc@@QEAA@$$QEAU0@@Z
    SAdapterDesc(SAdapterDesc &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SAdapterDesc@@QEAA@XZ
    ~SAdapterDesc();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillInDesc@SAdapterDesc@@AEAAXAEBU_DISPLAYCONFIG_GET_DISPLAY_INFO@@AEBU_D3DKMT_ADAPTERINFO@@P6AJPEBU_D3DKMT_QUERYADAPTERINFO@@@ZP6AJPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z@Z
    void FillInDesc(_DISPLAYCONFIG_GET_DISPLAY_INFO const &, _D3DKMT_ADAPTERINFO const &, long ( *)(_D3DKMT_QUERYADAPTERINFO const *), long ( *)(_D3DKMT_QUERYVIDEOMEMORYINFO *));
};
