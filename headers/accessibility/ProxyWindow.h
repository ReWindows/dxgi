#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class ProxyWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxyWindow@ProxyWindow@@QEAAJPEAUHWND__@@AEBUtagRECT@@W4ProxyWindowBehavior@@@Z
    long CreateProxyWindow(HWND__*, tagRECT const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCommand@ProxyWindow@@UEAAJW4ProxyWindowCommands@@@Z
    virtual long ProcessCommand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldExitThread@ProxyWindow@@UEAA_NXZ
    virtual bool ShouldExitThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProxyWindow@@QEAA@XZ
    ~ProxyWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProxyWindowImpl@ProxyWindow@@AEAAJAEBUCreationParams@1@@Z
    long CreateProxyWindowImpl(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyProxyWindowImpl@ProxyWindow@@AEAAXXZ
    void DestroyProxyWindowImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteWindowHelper@ProxyWindow@@AEAAJPEAUHWND__@@@Z
    long PromoteWindowHelper(HWND__*);
};
