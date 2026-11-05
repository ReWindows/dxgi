#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 5 member(s).
namespace CDXGISwapChain {
class CPrepWin32Sentinel {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPrepWin32Sentinel@CDXGISwapChain@@QEAA@PEAV1@PEAVCDXGIOutput@@PEBUDXGI_MODE_DESC1@@PEAUCDXGIEnumeratedMode@@II_N@Z
    CPrepWin32Sentinel(CDXGISwapChain *, CDXGIOutput *, DXGI_MODE_DESC1const *, CDXGIEnumeratedMode *, unsigned int, unsigned int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrepWin32Sentinel@CDXGISwapChain@@QEAA@XZ
    ~CPrepWin32Sentinel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepUser@CPrepWin32Sentinel@CDXGISwapChain@@AEAAJAEBUDXGI_OUTPUT_DESC@@PEBVCDXGIModeDesc@@@Z
    long PrepUser(DXGI_OUTPUT_DESC const &, CDXGIModeDesc const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepWin32AndReturnAddRefedOutput@CPrepWin32Sentinel@CDXGISwapChain@@AEAAXPEAVCDXGIOutput@@PEBUDXGI_MODE_DESC1@@PEAUCDXGIEnumeratedMode@@II_NPEAPEAV3@@Z
    void PrepWin32AndReturnAddRefedOutput(CDXGIOutput *, DXGI_MODE_DESC1const *, CDXGIEnumeratedMode *, unsigned int, unsigned int, bool, CDXGIOutput * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDesktopMode@CPrepWin32Sentinel@CDXGISwapChain@@AEAAXPEAVCDXGIOutput@@@Z
    void RestoreDesktopMode(CDXGIOutput *);
};
} // namespace CDXGISwapChain
