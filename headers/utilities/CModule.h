#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 66 member(s).
class CModule {
public:
    class DetourInfo;
    class DynamicSwitchPreferenceData;
    class EffectCreationInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireExclusiveModeMutex@CModule@@QEAAJXZ
    long AcquireExclusiveModeMutex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyModeChangeOnLaunch@CModule@@QEAAJXZ
    long ApplyModeChangeOnLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyModeChangeOnLaunchPreference@CModule@@QEAAXAEAW4ModeChangeOnLaunchType@@@Z
    void ApplyModeChangeOnLaunchPreference(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyResolutionFilterQuirks@CModule@@QEAAJXZ
    long ApplyResolutionFilterQuirks();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CModule@@QEAA@XZ
    CModule();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllDetours@CModule@@QEAAJXZ
    long ClearAllDetours();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDetour@CModule@@QEAAJW4DXGI_DETOUR_CALL_ID@@@Z
    long ClearDetour(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearResolutionFilterQuirks@CModule@@QEAAJXZ
    long ClearResolutionFilterQuirks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DllMainInt@CModule@@QEAAHPEAUHINSTANCE__@@KPEAX@Z
    int DllMainInt(HINSTANCE__*, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDetour@CModule@@QEAAJW4DXGI_DETOUR_CALL_ID@@@Z
    long EnsureDetour(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDxDbMetadata@CModule@@QEAAXXZ
    void EnsureDxDbMetadata();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureModeChangeOnLaunchPreference@CModule@@QEAAXXZ
    void EnsureModeChangeOnLaunchPreference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureModeChangeShim@CModule@@QEAAXXZ
    void EnsureModeChangeShim();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateBufferUpgradeEligibility@CModule@@QEAA_N_N@Z
    bool EvaluateBufferUpgradeEligibility(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompatShimInfo@CModule@@QEAAXPEAUDXGI_COMPATSHIM_INFO@@@Z
    void GetCompatShimInfo(DXGI_COMPATSHIM_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectsDeviceConfig@CModule@@QEAA?AUDXGI_EFFECT_DEVICE_CONFIG@@XZ
    DXGI_EFFECT_DEVICE_CONFIG GetEffectsDeviceConfig();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSRExtProps@CModule@@QEAA?AUDIRECTSR_EXT_PROPS@@XZ
    DIRECTSR_EXT_PROPS GetSRExtProps();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsersAppGPUPreference@CModule@@SA?AW4DXGI_GPU_PREFERENCE@@XZ
    static int GetUsersAppGPUPreference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWindowedSwapEffectUpgradeCompatIssue@CModule@@QEAAXW4WINDOWEDSWAPEFFECTUPGRADE_REASON@@@Z
    void HandleWindowedSwapEffectUpgradeCompatIssue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnyHdrOutput@CModule@@QEAA_NXZ
    bool HasAnyHdrOutput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitBufferUpgradeEligibility@CModule@@QEAAXXZ
    void InitBufferUpgradeEligibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitBuiltInEffects@CModule@@QEAAXXZ
    void InitBuiltInEffects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDedicatedMemoryForUMA@CModule@@QEAAXXZ
    void InitDedicatedMemoryForUMA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPresentEffectsDeviceApplicability@CModule@@QEAAXXZ
    void InitPresentEffectsDeviceApplicability();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPresentEffectsEligibility@CModule@@QEAAXXZ
    void InitPresentEffectsEligibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitPresentEffectsPackageVersion@CModule@@QEAAXXZ
    void InitPresentEffectsPackageVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitVBlankVirtualization@CModule@@QEAAXXZ
    void InitVBlankVirtualization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWindowedSwapEffectUpgrade@CModule@@QEAAXXZ
    void InitWindowedSwapEffectUpgrade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertFactory@CModule@@QEAAXPEAVCDXGIFactory@@@Z
    void InsertFactory(CDXGIFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPluggedIn@CModule@@QEAAEXZ
    unsigned char IsPluggedIn();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentEffectsAdapterApplicable@CModule@@QEAA_NW4DXGI_EFFECT_TYPE@@PEAVCDXGIAdapter@@@Z
    bool IsPresentEffectsAdapterApplicable(int, CDXGIAdapter *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentEffectsDeviceApplicable@CModule@@QEAA_NW4DXGI_EFFECT_TYPE@@PEA_N@Z
    bool IsPresentEffectsDeviceApplicable(int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentEffectsDisabledByPreference@CModule@@QEAA_NW4DXGI_EFFECT_TYPE@@@Z
    bool IsPresentEffectsDisabledByPreference(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentEffectsEnabled@CModule@@QEAA_NW4DXGI_EFFECT_TYPE@@@Z
    bool IsPresentEffectsEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentEffectsPackagePresent@CModule@@QEBA_NXZ
    bool IsPresentEffectsPackagePresent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentEffectsValidGame@CModule@@QEAA_NXZ
    bool IsPresentEffectsValidGame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresentEffectsValidPowerState@CModule@@QEAA_NW4DXGI_EFFECT_TYPE@@@Z
    bool IsPresentEffectsValidPowerState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelfhostModeEnabled@CModule@@QEAA_NXZ
    bool IsSelfhostModeEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemOrNonGameProcess@CModule@@QEAA_NXZ
    bool IsSystemOrNonGameProcess();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUwpApp@CModule@@QEAA_NXZ
    bool IsUwpApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowedSwapEffectUpgradeRequired@CModule@@QEAA_NXZ
    bool IsWindowedSwapEffectUpgradeRequired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadEffects@CModule@@QEAAJPEBG@Z
    long LoadEffects(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaximizedWindowedSwapEffectTransition@CModule@@QEBA_NAEBUSAdapterDesc@@@Z
    bool MaximizedWindowedSwapEffectTransition(SAdapterDesc const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordJournalImpl@CModule@@QEAAXIPEBD_N@Z
    void RecordJournalImpl(unsigned int, char const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDetourCall@CModule@@QEAAXAEBUDetourCallInfo@@@Z
    void RegisterDetourCall(DetourCallInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseModeChangeLock@CModule@@QEAAXXZ
    void ReleaseModeChangeLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFactory@CModule@@QEAAXPEAVCDXGIFactory@@AEA_N@Z
    void RemoveFactory(CDXGIFactory *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportJournal@CModule@@QEAAXXZ
    void ReportJournal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreOriginalMode@CModule@@QEAAXXZ
    void RestoreOriginalMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SDKLoadLibraryW@CModule@@QEAAPEAUHINSTANCE__@@PEBG@Z
    HINSTANCE__* SDKLoadLibraryW(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldActivateGraphicsPerformanceMonitor@CModule@@QEBA_NXZ
    bool ShouldActivateGraphicsPerformanceMonitor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowNotification@CModule@@QEAA_NKK@Z
    bool ShouldShowNotification(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNotification@CModule@@QEAAXK@Z
    void ShowNotification(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTakeModeChangeLock@CModule@@QEAA_NXZ
    bool TryTakeModeChangeLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePresentEffectsPerAppState@CModule@@QEAAXUDXGI_EFFECT_STATE@@@Z
    void UpdatePresentEffectsPerAppState(DXGI_EFFECT_STATE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemPowerStatus@CModule@@QEAAJXZ
    long UpdateSystemPowerStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowedSwapEffectUpgradePerAppDisabled@CModule@@QEBA_NXZ
    bool WindowedSwapEffectUpgradePerAppDisabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowedSwapEffectUpgradeWriteApplicableFlag@CModule@@QEAAXXZ
    void WindowedSwapEffectUpgradeWriteApplicableFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEffectApplicableFlag@CModule@@QEAAXW4DXGI_EFFECT_TYPE@@@Z
    void WriteEffectApplicableFlag(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CModule@@UEAA@XZ
    virtual ~CModule();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompatShimExists@CModule@@AEAA_NPEBD@Z
    bool CompatShimExists(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompatShimLoggingEnabled@CModule@@AEAA_NXZ
    bool CompatShimLoggingEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGameConfig@CModule@@AEAAXXZ
    void EnsureGameConfig();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryMaximizedWindowedFullscreen@CModule@@AEAAXXZ
    void QueryMaximizedWindowedFullscreen();
};
