#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 9 member(s).
class CHDRConverterDx11 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@CHDRConverterDx11@@SAJPEAUIUnknown@@@Z
    static long CheckSupport(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CHDRConverterDx11@@UEAAX_N@Z
    virtual void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@CHDRConverterDx11@@UEAAJPEAUIUnknown@@0II0@Z
    virtual long Convert(IUnknown *, IUnknown *, unsigned int, unsigned int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHDRConverterDx11@@UEAAJ_NPEAUIUnknown@@AEBW4DXGI_FORMAT@@2I_KPEBE34@Z
    virtual long Initialize(bool, IUnknown *, int const &, int const &, unsigned int, uint64_t, unsigned char const *, uint64_t, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHDRConvertCB@CHDRConverterDx11@@UEAAJ_NPEBUHDRConvertCb@@@Z
    virtual long UpdateHDRConvertCB(bool, HDRConvertCb const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForAll@CHDRConverterDx11@@UEAAJXZ
    virtual long WaitForAll();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHDRConverterDx11@@UEAA@XZ
    virtual ~CHDRConverterDx11();
};
