#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 10 member(s).
namespace CLazyModule {
class DCompositionInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompositionInfo@CLazyModule@@QEAA@$$QEAU01@@Z
    DCompositionInfo(WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompositionInfo@CLazyModule@@QEAA@XZ
    DCompositionInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllComposition@DCompositionInfo@CLazyModule@@QEAAXXZ
    void RemoveAllComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveComposition@DCompositionInfo@CLazyModule@@QEAAJ_NPEA_N@Z
    long RemoveComposition(bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateComposition@DCompositionInfo@CLazyModule@@QEAAJPEBVCDXGISwapChain@@PEAUHWND__@@PEAUIUnknown@@@Z
    long UpdateComposition(CDXGISwapChain const *, HWND__*, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompositionInfo@CLazyModule@@QEAA@XZ
    ~DCompositionInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureRelativeSize@DCompositionInfo@CLazyModule@@CAJPEAUIVisual@Composition@UI@Windows@@@Z
    static long ConfigureRelativeSize(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySprite@DCompositionInfo@CLazyModule@@AEAAX_N@Z
    void DestroySprite(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSprite@DCompositionInfo@CLazyModule@@AEAAJ_N@Z
    long EnsureSprite(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@DCompositionInfo@CLazyModule@@AEAAJPEBVCDXGISwapChain@@@Z
    long SetSwapChain(CDXGISwapChain const *);
};
} // namespace CLazyModule
