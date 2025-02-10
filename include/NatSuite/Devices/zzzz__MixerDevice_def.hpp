#pragma once
// IWYU pragma private; include "NatSuite/Devices/MixerDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "NatSuite/Devices/zzzz__IAudioDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MixerDevice)
namespace NatSuite::Devices {
class IAudioDevice;
}
namespace NatSuite::Devices {
class IMediaDevice;
}
namespace NatSuite::Devices {
class MixerDevice_MixerDeviceAttachment;
}
namespace NatSuite::Devices {
class MixerDevice___c__DisplayClass10_0;
}
namespace NatSuite::Devices {
class SampleBufferDelegate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioListener;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace NatSuite::Devices {
class MixerDevice;
}
namespace NatSuite::Devices {
class MixerDevice_MixerDeviceAttachment;
}
namespace NatSuite::Devices {
class MixerDevice___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::NatSuite::Devices::MixerDevice);
MARK_REF_PTR_T(::NatSuite::Devices::MixerDevice_MixerDeviceAttachment);
MARK_REF_PTR_T(::NatSuite::Devices::MixerDevice___c__DisplayClass10_0);
// Dependencies UnityEngine.MonoBehaviour
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MixerDevice/MixerDeviceAttachment
class CORDL_TYPE MixerDevice_MixerDeviceAttachment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field delegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegate, put=__cordl_internal_set_delegate)) ::NatSuite::Devices::SampleBufferDelegate*  delegate;

static inline ::NatSuite::Devices::MixerDevice_MixerDeviceAttachment* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x17fcea8, size 0x20, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

constexpr ::NatSuite::Devices::SampleBufferDelegate* const& __cordl_internal_get_delegate() const;

constexpr ::NatSuite::Devices::SampleBufferDelegate*& __cordl_internal_get_delegate() ;

constexpr void __cordl_internal_set_delegate(::NatSuite::Devices::SampleBufferDelegate*  value) ;

/// @brief Method .ctor, addr 0x17fcec8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerDevice_MixerDeviceAttachment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerDevice_MixerDeviceAttachment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerDevice_MixerDeviceAttachment(MixerDevice_MixerDeviceAttachment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerDevice_MixerDeviceAttachment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerDevice_MixerDeviceAttachment(MixerDevice_MixerDeviceAttachment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1770};

/// @brief Field delegate, offset: 0x20, size: 0x8, def value: None
 ::NatSuite::Devices::SampleBufferDelegate*  ___delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MixerDevice_MixerDeviceAttachment, ___delegate) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment, 0x28>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MixerDevice/<>c__DisplayClass10_0
class CORDL_TYPE MixerDevice___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::NatSuite::Devices::MixerDevice*  __4__this;

/// @brief Field copyBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_copyBuffer, put=__cordl_internal_set_copyBuffer)) ::ArrayW<float_t,::Array<float_t>*>  copyBuffer;

/// @brief Field delegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_delegate, put=__cordl_internal_set_delegate)) ::NatSuite::Devices::SampleBufferDelegate*  delegate;

static inline ::NatSuite::Devices::MixerDevice___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <StartRunning>b__0, addr 0x17fced0, size 0x18c, virtual false, abstract: false, final false
inline void _StartRunning_b__0(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp) ;

/// @brief Method <StartRunning>b__1, addr 0x17fd05c, size 0x2bc, virtual false, abstract: false, final false
inline void _StartRunning_b__1(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp) ;

constexpr ::NatSuite::Devices::MixerDevice* const& __cordl_internal_get___4__this() const;

constexpr ::NatSuite::Devices::MixerDevice*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_copyBuffer() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_copyBuffer() ;

constexpr ::NatSuite::Devices::SampleBufferDelegate* const& __cordl_internal_get_delegate() const;

constexpr ::NatSuite::Devices::SampleBufferDelegate*& __cordl_internal_get_delegate() ;

constexpr void __cordl_internal_set___4__this(::NatSuite::Devices::MixerDevice*  value) ;

constexpr void __cordl_internal_set_copyBuffer(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_delegate(::NatSuite::Devices::SampleBufferDelegate*  value) ;

/// @brief Method .ctor, addr 0x17fcc10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerDevice___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerDevice___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerDevice___c__DisplayClass10_0(MixerDevice___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerDevice___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerDevice___c__DisplayClass10_0(MixerDevice___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1771};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::NatSuite::Devices::MixerDevice*  _____4__this;

/// @brief Field copyBuffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___copyBuffer;

/// @brief Field delegate, offset: 0x20, size: 0x8, def value: None
 ::NatSuite::Devices::SampleBufferDelegate*  ___delegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MixerDevice___c__DisplayClass10_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MixerDevice___c__DisplayClass10_0, ___copyBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MixerDevice___c__DisplayClass10_0, ___delegate) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0, 0x28>, "Size mismatch!");

} // namespace end def NatSuite::Devices
// Dependencies NatSuite.Devices.IAudioDevice, NatSuite.Devices.IMediaDevice, System.IDisposable, System.IEquatable`1<T>, System.Object
namespace NatSuite::Devices {
// Is value type: false
// CS Name: NatSuite.Devices.MixerDevice
class CORDL_TYPE MixerDevice : public ::System::Object {
public:
// Declarations
using MixerDeviceAttachment = ::NatSuite::Devices::MixerDevice_MixerDeviceAttachment;

using __c__DisplayClass10_0 = ::NatSuite::Devices::MixerDevice___c__DisplayClass10_0;

/// @brief Field attachment, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachment, put=__cordl_internal_set_attachment)) ::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment>  attachment;

/// @brief Field audioDevice, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioDevice, put=__cordl_internal_set_audioDevice)) ::NatSuite::Devices::IAudioDevice*  audioDevice;

