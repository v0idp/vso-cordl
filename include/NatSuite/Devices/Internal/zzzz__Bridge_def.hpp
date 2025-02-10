#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/Bridge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Bridge)
namespace NatSuite::Devices::Internal {
class Bridge_FrameDelegate;
}
namespace NatSuite::Devices::Internal {
class Bridge_SampleBufferDelegate;
}
namespace NatSuite::Devices {
struct FlashMode;
}
namespace NatSuite::Devices {
struct FrameOrientation;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace NatSuite::Devices::Internal {
class Bridge;
}
namespace NatSuite::Devices::Internal {
class Bridge_FrameDelegate;
}
namespace NatSuite::Devices::Internal {
class Bridge_SampleBufferDelegate;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::Internal::Bridge);
MARK_REF_PTR_T(::NatSuite::Devices::Internal::Bridge_FrameDelegate);
MARK_REF_PTR_T(::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate);
// Dependencies System.MulticastDelegate
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.Bridge/FrameDelegate
class CORDL_TYPE Bridge_FrameDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x17ff314, size 0x114, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  context, ::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x17ff428, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x17ff300, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  context, ::System::IntPtr  pixelBuffer, int32_t  width, int32_t  height, int64_t  timestamp) ;

static inline ::NatSuite::Devices::Internal::Bridge_FrameDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x17ff274, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bridge_FrameDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bridge_FrameDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Bridge_FrameDelegate(Bridge_FrameDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bridge_FrameDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bridge_FrameDelegate(Bridge_FrameDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1776};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::Bridge_FrameDelegate, 0x80>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
// Dependencies System.MulticastDelegate
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.Bridge/SampleBufferDelegate
class CORDL_TYPE Bridge_SampleBufferDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x17ff4d4, size 0x100, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  context, ::System::IntPtr  sampleBuffer, int32_t  sampleCount, int64_t  timestamp, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x17ff5d4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x17ff4c0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  context, ::System::IntPtr  sampleBuffer, int32_t  sampleCount, int64_t  timestamp) ;

