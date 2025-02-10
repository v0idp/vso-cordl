#pragma once
// IWYU pragma private; include "NatSuite/Devices/MixerDevice.hpp"
#include "NatSuite/Devices/zzzz__IAudioDevice_impl.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "NatSuite/Devices/zzzz__MixerDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IAudioDevice_def.hpp"
#include "NatSuite/Devices/zzzz__IMediaDevice_def.hpp"
#include "NatSuite/Devices/zzzz__MixerDevice_def.hpp"
#include "NatSuite/Devices/zzzz__SampleBufferDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice_MixerDeviceAttachment.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice_MixerDeviceAttachment::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::NatSuite::Devices::MixerDevice_MixerDeviceAttachment::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17fcea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice_MixerDeviceAttachment._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice_MixerDeviceAttachment::*)()>(&::NatSuite::Devices::MixerDevice_MixerDeviceAttachment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fcec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::NatSuite::Devices::SampleBufferDelegate*& NatSuite::Devices::MixerDevice_MixerDeviceAttachment::__cordl_internal_get_delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr ::NatSuite::Devices::SampleBufferDelegate* const& NatSuite::Devices::MixerDevice_MixerDeviceAttachment::__cordl_internal_get_delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr void NatSuite::Devices::MixerDevice_MixerDeviceAttachment::__cordl_internal_set_delegate(::NatSuite::Devices::SampleBufferDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Devices::MixerDevice_MixerDeviceAttachment::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void NatSuite::Devices::MixerDevice_MixerDeviceAttachment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::NatSuite::Devices::MixerDevice_MixerDeviceAttachment* NatSuite::Devices::MixerDevice_MixerDeviceAttachment::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::MixerDevice_MixerDeviceAttachment::MixerDevice_MixerDeviceAttachment()   {
}
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice___c__DisplayClass10_0::*)()>(&::NatSuite::Devices::MixerDevice___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fcc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice___c__DisplayClass10_0._StartRunning_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice___c__DisplayClass10_0::*)(::ArrayW<float_t,::Array<float_t>*>, int64_t)>(&::NatSuite::Devices::MixerDevice___c__DisplayClass10_0::_StartRunning_b__0)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x17fced0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice___c__DisplayClass10_0._StartRunning_b__1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice___c__DisplayClass10_0::*)(::ArrayW<float_t,::Array<float_t>*>, int64_t)>(&::NatSuite::Devices::MixerDevice___c__DisplayClass10_0::_StartRunning_b__1)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x17fd05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*>::get(),
                        "<StartRunning>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::NatSuite::Devices::MixerDevice*& NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::NatSuite::Devices::MixerDevice* const& NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_set___4__this(::NatSuite::Devices::MixerDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_get_copyBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyBuffer;
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_get_copyBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyBuffer;
}
constexpr void NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_set_copyBuffer(::ArrayW<float_t,::Array<float_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___copyBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::NatSuite::Devices::SampleBufferDelegate*& NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_get_delegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr ::NatSuite::Devices::SampleBufferDelegate* const& NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_get_delegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delegate;
}
constexpr void NatSuite::Devices::MixerDevice___c__DisplayClass10_0::__cordl_internal_set_delegate(::NatSuite::Devices::SampleBufferDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Devices::MixerDevice___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::MixerDevice___c__DisplayClass10_0::_StartRunning_b__0(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*>::get(),
                        "<StartRunning>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleBuffer, timestamp);
}
inline void NatSuite::Devices::MixerDevice___c__DisplayClass10_0::_StartRunning_b__1(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*>::get(),
                        "<StartRunning>b__1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleBuffer, timestamp);
}
inline ::NatSuite::Devices::MixerDevice___c__DisplayClass10_0* NatSuite::Devices::MixerDevice___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::MixerDevice___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::MixerDevice___c__DisplayClass10_0::MixerDevice___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.get_uniqueID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::MixerDevice::*)()>(&::NatSuite::Devices::MixerDevice::get_uniqueID)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x17fc690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_uniqueID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.get_sampleRate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::MixerDevice::*)()>(&::NatSuite::Devices::MixerDevice::get_sampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fc810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_sampleRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.get_channelCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::NatSuite::Devices::MixerDevice::*)()>(&::NatSuite::Devices::MixerDevice::get_channelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17fc818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_channelCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.get_running
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::MixerDevice::*)()>(&::NatSuite::Devices::MixerDevice::get_running)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17fc820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_running",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice::*)(::NatSuite::Devices::IAudioDevice*, ::UnityEngine::AudioSource*)>(&::NatSuite::Devices::MixerDevice::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17fc8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IAudioDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice::*)(::NatSuite::Devices::IAudioDevice*, ::UnityEngine::AudioListener*)>(&::NatSuite::Devices::MixerDevice::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17fca50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IAudioDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioListener*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.StartRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice::*)(::NatSuite::Devices::SampleBufferDelegate*)>(&::NatSuite::Devices::MixerDevice::StartRunning)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x17fca8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::SampleBufferDelegate*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.StopRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice::*)()>(&::NatSuite::Devices::MixerDevice::StopRunning)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17fcc18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "StopRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice::*)()>(&::NatSuite::Devices::MixerDevice::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17fccec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Devices::MixerDevice::*)(::NatSuite::Devices::IAudioDevice*, ::UnityEngine::GameObject*)>(&::NatSuite::Devices::MixerDevice::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x17fc900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IAudioDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::NatSuite::Devices::MixerDevice::*)(::NatSuite::Devices::IMediaDevice*)>(&::NatSuite::Devices::MixerDevice::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17fcd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IMediaDevice*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Devices::MixerDevice.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::NatSuite::Devices::MixerDevice::*)()>(&::NatSuite::Devices::MixerDevice::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x17fce30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr ::NatSuite::Devices::IAudioDevice*& NatSuite::Devices::MixerDevice::__cordl_internal_get_audioDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioDevice;
}
constexpr ::NatSuite::Devices::IAudioDevice* const& NatSuite::Devices::MixerDevice::__cordl_internal_get_audioDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioDevice;
}
constexpr void NatSuite::Devices::MixerDevice::__cordl_internal_set_audioDevice(::NatSuite::Devices::IAudioDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment>& NatSuite::Devices::MixerDevice::__cordl_internal_get_attachment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachment;
}
constexpr ::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment> const& NatSuite::Devices::MixerDevice::__cordl_internal_get_attachment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachment;
}
constexpr void NatSuite::Devices::MixerDevice::__cordl_internal_set_attachment(::UnityW<::NatSuite::Devices::MixerDevice_MixerDeviceAttachment>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attachment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<float_t>*& NatSuite::Devices::MixerDevice::__cordl_internal_get_stagingBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stagingBuffer;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& NatSuite::Devices::MixerDevice::__cordl_internal_get_stagingBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stagingBuffer;
}
constexpr void NatSuite::Devices::MixerDevice::__cordl_internal_set_stagingBuffer(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stagingBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW NatSuite::Devices::MixerDevice::get_uniqueID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_uniqueID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t NatSuite::Devices::MixerDevice::get_sampleRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_sampleRate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t NatSuite::Devices::MixerDevice::get_channelCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_channelCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool NatSuite::Devices::MixerDevice::get_running()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "get_running",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void NatSuite::Devices::MixerDevice::_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioSource*  audioSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IAudioDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioDevice, audioSource);
}
inline void NatSuite::Devices::MixerDevice::_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioListener*  audioListener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IAudioDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioListener*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioDevice, audioListener);
}
inline void NatSuite::Devices::MixerDevice::StartRunning(::NatSuite::Devices::SampleBufferDelegate*  delegate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "StartRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::SampleBufferDelegate*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, delegate);
}
inline void NatSuite::Devices::MixerDevice::StopRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "StopRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::MixerDevice::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void NatSuite::Devices::MixerDevice::_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IAudioDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioDevice, gameObject);
}
inline bool NatSuite::Devices::MixerDevice::Equals(::NatSuite::Devices::IMediaDevice*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::NatSuite::Devices::IMediaDevice*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::StringW NatSuite::Devices::MixerDevice::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Devices::MixerDevice*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::NatSuite::Devices::MixerDevice* NatSuite::Devices::MixerDevice::New_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioSource*  audioSource)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::MixerDevice*>(audioDevice, audioSource));
}
inline ::NatSuite::Devices::MixerDevice* NatSuite::Devices::MixerDevice::New_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::AudioListener*  audioListener)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::MixerDevice*>(audioDevice, audioListener));
}
inline ::NatSuite::Devices::MixerDevice* NatSuite::Devices::MixerDevice::New_ctor(::NatSuite::Devices::IAudioDevice*  audioDevice, ::UnityEngine::GameObject*  gameObject)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Devices::MixerDevice*>(audioDevice, gameObject));
}
/// @brief Convert operator to "::NatSuite::Devices::IAudioDevice"
constexpr  NatSuite::Devices::MixerDevice::operator ::NatSuite::Devices::IAudioDevice*() noexcept {
return static_cast<::NatSuite::Devices::IAudioDevice*>(static_cast<void*>(this));
}
/// @brief Convert to "::NatSuite::Devices::IAudioDevice"
constexpr ::NatSuite::Devices::IAudioDevice* NatSuite::Devices::MixerDevice::i___NatSuite__Devices__IAudioDevice() noexcept {
return static_cast<::NatSuite::Devices::IAudioDevice*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::NatSuite::Devices::IMediaDevice"
constexpr  NatSuite::Devices::MixerDevice::operator ::NatSuite::Devices::IMediaDevice*() noexcept {
return static_cast<::NatSuite::Devices::IMediaDevice*>(static_cast<void*>(this));
}
/// @brief Convert to "::NatSuite::Devices::IMediaDevice"
constexpr ::NatSuite::Devices::IMediaDevice* NatSuite::Devices::MixerDevice::i___NatSuite__Devices__IMediaDevice() noexcept {
return static_cast<::NatSuite::Devices::IMediaDevice*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr  NatSuite::Devices::MixerDevice::operator ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>"
constexpr ::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>* NatSuite::Devices::MixerDevice::i___System__IEquatable_1___NatSuite__Devices__IMediaDevice__() noexcept {
return static_cast<::System::IEquatable_1<::NatSuite::Devices::IMediaDevice*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  NatSuite::Devices::MixerDevice::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* NatSuite::Devices::MixerDevice::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::NatSuite::Devices::MixerDevice::MixerDevice()   {
}
