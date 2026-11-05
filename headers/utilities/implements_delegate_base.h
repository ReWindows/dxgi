#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
namespace winrt::impl {
class implements_delegate_base {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ
    unsigned int decrement_reference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ
    unsigned int increment_reference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z
    unsigned int query_interface(WindissectOpaque const &, void * *, WindissectOpaque *, WindissectOpaque const &);
};
} // namespace winrt::impl
