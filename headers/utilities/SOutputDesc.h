#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
class SOutputDesc {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SOutputDesc@@QEAA@PEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@_N1@Z
    SOutputDesc(_DISPLAYCONFIG_GET_DISPLAY_INFO *, bool, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SOutputDesc@@QEAA@IAEBU_DISPLAY_DEVICEW@@_N@Z
    SOutputDesc(unsigned int, _DISPLAY_DEVICEW const &, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SOutputDesc@@QEAA@IPEBG_N1@Z
    SOutputDesc(unsigned int, unsigned short const *, bool, bool);
};
