#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dxgi.dll by Windissect. 17 member(s).
class CDXGIOutputDuplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireNextFrame@CDXGIOutputDuplication@@UEAAJIPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z
    virtual long AcquireNextFrame(unsigned int, DXGI_OUTDUPL_FRAME_INFO *, IDXGIResource * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDXGIOutputDuplication@@QEAA@XZ
    CDXGIOutputDuplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalRelease@CDXGIOutputDuplication@@QEAAXXZ
    void FinalRelease();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesc@CDXGIOutputDuplication@@UEAAXPEAUDXGI_OUTDUPL_DESC@@@Z
    virtual void GetDesc(DXGI_OUTDUPL_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameDirtyRects@CDXGIOutputDuplication@@UEAAJIPEAUtagRECT@@PEAI@Z
    virtual long GetFrameDirtyRects(unsigned int, tagRECT *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMoveRects@CDXGIOutputDuplication@@UEAAJIPEAUDXGI_OUTDUPL_MOVE_RECT@@PEAI@Z
    virtual long GetFrameMoveRects(unsigned int, DXGI_OUTDUPL_MOVE_RECT *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFramePointerShape@CDXGIOutputDuplication@@UEAAJIPEAXPEAIPEAUDXGI_OUTDUPL_POINTER_SHAPE_INFO@@@Z
    virtual long GetFramePointerShape(unsigned int, void *, unsigned int *, DXGI_OUTDUPL_POINTER_SHAPE_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDXGIOutputDuplication@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetParent(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDXGIOutputDuplication@@QEAAJPEAUIUnknown@@PEAVCDXGIBaseAdapter@@PEAVCDXGIOutput@@AEBUDXGI_OUTDUPL_DESC@@IPEBW4DXGI_FORMAT@@I@Z
    long Initialize(IUnknown *, CDXGIBaseAdapter *, CDXGIOutput *, DXGI_OUTDUPL_DESC const &, unsigned int, int const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapDesktopSurface@CDXGIOutputDuplication@@UEAAJPEAUDXGI_MAPPED_RECT@@@Z
    virtual long MapDesktopSurface(DXGI_MAPPED_RECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseFrame@CDXGIOutputDuplication@@UEAAJXZ
    virtual long ReleaseFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnMapDesktopSurface@CDXGIOutputDuplication@@UEAAJXZ
    virtual long UnMapDesktopSurface();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDXGIOutputDuplication@@QEAA@XZ
    ~CDXGIOutputDuplication();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertNTStatusToHResult@CDXGIOutputDuplication@@AEAAJJ@Z
    long ConvertNTStatusToHResult(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMetaData@CDXGIOutputDuplication@@AEAAJIPEAXPEAIW4_D3DKMT_OUTPUTDUPL_METADATATYPE@@_N@Z
    long GetFrameMetaData(unsigned int, void *, unsigned int *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WarpBeginSystemMemoryCreation@CDXGIOutputDuplication@@AEAAXPEAVIWarpPrivateAPI@@@Z
    void WarpBeginSystemMemoryCreation(IWarpPrivateAPI *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WarpEndSystemMemoryCreation@CDXGIOutputDuplication@@AEAAXPEAVIWarpPrivateAPI@@J@Z
    void WarpEndSystemMemoryCreation(IWarpPrivateAPI *, long);
};
