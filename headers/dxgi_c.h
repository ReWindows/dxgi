// Flat C exports observed in dxgi.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef DXGI_C_H
#define DXGI_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: CompatValue (ABI unverified)
// Export: CompatString (ABI unverified)
// Export: CreateDXGIFactory1 (ABI unverified)
// Export: CreateDXGIFactory (ABI unverified)
// Export: DXGIDeclareAdapterRemovalSupport (ABI unverified)
// Export: ApplyCompatResolutionQuirking (ABI unverified)
// Export: DXGIReportAdapterConfiguration (ABI unverified)
// Export: CreateDXGIFactory2 (ABI unverified)
// Export: DXGIDisableVBlankVirtualization (ABI unverified)
// Export: DXGID3D10CreateDevice (ABI unverified)
// Export: DXGID3D10CreateLayeredDevice (ABI unverified)
// Export: DXGID3D10RegisterLayers (ABI unverified)
// Export: DXGID3D10GetLayeredDeviceSize (ABI unverified)
// Export: PIXBeginCapture (ABI unverified)
// Export: PIXEndCapture (ABI unverified)
// Export: PIXGetCaptureState (ABI unverified)
// Export: SetAppCompatStringPointer (ABI unverified)
// Export: DXGIDumpJournal (ABI unverified)
// Export: UpdateHMDEmulationStatus (ABI unverified)
// Export: DXGIGetDebugInterface1 (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // DXGI_C_H
