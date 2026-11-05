#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class NotificationRegistry {
public:
    class NotificationRecord;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationRegistry@@QEAA@XZ
    NotificationRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAll@NotificationRegistry@@QEBAXXZ
    void NotifyAll() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEvent@NotificationRegistry@@QEAAJPEAX_NPEAK@Z
    long RegisterEvent(void *, bool, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowMessageA@NotificationRegistry@@QEAAJPEAUHWND__@@IPEAK@Z
    long RegisterWindowMessageA(HWND__*, unsigned int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@NotificationRegistry@@QEAAJK@Z
    long Unregister(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationRegistry@@QEAA@XZ
    ~NotificationRegistry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertNotificationRecord@NotificationRegistry@@AEAAJPEAUNotificationRecord@1@_NAEAK@Z
    long InsertNotificationRecord(WindissectOpaque *, bool, unsigned long &);
};