 __declspec(property(get=get_channelCount)) int32_t  channelCount;

 __declspec(property(get=get_running)) bool  running;

 __declspec(property(get=get_sampleRate)) int32_t  sampleRate;

/// @brief Field stagingBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stagingBuffer, put=__cordl_internal_set_stagingBuffer)) ::System::Collections::Generic::List_1<float_t>*  stagingBuffer;

 __declspec(property(get=get_uniqueID)) ::StringW  uniqueID;

/// @brief Convert operator to "::NatSuite::Devices::IAudioDevice"
constexpr operator  ::NatSuite::Devices::IAudioDevice*() noexcept;

/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr operator  ::NatSuite::Devices::IMediaDevice*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr operator  ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept;

/// @brief Method Dispose, addr 0x17fccec, size 0x5c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0x17fcd48, size 0xe8, virtual true, abstract: false, final true
inline bool Equals(::NatSuite::Devices::IMediaDevice*  other) ;

static inline ::NatSuite::Devices::MixerDevice* New_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioListener*  audioListener) ;

static inline ::NatSuite::Devices::MixerDevice* New_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioSource*  audioSource) ;

static inline ::NatSuite::Devices::MixerDevice* New_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method StartRunning, addr 0x17fca8c, size 0x184, virtual true, abstract: false, final true
inline void StartRunning(::NatSuite::Devices::SampleBufferDelegate*  delegate) ;

/// @brief Method StopRunning, addr 0x17fcc18, size 0xd4, virtual true, abstract: false, final true
inline void StopRunning() ;

/// @brief Method ToString, addr 0x17fce30, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment> const& __cordl_internal_get_attachment() const;

constexpr ::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment>& __cordl_internal_get_attachment() ;

constexpr ::NatSuite::Devices::IAudioDevice* const& __cordl_internal_get_audioDevice() const;

constexpr ::NatSuite::Devices::IAudioDevice*& __cordl_internal_get_audioDevice() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_stagingBuffer() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_stagingBuffer() ;

constexpr void __cordl_internal_set_attachment(::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment>  value) ;

constexpr void __cordl_internal_set_audioDevice(::NatSuite::Devices::IAudioDevice*  value) ;

constexpr void __cordl_internal_set_stagingBuffer(::System::Collections::Generic::List_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x17fca50, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioListener*  audioListener) ;

/// @brief Method .ctor, addr 0x17fc8c4, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioSource*  audioSource) ;

/// @brief Method .ctor, addr 0x17fc900, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method get_channelCount, addr 0x17fc818, size 0x8, virtual true, abstract: false, final true
inline int32_t get_channelCount() ;

/// @brief Method get_running, addr 0x17fc820, size 0xa4, virtual true, abstract: false, final true
inline bool get_running() ;

/// @brief Method get_sampleRate, addr 0x17fc810, size 0x8, virtual true, abstract: false, final true
inline int32_t get_sampleRate() ;

/// @brief Method get_uniqueID, addr 0x17fc690, size 0x180, virtual true, abstract: false, final true
inline ::StringW get_uniqueID() ;

/// @brief Convert to "::NatSuite::Devices::IAudioDevice"
constexpr ::NatSuite::Devices::IAudioDevice* i___NatSuite__Devices__IAudioDevice() noexcept;

/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* i___NatSuite__Devices__IMediaDevice() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerDevice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerDevice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerDevice(MixerDevice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerDevice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerDevice(MixerDevice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1772};

/// @brief Field audioDevice, offset: 0x10, size: 0x8, def value: None
 ::NatSuite::Devices::IAudioDevice*  ___audioDevice;

/// @brief Field attachment, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment>  ___attachment;

/// @brief Field stagingBuffer, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___stagingBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NatSuite::Devices::MixerDevice, ___audioDevice) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MixerDevice, ___attachment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::NatSuite::Devices::MixerDevice, ___stagingBuffer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::NatSuite::Devices::MixerDevice, 0x28>, "Size mismatch!");

} // namespace end def NatSuite::Devices
NEED_NO_BOX(::NatSuite::Devices::MixerDevice);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MixerDevice*, "NatSuite.Devices", "MixerDevice");
NEED_NO_BOX(::NatSuite::Devices::MixerDevice_MixerDeviceAttachment);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MixerDevice_MixerDeviceAttachment*, "NatSuite.Devices", "MixerDevice/MixerDeviceAttachment");
NEED_NO_BOX(::NatSuite::Devices::MixerDevice___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*, "NatSuite.Devices", "MixerDevice/<>c__DisplayClass10_0");
