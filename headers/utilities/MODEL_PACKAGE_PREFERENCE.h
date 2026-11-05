#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
class MODEL_PACKAGE_PREFERENCE {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModelVersionSatisfied@MODEL_PACKAGE_PREFERENCE@@QEAA_NAEBU_GUID@@AEBI@Z
    bool IsModelVersionSatisfied(_GUID const &, unsigned int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageVersionSatisfied@MODEL_PACKAGE_PREFERENCE@@QEAA_NGGG@Z
    bool IsPackageVersionSatisfied(unsigned short, unsigned short, unsigned short);
};
