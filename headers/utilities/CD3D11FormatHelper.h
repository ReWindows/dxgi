#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
class CD3D11FormatHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatExists@CD3D11FormatHelper@@SA_NW4DXGI_FORMAT@@W4D3D_FEATURE_LEVEL@@W4eExtendedFormatFeatures@1@@Z
    static bool FormatExists(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CD3D11FormatHelper@@SAPEBDW4DXGI_FORMAT@@_N@Z
    static char const * GetName(int, bool);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailTableIndexThrow@CD3D11FormatHelper@@KAIW4DXGI_FORMAT@@@Z
    static unsigned int GetDetailTableIndexThrow(int);
};
