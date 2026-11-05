#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 4 member(s).
class AutoHRGN {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@AutoHRGN@@QEAAHPEAUHRGN__@@H@Z
    int Combine(HRGN__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@AutoHRGN@@QEAAAEAV1@PEBUtagRECT@@@Z
    AutoHRGN & Set(tagRECT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoHRGN@@QEAA@XZ
    ~AutoHRGN();
};