static inline ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x17ff434, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bridge_SampleBufferDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bridge_SampleBufferDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Bridge_SampleBufferDelegate(Bridge_SampleBufferDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bridge_SampleBufferDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bridge_SampleBufferDelegate(Bridge_SampleBufferDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate, 0x80>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
// Dependencies System.Object
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.Bridge
class CORDL_TYPE Bridge : public ::System::Object {
public:
// Declarations
using FrameDelegate = ::NatSuite::Devices::Internal::Bridge_FrameDelegate;

using SampleBufferDelegate = ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate;

/// @brief Method AudioDevices, addr 0x17fb274, size 0x84, virtual false, abstract: false, final false
static inline void AudioDevices(::ByRef<::System::IntPtr>  outDevicesArray, ::ByRef<int32_t>  outDevicesArrayCount) ;

/// @brief Method CameraDevices, addr 0x17fb320, size 0x84, virtual false, abstract: false, final false
static inline void CameraDevices(::ByRef<::System::IntPtr>  outDevicesArray, ::ByRef<int32_t>  outDevicesArrayCount) ;

/// @brief Method CapturePhoto, addr 0x17ff1d8, size 0x9c, virtual false, abstract: false, final false
static inline void CapturePhoto(::System::IntPtr  device, ::NatSuite::Devices::Internal::Bridge_FrameDelegate*  handler, ::System::IntPtr  context) ;

/// @brief Method ChannelCount, addr 0x17fdf3c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t ChannelCount(::System::IntPtr  device) ;

/// @brief Method ChannelCount, addr 0x17fdfb8, size 0x84, virtual false, abstract: false, final false
static inline void ChannelCount(::System::IntPtr  device, int32_t  sampleRate) ;

/// @brief Method Dispose, addr 0x17fda58, size 0x78, virtual false, abstract: false, final false
static inline void Dispose(::System::IntPtr  device) ;

/// @brief Method EchoCancellation, addr 0x17fddb8, size 0x84, virtual false, abstract: false, final false
static inline bool EchoCancellation(::System::IntPtr  device) ;

/// @brief Method ExposureBias, addr 0x17fe860, size 0x7c, virtual false, abstract: false, final false
static inline float_t ExposureBias(::System::IntPtr  device) ;

/// @brief Method ExposureBias, addr 0x17fe8dc, size 0x8c, virtual false, abstract: false, final false
static inline void ExposureBias(::System::IntPtr  device, float_t  bias) ;

/// @brief Method ExposureLock, addr 0x17fe9fc, size 0x84, virtual false, abstract: false, final false
static inline bool ExposureLock(::System::IntPtr  device) ;

/// @brief Method ExposureLock, addr 0x17fea80, size 0x84, virtual false, abstract: false, final false
static inline void ExposureLock(::System::IntPtr  device, bool  locked) ;

/// @brief Method ExposureLockSupported, addr 0x17fe1c8, size 0x84, virtual false, abstract: false, final false
static inline bool ExposureLockSupported(::System::IntPtr  device) ;

/// @brief Method ExposurePoint, addr 0x17fe968, size 0x94, virtual false, abstract: false, final false
static inline void ExposurePoint(::System::IntPtr  device, float_t  x, float_t  y) ;

/// @brief Method ExposureRange, addr 0x17fe3e8, size 0x94, virtual false, abstract: false, final false
static inline void ExposureRange(::System::IntPtr  device, ::ByRef<float_t>  min, ::ByRef<float_t>  max) ;

/// @brief Method FieldOfView, addr 0x17fe354, size 0x94, virtual false, abstract: false, final false
static inline void FieldOfView(::System::IntPtr  device, ::ByRef<float_t>  x, ::ByRef<float_t>  y) ;

/// @brief Method FlashMode, addr 0x17feb04, size 0x7c, virtual false, abstract: false, final false
static inline ::NatSuite::Devices::FlashMode FlashMode(::System::IntPtr  device) ;

/// @brief Method FlashMode, addr 0x17feb80, size 0x84, virtual false, abstract: false, final false
static inline void FlashMode(::System::IntPtr  device, ::NatSuite::Devices::FlashMode  state) ;

/// @brief Method FlashSupported, addr 0x17fe0c0, size 0x84, virtual false, abstract: false, final false
static inline bool FlashSupported(::System::IntPtr  device) ;

/// @brief Method FocusLock, addr 0x17fec04, size 0x84, virtual false, abstract: false, final false
static inline bool FocusLock(::System::IntPtr  device) ;

/// @brief Method FocusLock, addr 0x17fec88, size 0x84, virtual false, abstract: false, final false
static inline void FocusLock(::System::IntPtr  device, bool  locked) ;

/// @brief Method FocusLockSupported, addr 0x17fe24c, size 0x84, virtual false, abstract: false, final false
static inline bool FocusLockSupported(::System::IntPtr  device) ;

/// @brief Method FocusPoint, addr 0x17fed0c, size 0x94, virtual false, abstract: false, final false
static inline void FocusPoint(::System::IntPtr  device, float_t  x, float_t  y) ;

/// @brief Method Framerate, addr 0x17fe760, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Framerate(::System::IntPtr  device) ;

/// @brief Method Framerate, addr 0x17fe7dc, size 0x84, virtual false, abstract: false, final false
static inline void Framerate(::System::IntPtr  device, int32_t  framerate) ;

/// @brief Method FrontFacing, addr 0x17fe03c, size 0x84, virtual false, abstract: false, final false
static inline bool FrontFacing(::System::IntPtr  device) ;

/// @brief Method Name, addr 0x17fdd14, size 0xa4, virtual false, abstract: false, final false
static inline void Name(::System::IntPtr  device, ::System::Text::StringBuilder*  dest) ;

/// @brief Method Orientation, addr 0x17ff0b8, size 0x84, virtual false, abstract: false, final false
static inline void Orientation(::System::IntPtr  device, ::NatSuite::Devices::FrameOrientation  orentation) ;

/// @brief Method PhotoResolution, addr 0x17fe638, size 0x94, virtual false, abstract: false, final false
static inline void PhotoResolution(::System::IntPtr  device, ::ByRef<int32_t>  width, ::ByRef<int32_t>  height) ;

/// @brief Method PhotoResolution, addr 0x17fe6cc, size 0x94, virtual false, abstract: false, final false
static inline void PhotoResolution(::System::IntPtr  device, int32_t  width, int32_t  height) ;

/// @brief Method PreviewResolution, addr 0x17fe510, size 0x94, virtual false, abstract: false, final false
static inline void PreviewResolution(::System::IntPtr  device, ::ByRef<int32_t>  width, ::ByRef<int32_t>  height) ;

/// @brief Method PreviewResolution, addr 0x17fe5a4, size 0x94, virtual false, abstract: false, final false
static inline void PreviewResolution(::System::IntPtr  device, int32_t  width, int32_t  height) ;

/// @brief Method Running, addr 0x17fdb74, size 0x80, virtual false, abstract: false, final false
static inline bool Running(::System::IntPtr  camera) ;

/// @brief Method SampleRate, addr 0x17fde3c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t SampleRate(::System::IntPtr  device) ;

/// @brief Method SampleRate, addr 0x17fdeb8, size 0x84, virtual false, abstract: false, final false
static inline void SampleRate(::System::IntPtr  device, int32_t  sampleRate) ;

/// @brief Method StartRunning, addr 0x17fdbf4, size 0xa4, virtual false, abstract: false, final false
static inline bool StartRunning(::System::IntPtr  device, ::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*  callback, ::System::IntPtr  context) ;

/// @brief Method StartRunning, addr 0x17ff13c, size 0x9c, virtual false, abstract: false, final false
static inline void StartRunning(::System::IntPtr  device, ::NatSuite::Devices::Internal::Bridge_FrameDelegate*  handler, ::System::IntPtr  context) ;

/// @brief Method StopRunning, addr 0x17fdc98, size 0x7c, virtual false, abstract: false, final false
static inline void StopRunning(::System::IntPtr  device) ;

/// @brief Method TorchEnabled, addr 0x17feda0, size 0x84, virtual false, abstract: false, final false
static inline bool TorchEnabled(::System::IntPtr  device) ;

/// @brief Method TorchEnabled, addr 0x17fee24, size 0x84, virtual false, abstract: false, final false
static inline void TorchEnabled(::System::IntPtr  device, bool  enabled) ;

/// @brief Method TorchSupported, addr 0x17fe144, size 0x84, virtual false, abstract: false, final false
static inline bool TorchSupported(::System::IntPtr  device) ;

/// @brief Method UniqueID, addr 0x17fdad0, size 0xa4, virtual false, abstract: false, final false
static inline void UniqueID(::System::IntPtr  device, ::System::Text::StringBuilder*  dest) ;

/// @brief Method WhiteBalanceLock, addr 0x17feea8, size 0x84, virtual false, abstract: false, final false
static inline bool WhiteBalanceLock(::System::IntPtr  device) ;

/// @brief Method WhiteBalanceLock, addr 0x17fef2c, size 0x84, virtual false, abstract: false, final false
static inline void WhiteBalanceLock(::System::IntPtr  device, bool  locked) ;

/// @brief Method WhiteBalanceLockSupported, addr 0x17fe2d0, size 0x84, virtual false, abstract: false, final false
static inline bool WhiteBalanceLockSupported(::System::IntPtr  device) ;

/// @brief Method ZoomRange, addr 0x17fe47c, size 0x94, virtual false, abstract: false, final false
static inline void ZoomRange(::System::IntPtr  device, ::ByRef<float_t>  min, ::ByRef<float_t>  max) ;

/// @brief Method ZoomRatio, addr 0x17fefb0, size 0x7c, virtual false, abstract: false, final false
static inline float_t ZoomRatio(::System::IntPtr  device) ;

/// @brief Method ZoomRatio, addr 0x17ff02c, size 0x8c, virtual false, abstract: false, final false
static inline void ZoomRatio(::System::IntPtr  device, float_t  ratio) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Bridge(Bridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bridge(Bridge const& ) = delete;

/// @brief Field Assembly offset 0xffffffff size 0x8
static constexpr ::ConstString  Assembly{u"NatDevice"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1778};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::Bridge, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
NEED_NO_BOX(::NatSuite::Devices::Internal::Bridge);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::Bridge*, "NatSuite.Devices.Internal", "Bridge");
NEED_NO_BOX(::NatSuite::Devices::Internal::Bridge_FrameDelegate);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::Bridge_FrameDelegate*, "NatSuite.Devices.Internal", "Bridge/FrameDelegate");
NEED_NO_BOX(::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::Bridge_SampleBufferDelegate*, "NatSuite.Devices.Internal", "Bridge/SampleBufferDelegate");
