#pragma once
// IWYU pragma private; include "NatSuite/Devices/CameraDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__ICameraDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraDevice)
namespace NatSuite::Devices {
struct FlashMode;
}
namespace NatSuite::Devices {
struct FrameOrientation;
}
namespace NatSuite::Devices {
class IMediaDevice;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace NatSuite::Devices {
class CameraDevice;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::CameraDevice);
// Dependencies NatSuite.Devices.ICameraDevice, NatSuite.Devices.IMediaDevice, System.IEquatable`1<T>, System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.CameraDevice
class CORDL_TYPE CameraDevice : public ::System::Object {
public:
// Declarations
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

 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_torchEnabled, put=set_torchEnabled)) bool  torchEnabled;

 __declspec(property(get=get_torchSupported)) bool  torchSupported;

 __declspec(property(get=get_uniqueID)) ::StringW  uniqueID;

 __declspec(property(get=get_whiteBalanceLock, put=set_whiteBalanceLock)) bool  whiteBalanceLock;

 __declspec(property(get=get_whiteBalanceLockSupported)) bool  whiteBalanceLockSupported;

 __declspec(property(get=get_zoomRange)) ::System::ValueTuple_2<float_t,float_t>  zoomRange;

 __declspec(property(get=get_zoomRatio, put=set_zoomRatio)) float_t  zoomRatio;

/// @brief Convert operator to "::NatSuite::Devices::ICameraDevice"
constexpr operator  ::NatSuite::Devices::ICameraDevice*() noexcept;

/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr operator  ::NatSuite::Devices::IMediaDevice*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr operator  ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept;

/// @brief Method CapturePhoto, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* CapturePhoto() ;

/// @brief Method Equals, addr 0x17fa87c, size 0x110, virtual true, abstract: false, final true
inline bool Equals(::NatSuite::Devices::IMediaDevice*  other) ;

static inline ::NatSuite::Devices::CameraDevice* New_ctor() ;

/// @brief Method StartRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* StartRunning() ;

/// @brief Method StopRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopRunning() ;

/// @brief Method ToString, addr 0x17fa98c, size 0x64, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x17fa9f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_exposureBias, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_exposureBias() ;

/// @brief Method get_exposureLock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_exposureLock() ;

/// @brief Method get_exposureLockSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_exposureLockSupported() ;

/// @brief Method get_exposureRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<float_t,float_t> get_exposureRange() ;

/// @brief Method get_fieldOfView, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<float_t,float_t> get_fieldOfView() ;

/// @brief Method get_flashMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NatSuite::Devices::FlashMode get_flashMode() ;

/// @brief Method get_flashSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_flashSupported() ;

/// @brief Method get_focusLock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_focusLock() ;

/// @brief Method get_focusLockSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_focusLockSupported() ;

/// @brief Method get_frameRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_frameRate() ;

/// @brief Method get_frontFacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_frontFacing() ;

/// @brief Method get_photoResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> get_photoResolution() ;

/// @brief Method get_previewResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> get_previewResolution() ;

/// @brief Method get_running, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_running() ;

/// @brief Method get_torchEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_torchEnabled() ;

/// @brief Method get_torchSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_torchSupported() ;

/// @brief Method get_uniqueID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_uniqueID() ;

/// @brief Method get_whiteBalanceLock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_whiteBalanceLock() ;

/// @brief Method get_whiteBalanceLockSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_whiteBalanceLockSupported() ;

/// @brief Method get_zoomRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<float_t,float_t> get_zoomRange() ;

/// @brief Method get_zoomRatio, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_zoomRatio() ;

/// @brief Convert to "::NatSuite::Devices::ICameraDevice"
constexpr ::NatSuite::Devices::ICameraDevice* i___NatSuite__Devices__ICameraDevice() noexcept;

/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* i___NatSuite__Devices__IMediaDevice() noexcept;

/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept;

/// @brief Method set_exposureBias, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_exposureBias(float_t  value) ;

/// @brief Method set_exposureLock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_exposureLock(bool  value) ;

/// @brief Method set_exposurePoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_exposurePoint(::System::ValueTuple_2<float_t,float_t>  value) ;

/// @brief Method set_flashMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_flashMode(::NatSuite::Devices::FlashMode  value) ;

/// @brief Method set_focusLock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_focusLock(bool  value) ;

/// @brief Method set_focusPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_focusPoint(::System::ValueTuple_2<float_t,float_t>  value) ;

/// @brief Method set_frameRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_frameRate(int32_t  value) ;

/// @brief Method set_orientation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_orientation(::NatSuite::Devices::FrameOrientation  value) ;

/// @brief Method set_photoResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_photoResolution(::System::ValueTuple_2<int32_t,int32_t>  value) ;

/// @brief Method set_previewResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_previewResolution(::System::ValueTuple_2<int32_t,int32_t>  value) ;

/// @brief Method set_torchEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_torchEnabled(bool  value) ;

/// @brief Method set_whiteBalanceLock, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_whiteBalanceLock(bool  value) ;

/// @brief Method set_zoomRatio, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_zoomRatio(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CameraDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CameraDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CameraDevice(CameraDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CameraDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CameraDevice(CameraDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::CameraDevice, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::CameraDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::CameraDevice*, "NatSuite.Devices", "CameraDevice");
