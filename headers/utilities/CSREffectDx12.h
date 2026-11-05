#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 24 member(s).
class CSREffectDx12 {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSREffectDx12@@QEAA@_N@Z
    CSREffectDx12(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSupport@CSREffectDx12@@SAJW4DXGI_EFFECT_TYPE@@QEAX_KPEAX2@Z
    static long CheckSupport(int, void * const, uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CSREffectDx12@@UEAAX_N@Z
    virtual void Cleanup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToHDR@CSREffectDx12@@QEAAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@II1@Z
    long ConvertToHDR(ID3D12CommandQueue *, ID3D12Resource *, unsigned int, unsigned int, ID3D12Resource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CSREffectDx12@@UEAAJPEBUDXGI_EFFECT_EXECUTE_PARAMS@@AEBUSRModeRequest@@@Z
    virtual long Execute(DXGI_EFFECT_EXECUTE_PARAMS const *, SRModeRequest const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescExt@CSREffectDx12@@UEBA?AUDIRECTSR_EXT_EXTENDED_DESC@@XZ
    virtual DIRECTSR_EXT_EXTENDED_DESC GetDescExt() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtConfig@CSREffectDx12@@UEBA?AUDIRECTSR_EXT_CONFIG@@XZ
    virtual DIRECTSR_EXT_CONFIG GetExtConfig() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPendingModeRequest@CSREffectDx12@@UEAA_NAEAUDIRECTSR_EXT_MODE_REQUEST@@@Z
    virtual bool GetPendingModeRequest(DIRECTSR_EXT_MODE_REQUEST &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSREffectDx12@@UEAAJAEBUDXGI_EFFECT_DATA_COMMON_IN@@AEAUDXGI_EFFECT_DATA_COMMON_OUT@@@Z
    virtual long Initialize(DXGI_EFFECT_DATA_COMMON_IN const &, DXGI_EFFECT_DATA_COMMON_OUT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSREffectDx12@@UEAAJAEBUDXGI_EFFECT_DATA_UPSCALER_IN@@AEAUDXGI_EFFECT_DATA_UPSCALER_OUT@@@Z
    virtual long Initialize(DXGI_EFFECT_DATA_UPSCALER_IN const &, DXGI_EFFECT_DATA_UPSCALER_OUT &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFallbackSR@CSREffectDx12@@UEBA_NXZ
    virtual bool IsFallbackSR() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPassthrough@CSREffectDx12@@UEBA_NXZ
    virtual bool IsPassthrough() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportModeSwitchResult@CSREffectDx12@@UEAAXAEBUDIRECTSR_EXT_MODE_RESULT@@@Z
    virtual void ReportModeSwitchResult(DIRECTSR_EXT_MODE_RESULT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPassthrough@CSREffectDx12@@UEAAJH@Z
    virtual long SetPassthrough(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateConstantBuffer@CSREffectDx12@@UEAAJPEBUSRConstantBuffer@@@Z
    virtual long UpdateConstantBuffer(SRConstantBuffer const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForAll@CSREffectDx12@@UEAAJXZ
    virtual long WaitForAll();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSREffectDx12@@UEAA@XZ
    virtual ~CSREffectDx12();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdoptPendingVariant@CSREffectDx12@@AEAAXXZ
    void AdoptPendingVariant();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtOutputData@CSREffectDx12@@AEAAJAEBUDXGI_EFFECT_DATA_UPSCALER_IN@@AEAUDXGI_EFFECT_DATA_UPSCALER_OUT@@@Z
    long GetExtOutputData(DXGI_EFFECT_DATA_UPSCALER_IN const &, DXGI_EFFECT_DATA_UPSCALER_OUT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCommon@CSREffectDx12@@AEAAJXZ
    long InitializeCommon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSREngine@CSREffectDx12@@AEAAJAEBUDXGI_EFFECT_DATA_UPSCALER_IN@@AEAUDXGI_EFFECT_DATA_UPSCALER_OUT@@PEAPEAUIDSRSuperResEngine@@PEAPEAUIDSRSuperResUpscaler@@@Z
    long InitializeSREngine(DXGI_EFFECT_DATA_UPSCALER_IN const &, DXGI_EFFECT_DATA_UPSCALER_OUT &, IDSRSuperResEngine * *, IDSRSuperResUpscaler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePendingVariant@CSREffectDx12@@AEAAXAEBUSRModeRequest@@@Z
    void UpdatePendingVariant(SRModeRequest const &);
};
