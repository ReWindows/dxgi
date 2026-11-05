#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 4 member(s).
namespace NotificationRegistry {
class NotificationRecord {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dupe@NotificationRecord@NotificationRegistry@@QEAA_NXZ
    bool Dupe();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidWindowMessage@NotificationRecord@NotificationRegistry@@QEBA_NXZ
    bool IsValidWindowMessage() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@NotificationRecord@NotificationRegistry@@QEBA_NXZ
    bool Notify() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationRecord@NotificationRegistry@@QEAA@XZ
    ~NotificationRecord();
};
} // namespace NotificationRegistry
