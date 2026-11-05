#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
namespace ATL {
class CComObjectRootBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OuterAddRef@CComObjectRootBase@ATL@@QEAAKXZ
    unsigned long OuterAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OuterRelease@CComObjectRootBase@ATL@@QEAAKXZ
    unsigned long OuterRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Break@CComObjectRootBase@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long _Break(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Chain@CComObjectRootBase@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long _Chain(void *, _GUID const &, void * *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Delegate@CComObjectRootBase@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX_K@Z
    static long _Delegate(void *, _GUID const &, void * *, uint64_t);
};
} // namespace ATL
