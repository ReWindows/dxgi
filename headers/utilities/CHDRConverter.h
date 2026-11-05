#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 22 member(s).
class CHDRConverter {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHDRConverter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHDRConverter@@QEAA@XZ
    CHDRConverter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@CHDRConverter@@SAJPEAUDXGI_EFFECT_DATA_TONEMAPPER_IN@@PEAUDXGI_EFFECT_DATA_TONEMAPPER_OUT@@PEAI@Z
    static long CheckSupport(DXGI_EFFECT_DATA_TONEMAPPER_IN *, DXGI_EFFECT_DATA_TONEMAPPER_OUT *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CHDRConverter@@UEAAJPEBUDXGI_EFFECT_EXECUTE_PARAMS@@@Z
    virtual long Execute(DXGI_EFFECT_EXECUTE_PARAMS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CHDRConverter@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CHDRConverter@@UEAA?AUDXGI_EFFECT_DESC@@XZ
    virtual DXGI_EFFECT_DESC GetDesc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHDRConverter@@UEAAJQEAX_KPEAX1@Z
    virtual long Initialize(void * const, uint64_t, void *, uint64_t);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPassthrough@CHDRConverter@@UEAAHXZ
    virtual int IsPassthrough();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHDRConverter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHDRConverter@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CHDRConverter@@UEAAXXZ
    virtual void Reset();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetPassthrough@CHDRConverter@@UEAAJH@Z
    virtual long SetPassthrough(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHDRConverter@@QEAA@XZ
    ~CHDRConverter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CHDRConverter@@AEAAX_N@Z
    void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineOutputFormat@CHDRConverter@@AEAAJAEAU_LUID@@IPEAUIUnknown@@AEBW4DXGI_FORMAT@@AEBW4DXGI_COLOR_SPACE_TYPE@@AEAW44@AEAW45@@Z
    long DetermineOutputFormat(_LUID &, unsigned int, IUnknown *, int const &, int const &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeterminePaperWhiteNits@CHDRConverter@@AEAAJAEAM@Z
    long DeterminePaperWhiteNits(float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteInternal@CHDRConverter@@AEAAJPEAUIUnknown@@0II0@Z
    long ExecuteInternal(IUnknown *, IUnknown *, unsigned int, unsigned int, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompensatedMaxLuminance@CHDRConverter@@AEAAJAEAM@Z
    long GetCompensatedMaxLuminance(float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInternal@CHDRConverter@@AEAAJPEAUIUnknown@@AEBW4DXGI_FORMAT@@1I@Z
    long InitializeInternal(IUnknown *, int const &, int const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaperWhiteBrightnessChange@CHDRConverter@@AEAAJXZ
    long OnPaperWhiteBrightnessChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStrengthChange@CHDRConverter@@AEAAJI@Z
    long OnStrengthChange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAutoHDRRegConfig@CHDRConverter@@CAXPEA_NPEAW4MAXTVNITS@@PEAUSCREEN_SPLIT_MODES_VALUE@@@Z
    static void ReadAutoHDRRegConfig(bool *, int *, SCREEN_SPLIT_MODES_VALUE *);
};
