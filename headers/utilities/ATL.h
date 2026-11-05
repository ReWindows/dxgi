#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 7 member(s).
class ATL {
public:
    class CAtlBaseModule;
    class CAtlComModule;
    class CAtlModule;
    class CAtlWinModule;
    class CComCriticalSection;
    class CComObjectRootBase;
    class CComSafeDeleteCriticalSection;
    class ModuleLockHelper;
    class _ATL_BASE_MODULE70;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z
    void AtlCallTermFunc(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z
    IUnknown * AtlComPtrAssign(IUnknown * *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z
    IUnknown * AtlComQIPtrAssign(IUnknown * *, IUnknown *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z
    long AtlInternalQueryInterface(void *, WindissectOpaque const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowImpl@ATL@@YAXJ@Z
    void AtlThrowImpl(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlWinModuleTerm@ATL@@YAJPEAU_ATL_WIN_MODULE70@1@PEAUHINSTANCE__@@@Z
    long AtlWinModuleTerm(WindissectOpaque*, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z
    int InlineIsEqualUnknown(_GUID const &);
};
