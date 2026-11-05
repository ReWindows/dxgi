#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 2 member(s).
class WNFHelper {
public /*unspecified*/:
    // Category: Method | Source: PE Export
    // Symbol: ?DoNothingWnfCallbackFn@WNFHelper@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    long DoNothingWnfCallbackFn(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWNFNotificationStartingFromCurrentState@WNFHelper@@YAJU_WNF_STATE_NAME@@PEAXP6AJ0KPEAU_WNF_TYPE_ID@@1PEBXK@ZPEAJPEAPEAU_WNF_USER_SUBSCRIPTION@@45@Z
    long RegisterWNFNotificationStartingFromCurrentState(_WNF_STATE_NAME, void *, long ( *)(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long), long *, _WNF_USER_SUBSCRIPTION * *, long ( *)(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long), long *);
};
