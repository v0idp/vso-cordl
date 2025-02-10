#pragma once
// IWYU pragma private; include "NatSuite/Devices/Internal/NativeAudioDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__AudioDevice_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeAudioDevice)
namespace NatSuite::Devices::Internal {
class NativeAudioDevice___c__DisplayClass14_0;
}
namespace NatSuite::Devices {
class SampleBufferDelegate;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace NatSuite::Devices::Internal {
class NativeAudioDevice;
}
namespace NatSuite::Devices::Internal {
class NativeAudioDevice___c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::Internal::NativeAudioDevice);
MARK_REF_PTR_T(::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0);
// Dependencies System.Object
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.NativeAudioDevice/<>c__DisplayClass14_0
class CORDL_TYPE NativeAudioDevice___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field delegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegate, put=__cordl_internal_set_delegate)) ::NatSuite::Devices::SampleBufferDelegate*  delegate;

static inline ::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0* New_ctor() ;

/// @brief Method <StartRunning>b__0, addr 0x17ff9f8, size 0xdc, virtual false, abstract: false, final false
inline void _StartRunning_b__0(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp) ;

constexpr ::NatSuite::Devices::SampleBufferDelegate* const& __cordl_internal_get_delegate() const;

constexpr ::NatSuite::Devices::SampleBufferDelegate*& __cordl_internal_get_delegate() ;

constexpr void __cordl_internal_set_delegate(::NatSuite::Devices::SampleBufferDelegate*  value) ;

/// @brief Method .ctor, addr 0x17ff950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeAudioDevice___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioDevice___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeAudioDevice___c__DisplayClass14_0(NativeAudioDevice___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioDevice___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeAudioDevice___c__DisplayClass14_0(NativeAudioDevice___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1782};

/// @brief Field delegate, offset: 0x10, size: 0x8, def value: None
 ::NatSuite::Devices::SampleBufferDelegate*  ___delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0, ___delegate) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0, 0x18>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
// Dependencies NatSuite.Devices.AudioDevice, System.IntPtr
namespace NatSuite::Devices::Internal {
// Is value type: false
// CS Name: NatSuite.Devices.Internal.NativeAudioDevice
class CORDL_TYPE NativeAudioDevice : public ::NatSuite::Devices::AudioDevice {
public:
// Declarations
using __c__DisplayClass14_0 = ::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0;

 __declspec(property(get=get_channelCount, put=set_channelCount)) int32_t  channelCount;

/// @brief Field device, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_device, put=__cordl_internal_set_device)) ::System::IntPtr  device;

 __declspec(property(get=get_echoCancellation)) bool  echoCancellation;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_sampleRate, put=set_sampleRate)) int32_t  sampleRate;

 __declspec(property(get=get_uniqueID)) ::StringW  uniqueID;

/// @brief Method Finalize, addr 0x17ff960, size 0x98, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::NatSuite::Devices::Internal::NativeAudioDevice* New_ctor(::System::IntPtr  device) ;

/// @brief Method OnSampleBuffer, addr 0x17ff600, size 0x120, virtual false, abstract: false, final false
static inline void OnSampleBuffer(::System::IntPtr  context, ::System::IntPtr  sampleBuffer, int32_t  sampleCount, int64_t  timestamp) ;

/// @brief Method StartRunning, addr 0x17ff840, size 0x110, virtual true, abstract: false, final false
inline void StartRunning(::NatSuite::Devices::SampleBufferDelegate*  delegate) ;

/// @brief Method StopRunning, addr 0x17ff958, size 0x8, virtual true, abstract: false, final false
inline void StopRunning() ;

constexpr ::System::IntPtr const& __cordl_internal_get_device() const;

constexpr ::System::IntPtr& __cordl_internal_get_device() ;

constexpr void __cordl_internal_set_device(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x17fb2f8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  device) ;

/// @brief Method get_channelCount, addr 0x17ff828, size 0x8, virtual true, abstract: false, final false
inline int32_t get_channelCount() ;

/// @brief Method get_echoCancellation, addr 0x17ff810, size 0x8, virtual true, abstract: false, final false
inline bool get_echoCancellation() ;

/// @brief Method get_name, addr 0x17ff798, size 0x78, virtual true, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_running, addr 0x17ff838, size 0x8, virtual true, abstract: false, final false
inline bool get_running() ;

/// @brief Method get_sampleRate, addr 0x17ff818, size 0x8, virtual true, abstract: false, final false
inline int32_t get_sampleRate() ;

/// @brief Method get_uniqueID, addr 0x17ff720, size 0x78, virtual true, abstract: false, final false
inline ::StringW get_uniqueID() ;

/// @brief Method set_channelCount, addr 0x17ff830, size 0x8, virtual true, abstract: false, final false
inline void set_channelCount(int32_t  value) ;

/// @brief Method set_sampleRate, addr 0x17ff820, size 0x8, virtual true, abstract: false, final false
inline void set_sampleRate(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeAudioDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeAudioDevice(NativeAudioDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeAudioDevice(NativeAudioDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1783};

/// @brief Field device, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___device;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::Internal::NativeAudioDevice, ___device) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::Internal::NativeAudioDevice, 0x18>, "Size mismatch!");

} // namespace end def NatSuite::Devices::Internal
NEED_NO_BOX(::NatSuite::Devices::Internal::NativeAudioDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::NativeAudioDevice*, "NatSuite.Devices.Internal", "NativeAudioDevice");
NEED_NO_BOX(::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::Internal::NativeAudioDevice___c__DisplayClass14_0*, "NatSuite.Devices.Internal", "NativeAudioDevice/<>c__DisplayClass14_0");
