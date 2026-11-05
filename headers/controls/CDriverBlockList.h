#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class CDriverBlockList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDriverBlockList@@QEAA@XZ
    CDriverBlockList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdapterBlocked@CDriverBlockList@@QEAA_NAEBUSAdapterDesc@@PEAPEAX@Z
    bool IsAdapterBlocked(SAdapterDesc const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDriverBlockList@@QEAA@XZ
    ~CDriverBlockList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateBlockListAdapterString@CDriverBlockList@@AEBAXAEBUSAdapterDesc@@_NPEAG_K@Z
    void GenerateBlockListAdapterString(SAdapterDesc const &, bool, unsigned short *, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAdapterDriverVersionBlocked@CDriverBlockList@@AEBA_NAEBUSAdapterDesc@@PEAX@Z
    bool IsAdapterDriverVersionBlocked(SAdapterDesc const &, void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDriverVersionInBlockListVersionString@CDriverBlockList@@AEBA_N_KPEBG@Z
    bool IsDriverVersionInBlockListVersionString(uint64_t, unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryBlockListDatabase@CDriverBlockList@@AEBA_NPEBGQEAGPEAKPEAX@Z
    bool QueryBlockListDatabase(unsigned short const *, unsigned short * const, unsigned long *, void *) const;
};
