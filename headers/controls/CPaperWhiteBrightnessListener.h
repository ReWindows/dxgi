#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 3 member(s).
class CPaperWhiteBrightnessListener {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPaperWhiteBrightnessChange@CPaperWhiteBrightnessListener@@AEAAXW4NotificationType@1@@Z
    void NotifyPaperWhiteBrightnessChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCallback@CPaperWhiteBrightnessListener@@AEAAXK@Z
    void UnregisterCallback(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPaperWhiteBrightnessListener@@AEAA@XZ
    ~CPaperWhiteBrightnessListener();
};
