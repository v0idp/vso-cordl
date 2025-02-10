#pragma once
// IWYU pragma private; include "NatSuite/Devices/IAudioDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioDevice)
namespace NatSuite::Devices {
class IMediaDevice;
}
namespace NatSuite::Devices {
class SampleBufferDelegate;
}
// Forward declare root types
namespace NatSuite::Devices {
class IAudioDevice;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::IAudioDevice);
// Dependencies NatSuite.Devices.IMediaDevice, System.IEquatable`1<T>
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.IAudioDevice
class CORDL_TYPE IAudioDevice {
public:
// Declarations
 __declspec(property(get=get_channelCount)) int32_t  channelCount;

 __declspec(property(get=get_sampleRate)) int32_t  sampleRate;

/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr operator  ::NatSuite::Devices::IMediaDevice*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr operator  ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept;

/// @brief Method StartRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StartRunning(::NatSuite::Devices::SampleBufferDelegate*  delegate) ;

/// @brief Method get_channelCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_channelCount() ;

/// @brief Method get_sampleRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_sampleRate() ;

/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* i___NatSuite__Devices__IMediaDevice() noexcept;

/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAudioDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioDevice(IAudioDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::IAudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::IAudioDevice*, "NatSuite.Devices", "IAudioDevice");
