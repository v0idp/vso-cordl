#pragma once
// IWYU pragma private; include "NatSuite/Devices/ICameraDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICameraDevice)
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
class ICameraDevice;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::ICameraDevice);
// Dependencies NatSuite.Devices.IMediaDevice, System.IEquatable`1<T>
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.ICameraDevice
class CORDL_TYPE ICameraDevice {
public:
// Declarations
 __declspec(property(get=get_frameRate, put=set_frameRate)) int32_t  frameRate;

 __declspec(property(get=get_frontFacing)) bool  frontFacing;

 __declspec(property(get=get_previewResolution, put=set_previewResolution)) ::System::ValueTuple_2<int32_t,int32_t>  previewResolution;

/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr operator  ::NatSuite::Devices::IMediaDevice*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr operator  ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept;

/// @brief Method StartRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* StartRunning() ;

/// @brief Method get_frameRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_frameRate() ;

/// @brief Method get_frontFacing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_frontFacing() ;

/// @brief Method get_previewResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> get_previewResolution() ;

/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* i___NatSuite__Devices__IMediaDevice() noexcept;

/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept;

/// @brief Method set_frameRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_frameRate(int32_t  value) ;

/// @brief Method set_previewResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_previewResolution(::System::ValueTuple_2<int32_t,int32_t>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ICameraDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICameraDevice(ICameraDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1758};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::ICameraDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::ICameraDevice*, "NatSuite.Devices", "ICameraDevice");
