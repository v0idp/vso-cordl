#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/NativeCameraDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__CameraDevice_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeCameraDevice)
namespace NatSuite::Devices::Internal {
class NativeCameraDevice___c__DisplayClass58_0;
}
namespace NatSuite::Devices::Internal {
class NativeCameraDevice___c__DisplayClass60_0;
}
namespace NatSuite::Devices {
struct FlashMode;
}
namespace NatSuite::Devices {
struct FrameOrientation;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace NatSuite::Devices::Internal {
class NativeCameraDevice;
}
namespace NatSuite::Devices::Internal {
class NativeCameraDevice___c__DisplayClass58_0;
}
namespace NatSuite::Devices::Internal {
class NativeCameraDevice___c__DisplayClass60_0;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::Internal::NativeCameraDevice);
MARK_REF_PTR_T(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0);
MARK_REF_PTR_T(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0);
// Dependencies System.Object
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.NativeCameraDevice/<>c__DisplayClass58_0
class CORDL_TYPE NativeCameraDevice___c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::NatSuite::Devices::Internal::NativeCameraDevice*  __4__this;

/// @brief Field startTask, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTask, put=__cordl_internal_set_startTask)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  startTask;

static inline ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0* New_ctor() ;

/// @brief Method <StartRunning>b__0, addr 0x180033c, size 0x160, virtual false, abstract: false, final false
inline void _StartRunning_b__0(::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp) ;

constexpr ::NatSuite::Devices::Internal::NativeCameraDevice* const& __cordl_internal_get___4__this() const;

constexpr ::NatSuite::Devices::Internal::NativeCameraDevice*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_startTask() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_startTask() ;

constexpr void __cordl_internal_set___4__this(::NatSuite::Devices::Internal::NativeCameraDevice*  value) ;

constexpr void __cordl_internal_set_startTask(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

/// @brief Method .ctor, addr 0x18000c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeCameraDevice___c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeCameraDevice___c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeCameraDevice___c__DisplayClass58_0(NativeCameraDevice___c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeCameraDevice___c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeCameraDevice___c__DisplayClass58_0(NativeCameraDevice___c__DisplayClass58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1784};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::NatSuite::Devices::Internal::NativeCameraDevice*  _____4__this;

/// @brief Field startTask, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  ___startTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0, ___startTask) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0, 0x20>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
// Dependencies System.Object, System.Runtime.InteropServices.GCHandle
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.NativeCameraDevice/<>c__DisplayClass60_0
class CORDL_TYPE NativeCameraDevice___c__DisplayClass60_0 : public ::System::Object {
public:
// Declarations
/// @brief Field captureTask, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_captureTask, put=__cordl_internal_set_captureTask)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  captureTask;

/// @brief Field handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::System::Runtime::InteropServices::GCHandle  handle;

static inline ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0* New_ctor() ;

/// @brief Method <CapturePhoto>b__0, addr 0x180049c, size 0xdc, virtual false, abstract: false, final false
inline void _CapturePhoto_b__0(::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_captureTask() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_captureTask() ;

constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get_handle() const;

constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get_handle() ;

constexpr void __cordl_internal_set_captureTask(::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_handle(::System::Runtime::InteropServices::GCHandle  value) ;

/// @brief Method .ctor, addr 0x180029c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeCameraDevice___c__DisplayClass60_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeCameraDevice___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeCameraDevice___c__DisplayClass60_0(NativeCameraDevice___c__DisplayClass60_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeCameraDevice___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeCameraDevice___c__DisplayClass60_0(NativeCameraDevice___c__DisplayClass60_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1785};

/// @brief Field handle, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  ___handle;

/// @brief Field captureTask, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::UnityW<::UnityEngine::Texture2D>>*  ___captureTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0, ___handle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0, ___captureTask) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0, 0x20>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
// Dependencies NatSuite.Devices.CameraDevice, System.IntPtr
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.NativeCameraDevice
class CORDL_TYPE NativeCameraDevice : public ::NatSuite::Devices::CameraDevice {
public:
// Declarations
using __c__DisplayClass58_0 = ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0;

using __c__DisplayClass60_0 = ::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0;

/// @brief Field device, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::System::IntPtr  device;

 __declspec(property(get=get_exposureBias, put=set_exposureBias)) float_t  exposureBias;

 __declspec(property(get=get_exposureLock, put=set_exposureLock)) bool  exposureLock;

 __declspec(property(get=get_exposureLockSupported)) bool  exposureLockSupported;

 __declspec(property(put=set_exposurePoint)) ::System::ValueTuple_2<float_t,float_t>  exposurePoint;

 __declspec(property(get=get_exposureRange)) ::System::ValueTuple_2<float_t,float_t>  exposureRange;

 __declspec(property(get=get_fieldOfView)) ::System::ValueTuple_2<float_t,float_t>  fieldOfView;

 __declspec(property(get=get_flashMode, put=set_flashMode)) ::NatSuite::Devices::FlashMode  flashMode;

 __declspec(property(get=get_flashSupported)) bool  flashSupported;

 __declspec(property(get=get_focusLock, put=set_focusLock)) bool  focusLock;

 __declspec(property(get=get_focusLockSupported)) bool  focusLockSupported;

 __declspec(property(put=set_focusPoint)) ::System::ValueTuple_2<float_t,float_t>  focusPoint;

 __declspec(property(get=get_frameRate, put=set_frameRate)) int32_t  frameRate;

 __declspec(property(get=get_frontFacing)) bool  frontFacing;

 __declspec(property(put=set_orientation)) ::NatSuite::Devices::FrameOrientation  orientation;

 __declspec(property(get=get_photoResolution, put=set_photoResolution)) ::System::ValueTuple_2<int32_t,int32_t>  photoResolution;

 __declspec(property(get=get_previewResolution, put=set_previewResolution)) ::System::ValueTuple_2<int32_t,int32_t>  previewResolution;

/// @brief Field previewTexture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_previewTexture, put=__cordl_internal_set_previewTexture)) ::UnityW<::UnityEngine::Texture2D>  previewTexture;

 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_torchEnabled, put=set_torchEnabled)) bool  torchEnabled;

 __declspec(property(get=get_torchSupported)) bool  torchSupported;

 __declspec(property(get=get_uniqueID)) ::StringW  uniqueID;

 __declspec(property(get=get_whiteBalanceLock, put=set_whiteBalanceLock)) bool  whiteBalanceLock;

 __declspec(property(get=get_whiteBalanceLockSupported)) bool  whiteBalanceLockSupported;

 __declspec(property(get=get_zoomRange)) ::System::ValueTuple_2<float_t,float_t>  zoomRange;

 __declspec(property(get=get_zoomRatio, put=set_zoomRatio)) float_t  zoomRatio;

/// @brief Method CapturePhoto, addr 0x1800134, size 0x168, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* CapturePhoto() ;

/// @brief Method Finalize, addr 0x18002a4, size 0x98, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::NatSuite::Devices::Internal::NativeCameraDevice* New_ctor(::System::IntPtr  device) ;

/// @brief Method OnFrame, addr 0x17ffad4, size 0xc8, virtual false, abstract: false, final false
static inline void OnFrame(::System::IntPtr  context, ::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp) ;

/// @brief Method StartRunning, addr 0x17fff50, size 0x170, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* StartRunning() ;

/// @brief Method StopRunning, addr 0x18000c8, size 0x6c, virtual true, abstract: false, final false
inline void StopRunning() ;

constexpr ::System::IntPtr const& __cordl_internal_get_device() const;

constexpr ::System::IntPtr& __cordl_internal_get_device() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_previewTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_previewTexture() ;

constexpr void __cordl_internal_set_device(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_previewTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x17fb3a4, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  device) ;

/// @brief Method get_exposureBias, addr 0x17ffeb0, size 0x8, virtual true, abstract: false, final false
inline float_t get_exposureBias() ;

/// @brief Method get_exposureLock, addr 0x17ffec0, size 0x8, virtual true, abstract: false, final false
inline bool get_exposureLock() ;

/// @brief Method get_exposureLockSupported, addr 0x17ffc2c, size 0x8, virtual true, abstract: false, final false
inline bool get_exposureLockSupported() ;

/// @brief Method get_exposureRange, addr 0x17ffcb8, size 0x74, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<float_t,float_t> get_exposureRange() ;

/// @brief Method get_fieldOfView, addr 0x17ffc44, size 0x74, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<float_t,float_t> get_fieldOfView() ;

/// @brief Method get_flashMode, addr 0x17ffedc, size 0x8, virtual true, abstract: false, final false
inline ::NatSuite::Devices::FlashMode get_flashMode() ;

/// @brief Method get_flashSupported, addr 0x17ffc1c, size 0x8, virtual true, abstract: false, final false
inline bool get_flashSupported() ;

/// @brief Method get_focusLock, addr 0x17ffeec, size 0x8, virtual true, abstract: false, final false
inline bool get_focusLock() ;

/// @brief Method get_focusLockSupported, addr 0x17ffc34, size 0x8, virtual true, abstract: false, final false
inline bool get_focusLockSupported() ;

/// @brief Method get_frameRate, addr 0x17ffea0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_frameRate() ;

/// @brief Method get_frontFacing, addr 0x17ffc14, size 0x8, virtual true, abstract: false, final false
inline bool get_frontFacing() ;

/// @brief Method get_photoResolution, addr 0x17ffe20, size 0x74, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> get_photoResolution() ;

/// @brief Method get_previewResolution, addr 0x17ffda0, size 0x74, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> get_previewResolution() ;

/// @brief Method get_running, addr 0x17fff48, size 0x8, virtual true, abstract: false, final false
inline bool get_running() ;

/// @brief Method get_torchEnabled, addr 0x17fff08, size 0x8, virtual true, abstract: false, final false
inline bool get_torchEnabled() ;

/// @brief Method get_torchSupported, addr 0x17ffc24, size 0x8, virtual true, abstract: false, final false
inline bool get_torchSupported() ;

/// @brief Method get_uniqueID, addr 0x17ffb9c, size 0x78, virtual true, abstract: false, final false
inline ::StringW get_uniqueID() ;

/// @brief Method get_whiteBalanceLock, addr 0x17fff1c, size 0x8, virtual true, abstract: false, final false
inline bool get_whiteBalanceLock() ;

/// @brief Method get_whiteBalanceLockSupported, addr 0x17ffc3c, size 0x8, virtual true, abstract: false, final false
inline bool get_whiteBalanceLockSupported() ;

/// @brief Method get_zoomRange, addr 0x17ffd2c, size 0x74, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<float_t,float_t> get_zoomRange() ;

/// @brief Method get_zoomRatio, addr 0x17fff30, size 0x8, virtual true, abstract: false, final false
inline float_t get_zoomRatio() ;

/// @brief Method set_exposureBias, addr 0x17ffeb8, size 0x8, virtual true, abstract: false, final false
inline void set_exposureBias(float_t  value) ;

/// @brief Method set_exposureLock, addr 0x17ffec8, size 0xc, virtual true, abstract: false, final false
inline void set_exposureLock(bool  value) ;

/// @brief Method set_exposurePoint, addr 0x17ffed4, size 0x8, virtual true, abstract: false, final false
inline void set_exposurePoint(::System::ValueTuple_2<float_t,float_t>  value) ;

/// @brief Method set_flashMode, addr 0x17ffee4, size 0x8, virtual true, abstract: false, final false
inline void set_flashMode(::NatSuite::Devices::FlashMode  value) ;

/// @brief Method set_focusLock, addr 0x17ffef4, size 0xc, virtual true, abstract: false, final false
inline void set_focusLock(bool  value) ;

/// @brief Method set_focusPoint, addr 0x17fff00, size 0x8, virtual true, abstract: false, final false
inline void set_focusPoint(::System::ValueTuple_2<float_t,float_t>  value) ;

/// @brief Method set_frameRate, addr 0x17ffea8, size 0x8, virtual true, abstract: false, final false
inline void set_frameRate(int32_t  value) ;

/// @brief Method set_orientation, addr 0x17fff40, size 0x8, virtual true, abstract: false, final false
inline void set_orientation(::NatSuite::Devices::FrameOrientation  value) ;

/// @brief Method set_photoResolution, addr 0x17ffe94, size 0xc, virtual true, abstract: false, final false
inline void set_photoResolution(::System::ValueTuple_2<int32_t,int32_t>  value) ;

/// @brief Method set_previewResolution, addr 0x17ffe14, size 0xc, virtual true, abstract: false, final false
inline void set_previewResolution(::System::ValueTuple_2<int32_t,int32_t>  value) ;

/// @brief Method set_torchEnabled, addr 0x17fff10, size 0xc, virtual true, abstract: false, final false
inline void set_torchEnabled(bool  value) ;

/// @brief Method set_whiteBalanceLock, addr 0x17fff24, size 0xc, virtual true, abstract: false, final false
inline void set_whiteBalanceLock(bool  value) ;

/// @brief Method set_zoomRatio, addr 0x17fff38, size 0x8, virtual true, abstract: false, final false
inline void set_zoomRatio(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeCameraDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeCameraDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeCameraDevice(NativeCameraDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeCameraDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeCameraDevice(NativeCameraDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1786};

/// @brief Field device, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___device;

/// @brief Field previewTexture, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___previewTexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::Internal::NativeCameraDevice, ___device) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::Internal::NativeCameraDevice, ___previewTexture) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::NativeCameraDevice, 0x20>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
NEED_NO_BOX(::NatSuite::Devices::Internal::NativeCameraDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::NativeCameraDevice*, "NatSuite.Devices.Internal", "NativeCameraDevice");
NEED_NO_BOX(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass58_0*, "NatSuite.Devices.Internal", "NativeCameraDevice/<>c__DisplayClass58_0");
NEED_NO_BOX(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::NativeCameraDevice___c__DisplayClass60_0*, "NatSuite.Devices.Internal", "NativeCameraDevice/<>c__DisplayClass60_0");
