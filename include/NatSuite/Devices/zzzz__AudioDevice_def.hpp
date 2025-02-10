#pragma once
// IWYU pragma private; include "NatSuite/Devices/AudioDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__IAudioDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDevice)
namespace NatSuite::Devices {
class IMediaDevice;
}
namespace NatSuite::Devices {
class SampleBufferDelegate;
}
// Forward declare root types
namespace NatSuite::Devices {
class AudioDevice;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::AudioDevice);
// Dependencies NatSuite.Devices.IAudioDevice, NatSuite.Devices.IMediaDevice, System.IEquatable`1<T>, System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.AudioDevice
class CORDL_TYPE AudioDevice : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_channelCount, put=set_channelCount)) int32_t  channelCount;

 __declspec(property(get=get_echoCancellation)) bool  echoCancellation;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_sampleRate, put=set_sampleRate)) int32_t  sampleRate;

 __declspec(property(get=get_uniqueID)) ::StringW  uniqueID;

/// @brief Convert operator to "::NatSuite::Devices::IAudioDevice"
constexpr operator  ::NatSuite::Devices::IAudioDevice*() noexcept;

/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr operator  ::NatSuite::Devices::IMediaDevice*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr operator  ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept;

/// @brief Method Equals, addr 0x17fa708, size 0x10c, virtual true, abstract: false, final true
inline bool Equals(::NatSuite::Devices::IMediaDevice*  other) ;

static inline ::NatSuite::Devices::AudioDevice* New_ctor() ;

/// @brief Method StartRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StartRunning(::NatSuite::Devices::SampleBufferDelegate*  delegate) ;

/// @brief Method StopRunning, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopRunning() ;

/// @brief Method ToString, addr 0x17fa814, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x17fa874, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_channelCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_channelCount() ;

/// @brief Method get_echoCancellation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_echoCancellation() ;

/// @brief Method get_name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_running, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_running() ;

/// @brief Method get_sampleRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_sampleRate() ;

/// @brief Method get_uniqueID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_uniqueID() ;

/// @brief Convert to "::NatSuite::Devices::IAudioDevice"
constexpr ::NatSuite::Devices::IAudioDevice* i___NatSuite__Devices__IAudioDevice() noexcept;

/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* i___NatSuite__Devices__IMediaDevice() noexcept;

/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept;

/// @brief Method set_channelCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_channelCount(int32_t  value) ;

/// @brief Method set_sampleRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_sampleRate(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDevice(AudioDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDevice(AudioDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::AudioDevice, 0x10>, "Size mismatch!");

} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::AudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::AudioDevice*, "NatSuite.Devices", "AudioDevice");
