#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 4 member(s).
class CPrivateData {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrivateData@@QEAA@AEBV0@@Z
    CPrivateData(CPrivateData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Retrieve@CPrivateData@@QEBAXPEAX@Z
    void Retrieve(void *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrivateData@@QEAA@XZ
    ~CPrivateData();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CPrivateData@@IEAAXPEBXII@Z
    void Set(void const *, unsigned int, unsigned int);
};
